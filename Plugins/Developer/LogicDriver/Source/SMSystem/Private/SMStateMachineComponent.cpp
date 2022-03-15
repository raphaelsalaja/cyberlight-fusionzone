// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMStateMachineComponent.h"
#include "SMUtils.h"
#include "SMLogging.h"

#include "UObject/PropertyPortFlags.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "SMStateMachineComponent"

USMStateMachineComponent::USMStateMachineComponent(class FObjectInitializer const & ObjectInitializer)
{
	R_Instance = nullptr;
	R_bShuttingDown = false;
	bAutoActivate = true;
	bWantsInitializeComponent = true;
	bInitializeOnBeginPlay = true;
	bStartOnBeginPlay = false;
	bReuseInstanceAfterShutdown = false;
	
	NetworkTickConfiguration = SM_Client;
	NetworkTransitionConfiguration = SM_Client;
	NetworkStateConfiguration = SM_ClientAndServer;
	NetworkTransitionEnteredConfiguration = SM_ClientAndServer;
	TransitionResetTimeSeconds = 2.f;
	bReplicateStatesOnLoad = true;
	bTakeTransitionsFromServerOnly = false;
	bCalculateServerTimeForClients = true;
	bDiscardTransitionsBeforeInitialize = false;
	bIncludeSimulatedProxies = false;
	MaxTimeToWaitForTransitionUpdate = 2.f;
	
	PrimaryComponentTick.bCanEverTick = true;
	bCanInstanceNetworkTick = true;
	bLetInstanceManageTick = false;
	bOverrideTick_DEPRECATED = false;
	bOverrideTickInterval_DEPRECATED = false;
	bCanEverTick_DEPRECATED = true;
	TickInterval_DEPRECATED = 0.f;

	InstanceTemplate = nullptr;
	
	SetIsReplicatedByDefault(true);
}

void USMStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USMStateMachineComponent, R_Instance);
	DOREPLIFETIME(USMStateMachineComponent, R_bShuttingDown);
	DOREPLIFETIME(USMStateMachineComponent, R_NetworkedTransactions);
}

void USMStateMachineComponent::InitializeComponent()
{
	Super::InitializeComponent();

	if (bInitializeOnBeginPlay)
	{
		CreateInstance(GetContextForInitialization());
	}
}

void USMStateMachineComponent::BeginPlay()
{
	if (bInitializeOnBeginPlay)
	{
		if (HasAuthority())
		{
			DoInitialize(GetContextForInitialization());

			if (bStartOnBeginPlay)
			{
				DoStart();
			}
		}
	}

	// Blueprint BeginPlay is called here.
	Super::BeginPlay();
}

void USMStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	if (R_Instance && CanTickForEnvironment())
	{
		DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMStateMachineComponent::Tick"), STAT_SMStateMachineComponent_Tick, STATGROUP_LogicDriver);
		R_Instance->Tick(DeltaTime);
	}
	
	if (IsRegistered())
	{
		// If R_Instance tick destroys the actor then we won't be registered. Blueprint Tick is called here.
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	}
}

void USMStateMachineComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Shutdown();
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}

void USMStateMachineComponent::PostLoad()
{
	Super::PostLoad();

#if WITH_EDITOR
	ImportDeprecatedProperties();
#endif
}

