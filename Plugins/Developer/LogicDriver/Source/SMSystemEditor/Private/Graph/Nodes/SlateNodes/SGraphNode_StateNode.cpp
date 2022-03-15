// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SGraphNode_StateNode.h"
#include "SLevelOfDetailBranchNode.h"
#include "SCommentBubble.h"
#include "SlateOptMacros.h"
#include "SGraphPin.h"
#include "Components/VerticalBox.h"
#include "SGraphPreviewer.h"
#include "GraphEditorSettings.h"
#include "Templates/SharedPointer.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/SToolTip.h"
#include "Widgets/SWidget.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "SMConduit.h"
#include "Configuration/SMEditorStyle.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h"
#include "Graph/Pins/SGraphPin_StatePin.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineParentNode.h"
#include "Widgets/SSMGraphProperty.h"
#include "Utilities/SMNodeInstanceUtils.h"

#define LOCTEXT_NAMESPACE "SGraphStateNode"


void SGraphNode_StateNode::Construct(const FArguments& InArgs, USMGraphNode_StateNodeBase* InNode)
{
	SGraphNode_BaseNode::Construct(SGraphNode_BaseNode::FArguments(), InNode);
	ContentPadding = InArgs._ContentPadding;
	bIsMouseOver = false;
	
	CastChecked<USMGraphNode_Base>(GraphNode)->OnWidgetConstruct();
	
	UpdateGraphNode();
	SetCursor(EMouseCursor::CardinalCross);

	const USMEditorSettings* EditorSettings = FSMBlueprintEditorUtils::GetEditorSettings();
	{
		const FSlateBrush* ImageBrush = FSMEditorStyle::Get()->GetBrush(TEXT("SMGraph.StateModifier"));
		
		FLinearColor AnyStateColor = EditorSettings->AnyStateDefaultColor;
		AnyStateColor.A = 0.72f;
		
		AnyStateImpactWidget =
			SNew(SImage)
			.Image(ImageBrush)
			.ToolTipText(NSLOCTEXT("StateNode", "StateNodeAnyStateTooltip", "An `Any State` node is adding one or more transitions to this state."))
			.ColorAndOpacity(AnyStateColor)
			.Visibility(EVisibility::Visible);


		if (EditorSettings->bEnableAnimations)
		{
			ZoomCurve = SpawnAnim.AddCurve(.0f, .15f, ECurveEaseFunction::QuadInOut);
			FadeCurve = SpawnAnim.AddCurve(.1f, .15f, ECurveEaseFunction::Linear);
		}
		else
		{
			ZoomCurve = SpawnAnim.AddCurve(0.f, 0.f);
			FadeCurve = SpawnAnim.AddCurve(0.f, 0.f);
		}
	}
}

void SGraphNode_StateNode::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SGraphNode::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	StateNode->UpdateTime(InDeltaTime);

	if (StateNode->bRequestInitialAnimation)
	{
		StateNode->bRequestInitialAnimation = false;
		PlaySpawnEffect();
	}
}

