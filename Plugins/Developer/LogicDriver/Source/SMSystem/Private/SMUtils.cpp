// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMUtils.h"
#include "Blueprints/SMBlueprintGeneratedClass.h"
#include "SMLogging.h"

#include "Engine.h"
#include "Engine/World.h"
#include "Engine/InputActionDelegateBinding.h"
#include "Engine/InputAxisDelegateBinding.h"
#include "Engine/InputAxisKeyDelegateBinding.h"
#include "Engine/InputKeyDelegateBinding.h"
#include "Engine/InputTouchDelegateBinding.h"
#include "Engine/InputVectorAxisDelegateBinding.h"

#include "Framework/Commands/InputChord.h"


USMInstance* USMBlueprintUtils::CreateStateMachineInstance(TSubclassOf<class USMInstance> StateMachineClass, UObject* Context, bool bInitializeNow)
{
	return CreateStateMachineInstanceInternal(StateMachineClass, Context, nullptr, bInitializeNow);
}

USMInstance* USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(TSubclassOf<USMInstance> StateMachineClass,
	UObject* Context, USMInstance* Template, bool bInitializeNow)
{
	return CreateStateMachineInstanceInternal(StateMachineClass, Context, Template, bInitializeNow);
}

USMInstance* USMBlueprintUtils::CreateStateMachineInstanceInternal(TSubclassOf<USMInstance> StateMachineClass,
                                                                   UObject* Context, USMInstance* Template, bool bInitializeNow)
{
	if (StateMachineClass.Get() == nullptr)
	{
		LD_LOG_ERROR(TEXT("No state machine class provided to CreateStateMachineInstance for context: %s"), Context ? *Context->GetName() : TEXT("No Context"));
		return nullptr;
	}

	if (Context == nullptr)
	{
		LD_LOG_ERROR(TEXT("No context provided to CreateStateMachineInstance."));
		return nullptr;
	}

	if (Template && Template->GetClass() != StateMachineClass)
	{
		LD_LOG_ERROR(TEXT("Attempted to instantiate state machine with template of class %s but was expecting: %s. Try restarting the play session."), *Template->GetClass()->GetName(), *StateMachineClass->GetName());
		return nullptr;
	}

	USMInstance* Instance = NewObject<USMInstance>(Context, StateMachineClass, NAME_None, RF_NoFlags, Template);

	if (bInitializeNow)
	{
		Instance->Initialize(Context);
	}

	return Instance;
}

