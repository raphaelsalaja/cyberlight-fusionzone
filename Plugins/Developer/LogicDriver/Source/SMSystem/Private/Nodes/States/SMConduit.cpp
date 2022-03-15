// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMConduit.h"
#include "SMConduitInstance.h"
#include "SMUtils.h"

FSMConduit::FSMConduit() : Super(), bCanEnterTransition(false), bCanEvaluate(true), bEvalWithTransitions(false),
                           bIsEvaluating(false), bCheckedForTransitions(false)
{
}

void FSMConduit::Initialize(UObject* Instance)
{
	Super::Initialize(Instance);
	USMUtils::InitializeGraphFunctions(ConduitEnteredGraphEvaluator, Instance);
}

void FSMConduit::Reset()
{
	Super::Reset();
	USMUtils::ResetGraphFunctions(ConduitEnteredGraphEvaluator);
}

void FSMConduit::ExecuteInitializeNodes()
{
	TryExecuteGraphProperties(GRAPH_PROPERTY_EVAL_CONDUIT_INIT);

	if (NodeInstance && bEvalWithTransitions)
	{
		// NativeInitialize is called OnStateBegin when not configured as a transition.
		NodeInstance->NativeInitialize();
	}
	
	Super::ExecuteInitializeNodes();
}

void FSMConduit::ExecuteShutdownNodes()
{
	if (NodeInstance && bEvalWithTransitions)
	{
		// NativeShutdown is called OnStateEnd when not configured as a transition.
		NodeInstance->NativeShutdown();
	}

	Super::ExecuteShutdownNodes();
}

bool FSMConduit::CanExecuteGraphProperties(uint32 OnEvent, const USMStateInstance_Base* ForTemplate) const
{
	const USMConduitInstance* ConduitInstance = Cast<USMConduitInstance>(ForTemplate);
	if (ConduitInstance != nullptr)
	{
		if (!ConduitInstance->bAutoEvalExposedProperties)
		{
			return false;
		}

		switch (OnEvent)
		{
		case GRAPH_PROPERTY_EVAL_CONDUIT_INIT:
			return ConduitInstance->bEvalGraphsOnInitialize;
		case GRAPH_PROPERTY_EVAL_CONDUIT_TRANS_CHECK:
			return ConduitInstance->bEvalGraphsOnTransitionEval;
		}
	}

	return Super::CanExecuteGraphProperties(OnEvent, ForTemplate);
}

bool FSMConduit::IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const
{
	return NewNodeInstanceClass && NewNodeInstanceClass->IsChildOf<USMConduitInstance>();
}

UClass* FSMConduit::GetDefaultNodeInstanceClass() const
{
	return USMConduitInstance::StaticClass();
}

bool FSMConduit::StartState()
{
	const bool bResult = Super::StartState();

	USMUtils::ExecuteGraphFunctions(ConduitEnteredGraphEvaluator);
	
	if(USMConduitInstance* ConduitInstance = Cast<USMConduitInstance>(GetNodeInstance()))
	{
		ConduitInstance->OnStateBegin();
	}

	return bResult;
}

bool FSMConduit::UpdateState(float DeltaSeconds)
{
	const bool bResult = Super::UpdateState(DeltaSeconds);

	if (USMConduitInstance* ConduitInstance = Cast<USMConduitInstance>(GetNodeInstance()))
	{
		ConduitInstance->OnStateUpdate(DeltaSeconds);
	}

	return bResult;
}

bool FSMConduit::EndState(float DeltaSeconds, const FSMTransition* TransitionToTake)
{
	const bool bResult = Super::EndState(DeltaSeconds, TransitionToTake);

	if (USMConduitInstance* ConduitInstance = Cast<USMConduitInstance>(GetNodeInstance()))
	{
		ConduitInstance->OnStateEnd();
	}

	return bResult;
}

bool FSMConduit::GetValidTransition(TArray<TArray<FSMTransition*>>& Transitions)
{
	if (bCheckedForTransitions || !bCanEvaluate)
	{
		return false;
	}

	bIsEvaluating = true;
#if WITH_EDITORONLY_DATA
	bWasEvaluating = true; // Will be set to false from the editor.
#endif
	
	// First check that the conduit passes.
	TryExecuteGraphProperties(GRAPH_PROPERTY_EVAL_CONDUIT_TRANS_CHECK);
	Execute();

	bIsEvaluating = false;
	
	if(!bCanEnterTransition)
	{
		return false;
	}

	bCheckedForTransitions = true;
	
	// Passes, find the best transition.
	const bool bResult = Super::GetValidTransition(Transitions);
	
	bCheckedForTransitions = false;
	return bResult;
}

void FSMConduit::EnterConduitWithTransition()
{
	if (IsConfiguredAsTransition())
	{
		SetActive(true);
		USMUtils::ExecuteGraphFunctions(ConduitEnteredGraphEvaluator);
		SetActive(false);
	}
}
