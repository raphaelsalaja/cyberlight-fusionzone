// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "SMInstance.h"

#include "GameFramework/Pawn.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "SMUtils.generated.h"

/**
 * General Blueprint helpers for creating state machines.
 */
UCLASS()
class SMSYSTEM_API USMBlueprintUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Create a new state machine instance initialized with the given context.
	 * The state machine is instantiated with the Context as the outer object.
	 * 
	 * @param StateMachineClass The class of the state machine to be instantiated.
	 * @param Context The context object this state machine will run for. Often an actor.
	 * @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.
	 *
	 * @return The state machine instance created.
	 */
	static USMInstance* CreateStateMachineInstance(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, bool bInitializeNow = true);

	/**
	* Create and initialize a new state machine instance with the given context.
	* The state machine is instantiated with the Context as the outer object.
	* Initialize is automatically run on a separate thread.
	* 
	* @param StateMachineClass The class of the state machine to be instantiated.
	* @param Context The context object this state machine will run for. Often an actor.
	* @param OnCompletedDelegate Delegate to assign which is called when the process completes.
	*
	* @return The state machine instance created.
	*/
	static void CreateStateMachineInstanceAsync(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, const FOnStateMachineInstanceInitializedAsync& OnCompletedDelegate);
	
	/**
	* Create a new state machine instance initialized with the given context.
	* The state machine is instantiated with the Context as the outer object.
	* 
	* @param StateMachineClass The class of the state machine to be instantiated.
	* @param Context The context object this state machine will run for. Often an actor.
	* @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.
	*
	* @return The state machine instance created.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create State Machine Instance"), Category = "Logic Driver|State Machine Utilities")
	static USMInstance* K2_CreateStateMachineInstance(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, bool bInitializeNow = true);

	/**
	* Create and initialize a new state machine instance with the given context.
	* The state machine is instantiated with the Context as the outer object.
	* Initialize is automatically run on a separate thread.
	* 
	* @param StateMachineClass The class of the state machine to be instantiated.
	* @param Context The context object this state machine will run for. Often an actor.
	*
	* @return The state machine instance created.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create State Machine Instance Async", Latent, LatentInfo="LatentInfo"), Category = "Logic Driver|State Machine Utilities")
	static USMInstance* K2_CreateStateMachineInstanceAsync(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, FLatentActionInfo LatentInfo);

	/**
	* Create a new state machine instance initialized with the given context.
	* The state machine is instantiated with the Context as the outer object.
	*
	* This is a legacy pure node and the execution version `Create State Machine Instance` should be used instead.
	* WARNING: Every pin you split from here will create and initialize a new instance!
	* 
	* @param StateMachineClass The class of the state machine to be instantiated.
	* @param Context The context object this state machine will run for. Often an actor.
	* @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.
	*
	* @return The state machine instance created.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Create State Machine Instance Pure"), Category = "Logic Driver|State Machine Utilities|Deprecated")
	static USMInstance* K2_CreateStateMachineInstancePure(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, bool bInitializeNow = true);

	/**
	 * Create a new state machine instance from a template initialized with the given context.
	 * The state machine is instantiated with the Context as the outer object.
	 *
	 * WARNING: Every pin you split from here will create and initialize a new instance!
	 *
	 * @param StateMachineClass The class of the state machine to be instantiated.
	 * @param Context The context object this state machine will run for. Often an actor.
	 * @param Template A template archetype for setting initial property values of the state machine instance.
	 * @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.
	 *
	 * @return The state machine instance created.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Logic Driver|State Machine Utilities|Deprecated")
	static USMInstance* CreateStateMachineInstanceFromTemplate(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, USMInstance* Template, bool bInitializeNow = true);
	
private:
	static USMInstance* CreateStateMachineInstanceInternal(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, USMInstance* Template, bool bInitializeNow);
};

/**
 * Internal helpers around utilizing state machine instances.
 */
class SMSYSTEM_API USMUtils
{
private:
	struct GeneratingStateMachines
	{
		TMap<const TSubclassOf<USMInstance>, int32> InstancesGenerating;
		uint32 CallCount = 0;
	};

