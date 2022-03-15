// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMStateMachine.h"
#include "SMInstance.h"
#include "SMLogging.h"
#include "SMUtils.h"
#include "SMStateMachineInstance.h"


FSMStateMachine::FSMStateMachine() : Super(), bHasAdditionalLogic(false), bReuseCurrentState(false),
                                     bOnlyReuseIfNotEndState(false), bAllowIndependentTick(false),
                                     bCallReferenceTickOnManualUpdate(true), bReuseReference(false),
                                     bWaitForEndState(false),
                                     AllActiveTransactions(nullptr),
                                     ReferencedStateMachineClass(nullptr),
                                     ReferencedStateMachine(nullptr),
                                     IsReferencedByInstance(nullptr), IsReferencedByStateMachine(nullptr),
                                     TimeSpentWaitingForUpdate(0.f), MaxTimeToSpendWaitingForUpdate(2.f),
                                     bWaitingForTransitionUpdate(false), bCanEvaluateTransitions(true),
                                     bCanTakeTransitions(true)
{
}

void FSMStateMachine::SetNetworkedConditions(TArray<FSMNetworkedTransaction>& TransitionArray, bool bEvaluateTransitions, bool bTakeTransitions, float MaxTimeToWait, bool bCanExecuteStateLogic)
{
	AllActiveTransactions = &TransitionArray;
	bCanEvaluateTransitions = bEvaluateTransitions;
	bCanTakeTransitions = bTakeTransitions;
	MaxTimeToSpendWaitingForUpdate = MaxTimeToWait;

	for (FSMState_Base* State : States)
	{
		State->SetCanExecuteLogic(bCanExecuteStateLogic);
	}
}

