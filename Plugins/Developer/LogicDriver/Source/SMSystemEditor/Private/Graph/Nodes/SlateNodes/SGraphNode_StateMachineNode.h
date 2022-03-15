// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "KismetNodes/SGraphNodeK2Composite.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"


class SGraphNode_StateMachineNode : public SGraphNodeK2Composite
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_StateMachineNode) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, class USMGraphK2Node_StateMachineNode* InNode);

protected:
	// SGraphNodeK2Composite interface
	virtual UEdGraph* GetInnerGraph() const override;
	// End of SGraphNodeK2Composite interface
};
