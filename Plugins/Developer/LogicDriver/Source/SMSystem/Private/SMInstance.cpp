// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMInstance.h"
#include "SMLogging.h"
#include "SMUtils.h"
#include "SMStateMachineComponent.h"

#include "Engine/InputDelegateBinding.h"
#include "Engine/NetDriver.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"


#define LOCTEXT_NAMESPACE "SMInstance"

// Execute the function on the top most reference owner.
#define EXECUTE_ON_MASTER_CONST(function) \
		if (const USMInstance* Master = GetMasterReferenceOwnerConst()) \
		{ \
			if (Master != this) \
			{ \
				return Master->function; \
			} \
		} \

#define EXECUTE_ON_MASTER(function) \
		if (USMInstance* Master = GetMasterReferenceOwner()) \
		{ \
			if (Master != this) \
			{ \
				return Master->function; \
			} \
		} \


USMInstance::USMInstance() : Super()
{
	bCanEvaluateTransitionsLocally = true;
	bCanTakeTransitionsLocally = true;
	bCanExecuteStateLogic = true;
	bInitialized = false;
	R_bLoadFromStatesCalled = false;
}

bool USMInstance::IsTickable() const
{
	// Don't check CDO.
	// On IsPendingKillOrUnreachable can cause tick lookup function to crash debug / package builds.
	// Intermittently IsTemplate may fail in this scenario so it should be checked last.
	if (IsPendingKillOrUnreachable() || (!IsInitialized() && !bTickBeforeInitialize) || !CanEverTick() || IsTemplate())
	{
		return false;
	}

	UWorld* ThisWorld = GetWorld();

	// Well, we tried.
	if (!ThisWorld)
	{
		return true;
	}

	return bTickBeforeBeginPlay || ThisWorld->HasBegunPlay();
}

ETickableTickType USMInstance::GetTickableTickType() const
{
	if(!bTickRegistered || IsTemplate())
	{
		return ETickableTickType::Never;
	}

	return ETickableTickType::Conditional;
}

UWorld* USMInstance::GetTickableGameObjectWorld() const
{
	return GetWorld();
}

TStatId USMInstance::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(SMInstance, STATGROUP_LogicDriver);
}

void USMInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USMInstance, R_bHasStarted);
	DOREPLIFETIME(USMInstance, R_StateMachineContext);
	DOREPLIFETIME(USMInstance, R_bLoadFromStatesCalled);

	DOREPLIFETIME(USMInstance, ComponentOwner);
	DOREPLIFETIME_CONDITION(USMInstance, R_ActiveStates, COND_InitialOrOwner);
}

void USMInstance::BeginDestroy()
{
	Shutdown();
	Super::BeginDestroy();
}

void USMInstance::Initialize(UObject* Context)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::Initialize"), STAT_SMInstance_Initialize, STATGROUP_LogicDriver);
	
	Shutdown();

	// Context is what the instance will run under. This also sets the World the state machine operates in.
	SetContext(Context);

	// Locate the properties for this state machine. This could be either from a blueprint or native class.
	TSet<FStructProperty*> Properties;
	if (!USMUtils::TryGetStateMachinePropertiesForClass(GetClass(), Properties, RootStateMachineGuid))
	{
		return;
	}

	// The RootGuid will have either been set by the compiler or when locating the parent class.
	if(!ensureAlways(RootStateMachineGuid.IsValid()))
	{
		return;
	}
	RootStateMachine.SetNodeGuid(RootStateMachineGuid);
	RootStateMachine.SetNodeName("Root");
	RootStateMachine.SetNodeInstanceClass(StateMachineClass);
	
	// Build the run-time state machine.
	if (!USMUtils::GenerateStateMachine(this, RootStateMachine, Properties))
	{
		LD_LOG_ERROR(TEXT("Error generating state machine %s. Please try recompiling the blueprint."), *GetName());
		return;
	}

	// Initialize the graph function calls.
	RootStateMachine.Initialize(this);

	// Calculate path guids now that the instance is initialized and all node owners set.
	TMap<FString, int32> Paths;
	RootStateMachine.CalculatePathGuid(Paths);

	/* Build out a map of the state machine to use with node retrieval. */
	TSet<USMInstance*> InstancesMapped;
	BuildStateMachineMap(&RootStateMachine, InstancesMapped);

	// Configure input.
	if (GetWorld() && AutoReceiveInput != ESMStateMachineInput::Disabled && UInputDelegateBinding::SupportsInputDelegate(GetClass()))
	{
		if (APlayerController* PlayerController = GetInputController())
		{
			USMUtils::EnableInputForObject(PlayerController, this, InputComponent, InputPriority, bBlockInput, !Context || !Context->IsA<APawn>());
		}

		if (AutoReceiveInput == ESMStateMachineInput::UseContextController)
		{
			// Context controller could change throughout the game.
			if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
			{
				GameInstance->GetOnPawnControllerChanged().AddUniqueDynamic(this, &USMInstance::OnContextPawnControllerChanged);
			}
		}
	}
	
	// Construction scripts need to run after all nodes are initialized.
	RootStateMachine.RunConstructionScripts();
	
