// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMBlueprintFunctions.generated.h"


/**
 * Handles execution of functions exposed in blueprint graphs.
 * This is often wrapped in a TArray to reduce struct memory offsets
 * for garbage collection.
 */
USTRUCT(BlueprintInternalUseOnly)
struct SMSYSTEM_API FSMExposedFunctionHandler
{
	GENERATED_USTRUCT_BODY()

	FSMExposedFunctionHandler()
		: BoundFunction(NAME_None)
		  , Function(nullptr)
		  , OwnerObject(nullptr), bInitialized(false)
	{
	}

	/** Name of the graph function we will be evaluating. */
	UPROPERTY()
	FName BoundFunction;

	/** Lookup the UFunction by the function name. */
	void Initialize(UObject* StateMachineObject);
	void Reset();

	/** Execute the function. */
	void Execute(void* Parms = nullptr) const;

private:
	UPROPERTY()
	UFunction* Function;

	UPROPERTY()
	UObject* OwnerObject;

	bool bInitialized;
};