void FSMStateMachine::ProcessStates(float DeltaSeconds, bool bForceTransitionEvaluationOnly, const FGuid& InCurrentRunGuid)
{
	if (ReferencedStateMachine)
	{
		ReferencedStateMachine->GetRootStateMachine().ProcessStates(DeltaSeconds, bForceTransitionEvaluationOnly, InCurrentRunGuid);
		return;
	}

	// Establish a run id unique to this call. This can allow a manual transition evaluation check
	// during an existing ProcessStates call while also preventing stack overflow.
	const bool bInitialRun = !InCurrentRunGuid.IsValid();
	const FGuid CurrentRunGuid = bInitialRun ? FGuid::NewGuid() : InCurrentRunGuid;
	
	auto AddProcessingState = [this, CurrentRunGuid](FSMState_Base* NewProcessingState)
	{
		TSet<FSMState_Base*>& IsProcessing = ProcessingStates.FindOrAdd(CurrentRunGuid);
		IsProcessing.Add(NewProcessingState);
	};

	bool bStateChanged = false;
	TArray<FSMState_Base*> ActiveStatesCopy = GetActiveStates();
	for (FSMState_Base* CurrentState : ActiveStatesCopy)
	{
		bool bStateJustStarted = false;
		
		// Always start the state before attempting a transition.
		if (!CurrentState->IsActive() || CurrentState->HasBeenReenteredFromParallelState())
		{
			// prevents repeated reentry if this state was ending and triggered a transition which led to processing.
			if (CurrentState->IsStateEnding())
			{
				continue;
			}

			if (!CurrentState->IsActive() || !CurrentState->HasBeenReenteredFromParallelState() || CurrentState->bAllowParallelReentry)
			{
				CurrentState->StartState();
				bStateJustStarted = true;
			}
			
			// Prevents repeated reentry with parallel states.
			CurrentState->NotifyOfParallelReentry(false);
			
			// It's possible the current state is null depending on start state's logic (such as if it is shutting down this state machine).
			if (!ActiveStates.Contains(CurrentState) || !CurrentState->bEvalTransitionsOnStart)
			{
				// Don't perform transition evaluation in same tick unless specified.
				continue;
			}
		}

		if (TSet<FSMState_Base*>* CurrentRun = ProcessingStates.Find(CurrentRunGuid))
		{
			if (CurrentRun->Contains(CurrentState))
			{
				/*
				 * This can occur when there are multiple active states, and the first one transitions and reentries into the next one.
				 * Without this check that would cause a stack overflow.
				 */
				
				continue;
			}
		}

		// Evaluate possible transitions and return the best one. If the state machine is waiting, not allowed to evaluate transitions,
		// or this is a normal update and the state isn't allowed to evaluate, then skip evaluation.
		bool bCanCheckTransitions = !(bWaitingForTransitionUpdate || !bCanEvaluateTransitions ||
			(!bForceTransitionEvaluationOnly && !CurrentState->CanEvaluateTransitionsOnTick()));

		if (bCanCheckTransitions && CurrentState->IsStateMachine())
		{
			if (((FSMStateMachine*)CurrentState)->bWaitForEndState)
			{
				bCanCheckTransitions = (FSMStateMachine*)CurrentState->IsInEndState();
			}
		}
		
		TArray<TArray<FSMTransition*>> ParallelTransitionChains;
		if (bCanCheckTransitions && CurrentState->GetValidTransition(ParallelTransitionChains))
		{
			bool bSuccess = false;
			for (const TArray<FSMTransition*>& TransitionChain : ParallelTransitionChains)
			{
				if (TransitionChain.Num() > 0)
				{
					// This specific transition doesn't allow same tick eval with start state.
					if (bStateJustStarted && !FSMTransition::CanEvaluateWithStartState(TransitionChain))
					{
						continue;
					}
					
					FSMState_Base* SourceState = TransitionChain[0]->GetFromState();
					FSMState_Base* DestinationState = FSMTransition::GetFinalStateFromChain(TransitionChain);
					{
						// If the next state is already active the transition may not allow evaluation. Doesn't apply to self transitions.
						if (DestinationState != CurrentState && DestinationState->IsActive() && !FSMTransition::CanChainEvalIfNextStateActive(TransitionChain))
						{
							continue;
						}
					}
				
					for (FSMTransition* Transition : TransitionChain)
					{
						if (ProcessTransition(Transition, SourceState, DestinationState, nullptr, DeltaSeconds))
						{
							AddProcessingState(CurrentState);
							// If this succeeds once we are good. It's possible a multi chain may have a failure when in a networked environment
							// because one was already taken.
							bSuccess = true;
						}
					}
				}
			}

			if (bSuccess)
			{
				bStateChanged = true;
				//  May remain active in which case we should update.
				if (!CurrentState->IsActive())
				{
					continue;
				}
			}
		}
		
		if (!bStateJustStarted)
		{
			if (bForceTransitionEvaluationOnly)
			{
				// This is an optimized transition evaluation branch. Forward request directly to nested FSM if present.
				if (CurrentState->IsStateMachine())
				{
					((FSMStateMachine*)CurrentState)->ProcessStates(DeltaSeconds, bForceTransitionEvaluationOnly, CurrentRunGuid);
				}
			}
			else
			{
				// No transition found, perform general update.
				AddProcessingState(CurrentState);
				CurrentState->UpdateState(DeltaSeconds);
			}
		}
	}

	if (bStateChanged)
	{
		ProcessStates(DeltaSeconds, bForceTransitionEvaluationOnly, CurrentRunGuid);
	}

	if (bInitialRun)
	{
		ProcessingStates.Remove(CurrentRunGuid);
	}
}