bool USMUtils::GenerateStateMachine(UObject* Instance, FSMStateMachine& StateMachineOut,
	const TSet<FStructProperty*>& RunTimeProperties, bool bDryRun)
{
	// State machines that contain references to each other can risk stack overflow. Let's track the ones being generated for a specific thread.
	static TMap<uint32, GeneratingStateMachines> StateMachinesGeneratingForThread;
	const uint32 ThreadId = FPlatformTLS::GetCurrentThreadId();

	// Check if we're at the top of the stack for this generation.
	const bool bIsTopLevel = !StateMachinesGeneratingForThread.Contains(ThreadId);
	/* TODO: If we ever support multi-threaded initialization we need to re-evaluate how we are retrieving the CurrentGeneration
	 * as the reference could become invalid after a map resize from a removal. */
	GeneratingStateMachines& CurrentGeneration = StateMachinesGeneratingForThread.FindOrAdd(ThreadId);

	// If the state machine is a reference instantiate its blueprint and pass our context in.
	if (TSubclassOf<USMInstance> StateMachineClassReference = StateMachineOut.GetClassReference())
	{
		if (USMInstance* SMInstance = Cast<USMInstance>(Instance))
		{
			USMInstance* TemplateInstance = nullptr;
			if (!bDryRun)
			{
				// Check if we are using a template.
				const FName& TemplateName = StateMachineOut.GetReferencedTemplateName();
				if (TemplateName != NAME_None)
				{
					TemplateInstance = Cast<USMInstance>(FindTemplateFromInstance(SMInstance, TemplateName));
					if (TemplateInstance == nullptr)
					{
						LD_LOG_ERROR(TEXT("Could not find reference template %s for use within state machine %s from package %s. Loading defaults."), *TemplateName.ToString(), *StateMachineOut.GetNodeName(), *Instance->GetName());
					}
					else if (TemplateInstance->GetClass() != StateMachineClassReference)
					{
						/*
						 * This error can occur when setting an sm actor comp state machine class, then switching it to another that uses a reference with a template.
						 * The ReferencedStateMachineClass in the FSM struct will be set to the value of the class that was just placed in the actor component,
						 * but nothing else appears to be out of place. This problem occurs until the sm with the reference is recompiled or the editor restarted.
						 * 
						 * Fix for now: The template instance appears to be correct, so use that and log a warning.
						 *
						 * It is unknown what causes it specifically since this happens in the runtime module when setting the actor component class. Somehow
						 * this effects the ReferencedStateMachineClass in the struct owning the sm reference template. The most likely cause would be in the component under
						 * InitInstanceTemplate when CopyPropertiesForUnrelatedObjects is called. But setting BlueprintCompiledGeneratedDefaults on ReferencedStateMachineClass
						 * had no effect.
						 */
						
						LD_LOG_WARNING(TEXT("State machine node %s in package %s uses a reference template %s with class %s, but was expecting class %s. The package may just need to be recompiled."),
							*StateMachineOut.GetNodeName(), *Instance->GetName(), *TemplateName.ToString(), *TemplateInstance->GetClass()->GetName(), *StateMachineClassReference->GetName());

						StateMachineClassReference = TemplateInstance->GetClass();
					}
				}
			}
			// Check for circular referencing. Behavior varies based on normal instantiation approach or legacy instance reuse.
			{
				// Reuse behavior: Reuse the same instance.
				if (StateMachineOut.bReuseReference)
				{
					if (CurrentGeneration.CreatedReferences.Contains(StateMachineClassReference))
					{
						if (USMInstance* AlreadyInstantiated = CurrentGeneration.CreatedReferences.FindRef(StateMachineClassReference))
						{
							StateMachineOut.SetInstanceReference(AlreadyInstantiated);
						}
						else
						{
							// Currently in process of being instantiated, we can set it later.
							TSet<FSMStateMachine*>& StateMachinesWithoutReferences = CurrentGeneration.StateMachinesThatNeedReferences.FindOrAdd(StateMachineClassReference);
							StateMachinesWithoutReferences.Add(&StateMachineOut);
						}
						FinishStateMachineGeneration(bIsTopLevel, StateMachinesGeneratingForThread, ThreadId);
						return true;
					}
					// Record instance created.
					CurrentGeneration.CreatedReferences.Add(StateMachineClassReference, nullptr);
				}
				// Normal use.
				else
				{
					// Prevent infinite loop if this machine references itself.
					if (int32* CurrentInstancesOfClass = CurrentGeneration.InstancesGenerating.Find(StateMachineClassReference))
					{
						// This should never be greater than 1 otherwise it means this state machine class has a reference to itself.
						// If we don't stop here we will be in an infinite loop.
						if (*CurrentInstancesOfClass > 1)
						{
							LD_LOG_ERROR(TEXT("Attempted to generate state machine with circular referencing. This behavior is no longer allowed but can still be achieved by setting bReuseReference to true on the state machine reference node. Offending state machine: %s"), *SMInstance->GetName())
							FinishStateMachineGeneration(bIsTopLevel, StateMachinesGeneratingForThread, ThreadId);
							return false;
						}
					}
				}
			}

			if (!bDryRun)
			{
				int32& CurrentInstances = CurrentGeneration.InstancesGenerating.FindOrAdd(StateMachineClassReference);
				CurrentInstances++;

				// Instantiate template.
				USMInstance* ReferencedInstance = USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(StateMachineClassReference, SMInstance->GetContext(), TemplateInstance, true);
				if (ReferencedInstance == nullptr)
				{
					LD_LOG_ERROR(TEXT("Could not create reference %s for use within state machine %s from package %s."), *StateMachineClassReference->GetName(), *StateMachineOut.GetNodeName(), *Instance->GetName());
					return false;
				}

				ReferencedInstance->SetReferenceOwner(SMInstance);

				// Reuse behavior: The instantiation process may have nested state machine references which loop back to this reference.
				{
					if (StateMachineOut.bReuseReference)
					{
						CurrentGeneration.CreatedReferences[StateMachineClassReference] = ReferencedInstance;
					}

					if (TSet<FSMStateMachine*>* StateMachinesWithoutReferences = CurrentGeneration.StateMachinesThatNeedReferences.Find(StateMachineClassReference))
					{
						for (FSMStateMachine* StateMachine : *StateMachinesWithoutReferences)
						{
							if (StateMachine->bReuseReference)
							{
								StateMachine->SetInstanceReference(ReferencedInstance);
							}
						}
					}
				}
				
				int32* CurrentInstancesAfter = CurrentGeneration.InstancesGenerating.Find(StateMachineClassReference);
				if (ensureAlwaysMsgf(CurrentInstancesAfter, TEXT("The reference class instance %s should be found."), *StateMachineClassReference->GetName()))
				{
					// Should go back to zero but could be more in the event of an attempted self reference.
					(*CurrentInstancesAfter)--;
				}

				// Notify the state machine of the correct instance.
				StateMachineOut.SetInstanceReference(ReferencedInstance);
			}
			
			FinishStateMachineGeneration(bIsTopLevel, StateMachinesGeneratingForThread, ThreadId);
			return true;
		}
	}

	// Only match properties belonging to this state machine.
	const FGuid& StateMachineNodeGuid = StateMachineOut.GetNodeGuid();

	// Used for quick lookup when linking to states.
	TMap<FGuid, FSMState_Base*> MappedStates;
	TMap<FGuid, FSMTransition*> MappedTransitions;
	// Retrieve pointers to the runtime states and store in state machine for quick access.
	for (auto& Property : RunTimeProperties)
	{
		if (Property->Struct->IsChildOf(FSMState_Base::StaticStruct()))
		{
			FSMState_Base* State = Property->ContainerPtrToValuePtr<FSMState_Base>(Instance);

			if (State->GetOwnerNodeGuid() != StateMachineNodeGuid)
			{
				continue;
			}

			StateMachineOut.AddState(State);

			/*
			 * Unique GUID check 1:
			 * The NodeGuid at this stage should always be unique and the ensure should never be tripped.
			 * Multiple inheritance parent calls is the only scenario where NodeGuid duplicates could exist but the sm compiler will adjust them.
			 *
			 * If this is triggered please check to make sure the state machine blueprint in question doesn't do anything abnormal such as use circular referencing.
			 */
			ensureAlwaysMsgf(!MappedStates.Contains(State->GetNodeGuid()), TEXT("State machine generation error for state machine %s: found node %s but its guid %s has already been added."),
				*Instance->GetName(), *State->GetNodeName(), *State->GetNodeGuid().ToString());
			
			MappedStates.Add(State->GetNodeGuid(), State);

			if (Property->Struct->IsChildOf(FSMStateMachine::StaticStruct()))
			{
				FSMStateMachine& NestedStateMachine = *(FSMStateMachine*)State;
				GenerateStateMachine(Instance, NestedStateMachine, RunTimeProperties, bDryRun);
			}

			if (State->IsRootNode())
			{
				StateMachineOut.AddInitialState(State);
			}
		}
	}

	// Second pass build transitions.
	for (auto& Property : RunTimeProperties)
	{
		if (Property->Struct->IsChildOf(FSMTransition::StaticStruct()))
		{
			FSMTransition* Transition = Property->ContainerPtrToValuePtr<FSMTransition>(Instance);

			if (Transition->GetOwnerNodeGuid() != StateMachineNodeGuid)
			{
				continue;
			}

			// Convert linked guids to the actual states.
			FSMState_Base* FromState = MappedStates.FindRef(Transition->FromGuid);
			if (!FromState)
			{
				LD_LOG_ERROR(TEXT("Critical error creating state machine %s for package %s. The transition %s could not locate the FromState using Guid %s."), *StateMachineOut.GetNodeName(), *Instance->GetName(),
					*Transition->GetNodeName(), *Transition->FromGuid.ToString());
				return false;
			}
			FSMState_Base* ToState = MappedStates.FindRef(Transition->ToGuid);
			if (!ToState)
			{
				LD_LOG_ERROR(TEXT("Critical error creating state machine %s for package %s. The transition %s could not locate the ToState using Guid %s."), *StateMachineOut.GetNodeName(), *Instance->GetName(),
					*Transition->GetNodeName(), *Transition->ToGuid.ToString());
				return false;
			}

			// The transition will handle updating the state.
			Transition->SetFromState(FromState);
			Transition->SetToState(ToState);

			StateMachineOut.AddTransition(Transition);
			
			/*
			 * Unique GUID check 1:
			 * The NodeGuid at this stage should always be unique and the ensure should never be tripped.
			 * Multiple inheritance parent calls is the only scenario where NodeGuid duplicates could exist but the sm compiler will adjust them.
			 *
			 * If this is triggered please check to make sure the state machine blueprint in question doesn't do anything abnormal such as use circular referencing.
			 */
			ensureAlwaysMsgf(!MappedStates.Contains(Transition->GetNodeGuid()), TEXT("State machine generation error for state machine %s: found node %s but its guid %s has already been added."),
				*Instance->GetName(), *Transition->GetNodeName(), *Transition->GetNodeGuid().ToString());
			
			MappedTransitions.Add(Transition->GetNodeGuid(), Transition);
		}
	}

	FinishStateMachineGeneration(bIsTopLevel, StateMachinesGeneratingForThread, ThreadId);
	return true;
}

