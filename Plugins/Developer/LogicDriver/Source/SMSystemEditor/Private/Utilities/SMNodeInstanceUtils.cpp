// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#include "Utilities/SMNodeInstanceUtils.h"
#include "Graph/Nodes/SMGraphNode_Base.h"
#include "Configuration/SMEditorStyle.h"
#include "SMBlueprintEditorUtils.h"

#include "SMUtils.h"

#include "IAssetTools.h"
#include "K2Node_FunctionEntry.h"
#include "K2Node_CallFunction.h"
#include "Widgets/Text/STextBlock.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "EdGraphSchema_K2.h"

#define LOCTEXT_NAMESPACE "SMNodeInstanceUtils"

bool FSMNodeInstanceUtils::IsWidgetChildOf(TSharedPtr<SWidget> Parent, TSharedPtr<SWidget> PossibleChild)
{
	FChildren* Children = Parent->GetChildren();
	for (int32 i = 0; i < Children->Num(); ++i)
	{
		TSharedRef<SWidget> Child = Children->GetChildAt(i);
		if (Child == PossibleChild)
		{
			return true;
		}
		return IsWidgetChildOf(Child, PossibleChild);
	}

	return false;
}

FText FSMNodeInstanceUtils::CreateNodeClassTextSummary(const USMNodeInstance* NodeInstance)
{
	check(NodeInstance);
	
	const FSMNodeDescription& Description = NodeInstance->GetNodeDescription();

	FString ClassName = NodeInstance->GetClass()->GetName();
	ClassName.RemoveFromEnd(TEXT("_C"));
	const FString Name = Description.Name.IsNone() ? ClassName : Description.Name.ToString();
	
	const FText TextFormat = FText::FromString(Description.Description.IsEmpty() ? "{0}" : "{0} - {1}");
	return FText::Format(TextFormat, FText::FromString(Name), Description.Description);
}

TSharedPtr<SWidget> FSMNodeInstanceUtils::CreateNodeClassWidgetDisplay(const USMNodeInstance* NodeInstance)
{
	check(NodeInstance);
	
	const FSMNodeDescription& Description = NodeInstance->GetNodeDescription();

	FString ClassName = NodeInstance->GetClass()->GetName();
	ClassName.RemoveFromEnd(TEXT("_C"));
	const FString Name = Description.Name.IsNone() ? ClassName : Description.Name.ToString();
	
	const FText TextFormat = FText::FromString(Description.Description.IsEmpty() ? "{0}" : "{0} - {1}");
	const FText NodeClassSummaryText = CreateNodeClassTextSummary(NodeInstance);
	
	return SNew(SOverlay)
	+ SOverlay::Slot()
	[
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("Graph.Node.TitleBackground"))
		.BorderBackgroundColor(FLinearColor(0.4f, 0.4f, 0.4f, 0.4f))
	]
	+ SOverlay::Slot()
	.VAlign(VAlign_Center)
	.Padding(FMargin(6,4))
	[
		SNew(STextBlock)
			.Text(NodeClassSummaryText)
			.TextStyle(FEditorStyle::Get(), TEXT("NormalText"))
			.ColorAndOpacity(FLinearColor::White)
	];
}