void USMStateMachineComponent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	/*
	 * Duplicating components won't duplicate the instance properly and the components will still point to the old instance.
	 * This slightly modified snippet from ChildActorComponent.cpp fixes that. Overloading PostDuplicate object doesn't work properly with templates.
	 */
	
	if (Ar.HasAllPortFlags(PPF_DuplicateForPIE))
	{
		// Only templates need them serialized, otherwise they show up as selectable debug objects.
		if (IsTemplate())
		{
			Ar << InstanceTemplate;
		}
	}
	else if (Ar.HasAllPortFlags(PPF_Duplicate))
	{
		if (GIsEditor && Ar.IsLoading() && !IsTemplate())
		{
			// If we're not a template then we do not want the duplicate so serialize manually and destroy the template that was created for us
			Ar.Serialize(&InstanceTemplate, sizeof(UObject*));

			if (USMInstance* UnwantedDuplicate = static_cast<USMInstance*>(FindObjectWithOuter(this, USMInstance::StaticClass())))
			{
				UnwantedDuplicate->MarkPendingKill();
			}
		}
		else if (!GIsEditor && !Ar.IsLoading() && !GIsDuplicatingClassForReinstancing)
		{
			// Avoid the archiver in the duplicate writer case because we want to avoid the duplicate being created
			Ar.Serialize(&InstanceTemplate, sizeof(UObject*));
		}
		else
		{
			// When we're loading outside of the editor we won't have created the duplicate, so its fine to just use the normal path
			// When we're loading a template then we want the duplicate, so it is fine to use normal archiver
			// When we're saving in the editor we'll create the duplicate, but on loading decide whether to take it or not
			Ar << InstanceTemplate;
		}

		if (GIsEditor && Ar.IsSaving() && HasAnyFlags(RF_InheritableComponentTemplate))
		{
			// The component template is serializing for a child to use.
			if (!InstanceTemplate && StateMachineClass)
			{
				/*
				 * The template has DuplicateTransient set so it should be null at this point. We can find the right one from the archetype.
				 * DuplicateTransient is required to get around a bug involving deferred loading. When parent component's actor has a property
				 * modified and that actor's properties are referenced in the state machine the component uses, it will crash on editor load.
				 */
				if (USMInstance* ArchetypeTemplate = Cast<USMStateMachineComponent>(GetArchetype())->InstanceTemplate)
				{
					if (StateMachineClass == ArchetypeTemplate->GetClass())
					{
						InstanceTemplate = CastChecked<USMInstance>(StaticDuplicateObject(ArchetypeTemplate, this, NAME_None));
					}
				}
			}
		}
	}

#if WITH_EDITOR
	if (GIsEditor) // Necessary for new process PIE session.
	{
		if (!Ar.IsPersistent() && InstanceTemplate)
		{
			if (IsTemplate())
			{
				// InstanceTemplate should belong to components that are templates.
				if (InstanceTemplate->GetOuter() != this)
				{
					if (UObject* ExistingTemplate = StaticFindObject(nullptr, this, *InstanceTemplate->GetName()))
					{
						// Find an already existing template we should own... can happen if this is a child component whos class was recompiled.
						InstanceTemplate = CastChecked<USMInstance>(ExistingTemplate);
					}
					else
					{
						// Duplicate the instance. (Works when duplicate is clicked on the component, but not paste)
						InstanceTemplate = CastChecked<USMInstance>(StaticDuplicateObject(InstanceTemplate, this, NAME_None));
					}
				}
			}
			else
			{
				// Because the template may have fixed itself up, the tagged property delta serialized for 
				// the instance may point at a trashed template, so always repoint us to the archetypes template
				InstanceTemplate = CastChecked<USMStateMachineComponent>(GetArchetype())->InstanceTemplate;
			}
		}

		/**
		 * If a component doesn't have a template but is supposed to then try to find its default.
		 * This helps child components not inheriting their template when added to an actor.
		 */
		if (Ar.IsSaving() && IsTemplate(RF_ArchetypeObject) && !InstanceTemplate && StateMachineClass)
		{
			if (USMStateMachineComponent* Archetype = Cast<USMStateMachineComponent>(GetArchetype()))
			{
				if (StateMachineClass == Archetype->StateMachineClass)
				{
					if (USMInstance* Template = Archetype->InstanceTemplate)
					{
						InstanceTemplate = Cast<USMInstance>(StaticDuplicateObject(Template, this, NAME_None));
					}
				}
			}
		}
	}
	
#endif
}

#if WITH_EDITOR

void USMStateMachineComponent::PostEditImport()
{
	Super::PostEditImport();

	// Helps on paste operations.
	if (IsTemplate())
	{
		TArray<UObject*> Instances;
		GetObjectsWithOuter(this, Instances, false);

		for (UObject* Instance : Instances)
		{
			if (Instance->GetClass() == StateMachineClass)
			{
				InstanceTemplate = CastChecked<USMInstance>(Instance);
				break;
			}
		}
	}
	else
	{
		InstanceTemplate = CastChecked<USMStateMachineComponent>(GetArchetype())->InstanceTemplate;
	}
}

void USMStateMachineComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(USMStateMachineComponent, StateMachineClass))
	{
		InitInstanceTemplate();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif

bool USMStateMachineComponent::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	if (R_Instance)
	{
		WroteSomething |= Channel->ReplicateSubobject(R_Instance, *Bunch, *RepFlags);
	}

	return WroteSomething;
}