	/** Returns true if the state machine has completely finished generation. Can only be true when called from the top of the stack. */
	static void FinishStateMachineGeneration(GeneratingStateMachines& Generation, bool bTopLevel);
	
public:
	/**
	 * Compiles a state machine from an object. (Should be SMInstance). Guid needs to be set correctly prior to calling.
	 *
	 * @param Instance The object containing instance data. Should be an USMInstance.
	 * @param StateMachineOut The state machine struct which will be assembled.
	 * @param RunTimeProperties Class properties which will be used to create the state machine.
	 * @param bDryRun Debugging flag to prevent templates and references from being assigned.
	 */
	static bool GenerateStateMachine(UObject* Instance, FSMStateMachine& StateMachineOut, const TSet<FStructProperty*>& RunTimeProperties, bool bDryRun = false);

private:
	static bool GenerateStateMachine_Internal(UObject* Instance, FSMStateMachine& StateMachineOut, const TSet<FStructProperty*>& RunTimeProperties, bool bDryRun, GeneratingStateMachines& CurrentGeneration);
	
public:
	/** Locate the properties required for a state machine looking backwards up the parent classes. */
	static bool TryGetStateMachinePropertiesForClass(UClass* Class, TSet<FStructProperty*>& PropertiesOut, FGuid& RootGuid, EFieldIteratorFlags::SuperClassFlags SuperFlags = EFieldIteratorFlags::ExcludeSuper);

	/** Locate any Graph Properties for a given class. */
	static bool TryGetGraphPropertiesForClass(UClass* Class, TSet<FProperty*>& PropertiesOut, EFieldIteratorFlags::SuperClassFlags SuperFlags = EFieldIteratorFlags::IncludeSuper);

	/** Look up all node owners. Results will be ordered oldest to newest with the given Node as the last entry. */
	static void TryGetAllOwners(const FSMNode_Base* Node, TArray<const FSMNode_Base*>& OwnersOrdered, USMInstance* LimitToInstance = nullptr);

	/** Construct a path of guids from the nodes. */
	static FString BuildGuidPathFromNodes(const TArray<const FSMNode_Base*>& Nodes, TMap<FString, int32>* MappedPaths = nullptr);
	
	/** Convert an unhashed path to a hashed guid path. */
	static FGuid PathToGuid(const FString& UnhashedPath, FGuid* OutGuid = nullptr);

	/** Iterates through all functions initializing them. */
	static void InitializeGraphFunctions(TArray<FSMExposedFunctionHandler>& GraphFunctions, UObject* Instance, USMNodeInstance* NodeInstance = nullptr)
	{
		for (FSMExposedFunctionHandler& FunctionHandler : GraphFunctions)
		{
			FunctionHandler.Initialize(FunctionHandler.ExecutionType == ESMExposedFunctionExecutionType::SM_NodeInstance ? NodeInstance : Instance);
		}
	}
	
	/** Iterates through all functions resetting them. */
	static void ResetGraphFunctions(TArray<FSMExposedFunctionHandler>& GraphFunctions)
	{
		for (FSMExposedFunctionHandler& FunctionHandler : GraphFunctions)
		{
			FunctionHandler.Reset();
		}
	}
	
	/** Iterates through all functions executing them. */
	static void ExecuteGraphFunctions(TArray<FSMExposedFunctionHandler>& GraphFunctions, void* Params = nullptr)
	{
		for (const FSMExposedFunctionHandler& FunctionHandler : GraphFunctions)
		{
			FunctionHandler.Execute(Params);
		}
	}
	
	/** Search up parents for a default sub objects for a template. */
	static UObject* FindTemplateFromInstance(USMInstance* Instance, const FName& TemplateName);

	/** Find all reference templates from an instance. Nested children shouldn't be found after a compile or during run-time! */
	static bool TryGetAllReferenceTemplatesFromInstance(USMInstance* Instance, TSet<USMInstance*>& TemplatesOut, bool bIncludeNested = false);

	/** Attempt to find a controller of type T from the context object. */
	template<typename T>
	static T* FindControllerFromContext(UObject* InContextObject)
	{
		if (InContextObject == nullptr)
		{
			return nullptr;
		}
	
		if (T* PlayerController = Cast<T>(InContextObject))
		{
			return PlayerController;
		}
	
		if (APawn* Pawn = Cast<APawn>(InContextObject))
		{
			return Cast<T>(Pawn->GetController());
		}

		if (APawn* Pawn = InContextObject->GetTypedOuter<APawn>())
		{
			return Cast<T>(Pawn->GetController());
		}

		return InContextObject->GetTypedOuter<T>();
	}

	/** Create an input component for an object if necessary and register with a player controller. */
	static void EnableInputForObject(APlayerController* InPlayerController, UObject* InObject, UInputComponent*& InOutComponent, int32 InputPriority, bool bBlockInput, bool bPushPopInput);

	/** Disable input for all player controllers using this input component. */
	static void DisableInput(UWorld* InWorld, UInputComponent*& InOutComponent);
	
	/** Call when a controller has changed for a tracked pawn. */
	static void HandlePawnControllerChange(APawn* InPawn, AController* InController, UObject* InObject, UInputComponent*& InOutComponent, int32 InputPriority, bool bBlockInput);

