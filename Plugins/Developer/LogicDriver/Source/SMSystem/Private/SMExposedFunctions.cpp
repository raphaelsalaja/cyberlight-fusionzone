// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#include "SMExposedFunctions.h"
#include "SMLogging.h"

void FSMExposedFunctionHandler::Initialize(UObject* InObject)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMExposedFunctionHandler::Initialize"), STAT_SMExposedFunctionHandler_Initialize, STATGROUP_LogicDriver);
	
	/* 
	 * See FExposedValueHandler under AnimNodeBase. This handler is effectively the same thing, minus the fast path options. 
	 * This will prepare the function setup at the entry point of this node.
	 */

	if (bInitialized || !InObject)
	{
		return;
	}

	OwnerObject = InObject;

	if (BoundFunction != NAME_None && ExecutionType != ESMExposedFunctionExecutionType::SM_None)
	{
		// Optimization from UE -- FProperty gets copied on new instances so we don't have to look up the function.
#if !WITH_EDITOR
		if (Function == nullptr)
#endif
		{
			// Only game thread is safe to call this on -- access shared map of the class.
			check(IsInGameThread());
			Function = InObject->FindFunctionChecked(BoundFunction);
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

void FSMExposedFunctionHandler::Execute(void* Params) const
{
	if (!bInitialized || !IsValid(OwnerObject))
	{
		return;
	}

	if (OwnerObject->IsUnreachable())
	{
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMBlueprintFunction::GraphEvaluation"), STAT_SMBlueprintFunctionHandler_Execute, STATGROUP_LogicDriver);
	OwnerObject->ProcessEvent(Function, Params);
}
