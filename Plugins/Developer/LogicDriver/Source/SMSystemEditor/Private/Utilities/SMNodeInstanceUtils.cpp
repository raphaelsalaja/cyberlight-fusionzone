// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

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

TSharedPtr<SWidget> FSMNodeInstanceUtils::CreateNodeClassWidgetDisplay(USMNodeInstance* NodeInstance)
{
	const FSMNodeDescription& Description = NodeInstance->GetNodeDescription();
	const FString Name = Description.Name.IsNone() ? NodeInstance->GetClass()->GetName() : Description.Name.ToString();
	const FText TextFormat = FText::FromString(Description.Description.IsEmpty() ? "{0}" : "{0} - {1}");
	TSharedPtr<SWidget> Result = SNew(STextBlock)
		.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Info")
		.Text(FText::Format(TextFormat, FText::FromString(Name), Description.Description));
	return Result;
}

const FGuid& FSMNodeInstanceUtils::SetGraphPropertyFromProperty(FSMGraphProperty_Base& GraphProperty,
	FProperty* Property, USMNodeInstance* NodeInstance, int32 Index, bool bSetGuid, bool bUseTemplateInGuid)
{
	check(NodeInstance)
	
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	
	GraphProperty.bIsInArray = Property->IsA<FArrayProperty>() || Property->GetOwnerProperty()->IsA<FArrayProperty>();
	
	GraphProperty.VariableName = Property->GetFName();
	GraphProperty.MemberReference.SetFromField<FProperty>(Property, false);
	K2Schema->ConvertPropertyToPinType(Property, GraphProperty.VariableType);

	// TemplateGuid is used to calculate final guid.
	GraphProperty.SetTemplateGuid(NodeInstance->GetTemplateGuid());

	if(!bSetGuid)
	{
		return GraphProperty.GetGuid();
	}
	
	if (GraphProperty.MemberReference.GetMemberGuid().IsValid())
	{
		// Blueprint variable
		return GraphProperty.SetGuid(GraphProperty.MemberReference.GetMemberGuid(), Index, bUseTemplateInGuid);
	}

	//  Native variable.
	const FString SearchString = GraphProperty.MemberReference.GetReferenceSearchString(Property->GetOwnerClass());
	return GraphProperty.SetGuid(USMUtils::PathToGuid(SearchString), Index, bUseTemplateInGuid);
}

bool FSMNodeInstanceUtils::IsPropertyExposedToGraphNode(FProperty* Property)
{
	return !Property->HasAnyPropertyFlags(CPF_DisableEditOnInstance) && Property->HasAllPropertyFlags(CPF_BlueprintVisible) &&
		!Property->HasMetaData("HideOnNode");
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

	if(FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
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
			// Check if instead of the parent we are connected right to the with exection node.
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
			return InGraph->GetFName() == USMNodeInstance::GetConstructonScriptFunctionName();
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