void SGraphNode_StateNode::MoveTo(const FVector2D& NewPosition, FNodeSet& NodeFilter)
{
	SGraphNode::MoveTo(NewPosition, NodeFilter);
	USMGraphNode_Base* StateNode = CastChecked<USMGraphNode_Base>(GraphNode);
	StateNode->OnNodeMoved(NewPosition);
}

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SGraphNode_StateNode::UpdateGraphNode()
{
	InputPins.Empty();
	OutputPins.Empty();

	// Reset variables that are going to be exposed, in case we are refreshing an already setup node.
	RightNodeBox.Reset();
	LeftNodeBox.Reset();

	const FSlateBrush* NodeTypeIcon = GetNameIcon();
	const FLinearColor TitleShadowColor(0.6f, 0.6f, 0.6f);

	const float PinPadding = FSMBlueprintEditorUtils::GetEditorSettings()->StateConnectionSize;
	
	SetupErrorReporting();
	TSharedPtr<SErrorText> ErrorText;
	const TSharedPtr<SVerticalBox> ContentBox = CreateContentBox();
	
	this->ContentScale.Bind(this, &SGraphNode::GetContentScale);
	this->GetOrAddSlot(ENodeZone::Center)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SBorder)
			.BorderImage(FEditorStyle::GetBrush("Graph.StateNode.Body"))
			.Padding(0)
			.BorderBackgroundColor(this, &SGraphNode_StateNode::GetBorderBackgroundColor)
			// For animation
			.ContentScale(this, &SGraphNode_StateNode::GetContentScale)
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Top)
			// End animation
			[
				SNew(SOverlay)

				// PIN AREA
				+ SOverlay::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SAssignNew(RightNodeBox, SVerticalBox)
				]

				// STATE NAME AREA
				+ SOverlay::Slot()
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.Padding(PinPadding)
				[
					SNew(SBorder)
					.BorderImage(FEditorStyle::GetBrush("Graph.StateNode.ColorSpill"))
					.BorderBackgroundColor(TitleShadowColor)
					.HAlign(HAlign_Center)
					.VAlign(VAlign_Center)
					.Visibility(EVisibility::SelfHitTestInvisible)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							// POPUP ERROR MESSAGE
							SAssignNew(ErrorText, SErrorText)
							.BackgroundColor(this, &SGraphNode_StateNode::GetErrorColor)
							.ToolTipText(this, &SGraphNode_StateNode::GetErrorMsgToolTip)
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.VAlign(VAlign_Center)
						[
							SNew(SImage)
							.Image(NodeTypeIcon)
						]
						+ SHorizontalBox::Slot()
						.Padding(ContentPadding)
						[
							ContentBox.ToSharedRef()
						]
					]
				]
			]
		];

	// Finalize all property widgets now that parent - child relationship is complete.
	for (auto& PropertyWidget : PropertyWidgets)
	{
		PropertyWidget.Key->Finalize();
	}
	
	// Create comment bubble
	TSharedPtr<SCommentBubble> CommentBubble;
	const FSlateColor CommentColor = GetDefault<UGraphEditorSettings>()->DefaultCommentNodeTitleColor;

	SAssignNew(CommentBubble, SCommentBubble)
		.GraphNode(GraphNode)
		.Text(this, &SGraphNode::GetNodeComment)
		.OnTextCommitted(this, &SGraphNode::OnCommentTextCommitted)
		.ColorAndOpacity(CommentColor)
		.AllowPinning(true)
		.EnableTitleBarBubble(true)
		.EnableBubbleCtrls(true)
		.GraphLOD(this, &SGraphNode::GetCurrentLOD)
		.IsGraphNodeHovered(this, &SGraphNode::IsHovered);

	GetOrAddSlot(ENodeZone::TopCenter)
		.SlotOffset(TAttribute<FVector2D>(CommentBubble.Get(), &SCommentBubble::GetOffset))
		.SlotSize(TAttribute<FVector2D>(CommentBubble.Get(), &SCommentBubble::GetSize))
		.AllowScaling(TAttribute<bool>(CommentBubble.Get(), &SCommentBubble::IsScalingAllowed))
		.VAlign(VAlign_Top)
		[
			CommentBubble.ToSharedRef()
		];
	
	ErrorReporting = ErrorText;
	ErrorReporting->SetError(ErrorMsg);
	CreatePinWidgets();
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SGraphNode_StateNode::CreatePinWidgets()
{
	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);

	UEdGraphPin* CurPin = StateNode->GetOutputPin();
	if (!CurPin->bHidden)
	{
		TSharedPtr<SGraphPin> NewPin = SNew(SSMGraphPin_StatePin, CurPin);

		this->AddPin(NewPin.ToSharedRef());
	}
}

void SGraphNode_StateNode::AddPin(const TSharedRef<SGraphPin>& PinToAdd)
{
	PinToAdd->SetOwner(SharedThis(this));
	RightNodeBox->AddSlot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.FillHeight(1.0f)
		[
			PinToAdd
		];
	OutputPins.Add(PinToAdd);
}

TSharedPtr<SToolTip> SGraphNode_StateNode::GetComplexTooltip()
{
	/* Display a pop-up on mouse hover with useful information. */
	TSharedRef<SVerticalBox> Widget = BuildComplexTooltip();

	return SNew(SToolTip)
		[
			Widget
		];
}

