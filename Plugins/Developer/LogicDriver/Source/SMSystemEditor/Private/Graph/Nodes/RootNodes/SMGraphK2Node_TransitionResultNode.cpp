// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphK2Node_TransitionResultNode.h"
#include "EdGraph/EdGraph.h"
#include "GraphEditorSettings.h"
#include "Graph/Schema/SMTransitionGraphSchema.h"
#include "Graph/SMTransitionGraph.h"

#define LOCTEXT_NAMESPACE "SMTransitionResultNode"

const FName USMGraphK2Node_TransitionResultNode::EvalPinName("bCanEnterTransition");

USMGraphK2Node_TransitionResultNode::USMGraphK2Node_TransitionResultNode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TransitionNode.GenerateNewNodeGuidIfNotSet();
}

void USMGraphK2Node_TransitionResultNode::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, USMTransitionGraphSchema::PC_Boolean, EvalPinName);
}

FLinearColor USMGraphK2Node_TransitionResultNode::GetNodeTitleColor() const
{
	return GetDefault<UGraphEditorSettings>()->ResultNodeTitleColor;
}

FText USMGraphK2Node_TransitionResultNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("TransitionResult", "Conditional Result");
}

FText USMGraphK2Node_TransitionResultNode::GetTooltipText() const
{
	return LOCTEXT("TransitionToolTip", "This node is evaluated to determine if the state can transition.");
}

bool USMGraphK2Node_TransitionResultNode::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	return Graph->IsA<USMTransitionGraph>();
}

UEdGraphPin* USMGraphK2Node_TransitionResultNode::GetTransitionEvaluationPin() const
{
	return FindPin(EvalPinName, EGPD_Input);
}

#undef LOCTEXT_NAMESPACE
