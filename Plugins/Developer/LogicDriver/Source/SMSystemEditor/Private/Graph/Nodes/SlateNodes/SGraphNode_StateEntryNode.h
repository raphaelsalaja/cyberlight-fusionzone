// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SGraphNode.h"


class USMGraphK2Node_StateEntryNode;
class SGraphPin;

class SGraphNode_StateEntryNode : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_StateEntryNode) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, USMGraphK2Node_StateEntryNode* InNode);

	// SNodePanel::SNode interface
	virtual void GetNodeInfoPopups(FNodeInfoContext* Context, TArray<FGraphInformationPopupInfo>& Popups) const override;
	// End of SNodePanel::SNode interface

protected:
	FSlateColor GetBorderBackgroundColor() const;

	FText GetPreviewCornerText() const;
};
