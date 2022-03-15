// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SGraphNode.h"


class SGraphPin;
class USMGraphNode_StateMachineEntryNode;

class SGraphNode_StateMachineEntryNode : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_StateMachineEntryNode) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, USMGraphNode_StateMachineEntryNode* InNode);

	// SNodePanel::SNode interface
	virtual void GetNodeInfoPopups(FNodeInfoContext* Context, TArray<FGraphInformationPopupInfo>& Popups) const override;
	// End of SNodePanel::SNode interface

	// SGraphNode interface
	virtual void UpdateGraphNode() override;
	virtual void AddPin(const TSharedRef<SGraphPin>& PinToAdd) override;

	// End of SGraphNode interface


protected:
	FSlateColor GetBorderBackgroundColor() const;

	FText GetPreviewCornerText() const;
};
