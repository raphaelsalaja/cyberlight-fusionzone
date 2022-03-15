// Copyright Recursoft LLC 2019-2021. All Rights Reserved.ings.

#include "SMTransition.h"
#include "SMConduit.h"
#include "SMState.h"
#include "SMTransitionInstance.h"
#include "SMLogging.h"
#include "SMUtils.h"

struct TransitionEvaluatorHelper
{
	TransitionEvaluatorHelper(FSMTransition* Transition)
	{
		TransitionPtr = Transition;
		TransitionPtr->UpdateReadStates();
		USMUtils::ExecuteGraphFunctions(TransitionPtr->TransitionPreEvaluateGraphEvaluator);
	}
	~TransitionEvaluatorHelper()
	{
		TransitionPtr->UpdateReadStates();
		USMUtils::ExecuteGraphFunctions(TransitionPtr->TransitionPostEvaluateGraphEvaluator);
		if (TransitionPtr->bIsEvaluating)
		{
			TransitionPtr->bIsEvaluating = false;
#if WITH_EDITORONLY_DATA
			TransitionPtr->bWasEvaluating = true; // Will be set to false from the editor.
#endif
		}
	}

	FSMTransition* TransitionPtr;
};

void FSMTransition::UpdateReadStates()
{
	Super::UpdateReadStates();
	FSMState_Base* State = GetFromState();
	bIsInEndState = State->IsInEndState();
	bHasUpdated = State->HasUpdated();
	TimeInState = State->GetActiveTime();
}

FSMTransition::FSMTransition() : Super(), Priority(0), bCanEnterTransition(false), bCanEnterTransitionFromEvent(false),
                                 bIsEvaluating(false), bCanEvaluate(true), bCanEvaluateFromEvent(true),
                                 bRunParallel(false),
                                 bEvalIfNextStateActive(true), bCanEvalWithStartState(true),
                                 bAlwaysFalse(false), ConditionalEvaluationType(), LastNetworkTimestamp(0),
								 SourceState(nullptr), DestinationState(nullptr),
                                 FromState(nullptr), ToState(nullptr)
{
}

void FSMTransition::Initialize(UObject* Instance)
{
	Super::Initialize(Instance);
	USMUtils::InitializeGraphFunctions(TransitionEnteredGraphEvaluator, Instance);
	USMUtils::InitializeGraphFunctions(TransitionPreEvaluateGraphEvaluator, Instance);
	USMUtils::InitializeGraphFunctions(TransitionPostEvaluateGraphEvaluator, Instance);
}

void FSMTransition::Reset()
{
	Super::Reset();
	USMUtils::ResetGraphFunctions(TransitionEnteredGraphEvaluator);
	USMUtils::ResetGraphFunctions(TransitionPreEvaluateGraphEvaluator);
	USMUtils::ResetGraphFunctions(TransitionPostEvaluateGraphEvaluator);
}

bool FSMTransition::IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const
{
	return NewNodeInstanceClass && NewNodeInstanceClass->IsChildOf<USMTransitionInstance>();
}

UClass* FSMTransition::GetDefaultNodeInstanceClass() const
{
	return USMTransitionInstance::StaticClass();
}

void FSMTransition::ExecuteInitializeNodes()
{
	// Possible this could be true if multiple transitions out of the same state were triggered by the same event.
	bCanEnterTransitionFromEvent = false;
	
	if (NodeInstance)
	{
		NodeInstance->NativeInitialize();
	}
	
	Super::ExecuteInitializeNodes();

	if (ToState->IsConduit())
	{
		ToState->ExecuteInitializeNodes();
	}
}

void FSMTransition::ExecuteShutdownNodes()
{
	bIsEvaluating = false;
	bCanEnterTransitionFromEvent = false;
#if WITH_EDITORONLY_DATA
	bWasEvaluating = false; // Will be set to false from the editor.
#endif
	
	Super::ExecuteShutdownNodes();

	if (NodeInstance)
	{
		NodeInstance->NativeShutdown();
	}
	
	if (ToState->IsConduit())
	{
		ToState->ExecuteShutdownNodes();
	}
}

void FSMTransition::TakeTransition()
{
	SetActive(true);

	if (USMTransitionInstance* TransitionInstance = Cast<USMTransitionInstance>(NodeInstance))
	{
		TransitionInstance->OnTransitionEnteredEvent.Broadcast(TransitionInstance);
	}

	bool bCanExecuteOnEntered = true;

	if (OwningInstance)
	{
		const TScriptInterface<ISMStateMachineNetworkedInterface> NetworkInterface = OwningInstance->GetNetworkInterface();
		if (NetworkInterface.GetObject())
		{
			bCanExecuteOnEntered = NetworkInterface->CanExecuteTransitionEnteredLogic();
		}
	}

	if (bCanExecuteOnEntered)
	{
		USMUtils::ExecuteGraphFunctions(TransitionEnteredGraphEvaluator);
	}
	
	SetActive(false);

	if (GetToState()->IsConduit())
	{
		// Let the conduit know it's being entered with this transition.
		FSMConduit* Conduit = (FSMConduit*)GetToState();
		Conduit->EnterConduitWithTransition();
	}
}