bool USMUtils::TryGetStateMachinePropertiesForClass(UClass* Class, TSet<FStructProperty*>& PropertiesOut, FGuid& RootGuid, EFieldIteratorFlags::SuperClassFlags SuperFlags)
{
	// Look for properties in this class.
	for (TFieldIterator<FStructProperty> It(Class, SuperFlags); It; ++It)
	{
		if (It->Struct->IsChildOf(FSMNode_Base::StaticStruct()))
		{
			PropertiesOut.Add(*It);
		}
	}

	// Check parent classes.
	if (PropertiesOut.Num() == 0)
	{
		// Blueprint parent.
		if (USMBlueprintGeneratedClass* NextClass = Cast<USMBlueprintGeneratedClass>(Class->GetSuperClass()))
		{
			// Need to set the guid -- The child class instance won't know this.
			RootGuid = NextClass->GetRootGuid();
			return TryGetStateMachinePropertiesForClass(NextClass, PropertiesOut, RootGuid, SuperFlags);
		}
		// Nativized parent.
		if (UDynamicClass* NextClass = Cast<UDynamicClass>(Class->GetSuperClass()))
		{
			// Need to set the guid -- The child class instance won't know this.
			RootGuid = CastChecked<USMInstance>(NextClass->GetDefaultObject())->RootStateMachineGuid;
			return TryGetStateMachinePropertiesForClass(NextClass, PropertiesOut, RootGuid, SuperFlags);
		}
	}

	return PropertiesOut.Num() > 0;
}

