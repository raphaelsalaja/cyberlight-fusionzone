// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SGraphNode_TransitionEdge.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Images/SImage.h"
#include "SGraphPanel.h"
#include "SGraphPreviewer.h"
#include "Configuration/SMEditorStyle.h"
#include "SKismetLinearExpression.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/ConnectionDrawing/SMGraphConnectionDrawingPolicy.h"
#include "Graph/SMTransitionGraph.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Utilities/SMNodeInstanceUtils.h"
#include "Widgets/SToolTip.h"


#define LOCTEXT_NAMESPACE "SMGraphEdge"

void SGraphNode_TransitionEdge::Construct(const FArguments& InArgs, USMGraphNode_TransitionEdge* InNode)
{
	SGraphNode_BaseNode::Construct(SGraphNode_BaseNode::FArguments(), InNode);
	CastChecked<USMGraphNode_Base>(GraphNode)->OnWidgetConstruct();
	UpdateGraphNode();
}

void SGraphNode_TransitionEdge::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
	const float InDeltaTime)
{
	SGraphNode::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	USMGraphNode_TransitionEdge* Node = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);
	Node->UpdateTime(InDeltaTime);
}

void SGraphNode_TransitionEdge::MoveTo(const FVector2D& NewPosition, FNodeSet& NodeFilter)
{
	// Position set by states.
}

bool SGraphNode_TransitionEdge::RequiresSecondPassLayout() const
{
	return true;
}

void SGraphNode_TransitionEdge::PerformSecondPassLayout(const TMap< UObject*, TSharedRef<SNode> >& NodeToWidgetLookup) const
{
	USMGraphNode_TransitionEdge* EdgeNode = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);

	FGeometry StartGeom;
	FGeometry EndGeom;

	int32 ThisIndex = 0;
	int32 TransitionCount = 1;
	
	USMGraphNode_StateNodeBase* FromState = EdgeNode->GetFromState();
	USMGraphNode_StateNodeBase* ToState = EdgeNode->GetToState();
	if (FromState && ToState)
	{
		const TSharedRef<SNode>* pFromWidget = NodeToWidgetLookup.Find(FromState);
		const TSharedRef<SNode>* pToWidget = NodeToWidgetLookup.Find(ToState);
		if (pFromWidget && pToWidget)
		{
			const TSharedRef<SNode>& FromWidget = *pFromWidget;
			const TSharedRef<SNode>& ToWidget = *pToWidget;

			StartGeom = FGeometry(FVector2D(FromState->NodePosX, FromState->NodePosY), FVector2D::ZeroVector, FromWidget->GetDesiredSize(), 1.0f);
			EndGeom = FGeometry(FVector2D(ToState->NodePosX, ToState->NodePosY), FVector2D::ZeroVector, ToWidget->GetDesiredSize(), 1.0f);

			TArray<USMGraphNode_TransitionEdge*> Transitions;
			FromState->GetOutputTransitions(Transitions);

			Transitions = Transitions.FilterByPredicate([ToState](const USMGraphNode_TransitionEdge* InTransition) -> bool
			{
				return InTransition->GetToState() == ToState;
			});

			ThisIndex = Transitions.IndexOfByKey(EdgeNode);
			TransitionCount = Transitions.Num();
		}
	}

	PositionBetweenTwoNodesWithOffset(StartGeom, EndGeom, ThisIndex, TransitionCount);
}

void SGraphNode_TransitionEdge::UpdateGraphNode()
{
	InputPins.Empty();
	OutputPins.Empty();

	RightNodeBox.Reset();
	LeftNodeBox.Reset();

	this->Visibility.Bind(this, &SGraphNode_TransitionEdge::GetIconVisibility);
	this->ContentScale.Bind( this, &SGraphNode::GetContentScale );
	this->GetOrAddSlot( ENodeZone::Center )
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			[
				SNew(SImage)
				.Image( FEditorStyle::GetBrush("Graph.TransitionNode.ColorSpill") )
				.ColorAndOpacity( this, &SGraphNode_TransitionEdge::GetEdgeColor )
			]
			+SOverlay::Slot()
			[
				SNew(SImage)
				.Image(this, &SGraphNode_TransitionEdge::GetIcon)
			]
		];
}

