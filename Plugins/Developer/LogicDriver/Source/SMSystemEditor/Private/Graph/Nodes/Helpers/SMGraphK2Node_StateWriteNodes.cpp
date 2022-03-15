// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphK2Node_StateWriteNodes.h"
#include "K2Node_StructMemberSet.h"
#include "BlueprintNodeSpawner.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Blueprints/SMBlueprint.h"
#include "EdGraph/EdGraph.h"
#include "Graph/Schema/SMGraphK2Schema.h"
#include "Graph/SMTransitionGraph.h"
#include "Graph/SMStateGraph.h"
#include "Graph/SMConduitGraph.h"

#define LOCTEXT_NAMESPACE "SMStateMachineWriteNode"

USMGraphK2Node_StateWriteNode::USMGraphK2Node_StateWriteNode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateWriteNode::GetMenuCategory() const
{
	return FText::FromString(STATE_MACHINE_HELPER_CATEGORY);
}

bool USMGraphK2Node_StateWriteNode::IsActionFilteredOut(FBlueprintActionFilter const& Filter)
{
	for (UBlueprint* Blueprint : Filter.Context.Blueprints)
	{
		if (!Cast<USMBlueprint>(Blueprint))
		{
			return true;
		}
	}

	for (UEdGraph* Graph : Filter.Context.Graphs)
	{
		if (!Graph->IsA<USMTransitionGraph>() && !Graph->IsA<USMStateGraph>())
		{
			return true;
		}
	}

	return false;
}

void USMGraphK2Node_StateWriteNode::PostPlacedNewNode()
{
	if (USMGraphK2Node_RuntimeNodeContainer* Container = GetRuntimeContainer())
	{
		RuntimeNodeGuid = Container->GetRunTimeNodeChecked()->GetNodeGuid();
	}
}

void USMGraphK2Node_StateWriteNode::PostPasteNode()
{
	// Skip parent handling all together. Duplicating this type of node is fine.
	UK2Node::PostPasteNode();
	if (USMGraphK2Node_RuntimeNodeContainer* Container = GetRuntimeContainer())
	{
		RuntimeNodeGuid = Container->GetRunTimeNodeChecked()->GetNodeGuid();
	}
}

bool USMGraphK2Node_StateWriteNode::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	return Graph->IsA<USMTransitionGraph>() || Graph->IsA<USMStateGraph>();
}

UEdGraphPin* USMGraphK2Node_StateWriteNode::GetInputPin() const
{
	const int32 VarInputPin = INDEX_PIN_INPUT + 1;

	if (Pins.Num() <= VarInputPin || Pins[VarInputPin]->Direction == EGPD_Output)
	{
		return nullptr;
	}

	return Pins[VarInputPin];
}

USMGraphK2Node_StateWriteNode_CanEvaluate::USMGraphK2Node_StateWriteNode_CanEvaluate(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_StateWriteNode_CanEvaluate::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Execute);
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Boolean, TEXT("bCanEvaluate"));
	CreatePin(EGPD_Output, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Then);
}

bool USMGraphK2Node_StateWriteNode_CanEvaluate::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	return Graph->IsA<USMTransitionGraph>() || Graph->IsA<USMConduitGraph>();
}

bool USMGraphK2Node_StateWriteNode_CanEvaluate::IsActionFilteredOut(FBlueprintActionFilter const& Filter)
{
	for (UBlueprint* Blueprint : Filter.Context.Blueprints)
	{
		if (!Cast<USMBlueprint>(Blueprint))
		{
			return true;
		}
	}

	for (UEdGraph* Graph : Filter.Context.Graphs)
	{
		if (!Graph->IsA<USMTransitionGraph>() && !Graph->IsA<USMConduitGraph>())
		{
			return true;
		}
	}

	return false;
}

FText USMGraphK2Node_StateWriteNode_CanEvaluate::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("SetCanEvaluate", "Set Can Evaluate Conditionally");
}

FText USMGraphK2Node_StateWriteNode_CanEvaluate::GetTooltipText() const
{
	return LOCTEXT("CanEvaluateTooltip", "If the transition or conduit is allowed to evaluate. If false CanEnterTransition logic is never evaluated and this transition (or conduit) will never be taken.");
}