bool USMUtils::TryGetGraphPropertiesForClass(UClass* Class, TSet<FProperty*>& PropertiesOut,
	EFieldIteratorFlags::SuperClassFlags SuperFlags)
{
	for (TFieldIterator<FProperty> It(Class, SuperFlags); It; ++It)
	{
		if (FStructProperty* StructProperty = CastField<FStructProperty>(*It))
		{
			if (StructProperty->Struct->IsChildOf(FSMGraphProperty_Base_Runtime::StaticStruct()))
			{
				PropertiesOut.Add(StructProperty);
			}
		}
		else if(FArrayProperty* ArrayProp = CastField<FArrayProperty>(*It))
		{
			if(FStructProperty* InnerProp = CastField<FStructProperty>(ArrayProp->Inner))
			{
				if (InnerProp->Struct->IsChildOf(FSMGraphProperty_Base_Runtime::StaticStruct()))
				{
					PropertiesOut.Add(InnerProp);
				}
			}
		}
	}

	return PropertiesOut.Num() > 0;
}

void USMUtils::TryGetAllOwners(const FSMNode_Base* Node, TArray<const FSMNode_Base*>& OwnersOrdered, USMInstance* LimitToInstance)
{
	for(const FSMNode_Base* CurrentNode = Node; CurrentNode; CurrentNode = CurrentNode->GetOwnerNode())
	{
		USMInstance* Instance = CurrentNode->GetOwningInstance();
		if (LimitToInstance && Instance != LimitToInstance)
		{
			continue;
		}
		
		OwnersOrdered.Add(CurrentNode);
	}

	Algo::Reverse(OwnersOrdered);
}