bool USMStateMachineComponent::IsNetworked() const
{
	return GetNetMode() != NM_Standalone;
}

bool USMStateMachineComponent::IsLocallyOwned() const
{
	APawn* Pawn = Cast<APawn>(GetTopMostParentActor());
	return Pawn ? Pawn->IsLocallyControlled() : false;
}

bool USMStateMachineComponent::IsListenServer() const
{
	return GetNetMode() == NM_ListenServer;
}

bool USMStateMachineComponent::CanTickForEnvironment() const
{
	if (R_Instance == nullptr)
	{
		return false;
	}

	if (IsConfiguredForNetworking())
	{
		return bCanInstanceNetworkTick;
	}

	return !bLetInstanceManageTick && R_Instance->IsTickable();
}

bool USMStateMachineComponent::CanServerProcessTransitions() const
{
	return NetworkTransitionConfiguration != SM_Client || bTakeTransitionsFromServerOnly;
}

AActor* USMStateMachineComponent::GetTopMostParentActor() const
{
	AActor* TopMostParentActor = GetOwner();
	for (AActor* ParentActor = TopMostParentActor; ParentActor; ParentActor = ParentActor->GetParentActor())
	{
		// Lookup the parent actor chain until no more actors are found.
		TopMostParentActor = ParentActor;
	}

	return TopMostParentActor;
}

UObject* USMStateMachineComponent::GetContextForInitialization_Implementation() const
{
	return GetOwner();
}

void USMStateMachineComponent::Internal_OnStateMachineStarted(USMInstance* Instance)
{
	OnStateMachineStartedEvent.Broadcast(Instance);
}

void USMStateMachineComponent::Internal_OnStateMachineUpdated(USMInstance* Instance, float DeltaSeconds)
{
	OnStateMachineUpdatedEvent.Broadcast(Instance, DeltaSeconds);
}

void USMStateMachineComponent::Internal_OnStateMachineStopped(USMInstance* Instance)
{
	OnStateMachineStoppedEvent.Broadcast(Instance);
}

void USMStateMachineComponent::Internal_OnStateMachineTransitionTaken(USMInstance* Instance, FSMTransitionInfo Transition)
{
	OnStateMachineTransitionTakenEvent.Broadcast(Instance, Transition);
}

void USMStateMachineComponent::Internal_OnStateMachineStateChanged(USMInstance* Instance, FSMStateInfo ToState,
	FSMStateInfo FromState)
{
	OnStateMachineStateChangedEvent.Broadcast(Instance, ToState, FromState);
}

void USMStateMachineComponent::PostInitialize()
{
	if(!R_Instance)
	{
		return;
	}

	R_Instance->OnStateMachineStartedEvent.AddUniqueDynamic(this, &USMStateMachineComponent::Internal_OnStateMachineStarted);
	R_Instance->OnStateMachineUpdatedEvent.AddUniqueDynamic(this, &USMStateMachineComponent::Internal_OnStateMachineUpdated);
	R_Instance->OnStateMachineStoppedEvent.AddUniqueDynamic(this, &USMStateMachineComponent::Internal_OnStateMachineStopped);
	R_Instance->OnStateMachineTransitionTakenEvent.AddUniqueDynamic(this, &USMStateMachineComponent::Internal_OnStateMachineTransitionTaken);
	R_Instance->OnStateMachineStateChangedEvent.AddUniqueDynamic(this, &USMStateMachineComponent::Internal_OnStateMachineStateChanged);
	
	// Configure network settings after initialization.
	ConfigureInstanceNetworkSettings();

	// Allow child blueprint components to run specific initalize logic.
	OnPostInitialize();
	
	OnStateMachineInitializedEvent.Broadcast(R_Instance);
}