const FGuid& FSMNodeInstanceUtils::SetGraphPropertyFromProperty(FSMGraphProperty_Base& GraphProperty,
	FProperty* Property, USMNodeInstance* NodeInstance, int32 Index, bool bSetGuid, bool bUseTemplateInGuid, bool bUseTempNativeGuid)
{
	check(NodeInstance)
	check(Property);
	
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	
	GraphProperty.bIsInArray = Property->IsA<FArrayProperty>() || Property->GetOwnerProperty()->IsA<FArrayProperty>();
	
	GraphProperty.VariableName = Property->GetFName();
	GraphProperty.MemberReference.SetFromField<FProperty>(Property, false);
	K2Schema->ConvertPropertyToPinType(Property, GraphProperty.VariableType);

	// TemplateGuid is used to calculate final guid.
	GraphProperty.SetTemplateGuid(NodeInstance->GetTemplateGuid());

	if (!bSetGuid)
	{
		return GraphProperty.GetGuid();
	}
	
	if (GraphProperty.MemberReference.GetMemberGuid().IsValid())
	{
		// Blueprint variable
		return GraphProperty.SetGuid(GraphProperty.MemberReference.GetMemberGuid(), Index, bUseTemplateInGuid);
	}

	// Search string Taken from FMemberReference::GetReferenceSearchString of engine CL 17816129.
	auto GetTempNativeSearchString = [&] (UClass* InFieldOwner)
	{
		const FGuid MemberGuid = GraphProperty.MemberReference.GetMemberGuid();
		const FName MemberName = GraphProperty.MemberReference.GetMemberName();
		if (!GraphProperty.MemberReference.IsLocalScope())
		{
			if (InFieldOwner)
			{
				if (MemberGuid.IsValid())
				{
					return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && MemberGuid(A=%i && B=%i && C=%i && D=%i)) || Name=\"(%s)\") || Pins(Binding=\"%s\") || Binding=\"%s\""), *MemberName.ToString(), MemberGuid.A, MemberGuid.B, MemberGuid.C, MemberGuid.D, *MemberName.ToString(), *MemberName.ToString(), *MemberName.ToString());
				}
				else
				{
					FString ExportMemberParentName = InFieldOwner->GetClass()->GetName();
					ExportMemberParentName.AppendChar('\'');
					ExportMemberParentName += InFieldOwner->GetAuthoritativeClass()->GetPathName();
					ExportMemberParentName.AppendChar('\'');

					return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && (MemberParent=\"%s\" || bSelfContext=true) ) || Name=\"(%s)\") || Pins(Binding=\"%s\") || Binding=\"%s\""), *MemberName.ToString(), *ExportMemberParentName, *MemberName.ToString(), *MemberName.ToString(), *MemberName.ToString());
				}
			}
			else if (MemberGuid.IsValid())
			{
				return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && MemberGuid(A=%i && B=%i && C=%i && D=%i)) || Name=\"(%s)\") || Pins(Binding=\"%s\") || Binding=\"%s\""), *MemberName.ToString(), MemberGuid.A, MemberGuid.B, MemberGuid.C, MemberGuid.D, *MemberName.ToString(), *MemberName.ToString(), *MemberName.ToString());
			}
			else
			{
				return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\") || Name=\"(%s)\") || Pins(Binding=\"%s\") || Binding=\"%s\""), *MemberName.ToString(), *MemberName.ToString(), *MemberName.ToString(), *MemberName.ToString());
			}
		}
		else
		{
			return FString::Printf(TEXT("Nodes(VariableReference((MemberName=+\"%s\" && MemberScope=+\"%s\"))) || Binding=\"%s\""), *MemberName.ToString(), *GraphProperty.MemberReference.GetMemberScopeName(), *MemberName.ToString());
		}
	};

	// Previous search string, from 4.27 & below. This is what is used currently.
	auto GetNativeSearchString = [&](UClass* InFieldOwner)
	{
		const FGuid MemberGuid = GraphProperty.MemberReference.GetMemberGuid();
		const FName MemberName = GraphProperty.MemberReference.GetMemberName();
		if (!GraphProperty.MemberReference.IsLocalScope())
		{
			if (InFieldOwner)
			{
				if (MemberGuid.IsValid())
				{
					return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && MemberGuid(A=%i && B=%i && C=%i && D=%i) ))"), *MemberName.ToString(), MemberGuid.A, MemberGuid.B, MemberGuid.C, MemberGuid.D);
				}
				else
				{
					FString ExportMemberParentName = InFieldOwner->GetClass()->GetName();
					ExportMemberParentName.AppendChar('\'');
					ExportMemberParentName += InFieldOwner->GetAuthoritativeClass()->GetPathName();
					ExportMemberParentName.AppendChar('\'');

					return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && (MemberParent=\"%s\" || bSelfContext=true) ))"), *MemberName.ToString(), *ExportMemberParentName);
				}
			}
			else if (MemberGuid.IsValid())
			{
				return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && MemberGuid(A=%i && B=%i && C=%i && D=%i)))"), *MemberName.ToString(), MemberGuid.A, MemberGuid.B, MemberGuid.C, MemberGuid.D);
			}
			else
			{
				return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\"))"), *MemberName.ToString());
			}
		}
		else
		{
			return FString::Printf(TEXT("Nodes(VariableReference(MemberName=+\"%s\" && MemberScope=+\"%s\"))"), *MemberName.ToString(), *GraphProperty.MemberReference.GetMemberScopeName());
		}
	};
	
	//  Native variable.
	const FString SearchString = bUseTempNativeGuid ? GetTempNativeSearchString(Property->GetOwnerClass()) : GetNativeSearchString(Property->GetOwnerClass());
	return GraphProperty.SetGuid(USMUtils::PathToGuid(SearchString), Index, bUseTemplateInGuid);
}