FString USMUtils::BuildGuidPathFromNodes(const TArray<const FSMNode_Base*>& Nodes, TMap<FString, int32>* MappedPaths)
{
	FString Path;
	for (int32 i = 0; i < Nodes.Num() - 1; ++i)
	{
		const FSMNode_Base* Node = Nodes[i];
		Path += Node->GetNodeGuid().ToString() + "/";
	}

	if (Nodes.Num())
	{
		Path += Nodes[Nodes.Num() - 1]->GetNodeGuid().ToString();
	}

	// Check for duplicates and adjust.
	if (MappedPaths)
	{
		int32& ExistingPaths = MappedPaths->FindOrAdd(Path);
		if (++ExistingPaths > 1)
		{
			Path += "_" + FString::FromInt(ExistingPaths - 1);
		}
	}
	
	return Path;
}

FGuid USMUtils::PathToGuid(const FString& UnhashedPath, FGuid* OutGuid)
{
	FGuid Guid;
	if(!OutGuid)
	{
		OutGuid = &Guid;
	}
	
	FGuid::Parse(FMD5::HashAnsiString(*UnhashedPath), *OutGuid);
	return *OutGuid;
}

UObject* USMUtils::FindTemplateFromInstance(USMInstance* Instance, const FName& TemplateName)
{
	check(Instance);
	
	UClass* CurrentClass = Instance->GetClass();
	while (CurrentClass)
	{
		if (UObject* FoundTemplate = Cast<UObject>(CurrentClass->GetDefaultSubobjectByName(TemplateName)))
		{
			return FoundTemplate;
		}
		CurrentClass = CurrentClass->GetSuperClass();
	}

	return nullptr;
}

bool USMUtils::TryGetAllReferenceTemplatesFromInstance(USMInstance* Instance, TSet<USMInstance*>& TemplatesOut, bool bIncludeNested)
{
	for (UObject* Template : Instance->ReferenceTemplates)
	{
		USMInstance* ReferenceTemplate = Cast<USMInstance>(Template);
		
		if(!ReferenceTemplate)
		{
			continue;
		}
		
		TemplatesOut.Add(ReferenceTemplate);

		if (bIncludeNested)
		{
			TryGetAllReferenceTemplatesFromInstance(ReferenceTemplate, TemplatesOut, bIncludeNested);
		}
	}

	return TemplatesOut.Num() > 0;
}

void USMUtils::EnableInputForObject(APlayerController* InPlayerController, UObject* InObject,
                                    UInputComponent*& InOutComponent, int32 InputPriority, bool bBlockInput, bool bPushPopInput)
{
	check(InPlayerController);
	check(InObject);
	
	if (!InOutComponent)
	{
		InOutComponent = NewObject<UInputComponent>(InObject, UInputSettings::GetDefaultInputComponentClass());
		InOutComponent->RegisterComponent();
		InOutComponent->bBlockInput = bBlockInput;
		InOutComponent->Priority = InputPriority;

		BindInputDelegatesToObject(InObject->GetClass(), InOutComponent, InObject);
	}
	else if (bPushPopInput)
	{
		InPlayerController->PopInputComponent(InOutComponent);
	}

	if (bPushPopInput)
	{
		InPlayerController->PushInputComponent(InOutComponent);
	}
}

void USMUtils::DisableInput(UWorld* InWorld, UInputComponent*& InOutComponent)
{
	if (InWorld && InOutComponent)
	{
		for (FConstPlayerControllerIterator PCIt = InWorld->GetPlayerControllerIterator(); PCIt; ++PCIt)
		{
			if (APlayerController* PC = PCIt->Get())
			{
				PC->PopInputComponent(InOutComponent);
			}
		}
	}

	if (InOutComponent)
	{
		InOutComponent->DestroyComponent();
		InOutComponent = nullptr;
	}
}