void USMStateMachineComponent::ConfigureInstanceNetworkSettings()
{
	if (!IsConfiguredForNetworking())
	{
		return;
	}

	// The authority and environment determine the access this instance will have.

	const bool bIsLocal = IsLocallyOwned();
	const bool bIsListenServer = IsListenServer();
	const bool bIsProxy = IsSimulatedProxy() && !bIncludeSimulatedProxies;
	const bool bIsLocalOnListenServer = bIsListenServer && bIsLocal;

	const bool bHasAuth = !bIsProxy && HasAuthority();

	// Tick Domain
	if(InstanceTemplate == nullptr || InstanceTemplate->CanEverTick())
	{
		bool bAllowTick = true;
		if (NetworkTickConfiguration == SM_Server)
		{
			// Don't update from clients when server is set.
			bAllowTick = bHasAuth || bIsListenServer;
		}
		else if (NetworkTickConfiguration == SM_Client)
		{
			// Don't update from server when clients are set.
			bAllowTick = !bHasAuth || bIsListenServer;
		}

		bCanInstanceNetworkTick = bAllowTick;
		if (bLetInstanceManageTick)
		{
			R_Instance->SetCanEverTick(bCanInstanceNetworkTick);
		}
	}

	// Transition Domain
	{
		bool bLimitedTransitionAccess = bIsProxy;
		if (!bIsProxy)
		{
			if (NetworkTransitionConfiguration == SM_Server)
			{
				// Don't update from clients when server is set.
				bLimitedTransitionAccess = !bHasAuth && !bIsListenServer;
			}
			else if (NetworkTransitionConfiguration == SM_Client)
			{
				// Don't update from server when clients are set.
				bLimitedTransitionAccess = bHasAuth && !bIsLocalOnListenServer;
			}
			else if(NetworkTransitionConfiguration == SM_ClientAndServer)
			{
				// Listen servers treat this as a proxy and authority, so we're going to disable transition access on the server in this case.
				// Helps with Replication Network Test. Both proxy and owner can progress state faster than intended.
				bLimitedTransitionAccess = bIsListenServer && !bIsLocal;
			}
		}

		if (bLimitedTransitionAccess)
		{
			R_Instance->SetAllowTransitionsLocally(false, !bTakeTransitionsFromServerOnly && !bIsProxy, MaxTimeToWaitForTransitionUpdate);
		}
		else if (bTakeTransitionsFromServerOnly)
		{
			// Client can evaluate transitions but won't take them.
			R_Instance->SetAllowTransitionsLocally(true, bHasAuth, MaxTimeToWaitForTransitionUpdate);
		}
	}

	// State Domain
	{
		bool bLimitedStateExecution = bIsProxy;

		if (!bIsProxy)
		{
			if (NetworkStateConfiguration == SM_Server)
			{
				// Don't update from clients when server is set.
				bLimitedStateExecution = !bHasAuth && !bIsListenServer;
			}
			else if (NetworkStateConfiguration == SM_Client)
			{
				// Don't update from server when clients are set.
				bLimitedStateExecution = bHasAuth && !bIsLocalOnListenServer;
			}
		}

		if(bLimitedStateExecution)
		{
			R_Instance->SetAllowStateLogic(!bLimitedStateExecution);
		}
	}

	// Notify the instance that there is a server instance.
	R_Instance->SetNetworkInterface(this);

	// Refresh instance settings.
	R_Instance->UpdateNetworkConditions();
}

bool USMStateMachineComponent::ShouldDiscardTransitionsBeforeInitialize() const
{
	// Either user has requested this or initial states are being replicated.
	return bDiscardTransitionsBeforeInitialize || bReplicateStatesOnLoad;
}

void USMStateMachineComponent::Initialize(UObject* Context)
{
	if (Context == nullptr)
	{
		Context = GetContextForInitialization();
	}
	
	// We only want to spawn the state machine if this is authoritative. Server will replicate instance to clients.
	if (HasAuthority())
	{
		DoInitialize(Context);
		return;
	}

	SERVER_Initialize(Context);
}

void USMStateMachineComponent::Start()
{
	// Local or server.
	if (HasAuthority())
	{
		DoStart();
		return;
	}

	// Only call server if we aren't the server.
	SERVER_Start();
}

void USMStateMachineComponent::Update(float DeltaSeconds)
{
	// Local or server.
	if (HasAuthority())
	{
		DoUpdate(DeltaSeconds);
		return;
	}

	// Only call server if we aren't the server.
	SERVER_Update(DeltaSeconds);
}

void USMStateMachineComponent::Stop()
{
	// Local or server.
	if (HasAuthority())
	{
		DoStop();
		return;
	}

	// Only call server if we aren't the server.
	SERVER_Stop();
}

void USMStateMachineComponent::Restart()
{
	Stop();
	Start();
}

void USMStateMachineComponent::Shutdown()
{
	// Local or server.
	if (HasAuthority())
	{
		DoShutdown();
		return;
	}

	// Only call server if we aren't the server.
	SERVER_Shutdown();
}

