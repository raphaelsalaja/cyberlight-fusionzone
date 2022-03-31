// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "SGraphNode_BaseNode.h"

#include "Styling/SlateColor.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "SNodePanel.h"

class SToolTip;
class USMGraphNode_TransitionEdge;

class SSMTransitionShorthandView : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSMTransitionShorthandView) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, USMGraphNode_TransitionEdge* InTransitionEdge);

private:
	USMGraphNode_TransitionEdge* TransitionEdge = nullptr;
};

class SGraphNode_TransitionEdge : public SGraphNode_BaseNode
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_TransitionEdge){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, USMGraphNode_TransitionEdge* InNode);
	// SGraphNode interface
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	virtual void MoveTo(const FVector2D& NewPosition, FNodeSet& NodeFilter, bool bMarkDirty = true) override;
	virtual bool RequiresSecondPassLayout() const override;
	virtual void PerformSecondPassLayout(const TMap< UObject*, TSharedRef<SNode> >& NodeToWidgetLookup) const override;
	virtual void UpdateGraphNode() override;
	virtual TSharedPtr<SToolTip> GetComplexTooltip() override;
	virtual const FSlateBrush* GetShadowBrush(bool bSelected) const override;
	// ~SGraphNode interface

	// SWidget interface
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	// End of SWidget interface

	// Calculate position for multiple nodes to be placed between a start and end point, by providing this nodes index and max expected nodes 
	void PositionBetweenTwoNodesWithOffset(const FGeometry& StartGeom, const FGeometry& EndGeom, int32 NodeIndex, int32 MaxNodes) const;

protected:
	FSlateColor GetEdgeColor(int32 InIndex) const;
	const FSlateBrush* GetIcon(int32 InIndex) const;
	EVisibility GetIconVisibility() const;
	FText GetPriorityAsText() const;
	EVisibility GetPriorityVisibility() const;

	/** Our transition's desired size, accounting for extra room for priority display. */
	int32 GetDesiredYOffset() const;
};