/* https://forums.unrealengine.com/t/input-events-on-uobject-graph/120579/4 */
void USMUtils::BindInputDelegatesToObject(const UClass* InClass, UInputComponent* InInputComponent, UObject* InObject)
{
	static UClass* InputBindingClasses[] =
	{
		UInputActionDelegateBinding::StaticClass(),
		UInputAxisDelegateBinding::StaticClass(),
		UInputKeyDelegateBinding::StaticClass(),
		UInputTouchDelegateBinding::StaticClass(),
		UInputAxisKeyDelegateBinding::StaticClass(),
		UInputVectorAxisDelegateBinding::StaticClass(),
	};

	if (InClass)
	{
		// Bind parent class input delegates
		BindInputDelegatesToObject(InClass->GetSuperClass(), InInputComponent, InObject);

		// Bind own graph input delegates
		for (UClass* InputBindingClass : InputBindingClasses)
		{
			if (UInputDelegateBinding* BindingObject = CastChecked<UInputDelegateBinding>(UBlueprintGeneratedClass::GetDynamicBindingObject(InClass, InputBindingClass), ECastCheckedType::NullAllowed))
			{
				if (UInputKeyDelegateBinding* KeyBinding = Cast<UInputKeyDelegateBinding>(BindingObject))
				{
					TArray<FInputKeyBinding> BindsToAdd;

					for (int32 BindIndex = 0; BindIndex < KeyBinding->InputKeyDelegateBindings.Num(); ++BindIndex)
					{
						const FBlueprintInputKeyDelegateBinding& Binding = KeyBinding->InputKeyDelegateBindings[BindIndex];
						FInputKeyBinding KB(Binding.InputChord, Binding.InputKeyEvent);
						KB.bConsumeInput = Binding.bConsumeInput;
						KB.bExecuteWhenPaused = Binding.bExecuteWhenPaused;

						// Originally instead of GraphObject, it said InputComponent->GetOwner() here
						KB.KeyDelegate.BindDelegate(InObject, Binding.FunctionNameToBind);

						if (Binding.bOverrideParentBinding)
						{
							for (int32 ExistingIndex = InInputComponent->KeyBindings.Num() - 1; ExistingIndex >= 0; --ExistingIndex)
							{
								const FInputKeyBinding& ExistingBind = InInputComponent->KeyBindings[ExistingIndex];
								if (ExistingBind.Chord == KB.Chord && ExistingBind.KeyEvent == KB.KeyEvent)
								{
									InInputComponent->KeyBindings.RemoveAt(ExistingIndex);
								}
							}
						}

						// To avoid binds in the same layer being removed by the parent override temporarily put them in this array and add later
						BindsToAdd.Add(KB);
					}

					for (const FInputKeyBinding& Binding : BindsToAdd)
					{
						InInputComponent->KeyBindings.Add(Binding);
					}
				}
				else if (UInputActionDelegateBinding* ActionBinding = Cast<UInputActionDelegateBinding>(BindingObject))
				{
					TArray<FInputActionBinding> BindsToAdd;

					for (int32 BindIndex = 0; BindIndex < ActionBinding->InputActionDelegateBindings.Num(); ++BindIndex)
					{
						const FBlueprintInputActionDelegateBinding& Binding = ActionBinding->InputActionDelegateBindings[BindIndex];

						FInputActionBinding AB(Binding.InputActionName, Binding.InputKeyEvent);
						AB.bConsumeInput = Binding.bConsumeInput;
						AB.bExecuteWhenPaused = Binding.bExecuteWhenPaused;

						// Originally instead of GraphObject, it said InputComponent->GetOwner() here
						AB.ActionDelegate.BindDelegate(InObject, Binding.FunctionNameToBind);

						if (Binding.bOverrideParentBinding)
						{
							for (int32 ExistingIndex = InInputComponent->GetNumActionBindings() - 1; ExistingIndex >= 0; --ExistingIndex)
							{
								const FInputActionBinding& ExistingBind = InInputComponent->GetActionBinding(ExistingIndex);
								if (ExistingBind.GetActionName() == AB.GetActionName() && ExistingBind.KeyEvent == AB.KeyEvent)
								{
									InInputComponent->RemoveActionBinding(ExistingIndex);
								}
							}
						}

						// To avoid binds in the same layer being removed by the parent override temporarily put them in this array and add later
						BindsToAdd.Add(AB);
					}

					for (const FInputActionBinding& Binding : BindsToAdd)
					{
						InInputComponent->AddActionBinding(Binding);
					}
				}
			}
		}
	}
}

void USMUtils::HandlePawnControllerChange(APawn* InPawn, AController* InController, UObject* InObject, UInputComponent*& InOutComponent, int32 InputPriority, bool bBlockInput)
{
	check(InObject);
	
	if (!InPawn || InPawn != InObject->GetTypedOuter<APawn>())
	{
		return;
	}
	
	DisableInput(InObject->GetWorld(), InOutComponent);
	if(InController)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(InController))
		{
			EnableInputForObject(PlayerController, InObject, InOutComponent, InputPriority, bBlockInput, false);
		}
	}
}

#if WITH_EDITOR

