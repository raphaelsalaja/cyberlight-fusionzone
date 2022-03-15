// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMNodeInstance.h"
#include "SMInstance.h"
#include "SMUtils.h"

#include "Engine/InputDelegateBinding.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"


DEFINE_STAT(STAT_NodeInstances);

USMNodeInstance::USMNodeInstance() : Super(), bAutoEvalExposedProperties(true), bResetVariablesOnInitialize(false), OwningNode(nullptr), bIsInitialized(false)
{
	INC_DWORD_STAT(STAT_NodeInstances)
	
	NodeIconTintColor = FLinearColor(1.f, 1.f, 1.f, 1.f);
	
#if WITH_EDITORONLY_DATA
	// TODO: Read editor settings.
	NodeColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
	NodeDescription.Category = FText::FromString("User");
	bSkipNativeEditorConstructionScripts = false;
#endif

#if WITH_EDITOR
	ResetArrayCheck();
	bIsNodePinChanging = false;
#endif
}

UWorld* USMNodeInstance::GetWorld() const
{
	if(UObject* Context = GetContext())
	{
		return Context->GetWorld();
	}

	return nullptr;
}

void USMNodeInstance::BeginDestroy()
{
	Super::BeginDestroy();
	DEC_DWORD_STAT(STAT_NodeInstances)
}

UObject* USMNodeInstance::GetContext() const
{
	if(USMInstance* SMInstance = GetStateMachineInstance())
	{
		return SMInstance->GetContext();
	}

	return nullptr;
}

void USMNodeInstance::NativeInitialize()
{
	if (bResetVariablesOnInitialize)
	{
		ResetVariables();
	}
	
	EnableInput();
	bIsInitialized = true;
}

void USMNodeInstance::NativeShutdown()
{
	DisableInput();
	bIsInitialized = false;
}

void USMNodeInstance::RunConstructionScript()
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMNodeInstance::RunConstructionScript"), STAT_SMNodeInstance_RunConstructionScript, STATGROUP_LogicDriver);
	
	// Reset exposed property overrides to defaults per construction script run.
	// These could have been modified by construction script functions like SetVariableReadOnly.
	ExposedPropertyOverrides = CastChecked<USMNodeInstance>(GetArchetype())->ExposedPropertyOverrides;
	ConstructionScript();
}

USMInstance* USMNodeInstance::GetStateMachineInstance(bool bTopMostInstance) const
{
	if(USMInstance* Instance = Cast<USMInstance>(GetOuter()))
	{
		if(bTopMostInstance)
		{
			return Instance->GetMasterReferenceOwner();
		}

		return Instance;
	}

	return nullptr;
}

void USMNodeInstance::SetOwningNode(FSMNode_Base* Node)
{
	OwningNode = Node;
}

USMStateMachineInstance* USMNodeInstance::GetOwningStateMachineNodeInstance() const
{
	if (const FSMNode_Base* Node = GetOwningNode())
	{
		if (FSMNode_Base* NodeOwner = Node->GetOwnerNode())
		{
			return Cast<USMStateMachineInstance>(NodeOwner->GetNodeInstance());
		}
	}

	return nullptr;
}

TScriptInterface<ISMStateMachineNetworkedInterface> USMNodeInstance::GetNetworkInterface() const
{
	if (USMInstance* Instance = GetStateMachineInstance())
	{
		return Instance->GetNetworkInterface();
	}

	return nullptr;
}

float USMNodeInstance::GetTimeInState() const
{
	return OwningNode ? OwningNode->TimeInState : 0.f;
}

bool USMNodeInstance::IsInEndState() const
{
	return OwningNode ? OwningNode->bIsInEndState : false;
}

bool USMNodeInstance::HasUpdated() const
{
	return OwningNode ? OwningNode->bHasUpdated : false;
}

bool USMNodeInstance::IsActive() const
{
	return OwningNode ? OwningNode->IsActive() : false;
}

const FString& USMNodeInstance::GetNodeName() const
{
	static FString EmptyString;
	if (const FSMNode_Base* Node = GetOwningNodeContainer())
	{
		return Node->GetNodeName();
	}
	return EmptyString;
}

const FGuid& USMNodeInstance::GetGuid() const
{
	static FGuid BlankGuid;
	return OwningNode ? OwningNode->GetGuid() : BlankGuid;
}

void USMNodeInstance::EvaluateGraphProperties(bool bTargetOnly)
{
	if (const FSMNode_Base* Node = GetOwningNode())
	{
		const_cast<FSMNode_Base*>(Node)->ExecuteGraphProperties(bTargetOnly ? &GetTemplateGuid() : nullptr);
	}
}