void USMGraphK2Node_StateWriteNode_CanEvaluate::GetMenuActions(
	FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();

	// Only list option to create this node if it is not already placed.
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}


USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent::USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Execute);
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Boolean, TEXT("bCanEvaluateFromEvent"));
	CreatePin(EGPD_Output, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Then);
}

bool USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	return Graph->IsA<USMTransitionGraph>();
}

FText USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("SetCanTransitionEvaluateFromEvent", "Set Can Transition Evaluate From Event");
}

FText USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent::GetTooltipText() const
{
	return LOCTEXT("CanEvaluateTooltipFromEvent", "If the transition is allowed to evaluate when called from an auto-bound event.");
}

void USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent::GetMenuActions(
	FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();

	// Only list option to create this node if it is not already placed.
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}


USMGraphK2Node_StateWriteNode_TransitionEventReturn::USMGraphK2Node_StateWriteNode_TransitionEventReturn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), bEventTriggersUpdate(true)
{
	bCanRenameNode = false;
}

void USMGraphK2Node_StateWriteNode_TransitionEventReturn::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Execute);
	UEdGraphPin* EvalPin = CreatePin(EGPD_Input, USMGraphK2Schema::PC_Boolean, TEXT("bCanEnterTransitionFromEvent"));
	EvalPin->DefaultValue = "true";
	EvalPin->PinFriendlyName = FText::FromString(TEXT("CanEnterTransition"));
}

void USMGraphK2Node_StateWriteNode_TransitionEventReturn::GetMenuActions(
	FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	GetMenuActions_Internal(ActionRegistrar);
}

bool USMGraphK2Node_StateWriteNode_TransitionEventReturn::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	return Graph->IsA<USMTransitionGraph>();
}

bool USMGraphK2Node_StateWriteNode_TransitionEventReturn::IsActionFilteredOut(FBlueprintActionFilter const& Filter)
{
	for (UBlueprint* Blueprint : Filter.Context.Blueprints)
	{
		if (!Cast<USMBlueprint>(Blueprint))
		{
			return true;
		}
	}

	for (UEdGraph* Graph : Filter.Context.Graphs)
	{
		if (!FSMBlueprintEditorUtils::IsGraphConfiguredForTransitionEvents(Graph))
		{
			return true;
		}
	}

	return false;
}

FText USMGraphK2Node_StateWriteNode_TransitionEventReturn::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString("Event Trigger Result Node");
}

void USMGraphK2Node_StateWriteNode_TransitionEventReturn::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
                                                                           USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	// Manually add an evaluation pin to signal to the transition it is evaluating.
	UEdGraphPin* EvalPin = CreatePin(EGPD_Input, USMGraphK2Schema::PC_Boolean, TEXT("bIsEvaluating"));
	EvalPin->DefaultValue = "true";
	
	UK2Node_StructMemberSet* MemberSet = CompilerContext.CreateSetter(this, NodeProperty->GetFName(), RuntimeNodeContainer->GetRunTimeNodeType());

	UEdGraphPin* ThenPin = USMGraphK2Schema::GetThenPin(MemberSet);
	
	if(bEventTriggersUpdate)
	{
		UFunction* Function = USMInstance::StaticClass()->FindFunctionByName("Internal_Update"); // Protected function.
		check(Function);
		UK2Node_CallFunction* UpdateFunctionNode = FSMBlueprintEditorUtils::CreateFunctionCall(CompilerContext.ConsolidatedEventGraph, Function);

		GetSchema()->TryCreateConnection(ThenPin, UpdateFunctionNode->GetExecPin());
		ThenPin = UpdateFunctionNode->GetThenPin();
	}

	// Add special cleanup handling.
	{
		UFunction* CleanupFunction = USMInstance::StaticClass()->FindFunctionByName(TEXT("Internal_EventCleanup")); // Protected function.
		check(CleanupFunction);
		UK2Node_CallFunction* CleanupFunctionNode = CreateFunctionCallWithGuidInput(CleanupFunction, CompilerContext, RuntimeNodeContainer, NodeProperty, "NodeGuid");

		GetSchema()->TryCreateConnection(ThenPin, CleanupFunctionNode->GetExecPin());
	}
}

#undef LOCTEXT_NAMESPACE