	/** Change the active state of a state machine instance, handling replication or local. */
	static void ActivateStateNetOrLocal(FSMState_Base* InState, bool bValue, bool bSetAllParents = false, bool bActivateNow = true);
	
#if WITH_EDITOR
	
	struct FSMPropertyRetrieval
	{
		FObjectProperty* ObjectProperty;
		const void* ObjectContainer;

		UObject* GetObjectValue() const
		{
			if (ObjectProperty && ObjectContainer)
			{
				return ObjectProperty->GetObjectPropertyValue(ObjectContainer);
			}
			return nullptr;
		}

		void SetObjectValue(UObject* NewValue)
		{
			if (ObjectProperty && ObjectContainer)
			{
				return ObjectProperty->SetObjectPropertyValue(const_cast<void*>(ObjectContainer), NewValue);
			}
		}
	};

	/** Checks if an object property is instanced or exported. */
	static bool IsObjectPropertyInstanced(FObjectProperty* ObjectProperty);
	
	/**
	 * Recursively retrieve all nested object properties.
	 * Checks all root properties and properties of nested structs or exported objects.
	 * A simple approach and does not handle container types.
	 * @param InObject The object address to check. Generally can just provide a UObject instance.
	 * @param PropertySource The source containing the properties. Usually your InObject->GetClass()
	 * @param OutProperties All found object properties.
	 * @param ObjectsChecked Set of all objects checked, used to prevent stack overflow, but may not be necessary since only exported types are checked.
	 */
	static void GetAllObjectProperties(const void* InObject, UStruct* PropertySource, TArray<FSMPropertyRetrieval>& OutProperties, TSet<const void*>* ObjectsChecked = nullptr);

	
#endif
	
	/** Iterate properties of an instance finding all structs derived from the given type (such as FSMNode_Base). */
	template<typename T>
	static bool TryGetAllRuntimeNodesFromInstance(USMInstance* Instance, TSet<T*>& NodesOut)
	{
		TSet<FStructProperty*> Properties;
		FGuid RootGuid;
		TryGetStateMachinePropertiesForClass(Instance->GetClass(), Properties, RootGuid, EFieldIteratorFlags::IncludeSuper);

		for (FStructProperty* Property : Properties)
		{
			if (Property->Struct->IsChildOf(T::StaticStruct()))
			{
				if (T* StateMachinePtr = Property->ContainerPtrToValuePtr<T>(Instance))
				{
					NodesOut.Add(StateMachinePtr);
				}
			}
		}

		return NodesOut.Num() > 0;
	}

	template<typename T>
	static void BlueprintPropertyToNativeProperty(FProperty* Property, UObject* Scope, TArray<T>& OutNativeProperties)
	{
		TArray<T*> PtrArray;

		BlueprintPropertyToNativeProperty(Property, Scope, PtrArray);
		for (T* Ptr : PtrArray)
		{
			OutNativeProperties.Add(*Ptr);
		}
	}
	
	template<typename T>
	static void BlueprintPropertyToNativeProperty(FProperty* Property, UObject* Scope, TArray<T*>& OutNativeProperties)
	{
		// Check if this is an array or if this is an element in an array.
		FArrayProperty* ArrayProp = CastField<FArrayProperty>(Property);
		if (!ArrayProp)
		{
			if (FField* OwnerField = Property->GetOwnerProperty())
			{
				ArrayProp = CastField<FArrayProperty>(OwnerField);
			}
		}
		
		if (ArrayProp)
		{
			// Blueprint array.
			FScriptArrayHelper Helper(ArrayProp, ArrayProp->ContainerPtrToValuePtr<uint8>(Scope));
			
			const int32 ArrayCount = Helper.Num();
			OutNativeProperties.Reserve(ArrayCount);
			
			for (int32 i = 0; i < ArrayCount; ++i)
			{
				if (uint8** ObjectPtr = (uint8**)Helper.GetRawPtr(i))
				{
					OutNativeProperties.Add((T*)*&ObjectPtr);
				}
			}
		}
		else if (Property->ArrayDim > 1)
		{
			const int32 ArrayCount = Property->ArrayDim;
			OutNativeProperties.Reserve(ArrayCount);
			
			// Native array.
			for (int32 i = 0; i < ArrayCount; ++i)
			{
				if (uint8** ResolvedObject = Property->ContainerPtrToValuePtr<uint8*>(Scope, i))
				{
					OutNativeProperties.Add((T*)*&ResolvedObject);
				}
			}
		}
		else if (const FStructProperty* StructProperty = CastField<FStructProperty>(Property))
		{
			// Regular property.
			if (StructProperty->Struct->IsChildOf(T::StaticStruct()))
			{
				if (T* Object = StructProperty->ContainerPtrToValuePtr<T>(Scope))
				{
					OutNativeProperties.Add(Object);
				}
			}
		}
	}
};
