// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMBlueprintFunctions.h"
#include "SMLogging.h"


void FSMExposedFunctionHandler::Initialize(UObject* StateMachineObject)
{
	/* 
	 * See FExposedValueHandler under AnimNodeBase. This handler is effectively the same thing, minus the fast path options. 
	 * This will prepare the function setup at the entry point of this node.
	 */

	if (bInitialized || !StateMachineObject)
	{
		return;
	}

	OwnerObject = StateMachineObject;

	if (BoundFunction != NAME_None)
	{
		// Optimization from UE -- FProperty gets copied on new instances so we don't have to look up the function.
#if !WITH_EDITOR
		if (Function == nullptr)
#endif
		{
			// Only game thread is safe to call this on -- access shared map of the class.
			check(IsInGameThread());
			Function = StateMachineObject->FindFunction(BoundFunction);
			check(Function);
		}

		bInitialized = true;
	}
	else
	{
		Function = nullptr;
	}
}

void FSMExposedFunctionHandler::Reset()
{
	bInitialized = false;
	OwnerObject = nullptr;
}

void FSMExposedFunctionHandler::Execute(void* Parms) const
{
	if(!bInitialized || !IsValid(OwnerObject))
	{
		return;
	}

	if(OwnerObject->IsPendingKillOrUnreachable())
	{
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMBlueprintFunction::GraphEvaluation"), STAT_SMBlueprintFunctionHandler_Execute, STATGROUP_LogicDriver);
	OwnerObject->ProcessEvent(Function, Parms);
}
