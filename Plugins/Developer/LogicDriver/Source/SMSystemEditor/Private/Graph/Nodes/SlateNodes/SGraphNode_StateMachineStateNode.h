// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SGraphNode_StateNode.h"


class SGraphNode_StateMachineStateNode : public SGraphNode_StateNode
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_StateMachineStateNode) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, USMGraphNode_StateNodeBase* InNode);

	// SGraphNode interface
	virtual TArray<FOverlayWidgetInfo> GetOverlayWidgets(bool bSelected, const FVector2D& WidgetSize) const override;
	// End of SGraphNode interface

protected:
	// SGraphNode_StateNode
	virtual const FSlateBrush* GetNameIcon() const override;
	virtual TSharedRef<SVerticalBox> BuildComplexTooltip() override;
	virtual UEdGraph* GetGraphToUseForTooltip() const override;
	// ~SGraphNode_StateNode

protected:
	TSharedPtr<SWidget> IntermediateWidget;
	TSharedPtr<SWidget> WaitForEndStateWidget;
};