void USMStateMachineComponent::ProcessTransaction(const TArray<FSMNetworkedTransaction>& Transactions)
{
	if (HasAuthority())
	{
		SendTransactionsToClients(Transactions);
		return;
	}

	SERVER_ProcessTransaction(Transactions);
}

bool USMStateMachineComponent::ShouldReplicateStates() const
{
	return bReplicateStatesOnLoad;
}

bool USMStateMachineComponent::CanExecuteTransitionEnteredLogic() const
{
	if (!GetIsReplicated() || !IsNetworked())
	{
		return true;
	}

	const bool bIsLocal = IsLocallyOwned();
	const bool bIsListenServer = IsListenServer();
	const bool bIsProxy = IsSimulatedProxy() && !bIncludeSimulatedProxies;
	const bool bIsLocalOnListenServer = bIsListenServer && bIsLocal;

	const bool bHasAuth = !bIsProxy && HasAuthority();

	bool bLimitedTransitionAccess = bIsProxy;
	if (!bIsProxy)
	{
		if (NetworkTransitionEnteredConfiguration == SM_Server)
		{
			// Don't update from clients when server is set.
			bLimitedTransitionAccess = !bHasAuth && !bIsListenServer;
		}
		else if (NetworkTransitionEnteredConfiguration == SM_Client)
		{
			// Don't update from server when clients are set.
			bLimitedTransitionAccess = bHasAuth && !bIsLocalOnListenServer;
		}
	}

	return !bLimitedTransitionAccess;
}

bool USMStateMachineComponent::IsConfiguredForNetworking() const
{
	return IsNetworked() && GetIsReplicated();
}

bool USMStateMachineComponent::HasAuthority() const
{
	return !IsConfiguredForNetworking() || IsListenServer() || GetOwnerRole() == ROLE_Authority;
}

bool USMStateMachineComponent::IsSimulatedProxy() const
{
	return !IsLocallyOwned() && GetOwnerRole() == ROLE_SimulatedProxy;
}

#if WITH_EDITOR

void USMStateMachineComponent::InitInstanceTemplate()
{
	if (IsTemplate())
	{
		Modify();

		if (StateMachineClass == nullptr)
		{
			DestroyInstanceTemplate();
			return;
		}

		const FName TemplateName = *FString::Printf(TEXT("SMCOMP_%s_%s_%s"), *GetName(), *StateMachineClass->GetName(), *FGuid::NewGuid().ToString());
		USMInstance* NewTemplate = NewObject<USMInstance>(this, StateMachineClass, TemplateName, RF_ArchetypeObject | RF_Transactional | RF_Public);

		if (InstanceTemplate)
		{
			InstanceTemplate->Modify();

			if (NewTemplate)
			{
				UEngine::CopyPropertiesForUnrelatedObjects(InstanceTemplate, NewTemplate);
			}

			DestroyInstanceTemplate();
		}

		InstanceTemplate = NewTemplate;
	}
	else
	{
		// Instanced archetypes won't save properly. Clearing it doesn't really matter though, so it gets caught later during initialization.
		if (InstanceTemplate && InstanceTemplate->GetClass() != StateMachineClass)
		{
			InstanceTemplate = nullptr;
		}
	}
}

void USMStateMachineComponent::DestroyInstanceTemplate()
{
	if (InstanceTemplate)
	{
		InstanceTemplate->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors | REN_ForceNoResetLoaders);
	}

	InstanceTemplate = nullptr;
}

void USMStateMachineComponent::ImportDeprecatedProperties()
{
	// Begin backwards compatible (1.x) state machine components.
	if (InstanceTemplate == nullptr && StateMachineClass != nullptr && IsTemplate())
	{
		InitInstanceTemplate();

		if (InstanceTemplate)
		{
			if (bOverrideTick_DEPRECATED)
			{
				InstanceTemplate->SetCanEverTick(bCanEverTick_DEPRECATED);
			}

			if (bOverrideTickInterval_DEPRECATED)
			{
				InstanceTemplate->SetTickInterval(TickInterval_DEPRECATED);
			}
		}
	}
}

#endif