bool FSMStateMachine::ProcessTransition(FSMTransition* Transition, FSMState_Base* SourceState, FSMState_Base* DestinationState, const FSMNetworkedTransaction* Transaction, float DeltaSeconds, FDateTime* CurrentTime)
{
	if (ReferencedStateMachine)
	{
		return ReferencedStateMachine->GetRootStateMachine().ProcessTransition(Transition, SourceState, DestinationState, Transaction, DeltaSeconds, CurrentTime);
	}

	check(Transition);
	check(SourceState);
	check(DestinationState);
	
	const bool bServerUpdate = Transaction != nullptr;
	const bool bCanTransitionNow = bCanTakeTransitions || bServerUpdate;

	bWaitingForTransitionUpdate = false;
	
	if (bServerUpdate)
	{
		// If the client is continuing execution while the server is processing this can prevent a double fire.
		if (!ensureAlwaysMsgf(Transaction->IsTransition(), TEXT("Attempted to process a state network transaction when it was expecting a transition network transaction.")) ||
			PreviousTransactions.Contains(Transaction->TransactionGuid))
		{
			return false;
		}
	}
	
	if (!bServerUpdate && IsNetworked())
	{
		// This is a new transition not being supplied by the server.

		FSMNetworkedTransaction NewTransition(Transition->GetGuid());
		{
			NewTransition.Timestamp = CurrentTime ? *CurrentTime : FDateTime::UtcNow();

			// Check if source/destination don't match with previous/next states. This implies a longer
			// transition chain. We need to record these values because clients won't be able to calculate
			// them.
			if (SourceState != Transition->GetFromState() || DestinationState != Transition->GetToState())
			{
				NewTransition.AdditionalGuids.Reserve(2);
				NewTransition.AdditionalGuids.Add(SourceState->GetGuid());
				NewTransition.AdditionalGuids.Add(DestinationState->GetGuid());
			}
			// Record the active time plus the current delta since end state hasn't been called yet.
			NewTransition.ActiveTime = bCanTakeTransitions ? SourceState->GetActiveTime() + DeltaSeconds : SM_ACTIVE_TIME_NOT_SET;
		}
		
		Transition->LastNetworkTimestamp = NewTransition.Timestamp;
		Transition->SetServerTimeInState(SM_ACTIVE_TIME_NOT_SET);
		
		// Don't follow this transition a second time.
		if (bCanTransitionNow)
		{
			PreviousTransactions.Add(NewTransition.TransactionGuid, NewTransition);
		}
		else
		{
			bWaitingForTransitionUpdate = true;
		}

		// Notifies server we are taking a new transition.
		AllActiveTransactions->Add(MoveTemp(NewTransition));
	}
	else if (bServerUpdate && Transaction)
	{
		if (!Transaction->bIsServer)
		{
			Transition->SetServerTimeInState(Transaction->ActiveTime);
		}
		
		Transition->LastNetworkTimestamp = Transaction->Timestamp;
		// Don't record a server transition more than once either.
		PreviousTransactions.Add(Transaction->TransactionGuid, *Transaction);
	}

	// If this was called via server the state is likely still active.
	if (bCanTransitionNow)
	{
		FSMState_Base* LastState = Transition->GetFromState();
		FSMState_Base* ToState = Transition->GetToState();
		
		if (LastState->IsActive() && !LastState->bStayActiveOnStateChange)
		{
			LastState->EndState(DeltaSeconds, Transition);
		}

		Transition->SourceState = SourceState;
		Transition->DestinationState = DestinationState;
		
		Transition->TakeTransition();

		ToState->SetPreviousActiveTransition(Transition);
		
		if(USMInstance* Instance = GetOwningInstance())
		{
			Instance->NotifyTransitionTaken(*Transition);
		}
		if (IsReferencedByInstance)
		{
			IsReferencedByInstance->NotifyTransitionTaken(*Transition);
		}

		SetCurrentState(ToState, LastState, SourceState);

		if (!ActiveStates.Contains(ToState))
		{
			const FString InstanceName = GetOwningInstance() ? GetOwningInstance()->GetName() : "Unknown";
			LD_LOG_ERROR(TEXT("Current state not set for state machine node '%s'. The package '%s' may be getting cleaned up. Check your code for proper UE memory management."),
				*GetNodeName(), *InstanceName);
			return false;
		}
		
		ensure(LastState->bStayActiveOnStateChange || !LastState->IsActive());
	}

	return bCanTransitionNow;
}