TSharedPtr<SToolTip> SGraphNode_TransitionEdge::GetComplexTooltip()
{
	/* Display a pop-up on mouse hover with useful information. */

	USMGraphNode_TransitionEdge* TransitionNode = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);

	const bool bPossibleToTransition = TransitionNode->PossibleToTransition();
	bool bHasTransistionTunnel = false;
	bool bHasInitLogic = false;
	bool bHasShutdownLogic = false;
	bool bHasPreEvalLogic = false;
	bool bHasPostEvalLogic = false;

	USMGraphNode_StateNodeBase* FromStateNode = TransitionNode->GetFromState();

	UEdGraphPin* EvalPin = nullptr;
	if(USMTransitionGraph* TransitionGraph = Cast<USMTransitionGraph>(TransitionNode->GetBoundGraph()))
	{
		EvalPin = TransitionGraph->ResultNode->GetTransitionEvaluationPin();
		bHasTransistionTunnel = TransitionGraph->HasTransitionTunnel();
		bHasInitLogic = FromStateNode != nullptr && TransitionGraph->HasInitLogic();
		bHasShutdownLogic = FromStateNode != nullptr && TransitionGraph->HasShutdownLogic();
		bHasPreEvalLogic = TransitionGraph->HasPreEvalLogic();
		bHasPostEvalLogic = TransitionGraph->HasPostEvalLogic();
	}

	TSharedRef<SVerticalBox> Widget = SNew(SVerticalBox);
	Widget->AddSlot()
		.AutoHeight()
		.Padding(FMargin(0.f, 0.f, 0.f, 4.f))
		[
			SNew(STextBlock)
			.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Title")
			.Text(FText::Format(LOCTEXT("TransitionPopupTitle", "{0} (Transition)"), FText::FromString(TransitionNode->GetTransitionName())))
		];
	
	if (USMNodeInstance* NodeTemplate = TransitionNode->GetNodeTemplate())
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(0.f, 0.f, 0.f, 4.f))
			[
				FSMNodeInstanceUtils::CreateNodeClassWidgetDisplay(NodeTemplate).ToSharedRef()
			];
	}
	
	if(bPossibleToTransition)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(2.0f)
			[
				// Take the expression connected to the eval pin and turn it into text.
				SNew(SKismetLinearExpression, EvalPin)
			];
	}
	else
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 0.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Warning")
				.Text(LOCTEXT("TransitionInvalidTooltip", "No Valid Expression: Transition will never be taken"))
			];
	}

	if(bHasTransistionTunnel)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 4.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Info")
				.Text(LOCTEXT("TransitionTunnelTooltip", "Transition Entered: Logic will execute when entering this transition"))
			];
	}

	if (bHasInitLogic)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 4.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Info")
				.Text(FText::Format(LOCTEXT("TransitionInitTooltip", "Transition Initialization: Logic will execute when state '{0}' has started"), FText::FromString(FromStateNode->GetStateName())))
			];
	}

	if (bHasShutdownLogic)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 4.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Info")
				.Text(FText::Format(LOCTEXT("TransitionShutdownTooltip", "Transition Shutdown: Logic will execute when state '{0}' has exited"), FText::FromString(FromStateNode->GetStateName())))
			];
	}

	if (bHasPreEvalLogic)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 4.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Warning")
				.Text(LOCTEXT("TransitionPreEvalTooltip", "Transition Pre-Eval: Logic will execute before each evaluation"))
			];
	}

	if (bHasPostEvalLogic)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 4.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Warning")
				.Text(LOCTEXT("TransitionPostEvalTooltip", "Transition Post-Eval: Logic will execute after each evaluation"))
			];
	}


	if(bHasTransistionTunnel || bHasInitLogic || bHasShutdownLogic || bHasPreEvalLogic || bHasPostEvalLogic)
	{
		Widget->AddSlot()
			.AutoHeight()
			[
				SNew(SGraphPreviewer, TransitionNode->GetBoundGraph())
				.ShowGraphStateOverlay(false)
			];
	}

	return SNew(SToolTip)
		[
			Widget
		];
}

void SGraphNode_TransitionEdge::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	USMGraphNode_TransitionEdge* TransNode = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);
	if (UEdGraphPin* Pin = TransNode->GetInputPin())
	{
		GetOwnerPanel()->AddPinToHoverSet(Pin);
	}

	SGraphNode::OnMouseEnter(MyGeometry, MouseEvent);
}

void SGraphNode_TransitionEdge::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	USMGraphNode_TransitionEdge* TransNode = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);
	if (UEdGraphPin* Pin = TransNode->GetInputPin())
	{
		GetOwnerPanel()->RemovePinFromHoverSet(Pin);
	}

	SGraphNode::OnMouseLeave(MouseEvent);
}