USMInstance* USMStateMachineComponent::CreateInstance(UObject* Context)
{
	if (!StateMachineClass)
	{
		return nullptr;
	}
	
	/*
	 * If the class was overridden in an instance of the owning BP then the template won't match.
	 * It's not possible to just edit the template in the instance when the parent of the template is 'this'.
	 * What happens is the template won't save to the correct archetype and instead just use the CDO.
	 * Setting the parent to the actor owner works, but as soon as the owner is compiled we lose the template.
	 * There isn't currently great support for this scenario in general as evidenced by ChildActorComponents.
	 */

	USMStateMachineComponent* Archetype = IsTemplate() ? this : CastChecked<USMStateMachineComponent>(GetArchetype());
	USMInstance* Template = Archetype->InstanceTemplate ? Archetype->InstanceTemplate : nullptr;

	if (Template && Template->GetClass() == StateMachineClass)
	{
		R_Instance = USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(StateMachineClass, Context, Template, false);
	}
	else
	{
		R_Instance = USMBlueprintUtils::CreateStateMachineInstance(StateMachineClass, Context, false);
	}

	if (!R_Instance)
	{
		// Failure, will have been logged in above Create methods.
		return nullptr;
	}

	R_Instance->ComponentOwner = this;
	return R_Instance;
}

void USMStateMachineComponent::DoInitialize(UObject* Context)
{
	if (!R_Instance)
	{
		bool bCanContinue = false;
		if (HasAuthority() && StateMachineClass)
		{
			// This branch shouldn't be hit unless the user is manually initializing.
			// ensure(!bInitializeOnBeginPlay); -- Don't verify since this variable is public.
			bCanContinue = CreateInstance(Context) != nullptr;
		}
		
		if (!bCanContinue)
		{
			return;
		}
	}

	// reattach it to the context if it has changed owner for any reason.
	if (R_Instance->GetOuter() != Context)
	{
		R_Instance->Rename(*R_Instance->GetName(), Context, REN_DoNotDirty | REN_DontCreateRedirectors);
	}

	R_Instance->Initialize(Context);

	bCanInstanceNetworkTick = R_Instance->CanEverTick();
	R_Instance->SetRegisterTick(bLetInstanceManageTick);
		
	PostInitialize();
}

void USMStateMachineComponent::DoStart()
{
	if (!R_Instance)
	{
		return;
	}

	R_Instance->Start();
}

void USMStateMachineComponent::DoUpdate(float DeltaTime)
{
	if (!R_Instance)
	{
		return;
	}

	R_Instance->Update(DeltaTime);
}

void USMStateMachineComponent::DoStop()
{
	if (!R_Instance)
	{
		return;
	}

	R_Instance->Stop();
}

void USMStateMachineComponent::DoShutdown()
{
	PendingTransactions.Empty();
	
	if (!R_Instance)
	{
		return;
	}

	R_Instance->Shutdown();

	if(!bReuseInstanceAfterShutdown)
	{
		R_Instance = nullptr;
	}
}