void FSMStateMachine::CleanupPreviousTransactions(const FDateTime& CurrentTime, float PreviousTransactionTimeout)
{
	// Check for and remove expired transactions.
	if (PreviousTransactions.Num())
	{
		const FTimespan Seconds = FTimespan::FromSeconds((double)PreviousTransactionTimeout);

		for (auto TransactionIt = PreviousTransactions.CreateIterator(); TransactionIt; ++TransactionIt)
		{
			const FDateTime ExpirationDate = TransactionIt.Value().Timestamp + Seconds;
			if (ExpirationDate <= CurrentTime)
			{
				TransactionIt.RemoveCurrent();
			}
		}
	}
}

void FSMStateMachine::SetReuseCurrentState(bool bValue, bool bOnlyWhenNotInEndState)
{
	if (ReferencedStateMachine)
	{
		return ReferencedStateMachine->GetRootStateMachine().SetReuseCurrentState(bValue, bOnlyWhenNotInEndState);
	}
	
	bReuseCurrentState = bValue;
	bOnlyReuseIfNotEndState = bOnlyWhenNotInEndState;
}

bool FSMStateMachine::CanReuseCurrentState() const
{
	return bReuseCurrentState && (!IsInEndState() || !bOnlyReuseIfNotEndState);
}

void FSMStateMachine::SetClassReference(UClass* ClassReference)
{
	ReferencedStateMachineClass = ClassReference;
}

void FSMStateMachine::SetInstanceReference(USMInstance* InstanceReference)
{
	ReferencedStateMachine = InstanceReference;
	if (ReferencedStateMachine)
	{
		// The reference should inherit the reuse state property.
		ReferencedStateMachine->GetRootStateMachine().SetReuseCurrentState(bReuseCurrentState, bOnlyReuseIfNotEndState);
		
		// Only want the top level instance managing ticks.
		ReferencedStateMachine->SetRegisterTick(bAllowIndependentTick);
		ReferencedStateMachine->SetCanEverTick(bAllowIndependentTick);

		ReferencedStateMachine->SetTickOnManualUpdate(bCallReferenceTickOnManualUpdate);

		ReferencedStateMachine->GetRootStateMachine().SetOwnerNode(this);
	}
}

void FSMStateMachine::SetReferencedTemplateName(const FName& Name)
{
	ReferencedTemplateName = Name;
}

void FSMStateMachine::SetReferencedBy(USMInstance* FromInstance, FSMStateMachine* FromStateMachine)
{
	IsReferencedByInstance = FromInstance;
	IsReferencedByStateMachine = FromStateMachine;
}

void FSMStateMachine::AddActiveState(FSMState_Base* State, bool bReplicate)
{
	SetCurrentState(State, nullptr);

	if (bReplicate && IsNetworked() && State)
	{
		FSMNetworkedTransaction Transaction(State->GetGuid(), ESMTransactionType::SM_State);
		Transaction.bIsActive = true;
		Transaction.Timestamp = FDateTime::UtcNow();
		Transaction.ActiveTime = 0.f;
		AllActiveTransactions->Add(MoveTemp(Transaction));
	}
}

void FSMStateMachine::RemoveActiveState(FSMState_Base* State, bool bReplicate)
{
	State->EndState(0.f);
	ActiveStates.Remove(State);

	if (USMInstance* Instance = GetOwningInstance())
	{
		Instance->NotifyStateChange(nullptr, State);
	}

	if (IsReferencedByInstance)
	{
		IsReferencedByInstance->NotifyStateChange(nullptr, State);
	}
	
	if (bReplicate && IsNetworked() && State)
	{
		FSMNetworkedTransaction Transaction(State->GetGuid(), ESMTransactionType::SM_State);
		Transaction.bIsActive = false;
		Transaction.Timestamp = FDateTime::UtcNow();
		Transaction.ActiveTime = State->GetActiveTime();
		AllActiveTransactions->Add(MoveTemp(Transaction));
	}
}