TArray<FOverlayWidgetInfo> SGraphNode_StateNode::GetOverlayWidgets(bool bSelected, const FVector2D& WidgetSize) const
{
	TArray<FOverlayWidgetInfo> Widgets;

	const USMEditorSettings* EditorSettings = FSMBlueprintEditorUtils::GetEditorSettings();
	if (!EditorSettings->bDisableVisualCues)
	{
		if (USMGraphNode_StateNodeBase* StateNode = Cast<USMGraphNode_StateNodeBase>(GraphNode))
		{
			if (FSMBlueprintEditorUtils::IsNodeImpactedFromAnyStateNode(StateNode))
			{
				const FSlateBrush* ImageBrush = FSMEditorStyle::Get()->GetBrush(TEXT("SMGraph.StateModifier"));

				FOverlayWidgetInfo Info;
				Info.OverlayOffset = FVector2D(WidgetSize.X - (ImageBrush->ImageSize.X * 0.5f) - (Widgets.Num() * OverlayWidgetPadding), -(ImageBrush->ImageSize.Y * 0.5f));
				Info.Widget = AnyStateImpactWidget;

				Widgets.Add(Info);
			}
		}
	}

	return Widgets;
}

FReply SGraphNode_StateNode::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	// Prevent double click from stealing interaction with widget.
	// TODO: See if property has any handling and call that, continue, or cancel.
	for(const auto& KeyVal : PropertyWidgets)
	{
		if(KeyVal.Key->GetCachedGeometry().IsUnderLocation(InMouseEvent.GetScreenSpacePosition()))
		{
			return FReply::Handled();
		}
	}
	
	return SGraphNode::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

void SGraphNode_StateNode::RequestRenameOnSpawn()
{
	if (USMGraphNode_Base* Node = Cast<USMGraphNode_Base>(GraphNode))
	{
		if (USMStateInstance_Base* NodeInstance = Cast<USMStateInstance_Base>(Node->GetNodeTemplate()))
		{
			if (!NodeInstance->ShouldDisplayNameWidget() || NodeInstance->ShouldUseDisplayNameOnly())
			{
				// No name widget to display -- see if there are other widgets to display.
				for(const auto& KeyVal : PropertyWidgets)
				{
					if(KeyVal.Value->IsConsideredForDefaultProperty())
					{
						KeyVal.Value->DefaultPropertyActionWhenPlaced(StaticCastSharedPtr<SWidget>(KeyVal.Key));
						break;
					}
				}
				
				return;
			}
		}
	}
	SGraphNode::RequestRenameOnSpawn();
}

FReply SGraphNode_StateNode::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	return FReply::Handled();
}

TSharedRef<SVerticalBox> SGraphNode_StateNode::BuildComplexTooltip()
{
	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);

	const bool bCanExecute = StateNode->HasInputConnections();
	const bool bIsEndState = StateNode->IsEndState(false);
	bool bIsAnyState = false;
	
	FString NodeType = "State";
	if (StateNode->IsA<USMGraphNode_StateMachineParentNode>())
	{
		NodeType = "Parent";
	}
	else if(USMGraphNode_StateMachineStateNode* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(StateNode))
	{
		NodeType = StateMachineNode->IsStateMachineReference() ? "State Machine Reference" : "State Machine";
	}
	else if (USMGraphNode_AnyStateNode* AnyStateNode = Cast<USMGraphNode_AnyStateNode>(StateNode))
	{
		NodeType = "Any State";
		bIsAnyState = true;
	}

	const bool bAnyStateImpactsThisNode = !bIsAnyState && FSMBlueprintEditorUtils::IsNodeImpactedFromAnyStateNode(StateNode);
	
	TSharedRef<SVerticalBox> Widget = SNew(SVerticalBox);
	Widget->AddSlot()
		.AutoHeight()
		.Padding(FMargin(0.f, 0.f, 0.f, 4.f))
		[
			SNew(STextBlock)
			.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Title")
			.Text(FText::Format(LOCTEXT("StatePopupTitle", "{0} ({1})"), FText::FromString(StateNode->GetStateName()), FText::FromString(NodeType)))
		];

	if (USMNodeInstance* NodeTemplate = StateNode->GetNodeTemplate())
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(0.f, 0.f, 0.f, 4.f))
			[
				FSMNodeInstanceUtils::CreateNodeClassWidgetDisplay(NodeTemplate).ToSharedRef()
			];
	}
	if (UEdGraph* Graph = GetGraphToUseForTooltip())
	{
		Widget->AddSlot()
			.AutoHeight()
			[
				SAssignNew(GraphPreviewer, SGraphPreviewer, Graph)
				.ShowGraphStateOverlay(false)
			];
	}
	if (!bCanExecute && !bIsAnyState)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 2.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Warning")
				.Text(LOCTEXT("StateCantExecuteTooltip", "No Valid Input: State will never execute"))
			];
	}

	if (bIsEndState)
	{
		const FText EndStateTooltip = StateNode->IsEndState(true) ? LOCTEXT("EndStateTooltip", "End State: State will never exit") :
			LOCTEXT("NotEndStateTooltip", "Not an End State: An Any State node is adding transitions to this node");
		
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 2.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Info")
				.Text(EndStateTooltip)
			];
	}
	else if (bAnyStateImpactsThisNode)
	{
		Widget->AddSlot()
			.AutoHeight()
			.Padding(FMargin(2.f, 4.f, 2.f, 2.f))
			[
				SNew(STextBlock)
				.TextStyle(FSMEditorStyle::Get(), "SMGraph.Tooltip.Info")
				.Text(LOCTEXT("AnyStateImpactTooltip", "An Any State node is adding transitions to this node"))
			];
	}

	return Widget;
}

