// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SSMGraphProperty.h"
#include "EditorStyle.h"
#include "Widgets/Layout/SBox.h"
#include "NodeFactory.h"
#include "Kismet/Private/BPVariableDragDropAction.h"
#include "Kismet/Private/BPFunctionDragDropAction.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_PropertyNode.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Helpers/SMDragDropHelpers.h"

#define LOCTEXT_NAMESPACE "SSMGraphProperty"

SSMGraphProperty_Base::SSMGraphProperty_Base(): GraphNode(nullptr)
{
}

void SSMGraphProperty_Base::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseEnter(MyGeometry, MouseEvent);
	if(USMGraphK2Node_PropertyNode_Base* Node = Cast<USMGraphK2Node_PropertyNode_Base>(GraphNode))
	{
		Node->bMouseOverNodeProperty = true;
	}
}

void SSMGraphProperty_Base::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseLeave(MouseEvent);

	if (!MouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		if (USMGraphK2Node_PropertyNode_Base* Node = Cast<USMGraphK2Node_PropertyNode_Base>(GraphNode))
		{
			Node->bMouseOverNodeProperty = false;
		}
	}
}

FReply SSMGraphProperty_Base::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	if (USMGraphK2Node_PropertyNode_Base* Node = Cast<USMGraphK2Node_PropertyNode_Base>(GraphNode))
	{
		Node->JumpToPropertyGraph();
		return FReply::Handled();
	}

	return SCompoundWidget::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

TSharedPtr<SGraphNode> SSMGraphProperty_Base::FindParentGraphNode() const
{
	for(TSharedPtr<SWidget> Parent = GetParentWidget(); Parent.IsValid(); Parent = Parent->GetParentWidget())
	{
		FString Type = Parent->GetType().ToString();
		if(Type.Contains("SGraphNode"))
		{
			return StaticCastSharedPtr<SGraphNode>(Parent);
		}
	}

	return nullptr;
}

UEdGraphPin* SSMGraphProperty_Base::FindResultPin() const
{
	if (USMGraphK2Node_PropertyNode_Base* Node = Cast<USMGraphK2Node_PropertyNode_Base>(GraphNode))
	{
		return Node->GetResultPin();
	}

	return nullptr;
}

SSMGraphProperty::SSMGraphProperty() : SSMGraphProperty_Base(), bIsValidDragDrop(false)
{
}

SSMGraphProperty::~SSMGraphProperty()
{
	if (USMGraphK2Node_GraphPropertyNode* Node = Cast<USMGraphK2Node_GraphPropertyNode>(GraphNode))
	{
		Node->ForceVisualRefreshEvent.Unbind();
	}
}

void SSMGraphProperty::Construct(const FArguments& InArgs)
{
	GraphNode = InArgs._GraphNode;
	WidgetInfo = InArgs._WidgetInfo ? *InArgs._WidgetInfo : FSMTextDisplayWidgetInfo();
	
	FText DefaultText = InArgs._WidgetInfo->DefaultText;

	UEdGraphPin* ResultPin = nullptr;
	if (USMGraphK2Node_GraphPropertyNode* Node = Cast<USMGraphK2Node_GraphPropertyNode>(GraphNode))
	{
		Node->ForceVisualRefreshEvent.Unbind();
		Node->ForceVisualRefreshEvent.BindSP(this, &SSMGraphProperty::Refresh);
		
		if (DefaultText.IsEmpty())
		{
			DefaultText = Node->GetPropertyNode()->GetDisplayName();
		}
		ResultPin = Node->GetResultPin();

		if (FSMGraphProperty_Base* Prop = Node->GetPropertyNode())
		{
			if (UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNode(Node))
			{
				if (FProperty* Property = Prop->MemberReference.ResolveMember<FProperty>(Blueprint))
				{
					const FText Description = Property->GetToolTipText();
					if (!Description.IsEmpty())
					{
						SetToolTipText(Description);
					}
				}
			}
		}
	}
	
	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("Graph.StateNode.ColorSpill"))
		.BorderBackgroundColor(this, &SSMGraphProperty::GetBackgroundColor)
		.Padding(FMargin(1.f))
		.Visibility(EVisibility::Visible)
		[
			SNew(SBox)
			.MinDesiredWidth(WidgetInfo.MinWidth)
			.MaxDesiredWidth(WidgetInfo.MaxWidth)
			.MinDesiredHeight(WidgetInfo.MinHeight)
			.MaxDesiredHeight(WidgetInfo.MaxHeight)
			.Clipping(WidgetInfo.Clipping)
			.Padding(FMargin(1.f))
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				.VAlign(VAlign_Center)
				[
					SAssignNew(ValueDisplay, SHorizontalBox)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Top)
					[
						// Default text.
						SAssignNew(TextBlockWidget, STextBlock)
						.Text(DefaultText)
						.TextStyle(&WidgetInfo.DefaultTextStyle)
						.Margin(FMargin(1.f))
					]
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Top)
					.AutoWidth()
					[
						// Linear expression.
						SAssignNew(ExpressionWidget, SKismetLinearExpression, ResultPin)
						.Clipping(EWidgetClipping::ClipToBounds)
						.IsEditable(false)
					]
				]
			]
		]
	];

	HandleExpressionChange(ResultPin);
}