void USMStateMachineComponent::DoProcessTransactions(const TArray<FSMNetworkedTransaction>& Transactions, bool bAsServer)
{
	if(!R_Instance || R_Instance->GetNodeMap().Num() == 0)
	{
		return;
	}

	const TMap<FGuid, FSMTransition*>& TransitionMap = R_Instance->GetTransitionMap();
	const TMap<FGuid, FSMState_Base*>& StateMap = R_Instance->GetStateMap();
	const TMap<FGuid, FSMNode_Base*>& NodeMap = R_Instance->GetNodeMap();

	bool bActiveStatesChanged = false;
	
	FDateTime CurrentTime = FDateTime::UtcNow();
	for (const FSMNetworkedTransaction& NetworkedTransaction : Transactions)
	{
		if (bAsServer)
		{
			const_cast<FSMNetworkedTransaction&>(NetworkedTransaction).bIsServer = true;
		}
		
		if (FSMNode_Base* Node = NodeMap.FindRef(NetworkedTransaction.BaseGuid))
		{
			if (FSMStateMachine* OwningStateMachine = (FSMStateMachine*)Node->GetOwnerNode())
			{
				if (NetworkedTransaction.IsTransition())
				{
					// Signal the FSM to take the transition.
					// TODO: See about refactoring out previous transaction checks from the FSM to the component, similar to state transactions.
					if (FSMTransition* Transition = TransitionMap.FindRef(NetworkedTransaction.BaseGuid))
					{
						// Source -> Destination are either the immediate from/to states which can be calculated,
						// or are at different parts in the transition chain when using conduits.
						
						FSMState_Base* SourceState = nullptr;
						FSMState_Base* DestinationState = nullptr;
						if (NetworkedTransaction.AreAdditionalGuidsSetupForTransitions())
						{
							const FGuid& SourceGuid = NetworkedTransaction.GetTransitionSourceGuid();
							const FGuid& DestinationGuid = NetworkedTransaction.GetTransitionDestinationGuid();

							SourceState = StateMap.FindChecked(SourceGuid);
							DestinationState = StateMap.FindChecked(DestinationGuid);
						}
						else
						{
							SourceState = Transition->GetFromState();
							DestinationState = Transition->GetToState();
						}
						
 						if (OwningStateMachine->ProcessTransition(Transition, SourceState, DestinationState, &NetworkedTransaction, 0.f, &CurrentTime))
						{
							OwningStateMachine->ProcessStates(0.f);
						}
					}
				}
				else if (NetworkedTransaction.IsState())
				{
					// State networked transactions just switch it from active to not active.
					TMap<FGuid, FSMNetworkedTransaction>& PreviousTransactions = OwningStateMachine->GetPreviousTransactions();
					if (!PreviousTransactions.Contains(NetworkedTransaction.TransactionGuid))
					{
						if (FSMState_Base* State = StateMap.FindRef(NetworkedTransaction.BaseGuid))
						{
							if (NetworkedTransaction.bIsActive)
							{
								OwningStateMachine->AddActiveState(State);
							}
							else
							{
								OwningStateMachine->RemoveActiveState(State);
							}

							bActiveStatesChanged = true;
							
							PreviousTransactions.Add(NetworkedTransaction.TransactionGuid, NetworkedTransaction);
						}
					}
				}
			
				OwningStateMachine->CleanupPreviousTransactions(CurrentTime, TransitionResetTimeSeconds);
			}
		}
	}

	if (bActiveStatesChanged && !CanTickForEnvironment())
	{
		// Active state changes without tick require an update for the state to become active.
		DoUpdate(0.f);
	}
}

void USMStateMachineComponent::SendTransactionsToClients(const TArray<FSMNetworkedTransaction>& Transactions)
{
	const FDateTime CurrentTime = FDateTime::UtcNow();
	RemoveExpiredTransactions(CurrentTime);

	// Record the current time. Const cast necessary -- SERVER_ call args must be const, but we want to record the time stamp for the server only.
	for (FSMNetworkedTransaction& Transaction : const_cast<TArray<FSMNetworkedTransaction>&>(Transactions))
	{
		Transaction.Timestamp = CurrentTime;

		if (!R_Instance)
		{
			continue;
		}
		
		// Update transactions with current server times.
		if (Transaction.IsTransition())
		{
			FSMState_Base* SourceState = nullptr;
			if (Transaction.AreAdditionalGuidsSetupForTransitions())
			{
				SourceState = R_Instance->GetStateByGuid(Transaction.GetTransitionSourceGuid());
			}
			else if (FSMTransition* Transition = R_Instance->GetTransitionByGuid(Transaction.BaseGuid))
			{
				SourceState = Transition->GetFromState();
			}
			
			if (SourceState)
			{
				if (NetworkTickConfiguration == SM_Client && bCalculateServerTimeForClients)
				{
					// Attempt to calculate the time. This is likely slightly off from when using the Update/Tick method.
					FTimespan TimeDifference = CurrentTime - SourceState->GetStartTime();
					Transaction.ActiveTime = TimeDifference >= 0.f ? TimeDifference.GetTotalSeconds() : SM_ACTIVE_TIME_NOT_SET;
				}
				else
				{
					// If the server is ticking then the active time will be accurate.
					Transaction.ActiveTime = SourceState->GetActiveTime();
				}
			}
			else
			{
				LD_LOG_ERROR(TEXT("Server could not locate source state for transition %s"), *Transaction.BaseGuid.ToString());
			}
		}
		else if (Transaction.IsState())
		{
			if (FSMState_Base* State = R_Instance->GetStateByGuid(Transaction.BaseGuid))
			{
				Transaction.ActiveTime = State->GetActiveTime();
			}
		}
	}
	
	R_NetworkedTransactions.Append(Transactions);
}