UEdGraph* SGraphNode_StateNode::GetGraphToUseForTooltip() const
{
	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	return StateNode->GetBoundGraph();
}

void SGraphNode_StateNode::GetNodeInfoPopups(FNodeInfoContext* Context,
	TArray<FGraphInformationPopupInfo>& Popups) const
{
	USMGraphNode_StateNodeBase* Node = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	if (const FSMNode_Base* DebugNode = Node->GetDebugNode())
	{
		// Show active time or last active time over the node.

		if (Node->IsDebugNodeActive())
		{
			const FString StateText = FString::Printf(TEXT("Active for %.2f secs"), DebugNode->TimeInState);
			new (Popups) FGraphInformationPopupInfo(nullptr, Node->GetBackgroundColor(), StateText);
		}
		else if (Node->WasDebugNodeActive())
		{
			const USMEditorSettings* EditorSettings = FSMBlueprintEditorUtils::GetEditorSettings();

			const float StartFade = EditorSettings->TimeToDisplayLastActiveState;
			const float TimeToFade = EditorSettings->TimeToFadeLastActiveState;
			const float DebugTime = Node->GetDebugTime();

			if (DebugTime < StartFade + TimeToFade)
			{
				const FString StateText = FString::Printf(TEXT("Was Active for %.2f secs"), DebugNode->TimeInState);

				if (DebugTime > StartFade)
				{
					FLinearColor Color = Node->GetBackgroundColor();

					const float PercentComplete = TimeToFade <= 0.f ? 0.f : FMath::Clamp(Color.A * (1.f - (DebugTime - StartFade) / TimeToFade), 0.f, Color.A);
					Color.A *= PercentComplete;

					const FLinearColor ResultColor = Color;
					new (Popups) FGraphInformationPopupInfo(nullptr, ResultColor, StateText);
				}
				else
				{
					new (Popups) FGraphInformationPopupInfo(nullptr, Node->GetBackgroundColor(), StateText);
				}
			}
		}
	}
}

