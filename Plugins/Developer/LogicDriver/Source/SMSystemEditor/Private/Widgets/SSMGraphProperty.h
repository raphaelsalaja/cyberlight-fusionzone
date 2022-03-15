// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/SCompoundWidget.h"
#include "SKismetLinearExpression.h"
#include "SMNodeWidgetInfo.h"
#include "SGraphPin.h"


class SMSYSTEMEDITOR_API SSMGraphProperty_Base : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SSMGraphProperty_Base)
		: _GraphNode(nullptr)
	{
	}

	/** Horizontal alignment of content in the area allotted to the SBox by its parent */
	SLATE_ARGUMENT(class UEdGraphNode*, GraphNode)
	SLATE_END_ARGS()
	
	SSMGraphProperty_Base();

	virtual void Finalize() {}
	virtual void Refresh() {}
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;

protected:
	TSharedPtr<SGraphNode> FindParentGraphNode() const;
	UEdGraphPin* FindResultPin() const;
	
protected:
	TWeakObjectPtr<UEdGraphNode> GraphNode;
};

class SSMGraphProperty : public SSMGraphProperty_Base
{
	SLATE_BEGIN_ARGS(SSMGraphProperty)
		: _GraphNode(nullptr)
		, _WidgetInfo(nullptr)
	{
	}

	/** Horizontal alignment of content in the area allotted to the SBox by its parent */
	SLATE_ARGUMENT(class UEdGraphNode*, GraphNode)
	SLATE_ARGUMENT(const FSMTextDisplayWidgetInfo*, WidgetInfo)
	SLATE_END_ARGS()
	
	SSMGraphProperty();
	virtual ~SSMGraphProperty() override;
	
	void Construct(const FArguments& InArgs);
	virtual void Finalize() override;

	virtual FReply OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual void OnDragLeave(const FDragDropEvent& DragDropEvent) override;
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;

	virtual void Refresh() override;
	
protected:
	/** Validates that the drag drop event is allowed for this class. */
	bool IsDragDropValid(const FDragDropEvent& DragDropEvent) const;

	FSlateColor GetBackgroundColor() const;
	void HandleExpressionChange(class UEdGraphPin* ResultPin);

protected:
	TSharedPtr<SKismetLinearExpression> ExpressionWidget;
	TSharedPtr<STextBlock> TextBlockWidget;
	TSharedPtr<SGraphPin> InputPin;
	TSharedPtr<SHorizontalBox> ValueDisplay;
	FSMTextDisplayWidgetInfo WidgetInfo;
	bool bIsValidDragDrop;
};