UObject* USMUtils::CreateTemplate(UClass* NewClass, UObject* OldInstance, UObject* CallingObject, FName InstanceName, EObjectFlags ObjectFlags, bool bModify)
{
	if (CallingObject && bModify)
	{
		CallingObject->Modify();
	}
	
	if (NewClass == nullptr)
	{
		DestroyTemplate(OldInstance);
		return nullptr;
	}

	UObject* NewTemplate = NewObject<UObject>(CallingObject, NewClass, InstanceName, ObjectFlags);

	if (OldInstance)
	{
		if (bModify)
		{
			OldInstance->Modify();
		}
		
		if (NewTemplate)
		{
			UEngine::CopyPropertiesForUnrelatedObjects(OldInstance, NewTemplate);
		}

		DestroyTemplate(OldInstance);
	}

	return NewTemplate;
}

void USMUtils::DestroyTemplate(UObject* Instance)
{
	if (Instance)
	{
		Instance->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors | REN_ForceNoResetLoaders);
	}
}

bool USMUtils::IsObjectPropertyInstanced(FObjectProperty* ObjectProperty)
{
	return ObjectProperty && ObjectProperty->HasAnyPropertyFlags(CPF_InstancedReference | CPF_ExportObject);
}

void USMUtils::GetAllObjectProperties(const void* InObject, UStruct* PropertySource,
	TArray<FSMPropertyRetrieval>& OutProperties, TSet<const void*>* ObjectsChecked)
{
	TSet<const void*> ObjectsCheckedSource;
	if (ObjectsChecked == nullptr)
	{
		ObjectsChecked = &ObjectsCheckedSource;
	}
	
	if (!InObject || ObjectsChecked->Contains(InObject))
	{
		return;
	}
	ObjectsChecked->Add(InObject);

	for (TFieldIterator<FProperty> PropertyIterator(PropertySource); PropertyIterator; ++PropertyIterator)
	{
		FProperty* Property = *PropertyIterator;

		if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
		{
			const void* StructAddressInObject = StructProperty->ContainerPtrToValuePtr<const void>(InObject);
			GetAllObjectProperties(StructAddressInObject, StructProperty->Struct, OutProperties, ObjectsChecked);
		}
		else if (FObjectProperty* ObjectProperty = CastField<FObjectProperty>(Property))
		{
			const void* ObjectContainer = ObjectProperty->ContainerPtrToValuePtr<const void>(InObject);
			const FSMPropertyRetrieval PropertyRetrieval{ ObjectProperty, ObjectContainer };
			OutProperties.Add(PropertyRetrieval);

			if (IsObjectPropertyInstanced(ObjectProperty))
			{
				// Only check property instances stored within this object.
				if (UObject* ObjectValue = PropertyRetrieval.GetObjectValue())
				{
					GetAllObjectProperties(ObjectValue, ObjectValue->GetClass(), OutProperties, ObjectsChecked);
				}
			}
		}
		/* TODO: Array iteration
		else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
		{
			FScriptArrayHelper ArrayHelper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<void>(InObject));
			for (int32 Index = 0; Index < ArrayHelper.Num(); ++Index)
			{
				if (FStructProperty* ArrayStructProp = Cast<FStructProperty>(ArrayProperty->Inner))
				{
					GetAllProperties(ArrayHelper.GetRawPtr(Index), ArrayStructProp->Struct, OutProperties, ObjectsChecked);
				}
				else if (FObjectProperty* ArrayObjectProp = Cast<FObjectProperty>(ArrayProperty->Inner))
				{

				}
			}
		}
		*/
	}
}

#endif

bool USMUtils::FinishStateMachineGeneration(bool bIsTopLevel, TMap<uint32, GeneratingStateMachines>& ThreadMap, uint32 ThreadId)
{
	if (bIsTopLevel)
	{
		if (GeneratingStateMachines* Generation = ThreadMap.Find(ThreadId))
		{
#if !UE_BUILD_SHIPPING
			for (const auto& InstanceCount : Generation->InstancesGenerating)
			{
				ensureAlwaysMsgf(InstanceCount.Value == 0, TEXT("Ref count is %s when it should be 0. Offending class instance %s."), *FString::FromInt(InstanceCount.Value), *InstanceCount.Key->GetName());
			}
#endif		
			Generation->InstancesGenerating.Empty();
			Generation->CreatedReferences.Empty();
			Generation->StateMachinesThatNeedReferences.Empty();
		}

		ThreadMap.Remove(ThreadId);
	}

	return bIsTopLevel;
}