void SGraphNode_TransitionEdge::PositionBetweenTwoNodesWithOffset(const FGeometry& StartGeom, const FGeometry& EndGeom, int32 NodeIndex, int32 MaxNodes) const
{
	// Get a reasonable seed point (halfway between the boxes)
	const FVector2D StartCenter = FGeometryHelper::CenterOf(StartGeom);
	const FVector2D EndCenter = FGeometryHelper::CenterOf(EndGeom);

	if(StartCenter == EndCenter)
	{
		FVector2D Corner = StartCenter;
		Corner.X += StartGeom.Size.X / 2.f + 10.f;
		Corner.Y += StartGeom.Size.Y / 2.f + 15.f;

		GraphNode->NodePosX = Corner.X;
		GraphNode->NodePosY = Corner.Y;

		return;
	}

	const FVector2D SeedPoint = (StartCenter + EndCenter) * 0.5f;

	// Find the (approximate) closest points between the two boxes
	const FVector2D StartAnchorPoint = FGeometryHelper::FindClosestPointOnGeom(StartGeom, SeedPoint);
	const FVector2D EndAnchorPoint = FGeometryHelper::FindClosestPointOnGeom(EndGeom, SeedPoint);

	// Position ourselves halfway along the connecting line between the nodes, elevated away perpendicular to the direction of the line
	const float Height = 30.0f;

	const FVector2D DesiredNodeSize = GetDesiredSize();

	FVector2D DeltaPos(EndAnchorPoint - StartAnchorPoint);

	if (DeltaPos.IsNearlyZero())
	{
		DeltaPos = FVector2D(10.0f, 0.0f);
	}

	const FVector2D Normal = FVector2D(DeltaPos.Y, -DeltaPos.X).GetSafeNormal();

	USMGraphNode_TransitionEdge* TransitionEdge = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);
	USMTransitionInstance* Instance = TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>();

	const float LocationPercent = Instance ? Instance->GetIconLocationPercentage() : 0.5f;
	const FVector2D NewCenter = StartAnchorPoint + (LocationPercent * DeltaPos) + (Height * Normal);

	FVector2D DeltaNormal = DeltaPos.GetSafeNormal();
	
	// Calculate node offset in the case of multiple transitions between the same two nodes
	// MultiNodeOffset: the offset where 0 is the center of the transition, -1 is 1 <size of node>
	// towards the PrevStateNode and +1 is 1 <size of node> towards the NextStateNode.

	const float MutliNodeSpace = 0.2f; // Space between multiple transition nodes (in units of <size of node> )
	const float MultiNodeStep = (1.f + MutliNodeSpace); //Step between node centres (Size of node + size of node spacer)

	const float MultiNodeStart = -((MaxNodes - 1) * MultiNodeStep) / 2.f;
	const float MultiNodeOffset = MultiNodeStart + (NodeIndex * MultiNodeStep);

	// Now we need to adjust the new center by the node size, zoom factor and multi node offset
	const FVector2D NewCorner = NewCenter - (0.5f * DesiredNodeSize) + (DeltaNormal * MultiNodeOffset * DesiredNodeSize.Size());

	GraphNode->NodePosX = NewCorner.X;
	GraphNode->NodePosY = NewCorner.Y;
}

FSlateColor SGraphNode_TransitionEdge::GetEdgeColor() const
{
	return FLinearColor(0.9f, 0.9f, 0.9f, 1.0f);
}

const FSlateBrush* SGraphNode_TransitionEdge::GetIcon() const
{
	USMGraphNode_TransitionEdge* EdgeNode = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);
	if (const FSlateBrush* Brush = EdgeNode->GetNodeIcon())
	{
		if (Brush->ImageSize.GetMax() > 0)
		{
			return Brush;
		}
	}

	return FEditorStyle::GetBrush(TEXT("Graph.TransitionNode.Icon"));
}

EVisibility SGraphNode_TransitionEdge::GetIconVisibility() const
{
	USMGraphNode_TransitionEdge* TransitionNode = CastChecked<USMGraphNode_TransitionEdge>(GraphNode);
	USMTransitionInstance* Instance = Cast<USMTransitionInstance>(TransitionNode->GetNodeTemplate());

	const bool bSelected = FSMBlueprintEditorUtils::IsNodeSelected(TransitionNode);
	return ((!TransitionNode->IsHovered() && !bSelected && Instance != nullptr && Instance->IsIconHidden()) ? EVisibility::Collapsed : EVisibility::Visible);
}

#undef LOCTEXT_NAMESPACE