void FSMStateMachine::SetCurrentState(FSMState_Base* ToState, FSMState_Base* FromState, FSMState_Base* SourceState)
{
	if (FromState && !FromState->bStayActiveOnStateChange)
	{
		ActiveStates.Remove(FromState);
	}

	if (ToState)
	{
		ToState->SetPreviousActiveState(SourceState ? SourceState : FromState);
		if (ActiveStates.Contains(ToState))
		{
			// Reentered.
			ToState->NotifyOfParallelReentry();
		}
		else
		{
			ActiveStates.Add(ToState);
		}
	}

	if (USMStateMachineInstance* StateInstance = Cast<USMStateMachineInstance>(GetNodeInstance()))
	{
		// FSM has switched to an end state, notify the instance.
		if (ToState && IsInEndState())
		{
			StateInstance->OnEndStateReached();
		}
	}
	
	if(USMInstance* Instance = GetOwningInstance())
	{
		Instance->NotifyStateChange(ToState, FromState);
	}

	if(IsReferencedByInstance)
	{
		IsReferencedByInstance->NotifyStateChange(ToState, FromState);
	}
}

void FSMStateMachine::Initialize(UObject* Instance)
{
	Super::Initialize(Instance);

	USMUtils::InitializeGraphFunctions(UpdateStateGraphEvaluator, Instance);
	USMUtils::InitializeGraphFunctions(EndStateGraphEvaluator, Instance);
	
	if (ReferencedStateMachine)
	{
		// Let the instance's state machine we are referencing know they are being referenced.
		ReferencedStateMachine->GetRootStateMachine().SetReferencedBy(Cast<USMInstance>(Instance), this);
	}
	
	for (FSMNode_Base* Node : GetAllNodes())
	{
		Node->Initialize(Instance);
	}
}

void FSMStateMachine::Reset()
{
	Super::Reset();
	ClearTemporaryInitialStates();
	USMUtils::ResetGraphFunctions(UpdateStateGraphEvaluator);
	USMUtils::ResetGraphFunctions(EndStateGraphEvaluator);
}

bool FSMStateMachine::StartState()
{
	if (!Super::StartState())
	{
		return false;
	}

	if(bHasAdditionalLogic)
	{
		if (CanExecuteLogic())
		{
			Execute();
		}
		
		// The additional logic will call start on the instance.
		if (ReferencedStateMachine)
		{
			return true;
		}
	}
	
	if (ReferencedStateMachine)
	{
		ReferencedStateMachine->Start();
		return true;
	}

	if (!bReuseCurrentState || ActiveStates.Num() == 0)
	{
		for (FSMState_Base* InitialState : GetInitialStates())
		{
			SetCurrentState(InitialState, nullptr);
		}
		if(HasTemporaryEntryStates())
		{
			ClearTemporaryInitialStates();
		}
	}

	if (USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeInstance()))
	{
		Instance->OnStateBegin();
	}
	
	ProcessStates(0.f);

	return true;
}

bool FSMStateMachine::UpdateState(float DeltaSeconds)
{
	if (!Super::UpdateState(DeltaSeconds))
	{
		return false;
	}

	if (bHasAdditionalLogic)
	{
		if (CanExecuteLogic())
		{
			USMUtils::ExecuteGraphFunctions(UpdateStateGraphEvaluator, (void*)&DeltaSeconds);
		}
		
		// The additional logic will call update on the instance.
		if (ReferencedStateMachine)
		{
			return true;
		}
	}
	
	if (ReferencedStateMachine)
	{
		ReferencedStateMachine->Update(DeltaSeconds);
		return true;
	}

	if (bWaitingForTransitionUpdate && MaxTimeToSpendWaitingForUpdate > 0.f)
	{
		TimeSpentWaitingForUpdate += DeltaSeconds;

		if (TimeSpentWaitingForUpdate >= MaxTimeToSpendWaitingForUpdate)
		{
			bWaitingForTransitionUpdate = false;
			TimeSpentWaitingForUpdate = 0.f;
		}
	}

	if (USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeInstance()))
	{
		Instance->OnStateUpdate(DeltaSeconds);
	}

	ProcessStates(DeltaSeconds);

	return true;
}