const FVector2D& USMNodeInstance::GetNodePosition() const
{
	if (const FSMNode_Base* Node = GetOwningNode())
	{
		return Node->NodePosition;
	}

	static FVector2D EmptyVector(0.f, 0.f);
	return EmptyVector;
}

void USMNodeInstance::EnableInput()
{
	if (AutoReceiveInput == ESMNodeInput::Type::Disabled || !GetWorld() || !UInputDelegateBinding::SupportsInputDelegate(GetClass()))
	{
		// Node has disabled input.
		return;
	}
	
	APlayerController* PlayerController = nullptr;
	int32 ChosenPriority = InputPriority;
	bool bChosenBlock = bBlockInput;

	bool bIsUsingContext = false;
	if (AutoReceiveInput == ESMNodeInput::UseContextController)
	{
		PlayerController = USMUtils::FindControllerFromContext<APlayerController>(GetContext());
		bIsUsingContext = true;
	}
	else if (AutoReceiveInput == ESMNodeInput::Type::UseOwningStateMachine)
	{
		if (USMInstance* StateMachineOwner = GetStateMachineInstance())
		{
			PlayerController = StateMachineOwner->GetInputController();
			ChosenPriority = StateMachineOwner->GetInputPriority();
			bChosenBlock = StateMachineOwner->GetBlockInput();

			bIsUsingContext = StateMachineOwner->GetInputType() == ESMStateMachineInput::UseContextController;
		}
	}
	else
	{
		// Node values.
		const int32 PlayerIndex = static_cast<int32>(AutoReceiveInput.GetValue()) - ESMNodeInput::Player0;
		PlayerController = UGameplayStatics::GetPlayerController(this, PlayerIndex);
	}
	
	if (PlayerController)
	{
		UObject* Context = GetContext();
		USMUtils::EnableInputForObject(PlayerController, this, InputComponent, ChosenPriority, bChosenBlock, !Context || !Context->IsA<APawn>());
	}

	if (bIsUsingContext)
	{
		// Context controller could change throughout the game.
		if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
		{
			GameInstance->GetOnPawnControllerChanged().AddUniqueDynamic(this, &USMNodeInstance::OnContextPawnControllerChanged);
		}
	}
}

void USMNodeInstance::DisableInput()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}
	
	USMUtils::DisableInput(World, InputComponent);

	if (UGameInstance* GameInstance = World->GetGameInstance())
	{
		GameInstance->GetOnPawnControllerChanged().RemoveDynamic(this, &USMNodeInstance::OnContextPawnControllerChanged);
	}
}

void USMNodeInstance::OnContextPawnControllerChanged(APawn* Pawn, AController* NewController)
{
	USMUtils::HandlePawnControllerChange(Pawn, NewController, this, InputComponent, InputPriority, bBlockInput);
}

UTexture2D* USMNodeInstance::GetNodeIcon_Implementation() const
{
	return NodeIcon;
}

FVector2D USMNodeInstance::GetNodeIconSize_Implementation() const
{
	return NodeIconSize;
}

FLinearColor USMNodeInstance::GetNodeIconTintColor_Implementation() const
{
	return NodeIconTintColor;
}

void USMNodeInstance::SetDisplayName(FName NewDisplayName)
{
#if WITH_EDITORONLY_DATA
	NodeDescription.Name = NewDisplayName;
#endif
}

void USMNodeInstance::SetNodeColor(FLinearColor NewColor)
{
#if WITH_EDITORONLY_DATA
	NodeColor = NewColor;
#endif
}

void USMNodeInstance::SetUseCustomColor(bool bValue)
{
#if WITH_EDITORONLY_DATA
	bUseCustomColors = bValue;
#endif
}

void USMNodeInstance::SetUseCustomIcon(bool bValue)
{
#if WITH_EDITORONLY_DATA
	bDisplayCustomIcon = bValue;
#endif
}

void USMNodeInstance::SetVariableReadOnly(FName VariableName, bool bSetIsReadOnly)
{
#if WITH_EDITORONLY_DATA
	
	FSMGraphProperty* GraphPropertyOverride = FindExposedPropertyOverrideByName(VariableName);

	if (GraphPropertyOverride == nullptr)
	{
		FSMGraphProperty NewGraphProperty;
		NewGraphProperty.VariableName = VariableName;
		GraphPropertyOverride = &ExposedPropertyOverrides.Add_GetRef(NewGraphProperty);
	}

	check(GraphPropertyOverride);
	GraphPropertyOverride->bReadOnly = bSetIsReadOnly;
	
#endif
}