bool FSMNodeInstanceUtils::IsPropertyExposedToGraphNode(const FProperty* Property)
{
	if (!Property)
	{
		return false;
	}
	
	return !Property->HasAnyPropertyFlags(CPF_DisableEditOnInstance) && Property->HasAllPropertyFlags(CPF_BlueprintVisible) &&
		!Property->HasMetaData("HideOnNode");
}

bool FSMNodeInstanceUtils::IsPropertyHandleExposedContainer(const TSharedPtr<IPropertyHandle>& InHandle)
{
	// TODO Containers: If supporting maps or sets this needs to be updated.
	check(InHandle.IsValid());
	return InHandle->AsArray().IsValid() && IsPropertyExposedToGraphNode(InHandle->GetProperty());
}

bool FSMNodeInstanceUtils::ShouldHideNodeStackPropertyFromDetails(const FProperty* InProperty)
{
	const bool bHidden = InProperty->HasMetaData("InstancedTemplate") || InProperty->HasMetaData("NodeBaseOnly");
	return bHidden;
}

bool FSMNodeInstanceUtils::HideEmptyCategoryHandles(const TSharedPtr<IPropertyHandle>& InHandle, ENodeStackType NodeStackType)
{
	if (InHandle.IsValid())
	{
		if (const FProperty* Property = InHandle->GetProperty())
		{
			bool bHidden = false;
			if (NodeStackType != ENodeStackType::None)
			{
				// Stacks should always hide if this property is exposed since a child builder displays that.
				bHidden = ShouldHideNodeStackPropertyFromDetails(Property) ||
					(NodeStackType == ENodeStackType::StateStack && IsPropertyExposedToGraphNode(Property));

				if (!bHidden && NodeStackType == ENodeStackType::TransitionStack)
				{
					const FName PropertyName = Property->GetFName();
					if (PropertyName == TEXT("bUseCustomColors") || PropertyName == TEXT("NodeColor"))
					{
						// State stack allows these to be customized, but they aren't relevant to the transition stack.
						InHandle->MarkHiddenByCustomization();
						bHidden = true;
					}
				}
			}
			else
			{
				// Base states display the properties in their normal categories unless they are containers.
				bHidden = IsPropertyHandleExposedContainer(InHandle);
			}
			return bHidden;
		}

		uint32 HandleNumChildren;
		InHandle->GetNumChildren(HandleNumChildren);

		bool bAreAllChildrenEmpty = true;
		for (uint32 CIdx = 0; CIdx < HandleNumChildren; ++CIdx)
		{
			TSharedPtr<IPropertyHandle> ChildProperty = InHandle->GetChildHandle(CIdx);
			const bool bIsChildEmpty = HideEmptyCategoryHandles(ChildProperty, NodeStackType);
			if (!bIsChildEmpty)
			{
				bAreAllChildrenEmpty = false;
				continue;
			}

			ChildProperty->MarkHiddenByCustomization();
		}

		if (bAreAllChildrenEmpty)
		{
			InHandle->MarkHiddenByCustomization();
		}

		return bAreAllChildrenEmpty;
	}

	return true;
}

FStructProperty* FSMNodeInstanceUtils::IsPropertyGraphProperty(FProperty* Property)
{
	if (Property->HasMetaData("HideOnNode"))
	{
		// Assume this node never wants to be displayed.
		return nullptr;
	}
	
	if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
	{
		if (StructProperty->Struct->IsChildOf(FSMGraphProperty_Base_Runtime::StaticStruct()))
		{
			return StructProperty;
		}
	}

	if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
	{
		if (FStructProperty* StructProperty = CastField<FStructProperty>(ArrayProperty->Inner))
		{
			if (StructProperty->Struct->IsChildOf(FSMGraphProperty_Base_Runtime::StaticStruct()))
			{
				return StructProperty;
			}
		}
	}

	return nullptr;
}