bool FSMStateMachine::EndState(float DeltaSeconds, const FSMTransition* TransitionToTake)
{
	if (!Super::EndState(DeltaSeconds, TransitionToTake))
	{
		return false;
	}

	if (bHasAdditionalLogic)
	{
		if (CanExecuteLogic())
		{
			USMUtils::ExecuteGraphFunctions(EndStateGraphEvaluator);
		}
		
		// The additional logic will call stop on the instance.
		if (ReferencedStateMachine)
		{
			return true;
		}
	}
	
	if (ReferencedStateMachine)
	{
		// Manually set transition since Stop won't provide one.
		ReferencedStateMachine->GetRootStateMachine().SetTransitionToTake(TransitionToTake);
		ReferencedStateMachine->Stop();
		return true;
	}

	USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeInstance());
	if(Instance)
	{
		Instance->OnStateEnd();
	}

	TArray<FSMState_Base*> ActiveStatesCopy = GetActiveStates();
	for(FSMState_Base* CurrentState: ActiveStatesCopy)
	{
		CurrentState->EndState(DeltaSeconds);

		if (!CanReuseCurrentState())
		{
			SetCurrentState(nullptr, CurrentState);
		}
	}

	if (Instance)
	{
		Instance->OnStateMachineCompleted();
	}

	return true;
}

void FSMStateMachine::ExecuteInitializeNodes()
{
	Super::ExecuteInitializeNodes();

	if (!IsReferencedByInstance)
	{
		// Don't double call this from a reference.
		if (USMStateMachineInstance* StateInstance = Cast<USMStateMachineInstance>(GetNodeInstance()))
		{
			StateInstance->OnStateInitialized();
		}
	}
}

void FSMStateMachine::ExecuteShutdownNodes()
{
	Super::ExecuteShutdownNodes();

	if (!IsReferencedByInstance)
	{
		// Don't double call this from a reference.
		if (USMStateMachineInstance* StateInstance = Cast<USMStateMachineInstance>(GetNodeInstance()))
		{
			StateInstance->OnStateShutdown();
		}
	}
}

void FSMStateMachine::OnStartedByInstance(USMInstance* Instance)
{
	if (bHasAdditionalLogic)
	{
		Super::OnStartedByInstance(Instance);
	}

	if (!IsReferencedByInstance && !Instance->GetReferenceOwnerConst())
	{
		// Root state machine calls in FSMs only reflect the master root state machine so only call this if
		// if this node is not a proxy and the owning instance isn't a reference.
		if (USMStateMachineInstance* StateInstance = Cast<USMStateMachineInstance>(GetNodeInstance()))
		{
			StateInstance->OnRootStateMachineStart();
		}
	}
}

void FSMStateMachine::OnStoppedByInstance(USMInstance* Instance)
{
	if (bHasAdditionalLogic)
	{
		Super::OnStoppedByInstance(Instance);
	}

	if (!IsReferencedByInstance && !Instance->GetReferenceOwnerConst())
	{
		// Root state machine calls in FSMs only reflect the master root state machine so only call this if
		// if this node is not a proxy and the owning instance isn't a reference.
		if (USMStateMachineInstance* StateInstance = Cast<USMStateMachineInstance>(GetNodeInstance()))
		{
			StateInstance->OnRootStateMachineStop();
		}
	}
}

// This is only necessary for legacy operations with reusing references that reference themselves. Also assists with unit test for reusing references.
static TSet<FSMStateMachine*> CalculatingInstances;

void FSMStateMachine::CalculatePathGuid(TMap<FString, int32>& MappedPaths)
{
	if(CalculatingInstances.Contains(this))
	{
		return;
	}
	CalculatingInstances.Add(this);
	
	Super::CalculatePathGuid(MappedPaths);

	if(ReferencedStateMachine)
	{
		ReferencedStateMachine->GetRootStateMachine().CalculatePathGuid(MappedPaths);
	}
	
	for(FSMNode_Base* Node : GetAllNodes())
	{
		Node->CalculatePathGuid(MappedPaths);
	}

	CalculatingInstances.Remove(this);
}