bool FSMTransition::DoesTransitionPass() 
{
	FSMState_Base* NextState = GetToState();
	if ((bRunParallel && !bEvalIfNextStateActive && NextState->IsActive()) || NextState->HasBeenReenteredFromParallelState())
	{
		return false;
	}
	
	TransitionEvaluatorHelper Evaluator(this);	// Sets bIsEvaluating = false on destruct.

	if (CanEvaluateFromEvent() && bCanEnterTransitionFromEvent)
	{
		bCanEnterTransitionFromEvent = false;
		bCanEnterTransition = true;
		return true;
	}
	
	if(CanEvaluateConditionally())
	{
		bIsEvaluating = true;
		if (ConditionalEvaluationType == ESMConditionalEvaluationType::SM_AlwaysTrue)
		{
			// Skip BP graph eval if not needed.
			bCanEnterTransition = true;
		}
		else if (ConditionalEvaluationType == ESMConditionalEvaluationType::SM_NodeInstance)
		{
			bCanEnterTransition = CastChecked<USMTransitionInstance>(GetNodeInstance())->CanEnterTransition();
		}
		else
		{
			Execute();
		}
	}
	else
	{
		bCanEnterTransition = false;
	}

	return bCanEnterTransition;
}

bool FSMTransition::CanTransitionFromEvent()
{
	// An event would have signaled that it is evaluating and needs to be set to false now.
	if (bIsEvaluating)
	{
		bIsEvaluating = false;
#if WITH_EDITORONLY_DATA
		bWasEvaluating = true; // Will be set to false from the editor.
#endif
	}
	
	return bCanEnterTransitionFromEvent;
}

bool FSMTransition::CanTransition(TArray<FSMTransition*>& Transitions)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMTransition::CanTransition"), STAT_SMTransition_CanTransition, STATGROUP_LogicDriver);
	
	if (!DoesTransitionPass())
	{
		return false;
	}

	bool bSuccess = false;

	// Additional transitions that occur after this transition.
	TArray<TArray<FSMTransition*>> NextTransitions;

	FSMState_Base* NextState = GetToState();
	if (!NextState->IsConduit())
	{
		// Normal state, we're good to transition.
		bSuccess = true;
	}
	else
	{
		// This is a conduit.
		FSMConduit* Conduit = (FSMConduit*)NextState;
		if (!Conduit->IsConfiguredAsTransition())
		{
			// We can enter this conduit as a state, doesn't matter if we're stuck here.
			bSuccess = true;
		}
		else if (Conduit->GetValidTransition(NextTransitions))
		{
			bSuccess = true;
		}
		// else conduit couldn't complete a valid transition.
	}

	if (bSuccess)
	{
		Transitions.Add(const_cast<FSMTransition*>(this));
		if (NextTransitions.Num() > 0)
		{
			// Conduits will only have possible transition chain since they don't support starting parallel states.
			Transitions.Append(NextTransitions[0]);
		}
	}

	return bSuccess;
}

void FSMTransition::GetConnectedTransitions(TArray<FSMTransition*>& Transitions) const
{
	if (Transitions.Contains(this))
	{
		return;
	}
	
	Transitions.Add(const_cast<FSMTransition*>(this));

	FSMState_Base* NextState = GetToState();
	if (NextState->IsConduit())
	{
		FSMConduit* Conduit = (FSMConduit*)NextState;
		if (Conduit->IsConfiguredAsTransition())
		{
			for (FSMTransition* Transition : Conduit->GetOutgoingTransitions())
			{
				Transition->GetConnectedTransitions(Transitions);
			}
		}
	}
}

bool FSMTransition::CanEvaluateConditionally() const
{
	return bCanEvaluate && ConditionalEvaluationType != ESMConditionalEvaluationType::SM_AlwaysFalse;
}

bool FSMTransition::CanEvaluateFromEvent() const
{
	return bCanEvaluateFromEvent;
}

void FSMTransition::SetFromState(FSMState_Base* State)
{
	FromState = State;
	FromState->AddOutgoingTransition(this);
}

void FSMTransition::SetToState(FSMState_Base* State)
{
	ToState = State;
	ToState->AddIncomingTransition(this);
}

bool FSMTransition::CanEvaluateWithStartState(const TArray<FSMTransition*>& TransitionChain)
{
	for (FSMTransition* Transition : TransitionChain)
	{
		if (!Transition->bCanEvalWithStartState)
		{
			return false;
		}
	}

	return true;
}

FSMState_Base* FSMTransition::GetFinalStateFromChain(const TArray<FSMTransition*>& TransitionChain)
{
	FSMState_Base* FoundState = nullptr;
	for (FSMTransition* Transition : TransitionChain)
	{
		FoundState = Transition->GetToState();
		if (!FoundState->IsConduit())
		{
			break;
		}
	}

	check(FoundState);
	return FoundState;
}

bool FSMTransition::CanChainEvalIfNextStateActive(const TArray<FSMTransition*>& TransitionChain)
{
	for (FSMTransition* Transition : TransitionChain)
	{
		if (Transition->bEvalIfNextStateActive)
		{
			return true;
		}
	}

	return false;
}
