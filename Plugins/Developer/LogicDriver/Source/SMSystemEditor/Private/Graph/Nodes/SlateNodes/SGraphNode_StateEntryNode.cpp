// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SGraphNode_StateEntryNode.h"
#include "SLevelOfDetailBranchNode.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "SCommentBubble.h"
#include "SGraphPin.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_StateEntryNode.h"


void SGraphNode_StateEntryNode::Construct(const FArguments& InArgs, USMGraphK2Node_StateEntryNode* InNode)
{
	this->GraphNode = InNode;

	this->SetCursor(EMouseCursor::CardinalCross);

	this->UpdateGraphNode();
}

void SGraphNode_StateEntryNode::GetNodeInfoPopups(FNodeInfoContext* Context, TArray<FGraphInformationPopupInfo>& Popups) const
{

}

FSlateColor SGraphNode_StateEntryNode::GetBorderBackgroundColor() const
{
	const FLinearColor InactiveStateColor(0.08f, 0.08f, 0.08f);

	return InactiveStateColor;
}

FText SGraphNode_StateEntryNode::GetPreviewCornerText() const
{
	return NSLOCTEXT("SGraphNodeStateEntry", "CornerTextDescription", "Entry point for state machine");
}