void FSMStateMachine::RunConstructionScripts()
{
	// Do not run for each reference. This is already called
	// for each reference.
	
	Super::RunConstructionScripts();

	for (FSMNode_Base* Node : GetAllNodes())
	{
		Node->RunConstructionScripts();
	}
}

void FSMStateMachine::AddInitialState(FSMState_Base* State)
{
	if (ReferencedStateMachine)
	{
		ReferencedStateMachine->GetRootStateMachine().AddInitialState(State);
		return;
	}
	
	if (State && !States.Contains(State))
	{
		ensureAlwaysMsgf(false, TEXT("Could not set initial state %s. It is not located in state machine %s"), *State->GetNodeName(), *GetNodeName());
		return;
	}

	EntryStates.Add(State);
}

void FSMStateMachine::AddTemporaryInitialState(FSMState_Base* State)
{
	if(ReferencedStateMachine)
	{
		ReferencedStateMachine->GetRootStateMachine().AddTemporaryInitialState(State);
		return;
	}

	if (!State)
	{
		return;
	}
	
	if (!ensureAlwaysMsgf(States.Contains(State), TEXT("Could not set temporary initial state %s. It is not located in state machine %s"), *State->GetNodeName(), *GetNodeName()))
	{
		return;
	}

	TemporaryEntryStates.Add(State);
}

void FSMStateMachine::ClearTemporaryInitialStates()
{
	TemporaryEntryStates.Empty();
}

const TSet<FSMState_Base*>& FSMStateMachine::GetEntryStates() const
{
	if (ReferencedStateMachine)
	{
		return ReferencedStateMachine->GetRootStateMachine().GetEntryStates();
	}

	return EntryStates;
}

TArray<FSMState_Base*> FSMStateMachine::GetInitialStates() const
{
	if(ReferencedStateMachine)
	{
		return ReferencedStateMachine->GetRootStateMachine().GetInitialStates();
	}
	
	return HasTemporaryEntryStates() ? TemporaryEntryStates.Array() : EntryStates.Array();
}

FSMState_Base* FSMStateMachine::GetSingleInitialState() const
{
	TArray<FSMState_Base*> InitialStates = GetInitialStates();
	if (InitialStates.Num() > 0)
	{
		return InitialStates[0];
	}

	return nullptr;
}

FSMState_Base* FSMStateMachine::GetSingleInitialTemporaryState() const
{
	return TemporaryEntryStates.Num() > 0 ? TemporaryEntryStates.Array()[0] : nullptr;
}

FSMState_Base* FSMStateMachine::FindState(const FGuid& StateGuid) const
{
	if (GetGuid() == StateGuid)
	{
		return const_cast<FSMStateMachine*>(this);
	}

	if (ReferencedStateMachine != nullptr)
	{
		return ReferencedStateMachine->FindStateByGuid(StateGuid);
	}

	for (FSMState_Base* State : States)
	{
		if (State->GetGuid() == StateGuid)
		{
			return State;
		}

		if (State->IsStateMachine())
		{
			if (FSMState_Base* FoundState = ((FSMStateMachine*)State)->FindState(StateGuid))
			{
				return FoundState;
			}
		}
	}

	return nullptr;
}

FSMState_Base* FSMStateMachine::GetSingleActiveState() const
{
	if(FSMState_Base* State = ReferencedStateMachine ? ReferencedStateMachine->GetRootStateMachine().GetSingleActiveState() : nullptr)
	{
		return State;
	}

	for (FSMState_Base* CurrentState : ActiveStates)
	{
		return CurrentState;
	}

	// Temporary state needs to be counted as current if it is set.
	return ReferencedStateMachine ? ReferencedStateMachine->GetRootStateMachine().GetSingleInitialTemporaryState() : GetSingleInitialTemporaryState();
}