void USMNodeInstance::SetVariableHidden(FName VariableName, bool bSetHidden)
{
#if WITH_EDITORONLY_DATA
	
	FSMGraphProperty* GraphPropertyOverride = FindExposedPropertyOverrideByName(VariableName);

	if (GraphPropertyOverride == nullptr)
	{
		FSMGraphProperty NewGraphProperty;
		NewGraphProperty.VariableName = VariableName;
		GraphPropertyOverride = &ExposedPropertyOverrides.Add_GetRef(NewGraphProperty);
	}

	check(GraphPropertyOverride);
	GraphPropertyOverride->bHidden = bSetHidden;
	
#endif
}

bool USMNodeInstance::IsEditorExecution() const
{
#if WITH_EDITORONLY_DATA
	return bIsEditorExecution;
#else
	return false;
#endif
}

void USMNodeInstance::WithExecutionEnvironment(ESMExecutionEnvironment& ExecutionEnvironment)
{
	ExecutionEnvironment = IsEditorExecution() ? ESMExecutionEnvironment::EditorExecution : ESMExecutionEnvironment::GameExecution;
}

void USMNodeInstance::ResetVariables()
{
	check(OwningNode);

	if (USMInstance* SMInstance = GetStateMachineInstance())
	{
		if (UObject* Archetype = USMUtils::FindTemplateFromInstance(SMInstance, OwningNode->GetTemplateName()))
		{
			for (TFieldIterator<FProperty> Prop(GetClass()); Prop; ++Prop)
			{
				if (!Prop->ContainsInstancedObjectProperty() && !Prop->IsA<FDelegateProperty>()
					&& !Prop->IsA<FMulticastDelegateProperty>())
				{
					if (FStructProperty* StructProperty = CastField<FStructProperty>(*Prop))
					{
						if (StructProperty->Struct->IsChildOf(FSMGraphProperty_Base::StaticStruct())
							|| StructProperty->GetFName() == TEXT("TemplateGuid"))
						{
							// Graph properties don't need to be reset.
							continue;
						}
					}

					Prop->CopyCompleteValue_InContainer(this, Archetype);
				}
			}
		}
	}
}

#if WITH_EDITORONLY_DATA
FString USMNodeInstance::GetNodeDisplayName() const
{
	if(NodeDescription.Name.IsNone())
	{
		FString ClassName = GetClass()->GetName();
		ClassName.RemoveFromEnd(TEXT("_C"));
		return ClassName;
	}
	return NodeDescription.Name.ToString();
}

#endif

#if WITH_EDITOR

FSMGraphProperty* USMNodeInstance::FindExposedPropertyOverrideByName(const FName& VariableName) const
{
	return const_cast<FSMGraphProperty*>(ExposedPropertyOverrides.FindByPredicate([VariableName](const FSMGraphProperty& InGraphPropertyOverride)
	{
		return InGraphPropertyOverride.VariableName == VariableName;
	}));
}

void USMNodeInstance::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (IsNodePinChanging())
	{
		// Parent method only calls FCoreUObjectDelegates::OnObjectPropertyChanged which should be fine,
		// but we don't need to do any other work. This case is mostly for users to overload and handle.
		return;
	}

	/*
	 * Hack: Helpers for determining if an array property was changed in the editor. Ideally this would be under
	 * the editor module in SMGraphNode_Base's PostEditChangeChainProperty. That method doesn't appear to have
	 * a good way of finding the specific changes that are available here.
	 */
	if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove ||
		PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd) // Clear not needed.
	{
		ArrayPropertyChanged = PropertyChangedEvent.GetPropertyName();
		ArrayChangeType = PropertyChangedEvent.ChangeType;
		ArrayIndexChanged = PropertyChangedEvent.GetArrayIndex(ArrayPropertyChanged.ToString());
	}
	else
	{
		ResetArrayCheck();
	}
}

bool USMNodeInstance::WasArrayPropertyModified(const FName& PropertyName) const
{
	return ArrayPropertyChanged == PropertyName && (ArrayChangeType == EPropertyChangeType::ArrayRemove || ArrayChangeType == EPropertyChangeType::ArrayAdd) && ArrayIndexChanged >= 0;
}

bool USMNodeInstance::IsNodePinChanging() const
{
	return bIsNodePinChanging;
}

void USMNodeInstance::ResetArrayCheck()
{
	ArrayPropertyChanged = NAME_None;
	ArrayChangeType = EPropertyChangeType::Unspecified;
	ArrayIndexChanged = -1;
}
#endif