// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SMExposedFunctions.generated.h"

UENUM()
enum class ESMExposedFunctionExecutionType : uint8
{
	SM_Graph,           // BP Graph eval required
	SM_NodeInstance,    // Node instance only
	SM_None             // No execution
};

UENUM()
enum class ESMConditionalEvaluationType : uint8
{
	SM_Graph,           // BP Graph eval required
	SM_NodeInstance,    // Node instance only 
	SM_AlwaysFalse,     // Never eval graph and never take conditionally
	SM_AlwaysTrue       // Never eval graph and always take conditionally
};

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
		  , ExecutionType(), Function(nullptr)
		  , OwnerObject(nullptr), bInitialized(false)
	{
	}

	/** Name of the graph function we will be evaluating. */
	UPROPERTY()
	FName BoundFunction;

	/** The type of execution for this function. */
	UPROPERTY()
	ESMExposedFunctionExecutionType ExecutionType;

	/**
	 * Lookup the UFunction by the function name.
	 * 
	 * @param InObject The object owning the function.
	 */
	void Initialize(UObject* InObject);
	void Reset();

	/** Execute the function. */
	void Execute(void* Params = nullptr) const;

private:
	UPROPERTY()
	UFunction* Function;

	UPROPERTY()
	UObject* OwnerObject;

	bool bInitialized;
};