TArray<FSMState_Base*> FSMStateMachine::GetActiveStates() const
{
	if (ReferencedStateMachine)
	{
		if (ReferencedStateMachine->GetRootStateMachine().HasActiveStates())
		{
			return ReferencedStateMachine->GetRootStateMachine().GetActiveStates();
		}
	}
	
	if (HasActiveStates())
	{
		return ActiveStates;
	}
	
	return ReferencedStateMachine ? ReferencedStateMachine->GetRootStateMachine().TemporaryEntryStates.Array() : TemporaryEntryStates.Array();
}

TArray<FSMState_Base*> FSMStateMachine::GetAllNestedActiveStates() const
{
	if (ReferencedStateMachine)
	{
		return ReferencedStateMachine->GetAllActiveStates();
	}

	TArray<FSMState_Base*> OutStates = GetActiveStates();

	for (FSMState_Base* State : States)
	{
		if (State->IsStateMachine())
		{
			OutStates.Append(((FSMStateMachine*)State)->GetAllNestedActiveStates());
		}
	}

	return OutStates;
}

bool FSMStateMachine::IsInEndState() const
{
	if (ReferencedStateMachine)
	{
		return ReferencedStateMachine->IsInEndState();
	}

	for (FSMState_Base* CurrentState : ActiveStates)
	{
		if (CurrentState->IsEndState())
		{
			if (CurrentState->IsStateMachine())
			{
				// FSM may be waiting to be considered an end state.
				FSMStateMachine* NestedFSM = (FSMStateMachine*)CurrentState;
				if (NestedFSM->bWaitForEndState && !NestedFSM->IsInEndState())
				{
					continue;
				}
			}
			
			return true;
		}
	}

	return ActiveStates.Num() == 0;
}

bool FSMStateMachine::IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const
{
	return NewNodeInstanceClass && NewNodeInstanceClass->IsChildOf<USMStateMachineInstance>();
}

USMNodeInstance* FSMStateMachine::GetNodeInstance() const
{
	if (ReferencedStateMachine)
	{
		return ReferencedStateMachine->GetRootStateMachine().GetNodeInstance();
	}

	return Super::GetNodeInstance();
}

UClass* FSMStateMachine::GetDefaultNodeInstanceClass() const
{
	return USMStateMachineInstance::StaticClass();
}

FSMNode_Base* FSMStateMachine::GetOwnerNode() const
{
	if (IsReferencedByStateMachine)
	{
		return IsReferencedByStateMachine;
	}

	return Super::GetOwnerNode();
}

void FSMStateMachine::SetStartTime(const FDateTime& InStartTime)
{
	for (FSMState_Base* State : GetInitialStates())
	{
		State->SetStartTime(InStartTime);
	}

	Super::SetStartTime(InStartTime);
}

void FSMStateMachine::SetServerTimeInState(float InTime)
{
	Super::SetServerTimeInState(InTime);
	
	for (FSMState_Base* State : ActiveStates)
	{
		State->SetServerTimeInState(InTime);
	}
}

void FSMStateMachine::AddState(FSMState_Base* State)
{
	State->SetOwnerNode(this);
	States.AddUnique(State);
	StateNameMap.Add(State->GetNodeName(), State);
}

void FSMStateMachine::AddTransition(FSMTransition* Transition)
{
	Transition->SetOwnerNode(this);
	Transitions.AddUnique(Transition);
}

TArray<FSMNode_Base*> FSMStateMachine::GetAllNodes(bool bIncludeNested) const
{
	TArray<FSMNode_Base*> Results;
	
	Results.Append(States);
	Results.Append(Transitions);

	if(bIncludeNested)
	{
		for(FSMState_Base* State : States)
		{
			if(State->IsStateMachine())
			{
				FSMStateMachine* StateMachine = (FSMStateMachine*)State;
				
				if (StateMachine->ReferencedStateMachine)
				{
					Results.Add(&StateMachine->ReferencedStateMachine->GetRootStateMachine());
					Results.Append(StateMachine->ReferencedStateMachine->GetRootStateMachine().GetAllNodes(bIncludeNested));
				}
				else
				{
					Results.Append(((FSMStateMachine*)State)->GetAllNodes(bIncludeNested));
				}
			}
		}
	}

	return Results;
}