TSharedPtr<SVerticalBox> SGraphNode_StateNode::CreateContentBox()
{
	TSharedPtr<SVerticalBox> Content;
	TSharedPtr<SNodeTitle> NodeTitle = SNew(SNodeTitle, GraphNode);
	SAssignNew(Content, SVerticalBox);

	bool bDisplayTitle = true;
	if (USMGraphNode_Base* Node = Cast<USMGraphNode_Base>(GraphNode))
	{
		if (USMStateInstance_Base* NodeInstance = Cast<USMStateInstance_Base>(Node->GetNodeTemplate()))
		{
			if (!NodeInstance->ShouldDisplayNameWidget())
			{
				bDisplayTitle = false;
			}
		}
	}
	
	Content->AddSlot()
		.AutoHeight()
		[
			SAssignNew(InlineEditableText, SInlineEditableTextBlock)
			.Style(FEditorStyle::Get(), "Graph.StateNode.NodeTitleInlineEditableText")
			.Text(NodeTitle.Get(), &SNodeTitle::GetHeadTitle)
			.OnVerifyTextChanged(this, &SGraphNode_StateNode::OnVerifyNameTextChanged)
			.OnTextCommitted(this, &SGraphNode_StateNode::OnNameTextCommited)
			.IsReadOnly(this, &SGraphNode_StateNode::IsNameReadOnly)
			.IsSelected(this, &SGraphNode_StateNode::IsSelectedExclusively)
			.Visibility(bDisplayTitle ? EVisibility::Visible : EVisibility::Collapsed)
		];
	Content->AddSlot()
		.AutoHeight()
		[
			NodeTitle.ToSharedRef()
		];
	
	PropertyWidgets.Reset();
	
	// Add custom property widgets sorted by user specification.
	USMGraphNode_StateNodeBase* StateNodeBase = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	TArray<USMGraphK2Node_PropertyNode_Base*> GraphPropertyNodes = StateNodeBase->GetAllPropertyGraphNodesAsArray();
	
	TArray<USMGraphK2Node_PropertyNode_Base*> GraphPropertyBPVariablesOrdered;
	// Each property node mapped to its instance.
	TMap<USMGraphK2Node_PropertyNode_Base*, USMNodeInstance*> PropertiesToTemplates;
	
	// Populate all used state classes, in order.
	TArray<USMNodeInstance*> NodeTemplates;

	auto IsValidClass = [](USMGraphNode_Base* Node, UClass* NodeClass) {return NodeClass && NodeClass != Node->GetDefaultNodeClass(); };

	if (IsValidClass(StateNodeBase, StateNodeBase->GetNodeClass()))
	{
		NodeTemplates.Add(StateNodeBase->GetNodeTemplate());
	}
	
	if (USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(StateNodeBase))
	{
		for (const auto& StackTemplate : StateNode->StateStack)
		{
			if (StackTemplate.NodeStackInstanceTemplate)
			{
				if (IsValidClass(StateNodeBase, StackTemplate.NodeStackInstanceTemplate->GetClass()))
				{
					NodeTemplates.Add(StackTemplate.NodeStackInstanceTemplate);
				}
			}
		}
	}

	/*
	 * Look for array types and build out templates.
	 */
	auto ExpandAndSortProperty = [&GraphPropertyNodes, &GraphPropertyBPVariablesOrdered, &PropertiesToTemplates](USMGraphK2Node_PropertyNode_Base* GraphProperty, USMNodeInstance* NodeTemplate)
	{
		if (GraphProperty)
		{
			GraphPropertyNodes.Remove(GraphProperty);
			GraphPropertyBPVariablesOrdered.Add(GraphProperty);

			FSMGraphProperty_Base* RealPropertyNode = GraphProperty->GetPropertyNode();
			if (!RealPropertyNode)
			{
				return false;
			}

			// Look for array items that may belong to this property.
			TArray<USMGraphK2Node_PropertyNode_Base*> ArrayItems = GraphPropertyNodes.
				FilterByPredicate([&RealPropertyNode](USMGraphK2Node_PropertyNode_Base* PropertyNode)
			{
				FSMGraphProperty_Base* TestProperty = PropertyNode->GetPropertyNodeConst();
				if (!TestProperty)
				{
					return false;
				}
				return TestProperty->VariableName == RealPropertyNode->VariableName && TestProperty->GetTemplateGuid() == RealPropertyNode->GetTemplateGuid();
			});
			ArrayItems.Sort([&](USMGraphK2Node_PropertyNode_Base& lhs, USMGraphK2Node_PropertyNode_Base& rhs)
			{
				// Should never be null unless something was forcibly deleted or an underlying class removed.
				FSMGraphProperty_Base* PropertyLhs = lhs.GetPropertyNode();
				if (!PropertyLhs)
				{
					return false;
				}

				FSMGraphProperty_Base* PropertyRhs = rhs.GetPropertyNode();
				if (!PropertyRhs)
				{
					return false;
				}

				return PropertyLhs->ArrayIndex <= PropertyRhs->ArrayIndex;
			});

			// Add on array items in the correct order directly after the first element.
			for (USMGraphK2Node_PropertyNode_Base* ArrItem : ArrayItems)
			{
				GraphPropertyNodes.Remove(ArrItem);
				PropertiesToTemplates.Add(ArrItem, NodeTemplate);
			}
			
			GraphPropertyBPVariablesOrdered.Append(ArrayItems);
			PropertiesToTemplates.Add(GraphProperty, NodeTemplate);
			
			return true;
		}

		return false;
	};
	
	for (USMNodeInstance* NodeTemplate : NodeTemplates)
	{
		{
			// Check native properties first. Reference PropertyEditor/Private/PropertyEditorHelpers.cpp  ~ OrderPropertiesFromMetadata()
			
			TArray<FProperty*> NativeProperties;
			TArray<TTuple<FProperty*, int32>> NativePropertiesOrdered;
			for (TFieldIterator<FProperty> It(NodeTemplate->GetClass()); It; ++It)
			{
				FProperty* NativeProperty = *It;
				if (!NativeProperty->GetOwnerUField()->HasAnyInternalFlags(EInternalObjectFlags::Native) ||
					(!FSMNodeInstanceUtils::IsPropertyExposedToGraphNode(NativeProperty) && !FSMNodeInstanceUtils::IsPropertyGraphProperty(NativeProperty)))
				{
					// Blueprint properties checked later.
					continue;
				}

				NativeProperties.Add(NativeProperty);
			}

			NativePropertiesOrdered.Reserve(NativeProperties.Num());
			for (FProperty* NativeProperty : NativeProperties)
			{
				// Sort native properties based on their display order only.
				const FString& DisplayPriorityStr = NativeProperty->GetMetaData("DisplayPriority");
				int32 DisplayPriority = (DisplayPriorityStr.IsEmpty() ? MAX_int32 : FCString::Atoi(*DisplayPriorityStr));
				if (DisplayPriority == 0 && !FCString::IsNumeric(*DisplayPriorityStr))
				{
					// If there was a malformed display priority str Atoi will say it is 0, but we want to treat it as unset
					DisplayPriority = MAX_int32;
				}

				auto InsertProperty = [NativeProperty, DisplayPriority](TArray<TTuple<FProperty*, int32>>& InsertToArray)
				{
					bool bInserted = false;
					if (DisplayPriority != MAX_int32)
					{
						for (int32 InsertIndex = 0; InsertIndex < InsertToArray.Num(); ++InsertIndex)
						{
							const int32 PriorityAtIndex = InsertToArray[InsertIndex].Get<1>();
							if (DisplayPriority < PriorityAtIndex)
							{
								InsertToArray.Insert(MakeTuple(NativeProperty, DisplayPriority), InsertIndex);
								bInserted = true;
								break;
							}
						}
					}

					if (!bInserted)
					{
						InsertToArray.Emplace(MakeTuple(NativeProperty, DisplayPriority));
					}
				};

				InsertProperty(NativePropertiesOrdered);
			}

			// Reload back into array.
			NativeProperties.Reset();
			for (const TTuple<FProperty*, int32>& Property : NativePropertiesOrdered)
			{
				NativeProperties.Add(Property.Get<0>());
			}

			for (FProperty* NativeProperty : NativeProperties)
			{
				FSMGraphProperty_Base Property;
				Property.SetTemplateGuid(NodeTemplate->GetTemplateGuid());
				FSMNodeInstanceUtils::SetGraphPropertyFromProperty(Property, NativeProperty, NodeTemplate);

				const FGuid& CalculatedGuid = Property.GetGuid();

				// First lookup by var guid. This is the standard lookup.
				USMGraphK2Node_PropertyNode_Base* GraphProperty = StateNodeBase->GetGraphPropertyNode(CalculatedGuid);

				// Attempt lookup by name -- Only can happen on extended graph properties.
				if (!GraphProperty)
				{
					// TODO: This may not be necessary, at least for native properties.
					GraphProperty = StateNodeBase->GetGraphPropertyNode(NativeProperty->GetFName(), NodeTemplate);
				}

				if (!ExpandAndSortProperty(GraphProperty, NodeTemplate))
				{
					continue;
				}
			}
		}

		// Blueprint variable sorting. Grab the blueprint and all parents.
		{
			TArray<UBlueprint*> BlueprintParents;
			UBlueprint::GetBlueprintHierarchyFromClass(NodeTemplate->GetClass(), BlueprintParents);

			TArray<FBPVariableDescription> Variables;
			for (UBlueprint* Blueprint : BlueprintParents)
			{
				Variables.Append(Blueprint->NewVariables);
			}

			// Check blueprint properties.
			for (const FBPVariableDescription& Variable : Variables)
			{
				FSMGraphProperty_Base Property;
				Property.SetTemplateGuid(NodeTemplate->GetTemplateGuid());
				const FGuid& CalculatedGuid = Property.SetGuid(Variable.VarGuid, 0);

				// First lookup by var guid. This is the standard lookup.
				USMGraphK2Node_PropertyNode_Base* GraphProperty = StateNodeBase->GetGraphPropertyNode(CalculatedGuid);

				// Attempt lookup by name -- Only can happen on extended graph properties.
				if (!GraphProperty)
				{
					GraphProperty = StateNodeBase->GetGraphPropertyNode(Variable.VarName, NodeTemplate);
				}

				if (!ExpandAndSortProperty(GraphProperty, NodeTemplate))
				{
					continue;
				}
			}
		}
	}

	// GraphPropertyNodes are just native / non-variable properties. Add sorted BP on after.
	GraphPropertyNodes.Append(GraphPropertyBPVariablesOrdered);

	TMap<int32, TArray<USMGraphK2Node_PropertyNode_Base*>> CustomOrderMap;
	{
		// Perform custom sorting using widget vertical order override. Maintain the desired order accounting for combined states.
		// TODO: Consider deprecating the vertical order attribute in favor of DisplayOrder (native) or variable order in BP. Both already work.
		int32 BaseCount = 0;
		int32 TotalCount = 0;
		USMNodeInstance* LastTemplate = nullptr;
		for (USMGraphK2Node_PropertyNode_Base* PropertyNode : GraphPropertyNodes)
		{
			USMNodeInstance* CurrentTemplate = PropertiesToTemplates.FindRef(PropertyNode);
			if (CurrentTemplate && CurrentTemplate != LastTemplate && CurrentTemplate->GetTemplateGuid().IsValid())
			{
				BaseCount = TotalCount;
			} 
			TotalCount++;
			LastTemplate = CurrentTemplate;

			if (FSMGraphProperty_Base* Property = PropertyNode->GetPropertyNode())
			{
				const int32 Order = Property->GetVerticalDisplayOrder();
				if (Order != 0)
				{
					// Look for all related elements since this could be an array that is being re-ordered.
					TArray<USMGraphK2Node_PropertyNode_Base*> PropertiesToMove = GraphPropertyNodes.
						FilterByPredicate([&Property](USMGraphK2Node_PropertyNode_Base* PropertyNode)
					{
						FSMGraphProperty_Base* TestProperty = PropertyNode->GetPropertyNodeConst();
						if (!TestProperty)
						{
							return false;
						}
						return TestProperty->VariableName == Property->VariableName && TestProperty->GetTemplateGuid() == Property->GetTemplateGuid();
					});

					CustomOrderMap.Add(BaseCount + Order, MoveTemp(PropertiesToMove));
				}
			}
		}
	}

	// Insert or add the elements to the array.
	for(auto& KeyVal : CustomOrderMap)
	{
		TArray<USMGraphK2Node_PropertyNode_Base*>& PropertyNodes = KeyVal.Value;
		for (USMGraphK2Node_PropertyNode_Base* PropertyNode : PropertyNodes)
		{
			GraphPropertyNodes.Remove(PropertyNode);
		}

		const int32 Index = FMath::Clamp(KeyVal.Key, 0, GraphPropertyNodes.Num());
		if(Index > GraphPropertyNodes.Num() - 1)
		{
			GraphPropertyNodes.Append(PropertyNodes);
		}
		else
		{
			GraphPropertyNodes.Insert(PropertyNodes, Index);
		}
	}

	const USMEditorSettings* EditorSettings = FSMBlueprintEditorUtils::GetEditorSettings();
	
	USMNodeInstance* LastTemplate = nullptr;
	TSharedPtr<SBorder> NodeStackBorder;
	TSharedPtr<SVerticalBox> NodeStackBox;
	for (USMGraphK2Node_PropertyNode_Base* PropertyNode : GraphPropertyNodes)
	{
		if (PropertyNode->GetPropertyNodeChecked()->IsVariableHidden())
		{
			continue;
		}
		
		if (TSharedPtr<SSMGraphProperty_Base> PropertyWidget = PropertyNode->GetGraphNodeWidget())
		{
			// Must call finalize on these after the context box has been created and assigned.
			PropertyWidgets.Add(PropertyWidget, PropertyNode);

			USMNodeInstance* CurrentTemplate = PropertiesToTemplates.FindRef(PropertyNode);
			if (CurrentTemplate && CurrentTemplate != LastTemplate && CurrentTemplate->GetTemplateGuid().IsValid())
			{
				FLinearColor BackgroundColor = StateNodeBase->GetBackgroundColorForNodeInstance(CurrentTemplate);
				BackgroundColor.A *= 0.25f;

				FString StateStackName = CurrentTemplate->GetClass()->GetName();
				StateStackName.RemoveFromEnd("_C");
				
				Content->AddSlot()
					.AutoHeight()
					[
						SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.AutoHeight()
						.Padding(0.f, 1.f, 0.f, 0.f)
						[
							SNew(STextBlock)
							.Text(FText::FromString(StateStackName))
							.TextStyle(FEditorStyle::Get(), "SmallText")
							.Visibility(EditorSettings->bDisplayStateStackClassNames ? EVisibility::Visible : EVisibility::Collapsed)
						]
						+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SAssignNew(NodeStackBorder, SBorder)
							.BorderImage(FEditorStyle::GetBrush("Graph.StateNode.Body"))
							.Padding(2)
							.BorderBackgroundColor(BackgroundColor)
							[
								SAssignNew(NodeStackBox, SVerticalBox)
							]
						]
					];
			}

			TSharedPtr<SVerticalBox> ContentBoxToUse = NodeStackBox.IsValid() ? NodeStackBox : Content;

			ContentBoxToUse->AddSlot()
				.Padding(0.f, 2.5f)
				.AutoHeight()
				[
					StaticCastSharedRef<SWidget>(PropertyWidget.ToSharedRef())
				];

			LastTemplate = CurrentTemplate;
		}
	}
	
	return Content;
}