#if WITH_EDITORONLY_DATA
	// Load debug object for this instance.
	DebugStateMachine = FSMDebugStateMachine();
	for (const auto& KeyVal : GuidNodeMap)
	{
		DebugStateMachine.UpdateRuntimeNode(KeyVal.Value);
	}
#endif

	bInitialized = true;
	
	OnStateMachineInitialized();
	OnStateMachineInitializedEvent.Broadcast(this);
}

void USMInstance::Start()
{
	if (!CheckIsInitialized())
	{
		return;
	}

	if (RootStateMachine.IsActive() && RootStateMachine.GetSingleActiveState() != nullptr)
	{
		LD_LOG_WARNING(TEXT("Attempted to start State Machine Instance %s when it was already running."), *GetName());
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::Start"), STAT_SMInstance_Start, STATGROUP_LogicDriver);

	DoStart();

	R_bHasStarted = true;
}

void USMInstance::Update(float DeltaSeconds)
{
	if (bIsUpdating || !CheckIsInitialized())
	{
		return;
	}

	if (!RootStateMachine.IsActive())
	{
		return;
	}

	if (bStopOnEndState && RootStateMachine.IsInEndState())
	{
		// If internal states need to update they still will.
		Stop();
		return;
	}

	// Begin update. This way if tick updates again we will cancel out.
	bIsUpdating = true;

	UpdateTime();

	if (bAutoManageTime && DeltaSeconds == 0.f)
	{
		DeltaSeconds = WorldTimeDelta;
	}
	
	if(!bIsTicking && bCallTickOnManualUpdate)
	{
		Tick(DeltaSeconds);
	}

	Internal_Update(DeltaSeconds);

	// End update.
	bIsUpdating = false;
}

void USMInstance::Internal_Update(float DeltaSeconds)
{
	// It's okay to do a full update if this wasn't called by Update.
	if (!bIsUpdating)
	{
		return Update(DeltaSeconds);
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::Update"), STAT_SMInstance_Update, STATGROUP_LogicDriver);

	OnStateMachineUpdate(DeltaSeconds);
	OnStateMachineUpdatedEvent.Broadcast(this, DeltaSeconds);

	RootStateMachine.UpdateState(DeltaSeconds);

	if (NetworkInterface.GetObject() && ActiveTransactions.Num())
	{
		NetworkInterface->ProcessTransaction(ActiveTransactions);
	}

	ActiveTransactions.Reset();

	ReplicateStates();
	
	// Run again after updating as the state machine could have moved into an end state.
	if (bStopOnEndState && RootStateMachine.IsInEndState())
	{
		// If internal states need to update they still will.
		Stop();
	}
}

void USMInstance::Internal_EventCleanup(const FGuid& NodeGuid)
{
	if (FSMTransition* Transition = GetTransitionByGuid(NodeGuid))
	{
		// Auto-bound events will set bIsEvaluating to true primarily for debugging. However if two events fire at the exact same time
		// it won't be set to false unless this cleanup method is run.
		Transition->bIsEvaluating = false;
	}
}

void USMInstance::Stop()
{
	if (!CheckIsInitialized())
	{
		return;
	}

	if (!RootStateMachine.IsActive())
	{
		LD_LOG_WARNING(TEXT("Attempted to stop State Machine Instance when it was not already running."));
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::Stop"), STAT_SMInstance_Stop, STATGROUP_LogicDriver);
	
	RootStateMachine.EndState(0.f);

	// Let states run any shutdown logic.
	for (const auto& KeyVal : GetStateMap())
	{
		KeyVal.Value->OnStoppedByInstance(this);
	}
	
	OnStateMachineStop();
	OnStateMachineStoppedEvent.Broadcast(this);

	ReplicateStates();
	R_bLoadFromStatesCalled = false;
	R_bHasStarted = false;
}

void USMInstance::Restart()
{
	Stop();
	Start();
}

void USMInstance::Shutdown()
{
	if (!IsInitialized())
	{
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::Shutdown"), STAT_SMInstance_Shutdown, STATGROUP_LogicDriver);

	UObject* Context = GetContext();
	const bool bContextDestroyed = Context == nullptr || Context->IsPendingKillOrUnreachable();
	if (IsActive() && !bContextDestroyed)
	{
		// Don't stop if context is being destroyed, this can cause blueprint runtime errors
		// if unbinding autobound transitions from the context.
		Stop();
	}
	
	UWorld* World = GetWorld();
	if (World)
	{
		USMUtils::DisableInput(World, InputComponent);

		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			GameInstance->GetOnPawnControllerChanged().RemoveDynamic(this, &USMInstance::OnContextPawnControllerChanged);
		}
	}
	
#if WITH_EDITOR
	// If we're running in an editor window the shutdown sequence changes.
	bool bIsEditorWorld = false;
	bool bIsBeingDestroyed = false;
	if (World)
	{
		bIsEditorWorld = World->IsEditorWorld() && !World->IsGameWorld();
	}
	else if (bContextDestroyed || IsPendingKillOrUnreachable())
	{
		// Potential fix for ResetGraphProperties crash on editor shutdown or BP reload.
		bIsBeingDestroyed = true;
	}
#endif
	
	for (FSMNode_Base* Node : RootStateMachine.GetAllNodes())
	{
#if WITH_EDITOR
		if (bIsEditorWorld || bIsBeingDestroyed)
		{
			Node->EditorShutdown();
			continue;
		}
#endif	
		Node->Reset();
	}

	StateMachineGuids.Empty();
	GuidNodeMap.Empty();
	GuidStateMap.Empty();
	GuidTransitionMap.Empty();

	bInitialized = false;
}

void USMInstance::StartWithNewContext(UObject* Context)
{
	SetContext(Context);
	Start();
}

void USMInstance::EvaluateTransitions()
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::EvaluateTransitions"), STAT_SMInstance_EvaluateTransitions, STATGROUP_LogicDriver);
	
	USMInstance* StateMachineInstance = GetMasterReferenceOwner();
	check(StateMachineInstance);
	StateMachineInstance->GetRootStateMachine().ProcessStates(0.f, true);
}

void USMInstance::LoadFromState(const FGuid& FromGuid, bool bAllParents)
{
	if (!FromGuid.IsValid())
	{
		return;
	}

	if (FSMState_Base* State = GetStateByGuid(FromGuid))
	{
		if (FSMStateMachine* ParentSM = (FSMStateMachine*)State->GetOwnerNode())
		{
			ensureAlways(State != ParentSM);

			// Don't set when parent is a reference as it will just be forwarded back to this state.
			if (ParentSM->GetInstanceReference() == nullptr)
			{
				ParentSM->AddTemporaryInitialState(State);
			}

			R_bLoadFromStatesCalled = true;
			OnStateMachineInitialStateLoaded(FromGuid);
			
			if (bAllParents && ParentSM->GetNodeGuid() != RootStateMachineGuid)
			{
				LoadFromState(ParentSM->GetGuid(), bAllParents);
			}
		}
	}
}

void USMInstance::LoadFromMultipleStates(const TArray<FGuid>& FromGuids)
{
	for (const FGuid& Guid : FromGuids)
	{
		LoadFromState(Guid, false);
	}
}

void USMInstance::OnStateMachineInitialStateLoaded_Implementation(const FGuid& StateGuid)
{
}

FString USMInstance::GetActiveStateName() const
{
	if (FSMState_Base* CurrentState = GetSingleActiveState())
	{
		return CurrentState->GetNodeName();
	}

	return FString();
}

FString USMInstance::GetNestedActiveStateName() const
{
	FSMState_Base* CurrentState = GetSingleNestedActiveState();
	if (CurrentState)
	{
		return CurrentState->GetNodeName();
	}

	return FString();
}

FGuid USMInstance::GetActiveStateGuid() const
{
	if (FSMState_Base* CurrentState = GetSingleActiveState())
	{
		return CurrentState->GetGuid();
	}

	return FGuid();
}

FGuid USMInstance::GetNestedActiveStateGuid() const
{
	FSMState_Base* CurrentState = GetSingleNestedActiveState();
	if (CurrentState)
	{
		return CurrentState->GetGuid();
	}

	return FGuid();
}

void USMInstance::TryGetNestedActiveState(FSMStateInfo& FoundState, bool& bSuccess) const
{
	if (FSMState_Base* State = GetSingleNestedActiveState())
	{
		FoundState = *State;
		bSuccess = true;
		return;
	}

	bSuccess = false;
}

FSMState_Base* USMInstance::GetSingleActiveState() const
{
	return RootStateMachine.GetSingleActiveState();
}

FSMState_Base* USMInstance::GetSingleNestedActiveState() const
{
	FSMState_Base* CurrentState = RootStateMachine.GetSingleActiveState();

	if (CurrentState != nullptr)
	{
		while (CurrentState->IsStateMachine())
		{
			FSMState_Base* SubCurrentState = ((FSMStateMachine*)CurrentState)->GetSingleActiveState();
			if (SubCurrentState == nullptr || SubCurrentState == CurrentState)
			{
				// This could be an empty state machine in which case return itself.
				// The state equal to itself isn't possible, but maybe a user did something weird.
				break;
			}

			CurrentState = SubCurrentState;
		}
	}

	return CurrentState;
}

TArray<FGuid> USMInstance::GetAllCurrentStateGuids() const
{
	TArray<FGuid> CurrentGuids;
	GetAllActiveStateGuids(CurrentGuids);

	return CurrentGuids;
}

FGuid USMInstance::GetSingleActiveStateGuid(bool bCheckNested) const
{
	if (FSMState_Base* CurrentState = bCheckNested ? GetSingleNestedActiveState() : GetSingleActiveState())
	{
		return CurrentState->GetGuid();
	}

	return FGuid();
}

TArray<FSMState_Base*> USMInstance::GetAllActiveStates() const
{
	return RootStateMachine.GetAllNestedActiveStates();
}

void USMInstance::GetAllActiveStateGuids(TArray<FGuid>& ActiveGuids) const
{
	ActiveGuids.Reset();
	
	TArray<FSMState_Base*> CurrentStates = GetAllActiveStates();
	for (FSMState_Base* State : CurrentStates)
	{
		ActiveGuids.AddUnique(State->GetGuid());
	}
}

TArray<FGuid> USMInstance::GetAllActiveStateGuidsCopy() const
{
	TArray<FGuid> OutGuids;
	GetAllActiveStateGuids(OutGuids);

	return OutGuids;
}

USMStateInstance_Base* USMInstance::GetActiveStateInstance(bool bCheckNested) const
{
	return GetSingleActiveStateInstance(bCheckNested);
}

USMStateInstance_Base* USMInstance::GetSingleActiveStateInstance(bool bCheckNested) const
{
	if (FSMState_Base* CurrentState = bCheckNested ? GetSingleNestedActiveState() : GetSingleActiveState())
	{
		return Cast<USMStateInstance_Base>(CurrentState->GetNodeInstance());
	}

	return nullptr;
}

void USMInstance::GetAllActiveStateInstances(TArray<USMStateInstance_Base*>& ActiveStateInstances) const
{
	ActiveStateInstances.Reset();

	for (FSMState_Base* State : GetAllActiveStates())
	{
		if (USMStateInstance_Base* StateInstance = Cast<USMStateInstance_Base>(State->GetNodeInstance()))
		{
			ActiveStateInstances.Add(StateInstance);
		}
	}
}

TArray<USMInstance*> USMInstance::GetAllReferencedInstances(bool bIncludeChildren) const
{
	TArray<USMInstance*> ReturnValue;

	for(const FGuid& StateMachineGuid : StateMachineGuids)
	{
		if(FSMStateMachine* StateMachine = (FSMStateMachine*)GetStateByGuid(StateMachineGuid))
		{
			USMInstance* InstanceReference = StateMachine->GetInstanceReference();
			if(!InstanceReference)
			{
				continue;
			}

			// Verify we directly own this instance and it isn't a grand child.
			if(!bIncludeChildren && InstanceReference->GetRootStateMachine().GetReferencedByInstance() != this)
			{
				continue;
			}

			ReturnValue.AddUnique(InstanceReference);
		}
	}

	return ReturnValue;
}

TArray<FSMStateMachine*> USMInstance::GetStateMachinesWithReferences(bool bIncludeChildren) const
{
	TArray<FSMStateMachine*> ReturnValue;

	for (const FGuid& StateMachineGuid : StateMachineGuids)
	{
		if (FSMStateMachine* StateMachine = (FSMStateMachine*)GetStateByGuid(StateMachineGuid))
		{
			USMInstance* InstanceReference = StateMachine->GetInstanceReference();
			if (!InstanceReference)
			{
				continue;
			}

			// Verify we directly own this instance and it isn't a grand child.
			if (!bIncludeChildren && InstanceReference->GetRootStateMachine().GetReferencedByInstance() != this)
			{
				continue;
			}

			ReturnValue.AddUnique(StateMachine);
		}
	}

	return ReturnValue;
}

void USMInstance::TryGetStateInfo(const FGuid& Guid, FSMStateInfo& StateInfo, bool& bSuccess) const
{
	EXECUTE_ON_MASTER_CONST(TryGetStateInfo(Guid, StateInfo, bSuccess));
	
	if(FSMState_Base* FoundState = GetStateByGuid(Guid))
	{
		StateInfo = FSMStateInfo(*FoundState);
		bSuccess = true;
		return;
	}

	bSuccess = false;
}

void USMInstance::TryGetTransitionInfo(const FGuid& Guid, FSMTransitionInfo& TransitionInfo, bool& bSuccess) const
{
	EXECUTE_ON_MASTER_CONST(TryGetTransitionInfo(Guid, TransitionInfo, bSuccess));

	if (FSMTransition* FoundTransition = GetTransitionByGuid(Guid))
	{
		TransitionInfo = FSMTransitionInfo(*FoundTransition);
		bSuccess = true;
		return;
	}

	bSuccess = false;
}

USMInstance* USMInstance::GetReferencedInstanceByGuid(const FGuid& Guid) const
{
	EXECUTE_ON_MASTER_CONST(GetReferencedInstanceByGuid(Guid));
	
	if(!StateMachineGuids.Contains(Guid))
	{
		return nullptr;
	}

	if(FSMState_Base* const* State = GuidStateMap.Find(Guid))
	{
		return ((FSMStateMachine*)*State)->GetInstanceReference();
	}

	return nullptr;
}

USMStateInstance_Base* USMInstance::GetStateInstanceByGuid(const FGuid& Guid) const
{
	EXECUTE_ON_MASTER_CONST(GetStateInstanceByGuid(Guid));

	if (FSMState_Base* const* State = GuidStateMap.Find(Guid))
	{
		return Cast<USMStateInstance_Base>((*State)->GetNodeInstance());
	}

	return nullptr;
}

USMTransitionInstance* USMInstance::GetTransitionInstanceByGuid(const FGuid& Guid) const
{
	EXECUTE_ON_MASTER_CONST(GetTransitionInstanceByGuid(Guid));

	if (FSMTransition* const* Transition = GuidTransitionMap.Find(Guid))
	{
		return Cast<USMTransitionInstance>((*Transition)->GetNodeInstance());
	}

	return nullptr;
}

FSMState_Base* USMInstance::GetStateByGuid(const FGuid& Guid) const
{
	if(FSMState_Base* const* State = GuidStateMap.Find(Guid))
	{
		return *State;
	}

	return nullptr;
}

FSMTransition* USMInstance::GetTransitionByGuid(const FGuid& Guid) const
{
	if (FSMTransition* const* Transition = GuidTransitionMap.Find(Guid))
	{
		return *Transition;
	}

	return nullptr;
}

FSMNode_Base* USMInstance::GetNodeByGuid(const FGuid& Guid) const
{
	if(FSMNode_Base* const* Value = GetNodeMap().Find(Guid))
	{
		return *Value;
	}

	return nullptr;
}

FSMState_Base* USMInstance::FindStateByGuid(const FGuid& Guid) const
{
	if (RootStateMachineGuid == Guid)
	{
		return const_cast<FSMStateMachine*>(&RootStateMachine);
	}
	return RootStateMachine.FindState(Guid);
}

USMStateMachineInstance* USMInstance::GetRootStateMachineInstance() const
{
	return Cast<USMStateMachineInstance>(const_cast<FSMStateMachine&>(RootStateMachine).GetNodeInstance());
}

bool USMInstance::IsActive() const
{
	return bInitialized ? RootStateMachine.IsActive() : false;
}

void USMInstance::SetCanEverTick(bool Value)
{
	bCanEverTick = Value;
}

void USMInstance::SetRegisterTick(bool Value)
{
	bTickRegistered = Value;
}

void USMInstance::SetTickOnManualUpdate(bool Value)
{
	bCallTickOnManualUpdate = Value;
}

void USMInstance::SetCanTickWhenPaused(bool Value)
{
	bCanTickWhenPaused = Value;
}

void USMInstance::SetTickBeforeBeginPlay(bool Value)
{
	bTickBeforeBeginPlay = Value;
}

void USMInstance::SetTickInterval(float Value)
{
	TickInterval = Value;
}

void USMInstance::SetAutoManageTime(bool Value)
{
	bAutoManageTime = Value;
}

void USMInstance::SetStopOnEndState(bool Value)
{
	bStopOnEndState = Value;
}

bool USMInstance::IsInEndState() const
{
	return RootStateMachine.IsInEndState();
}

void USMInstance::SetContext(UObject* Context)
{
	R_StateMachineContext = Context;
}

UWorld* USMInstance::GetWorld() const
{
	// Check if the context has its own world to use.
	UObject* Context = GetContext();
	return Context ? Context->GetWorld() : nullptr;
}

int32 USMInstance::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{
	if (UObject* Outer = GetOuter())
	{
		return Outer->GetFunctionCallspace(Function, Stack);
	}

	return Super::GetFunctionCallspace(Function, Stack);
}

bool USMInstance::CallRemoteFunction(UFunction* Function, void* Parms, FOutParmRec* OutParms, FFrame* Stack)
{
	check(!HasAnyFlags(RF_ClassDefaultObject));
	if (AActor* Owner = Cast<AActor>(GetOuter()))
	{
		UNetDriver* NetDriver = Owner->GetNetDriver();
		if (NetDriver)
		{
			NetDriver->ProcessRemoteFunction(Owner, Function, Parms, OutParms, Stack, this);
			return true;
		}
	}
	return false;
}

UObject* USMInstance::GetContext() const
{
	return R_StateMachineContext;
}

bool USMInstance::IsReferenceTemplate() const
{
	return HasAnyFlags(RF_ArchetypeObject) && !HasAnyFlags(RF_ClassDefaultObject) && GetName().StartsWith("TEMPLATE");
}

void USMInstance::SetReferenceOwner(USMInstance* Owner)
{
	ReferenceOwner = Owner;
}

const USMInstance* USMInstance::GetMasterReferenceOwnerConst() const
{
	const USMInstance* Parent = ReferenceOwner;
	while(Parent)
	{
		const USMInstance* Next = Parent->GetReferenceOwnerConst();
		if(!Next)
		{
			return Parent;
		}
		Parent = Next;
	}

	return this;
}

USMInstance* USMInstance::GetMasterReferenceOwner()
{
	USMInstance* Parent = ReferenceOwner;
	while (Parent)
	{
		USMInstance* Next = Parent->GetReferenceOwner();
		if (!Next)
		{
			return Parent;
		}
		Parent = Next;
	}

	return this;
}

void USMInstance::NotifyTransitionTaken(const FSMTransition& Transition)
{
	const FSMTransitionInfo TransitionInfo(Transition);

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	if (IsLoggingEnabled() && bLogTransitionTaken)
	{
		LD_LOG_INFO(TEXT("[%s] Transition taken: %s"), *GetName(), *TransitionInfo.ToString());
	}
#endif
	
	OnStateMachineTransitionTaken(TransitionInfo);
	OnStateMachineTransitionTakenEvent.Broadcast(this, TransitionInfo);
}

void USMInstance::NotifyStateChange(FSMState_Base* ToState, FSMState_Base* FromState)
{
	const FSMStateInfo ToStateInfo(ToState ? *ToState : FSMState_Base());
	const FSMStateInfo FromStateInfo(FromState ? *FromState : FSMState_Base());

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	if (IsLoggingEnabled() && bLogStateChange)
	{
		LD_LOG_INFO(TEXT("[%s] State change: from %s to %s"), *GetName(), *FromStateInfo.ToString(), *ToStateInfo.ToString());
	}
#endif

	RecordPreviousStateHistory(FromState);
	
	OnStateMachineStateChanged(ToStateInfo, FromStateInfo);
	OnStateMachineStateChangedEvent.Broadcast(this, ToStateInfo, FromStateInfo);
}

void USMInstance::UpdateNetworkConditions()
{
	for (const auto& StateMachineGuid : StateMachineGuids)
	{
		FSMStateMachine* Node = (FSMStateMachine*)GuidNodeMap.FindRef(StateMachineGuid);

		if (USMInstance* ReferencedStateMachine = Node->GetInstanceReference())
		{
			// The referenced instance will inherit the owning instance's network settings.
			ReferencedStateMachine->CopyNetworkConditionsFrom(this, true);
		}
		else
		{
			Node->SetNetworkedConditions(ActiveTransactions, bCanEvaluateTransitionsLocally, bCanTakeTransitionsLocally, MaxTimeToWaitForUpdate, bCanExecuteStateLogic);
		}
	}
}

void USMInstance::CopyNetworkConditionsFrom(USMInstance* OtherInstance, bool bUpdateNodes)
{
	check(OtherInstance);
	
	SetNetworkInterface(OtherInstance->NetworkInterface);
	SetAllowTransitionsLocally(OtherInstance->bCanEvaluateTransitionsLocally, OtherInstance->bCanTakeTransitionsLocally, OtherInstance->MaxTimeToWaitForUpdate);
	SetAllowStateLogic(OtherInstance->bCanExecuteStateLogic);

	if (bUpdateNodes)
	{
		UpdateNetworkConditions();
	}
}

const TArray<FSMStateHistory>& USMInstance::GetStateHistory() const
{
	EXECUTE_ON_MASTER_CONST(GetStateHistory());
	return StateHistory;
}

void USMInstance::SetStateHistoryMaxCount(int32 NewSize)
{
	EXECUTE_ON_MASTER(SetStateHistoryMaxCount(NewSize));
	StateHistoryMaxCount = NewSize;
	TrimStateHistory();
}

void USMInstance::GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances) const
{
	const TMap<FGuid, FSMState_Base*>& StateMap = GetStateMap();
	for (const auto& KeyVal : StateMap)
	{
		if (USMStateInstance_Base* StateInstance = Cast<USMStateInstance_Base>(KeyVal.Value->GetNodeInstance()))
		{
			StateInstances.Add(StateInstance);
		}
	}
}

void USMInstance::GetAllTransitionInstances(TArray<USMTransitionInstance*>& TransitionInstances) const
{
	const TMap<FGuid, FSMTransition*>& TransitionMap = GetTransitionMap();
	for (const auto& KeyVal : TransitionMap)
	{
		if (USMTransitionInstance* TransitionInstance = Cast<USMTransitionInstance>(KeyVal.Value->GetNodeInstance()))
		{
			TransitionInstances.Add(TransitionInstance);
		}
	}
}

void USMInstance::SetNetworkInterface(TScriptInterface<ISMStateMachineNetworkedInterface> InNetworkInterface)
{
	NetworkInterface = InNetworkInterface;
}

TScriptInterface<ISMStateMachineNetworkedInterface> USMInstance::GetNetworkInterface() const
{
	return NetworkInterface;
}

void USMInstance::SetAllowTransitionsLocally(bool bCanEvaluateTranstions, bool bCanTakeTransitions, float MaxTimeToWait)
{
	bCanEvaluateTransitionsLocally = bCanEvaluateTranstions;
	bCanTakeTransitionsLocally = bCanTakeTransitions;
	MaxTimeToWaitForUpdate = MaxTimeToWait;
}

void USMInstance::SetAllowStateLogic(bool bAllow)
{
	bCanExecuteStateLogic = bAllow;
}

void USMInstance::Tick_Implementation(float DeltaTime)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::TotalTick"), STAT_SMInstance_TotalTick, STATGROUP_LogicDriver);
	
	if (!CanEverTick() || bIsTicking)
	{
		return;
	}

	// Check if we are allowed to tick depending on the interval.
	TimeSinceAllowedTick += DeltaTime;
	if (TimeSinceAllowedTick < TickInterval)
	{
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMInstance::Tick"), STAT_SMInstance_Tick, STATGROUP_LogicDriver);

	// Signal we are ticking in case an update tries to call tick manually.
	bIsTicking = true;

	// It's possible we're not initialized but still ticking. This saves us a call and a warning.
	if (IsInitialized())
	{
		Update(TimeSinceAllowedTick);
	}

	TimeSinceAllowedTick = 0.f;

	bIsTicking = false;
}

void USMInstance::OnStateMachineInitialized_Implementation()
{
}

void USMInstance::OnStateMachineStart_Implementation()
{
}

void USMInstance::OnStateMachineUpdate_Implementation(float DeltaSeconds)
{
}

void USMInstance::OnStateMachineStop_Implementation()
{
}

void USMInstance::OnStateMachineTransitionTaken_Implementation(const FSMTransitionInfo& Transition)
{
}

void USMInstance::OnStateMachineStateChanged_Implementation(const FSMStateInfo& ToState, const FSMStateInfo& FromState)
{
}

void USMInstance::BuildStateMachineMap(FSMStateMachine* StateMachine, TSet<USMInstance*>& InstancesMapped)
{
	InstancesMapped.Add(this);
	
	const FGuid& StateMachineGuid = StateMachine->GetGuid();
	
	// Reference self.
	ensureMsgf(!StateMachineGuids.Contains(StateMachineGuid), TEXT("State machine %s already contains state machine guid %s"), *GetName(), *StateMachineGuid.ToString());
	StateMachineGuids.Add(StateMachineGuid);
	
	// This check prevents the state machine referenced from overriding the parent duplicate that points to the reference.
	if (!GuidNodeMap.Contains(StateMachineGuid))
	{
		GuidNodeMap.Add(StateMachineGuid, StateMachine);
		GuidStateMap.Add(StateMachineGuid, StateMachine);
	}

	// Build out guids of all contained nodes in references.
	if (USMInstance* ReferencedStateMachine = StateMachine->GetInstanceReference())
	{
		if (!InstancesMapped.Contains(ReferencedStateMachine))
		{
			InstancesMapped.Add(ReferencedStateMachine);
			BuildStateMachineMap(&ReferencedStateMachine->GetRootStateMachine(), InstancesMapped);
		}
		return;
	}

	for (FSMTransition* Transition : StateMachine->GetTransitions())
	{
		const FGuid& Guid = Transition->GetGuid();
		/*
		 * Unique GUID check 2:
		 * The PathGuid at this stage should always be unique and the ensure should never be tripped.
		 * The Guid here is calculated based on the path of the node in the state machine which allows multiple same reference calls to exist in the same blueprint.
		 *
		 * If this is triggered please check to make sure the state machine blueprint in question doesn't do anything abnormal such as use circular referencing.
		 */
		ensureAlwaysMsgf(!GuidNodeMap.Contains(Guid), TEXT("State machine %s already contains transition guid %s"), *GetName(), *Guid.ToString());
		
		GuidNodeMap.Add(Guid, Transition);
		GuidTransitionMap.Add(Guid, Transition);
	}

	for (FSMState_Base* State : StateMachine->GetStates())
	{
		const FGuid& Guid = State->GetGuid();
		/*
		 * Unique GUID check 2:
		 * The PathGuid at this stage should always be unique and the ensure should never be tripped.
		 * The Guid here is calculated based on the path of the node in the state machine which allows multiple same reference calls to exist in the same blueprint.
		 *
		 * If this is triggered please check to make sure the state machine blueprint in question doesn't do anything abnormal such as use circular referencing.
		 */
		ensureAlwaysMsgf(!GuidNodeMap.Contains(Guid), TEXT("State machine %s already contains state guid %s"), *GetName(), *Guid.ToString());
		
		GuidNodeMap.Add(Guid, State);
		GuidStateMap.Add(Guid, State);
		
		if (State->IsStateMachine())
		{
			BuildStateMachineMap((FSMStateMachine*)State, InstancesMapped);
		}
	}
}

bool USMInstance::CheckIsInitialized() const
{
	if (!IsInitialized())
	{
		LD_LOG_WARNING(TEXT("Attempted to use State Machine Instance when it wasn't initialized"));
		return false;
	}

	if (IsPendingKillOrUnreachable())
	{
		// This happens quite a bit in normal practice.
		//LD_LOG_INFO(TEXT("Attempted to use State Machine Instance when it was pending kill or unreachable"));
		return false;
	}

	return true;
}

void USMInstance::UpdateTime()
{
	if (UWorld* World = GetWorld())
	{
		const float NewTime = bCanTickWhenPaused ? World->GetUnpausedTimeSeconds() : World->GetTimeSeconds();
		WorldTimeDelta = NewTime - WorldSeconds;
		WorldSeconds = NewTime;
	}
	else
	{
		WorldTimeDelta = WorldSeconds = 0.f;
	}
}

void USMInstance::ReplicateStates()
{
	if (NetworkInterface.GetObject() && NetworkInterface->ShouldReplicateStates())
	{
		TArray<FSMState_Base*> ActiveStates = GetAllActiveStates();
		R_ActiveStates.Reset(ActiveStates.Num());
		
		for (FSMState_Base* ActiveState : ActiveStates)
		{
			FSMActiveStateTransaction ActiveStateTransaction
			{
				ActiveState->GetGuid(),
				ActiveState->GetStartTime(),
				ActiveState->GetActiveTime()
			};
			R_ActiveStates.Add(MoveTemp(ActiveStateTransaction));
		}
	}
}

void USMInstance::RecordPreviousStateHistory(FSMState_Base* PreviousState)
{
	EXECUTE_ON_MASTER(RecordPreviousStateHistory(PreviousState));
	
	if (!PreviousState || StateHistoryMaxCount == 0)
	{
		return;
	}

	const FSMStateHistory StateHistoryInfo
	{
		PreviousState->GetGuid(),
		PreviousState->GetStartTime(),
		PreviousState->GetActiveTime(),
		PreviousState->GetServerTimeInState()
	};
	
	StateHistory.Add(StateHistoryInfo);
	TrimStateHistory();
}

void USMInstance::TrimStateHistory()
{
	EXECUTE_ON_MASTER(TrimStateHistory());
	
	const int32 CountToRemove = StateHistory.Num() - StateHistoryMaxCount;
	if (CountToRemove > 0)
	{
		StateHistory.RemoveAt(0, CountToRemove);
	}
}

void USMInstance::DoStart()
{
	TimeSinceAllowedTick = 0.f;
	OnStateMachineStart();
	OnStateMachineStartedEvent.Broadcast(this);

	// Let states run any initialization logic.
	for (const auto& KeyVal : GetStateMap())
	{
		KeyVal.Value->OnStartedByInstance(this);
	}
	
	RootStateMachine.StartState();
	UpdateTime();

	ReplicateStates();
}

void USMInstance::REP_StartChanged()
{
	if (IsInitialized())
	{
		if (R_bHasStarted)
		{
			DoStart();
		}
		else
		{
			Stop();
		}
	}
}

APlayerController* USMInstance::GetInputController() const
{
	APlayerController* PlayerController = nullptr;
	if (AutoReceiveInput != ESMStateMachineInput::Disabled && GetWorld())
	{
		if (AutoReceiveInput == ESMStateMachineInput::UseContextController)
		{
			PlayerController = USMUtils::FindControllerFromContext<APlayerController>(GetContext());
		}
		else
		{
			const int32 PlayerIndex = static_cast<int32>(AutoReceiveInput.GetValue()) - ESMStateMachineInput::Player0;
			PlayerController = UGameplayStatics::GetPlayerController(this, PlayerIndex);
		}
	}

	return PlayerController;
}

void USMInstance::OnContextPawnControllerChanged(APawn* Pawn, AController* NewController)
{
	USMUtils::HandlePawnControllerChange(Pawn, NewController, this, InputComponent, InputPriority, bBlockInput);
}

#undef LOCTEXT_NAMESPACE