void USMStateMachineComponent::RemoveExpiredTransactions(const FDateTime& CurrentTime)
{
	const FTimespan Seconds = FTimespan::FromSeconds((double)TransitionResetTimeSeconds);

	int32 RemoveThroughIndex = -1;
	for (int32 Idx = R_NetworkedTransactions.Num() - 1; Idx >= 0; --Idx)
	{
		const FSMNetworkedTransaction& Transaction = R_NetworkedTransactions[Idx];
		FDateTime ExpirationDate = Transaction.Timestamp + Seconds;

		if (ExpirationDate <= CurrentTime)
		{
			RemoveThroughIndex = Idx;
			break;
		}
	}

	if (RemoveThroughIndex >= 0)
	{
		R_NetworkedTransactions.RemoveAt(0, RemoveThroughIndex + 1);
	}
}

bool USMStateMachineComponent::SERVER_Initialize_Validate(UObject* Context)
{
	return true;
}

void USMStateMachineComponent::SERVER_Initialize_Implementation(UObject* Context)
{
	DoInitialize(Context);
}

bool USMStateMachineComponent::SERVER_Start_Validate()
{
	return true;
}

void USMStateMachineComponent::SERVER_Start_Implementation()
{
	DoStart();
}

bool USMStateMachineComponent::SERVER_Update_Validate(float DeltaTime)
{
	return true;
}

void USMStateMachineComponent::SERVER_Update_Implementation(float DeltaTime)
{
	DoUpdate(DeltaTime);
}

bool USMStateMachineComponent::SERVER_Stop_Validate()
{
	return true;
}

void USMStateMachineComponent::SERVER_Stop_Implementation()
{
	DoStop();
}

bool USMStateMachineComponent::SERVER_Shutdown_Validate()
{
	return true;
}

void USMStateMachineComponent::SERVER_Shutdown_Implementation()
{
	DoShutdown();
}

bool USMStateMachineComponent::SERVER_ProcessTransaction_Validate(const TArray<FSMNetworkedTransaction>& Transactions)
{
	// Don't notify if there wasn't at least one new transaction.
	return Transactions.Num() > 0;
}

void USMStateMachineComponent::SERVER_ProcessTransaction_Implementation(const TArray<FSMNetworkedTransaction>& Transactions)
{
	SendTransactionsToClients(Transactions);
	DoProcessTransactions(Transactions, true);
}

void USMStateMachineComponent::REP_OnInstanceLoaded()
{
	if (R_Instance)
	{
		// Register tick won't have been replicated.
		R_Instance->SetRegisterTick(bLetInstanceManageTick);
		
		// Initialize the replicated instance with proper function calls and context.
		R_Instance->Initialize(R_Instance->GetContext());

		PostInitialize();

		if (bReplicateStatesOnLoad)
		{
			const TArray<FSMActiveStateTransaction>& ReplicatedStates = R_Instance->GetReplicatedStates();
			for (const FSMActiveStateTransaction& ReplicatedState : ReplicatedStates)
			{
				R_Instance->LoadFromState(ReplicatedState.StateGuid, false);
				if (FSMState_Base* State = R_Instance->GetStateByGuid(ReplicatedState.StateGuid))
				{
					State->SetServerTimeInState(ReplicatedState.TimeInState);
				}
			}
		}
		
		// It's possible the state machine has already started on the server. The start variable is replicated so we know to start it here.
		if (R_Instance->HasStarted())
		{
			R_Instance->Start();
		}

		if(PendingTransactions.Num() > 0)
		{
			// Don't process pending transitions if we are already replicating initial states.
			if (!ShouldDiscardTransitionsBeforeInitialize())
			{
				DoProcessTransactions(PendingTransactions);
			}
			
			PendingTransactions.Empty();
		}
	}
}

void USMStateMachineComponent::REP_NetworkedTransactions()
{
	if (R_Instance == nullptr || !R_Instance->IsInitialized())
	{
		if (!ShouldDiscardTransitionsBeforeInitialize())
		{
			PendingTransactions.Append(R_NetworkedTransactions);
		}
		
		return;
	}

	// It's possible the machine has already stopped during the same update as the transition in the case bStopOnEndState is enabled.
	if(!R_Instance->HasStarted())
	{
		return;
	}

	DoProcessTransactions(R_NetworkedTransactions);
}

void USMStateMachineComponent::REP_ShuttingDown()
{
	if (R_bShuttingDown)
	{
		DoShutdown();
	}
}

#undef LOCTEXT_NAMESPACE