bool FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(TSubclassOf<USMNodeInstance> NodeClass, ESMExecutionEnvironment ExecutionType)
{
	if (!NodeClass)
	{
		return false;
	}

	const bool bIsBaseClass = FSMNodeClassRule::IsBaseClass(NodeClass);
	if (bIsBaseClass)
	{
		// Base classes have no construction script logic.
		return false;
	}

	auto DoesGraphHaveUserLogic = [ExecutionType](UEdGraph* InGraph, bool& bOutHasParentCall) -> bool
	{
		UK2Node_FunctionEntry* EntryNode = FSMBlueprintEditorUtils::GetFirstNodeOfClassNested<UK2Node_FunctionEntry>(InGraph);
		if (!ensure(EntryNode))
		{
			return false;
		}

		UEdGraphPin* ThenPin = EntryNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);
		if (ThenPin->LinkedTo.Num() == 0)
		{
			// No connections, no logic.
			return false;
		}

		UK2Node_CallFunction* ExecutionEnvironmentFunction = nullptr;
		
		UK2Node_CallParentFunction* ParentCall = Cast<UK2Node_CallParentFunction>(ThenPin->LinkedTo[0]->GetOwningNode());
		if (ParentCall == nullptr)
		{
			// Check if instead of the parent we are connected right to the with execution node.
			ExecutionEnvironmentFunction = Cast<UK2Node_CallFunction>(ThenPin->LinkedTo[0]->GetOwningNode());
			if (ExecutionEnvironmentFunction == nullptr)
			{
				// This isn't a default layout, assume user logic.
				return true;
			}
		}
		else
		{
			bOutHasParentCall = true;
		}
		
		if (ParentCall && ParentCall->GetThenPin()->LinkedTo.Num() == 0)
		{
			// No connections, no logic.
			return false;
		}

		if (ExecutionEnvironmentFunction == nullptr && ParentCall != nullptr)
		{
			ExecutionEnvironmentFunction = Cast<UK2Node_CallFunction>(ParentCall->GetThenPin()->LinkedTo[0]->GetOwningNode());
		}
		
		if (!ExecutionEnvironmentFunction || ExecutionEnvironmentFunction->GetFunctionName() != GET_FUNCTION_NAME_CHECKED(USMNodeInstance, WithExecutionEnvironment))
		{
			// Unexpected type or different function, assume user logic.
			return true;
		}

		if (ExecutionType == ESMExecutionEnvironment::EditorExecution)
		{
			if (UEdGraphPin* EditorExecutionPin = ExecutionEnvironmentFunction->FindPin(TEXT("EditorExecution"), EGPD_Output))
			{
				if (EditorExecutionPin->LinkedTo.Num() > 0)
				{
					// Editor output pin is connected somewhere, there is user logic.
					return true;
				}
			}
		}
		else if (ExecutionType == ESMExecutionEnvironment::GameExecution)
		{
			if (UEdGraphPin* GameExecutionPin = ExecutionEnvironmentFunction->FindPin(TEXT("GameExecution"), EGPD_Output))
			{
				if (GameExecutionPin->LinkedTo.Num() > 0)
				{
					// Game output pin is connected somewhere, there is user logic.
					return true;
				}
			}
		}
		
		return false;
	};
	
	if (USMNodeBlueprint* NodeBlueprint = Cast<USMNodeBlueprint>(UBlueprint::GetBlueprintFromClass(NodeClass)))
	{
		if (TObjectPtr<UEdGraph>* ConstructionScriptGraph = NodeBlueprint->FunctionGraphs.FindByPredicate([] (UEdGraph* InGraph)
		{
			return InGraph->GetFName() == USMNodeInstance::GetConstructionScriptFunctionName();
		}))
		{
			bool bHasParentCall = false;
			const bool bHasGraphLogic = DoesGraphHaveUserLogic(*ConstructionScriptGraph, bHasParentCall);
			if (bHasGraphLogic)
			{
				return true;
			}

			// No graph logic, check parents.
			if (bHasParentCall)
			{
				return DoesNodeClassPossiblyHaveConstructionScripts(NodeClass->GetSuperClass(), ExecutionType);
			}

			return false;
		}
	}

	// No blueprint or graph found... probably a native class.
	if (USMNodeInstance* NodeDefaults = Cast<USMNodeInstance>(NodeClass->GetDefaultObject()))
	{
		return !NodeDefaults->ShouldSkipNativeEditorConstructionScripts();
	}

	return true;
}

#undef LOCTEXT_NAMESPACE