void SSMGraphProperty::Finalize()
{
	UEdGraphPin* ResultPin = FindResultPin();
	TSharedPtr<SGraphNode> ParentNode = FindParentGraphNode();
	InputPin = (ParentNode.IsValid() && ResultPin) ? FNodeFactory::CreatePinWidget(ResultPin) : nullptr;
	// Don't display if invalid or another connection is present. We only want this to display / edit the default value.
	if (InputPin.IsValid() && !InputPin->IsConnected())
	{
		InputPin->SetOwner(ParentNode.ToSharedRef());
		InputPin->SetOnlyShowDefaultValue(true);
		InputPin->SetShowLabel(false);
		InputPin->SetPinColorModifier(FLinearColor(1.f, 1.f, 1.f, 0.35f)); // Without this the color can wash out the text.

		if (USMGraphK2Node_GraphPropertyNode* Node = Cast<USMGraphK2Node_GraphPropertyNode>(GraphNode))
		{
			if (const FSMGraphProperty_Base* Prop = Node->GetPropertyNode())
			{
				InputPin->SetIsEditable(!Prop->IsVariableReadOnly());
			}
		}
		
		TWeakPtr<SHorizontalBox> Row = InputPin->GetFullPinHorizontalRowWidget();
		// We want to hide the k2 selection pin as this is only for defaults.
		if (Row.Pin().IsValid())
		{
			if(FChildren* Children = Row.Pin()->GetChildren())
			{
				// The first child should be the pin.
				if(Children->Num() > 1)
				{
					Children->GetChildAt(0)->SetVisibility(EVisibility::Collapsed);
				}
			}
		}
		
		ValueDisplay->AddSlot()
			.AutoWidth()
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Top)
			[
				InputPin.ToSharedRef()
			];
	}
}

FReply SSMGraphProperty::OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (IsDragDropValid(DragDropEvent))
	{
		bIsValidDragDrop = true;
		SetCursor(EMouseCursor::GrabHand);

		// Tooltip message.
		FSMDragDropHelpers::SetDragDropMessage(DragDropEvent);
		
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

void SSMGraphProperty::OnDragLeave(const FDragDropEvent& DragDropEvent)
{
	SetCursor(EMouseCursor::CardinalCross);
	bIsValidDragDrop = false;
	SCompoundWidget::OnDragLeave(DragDropEvent);
}

FReply SSMGraphProperty::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (IsDragDropValid(DragDropEvent))
	{
		UEdGraphPin* ResultPin = nullptr;
		if (USMGraphK2Node_GraphPropertyNode* Node = Cast<USMGraphK2Node_GraphPropertyNode>(GraphNode))
		{
			USMPropertyGraph* Graph = CastChecked<USMPropertyGraph>(Node->GetPropertyGraph());

			TSharedPtr<FKismetVariableDragDropAction> VariableDragDrop = DragDropEvent.GetOperationAs<FKismetVariableDragDropAction>();
			if (VariableDragDrop.IsValid())
			{
				FProperty* Property = VariableDragDrop->GetVariableProperty();
				Graph->SetPropertyOnGraph(Property);
			}
			TSharedPtr<FKismetFunctionDragDropAction> FunctionDragDrop = DragDropEvent.GetOperationAs<FKismetFunctionDragDropAction>();
			if (FunctionDragDrop.IsValid())
			{
				UFunction const* Function = FSMDragDropAction_Function::GetFunction(FunctionDragDrop.Get());
				Graph->SetFunctionOnGraph(const_cast<UFunction*>(Function));
			}

			ResultPin = Node->GetResultPin();
		}

		SetCursor(EMouseCursor::CardinalCross);

		bIsValidDragDrop = false;
		ExpressionWidget->SetExpressionRoot(ResultPin);
		HandleExpressionChange(ResultPin);

		return FReply::Handled();
	}

	return SCompoundWidget::OnDrop(MyGeometry, DragDropEvent);
}

void SSMGraphProperty::Refresh()
{
	HandleExpressionChange(FindResultPin());
}

bool SSMGraphProperty::IsDragDropValid(const FDragDropEvent& DragDropEvent) const
{
	return FSMDragDropHelpers::IsDragDropValidForPropertyNode(Cast<USMGraphK2Node_PropertyNode_Base>(GraphNode), DragDropEvent, true);
}

FSlateColor SSMGraphProperty::GetBackgroundColor() const
{
	return bIsValidDragDrop ? WidgetInfo.OnDropBackgroundColor : WidgetInfo.BackgroundColor;
}

void SSMGraphProperty::HandleExpressionChange(UEdGraphPin* ResultPin)
{
	if (ResultPin && ResultPin->LinkedTo.Num())
	{
		// Display normal object evaluation.
		ExpressionWidget->SetVisibility(EVisibility::HitTestInvisible);
		ExpressionWidget->SetExpressionRoot(ResultPin);
		
		if (InputPin.IsValid())
		{
			InputPin->SetVisibility(EVisibility::Collapsed);
		}
	}
	else
	{
		// Display default text only.
		ExpressionWidget->SetVisibility(EVisibility::Collapsed);
		if (InputPin.IsValid())
		{
			InputPin->SetVisibility(EVisibility::HitTestInvisible);
		}
	}
}

#undef LOCTEXT_NAMESPACE