FSlateColor SGraphNode_StateNode::GetBorderBackgroundColor() const
{
	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	
	FLinearColor BackgroundColor = StateNode->GetBackgroundColor();
	BackgroundColor.A *= GetColorAndOpacity().A;
	
	return BackgroundColor;
}

const FSlateBrush* SGraphNode_StateNode::GetNameIcon() const
{
	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	if(const FSlateBrush* Brush = StateNode->GetNodeIcon())
	{
		return Brush;
	}
	
	return FEditorStyle::GetBrush(TEXT("Graph.StateNode.Icon"));
}


void SGraphNode_ConduitNode::Construct(const FArguments& InArgs, USMGraphNode_ConduitNode* InNode)
{
	const USMEditorSettings* EditorSettings = FSMBlueprintEditorUtils::GetEditorSettings();

	SGraphNode_StateNode::FArguments Args;
	Args.ContentPadding(EditorSettings->StateContentPadding);
	
	SGraphNode_StateNode::Construct(Args, InNode);
}

void SGraphNode_ConduitNode::GetNodeInfoPopups(FNodeInfoContext* Context, TArray<FGraphInformationPopupInfo>& Popups) const
{
	USMGraphNode_ConduitNode* Node = CastChecked<USMGraphNode_ConduitNode>(GraphNode);
	if (const FSMConduit* DebugNode = (FSMConduit*)Node->GetDebugNode())
	{
		if (Node->ShouldEvalWithTransitions() && Node->WasEvaluating())
		{
			// Transition evaluation, don't show active information.
			return;
		}
	}
	
	SGraphNode_StateNode::GetNodeInfoPopups(Context, Popups);
}

const FSlateBrush* SGraphNode_ConduitNode::GetNameIcon() const
{
	USMGraphNode_StateNodeBase* StateNode = CastChecked<USMGraphNode_StateNodeBase>(GraphNode);
	if (const FSlateBrush* Brush = StateNode->GetNodeIcon())
	{
		return Brush;
	}
	
	return FEditorStyle::GetBrush(TEXT("Graph.ConduitNode.Icon"));
}

#undef LOCTEXT_NAMESPACE