// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SSMGraphProperty.h"
#include "SSMEditableTextBlock.h"
#include "SMTextGraphProperty.h"


class SSMTextProperty : public SSMGraphProperty_Base
{
	SLATE_BEGIN_ARGS(SSMTextProperty)
		: _GraphNode(nullptr)
		, _WidgetInfo(nullptr)
	{
	}

	/** Horizontal alignment of content in the area allotted to the SBox by its parent */
	SLATE_ARGUMENT(class UEdGraphNode*, GraphNode)
	SLATE_ARGUMENT(const FSMTextNodeWidgetInfo*, WidgetInfo)
	SLATE_END_ARGS()
	
	SSMTextProperty();

	void Construct(const FArguments& InArgs);
	virtual void Finalize() override;

	virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;
	
	void ToggleTextEdit(bool bValue);
protected:
	FSMTextNodeWidgetInfo WidgetInfo;
	TSharedPtr<SSMEditableTextBlock> InlineEditableTextBody;
	TSharedPtr<SHorizontalBox> HorizontalBox;
	
	bool IsReadOnly() const;
	FText GetTextBody() const;
	void OnBodyTextCommited(const FText& InText, ETextCommit::Type CommitInfo);
	float GetWrapText() const;
};
