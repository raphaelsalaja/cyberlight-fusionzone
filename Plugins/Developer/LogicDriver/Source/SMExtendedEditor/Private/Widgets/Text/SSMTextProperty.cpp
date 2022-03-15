// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SSMTextProperty.h"
#include "SSMEditableTextBlock.h"
#include "SSMEditableTextBox.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h"
#include "Graph/SMTextPropertyGraph.h"
#include "Widgets/Layout/SBox.h"
#include "EditorStyle.h"
#include "NodeFactory.h"
#include "Blueprints/SMBlueprintEditor.h"
#include "Utilities/SMBlueprintEditorUtils.h"


SSMTextProperty::SSMTextProperty(): SSMGraphProperty_Base()
{
}

void SSMTextProperty::Construct(const FArguments& InArgs)
{
	GraphNode = InArgs._GraphNode;
	WidgetInfo = InArgs._WidgetInfo ? *InArgs._WidgetInfo : FSMTextNodeWidgetInfo();

	FText DefaultText = InArgs._WidgetInfo->DefaultText;
	if (USMGraphK2Node_TextPropertyNode* Node = Cast<USMGraphK2Node_TextPropertyNode>(GraphNode))
	{
		if (DefaultText.IsEmpty())
		{
			DefaultText = Node->GetPropertyNode()->GetDisplayName();
		}
		CastChecked<USMTextPropertyGraph>(Node->GetPropertyGraph())->SwitchTextEditAction.BindSP(this, &SSMTextProperty::ToggleTextEdit);

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
	
	// Text body
	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("Graph.StateNode.ColorSpill"))
		.BorderBackgroundColor(WidgetInfo.BackgroundColor)
		.Padding(FMargin(1.f))
		.Visibility(EVisibility::Visible)
		[
			SAssignNew(HorizontalBox, SHorizontalBox)
			+ SHorizontalBox::Slot()
			[
				SNew(SBox)
				.MinDesiredWidth(WidgetInfo.MinWidth)
				.MaxDesiredWidth(WidgetInfo.MaxWidth)
				.MinDesiredHeight(WidgetInfo.MinHeight)
				.MaxDesiredHeight(WidgetInfo.MaxHeight)
				.Padding(FMargin(1.f))
				[
					SAssignNew(InlineEditableTextBody, SSMEditableTextBlock)
					.GraphNode(GraphNode.Get())
					.Text(this, &SSMTextProperty::GetTextBody)
					.DefaultText(DefaultText)
					.DefaultTextStyle(WidgetInfo.DefaultTextStyle)
					.WrapTextAt(this, &SSMTextProperty::GetWrapText)
					.Style(&WidgetInfo.EditableTextStyle)
					.IsReadOnly(this, &SSMTextProperty::IsReadOnly)
					.OnTextCommitted(this, &SSMTextProperty::OnBodyTextCommited)
					.MultiLine(true)
				]
			]
		]
	];
}

void SSMTextProperty::Finalize()
{
	if (USMGraphK2Node_TextPropertyNode* Node = Cast<USMGraphK2Node_TextPropertyNode>(GraphNode))
	{
		USMTextPropertyGraph* Graph = CastChecked<USMTextPropertyGraph>(Node->GetPropertyGraph());
		if (UEdGraphPin* FormatTextPin = Graph->GetFormatTextNodePin())
		{
			TSharedPtr<SGraphNode> ParentNode = FindParentGraphNode();
			// Create a pin representing the FormatTextNode text pin.
			TSharedPtr<SGraphPin> InputPin = (ParentNode.IsValid() && FormatTextPin) ? FNodeFactory::CreatePinWidget(FormatTextPin) : nullptr;

			if (InputPin.IsValid())
			{
				InputPin->SetOwner(ParentNode.ToSharedRef());
				InputPin->SetShowLabel(false);

				if (const FSMGraphProperty_Base* Prop = Node->GetPropertyNode())
				{
					InputPin->SetIsEditable(!Prop->IsVariableReadOnly());
				}
				
				TWeakPtr<SHorizontalBox> Row = InputPin->GetFullPinHorizontalRowWidget();

				if (Row.Pin().IsValid())
				{
					bool bSuccess = false;
					if (FChildren* Children = Row.Pin()->GetChildren())
					{
						if (Children->Num() > 1)
						{
							// Hide the input pin.
							Children->GetChildAt(0)->SetVisibility(EVisibility::Collapsed);

							// Hide the text box. We only want to leave the localization button.
							/*
							 * If the following looks like a hack to you, then you would be correct!
							 * We just want the localization button that's defined in STextPropertyEditableTextBox.
							 * However there is no easy way to get that button or the even the PrimaryWidget which is
							 * the actual reference to what we want to hide. Why? It's private because of course it is,
							 * and recreating STextPropertyEditableTextBox much like every other slate text related item
							 * in the extended module was definitely considered, but luckily this nifty hack gets around that...
							 * at least until an engine update causes it to explode.
							 */
							if (FChildren* GrandChildren = Children->GetChildAt(1)->GetChildren())
							{
								if(GrandChildren->Num() > 0)
								{
									if (FChildren* GreatGrandChildren = GrandChildren->GetChildAt(1)->GetChildren())
									{
										if (GreatGrandChildren->Num() > 0)
										{
											FChildren* GreatGreatGrandChildren = GreatGrandChildren->GetChildAt(0)->GetChildren();

											if(GreatGreatGrandChildren->Num() > 0)
											{
												FChildren* MoreGreatGrandChildren = GreatGreatGrandChildren->GetChildAt(0)->GetChildren();

												if (MoreGreatGrandChildren->Num() > 0)
												{
													TSharedRef<SWidget> ValueWidget = MoreGreatGrandChildren->GetChildAt(0);
													ValueWidget->SetVisibility(EVisibility::Collapsed);
													bSuccess = true;
												}
											}
										}
									}
								}
							}
						}
					}
					
					ensureMsgf(bSuccess, TEXT("Can't find value widget to hide on text node. Check to see if an engine update changed the slate structure."));
				}

				// To the center right of the main text body.
				HorizontalBox->AddSlot()
					.AutoWidth()
					.HAlign(HAlign_Left)
					.VAlign(VAlign_Center)
					[
						InputPin.ToSharedRef()
					];
			}
		}
	}
}

FReply SSMTextProperty::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	if (USMGraphK2Node_TextPropertyNode* Node = Cast<USMGraphK2Node_TextPropertyNode>(GraphNode))
	{
		const USMTextPropertyGraph* TextGraph = CastChecked<USMTextPropertyGraph>(Node->GetPropertyGraph());
		// Don't want to jump if we're trying to edit text.
		if (TextGraph->IsGraphBeingUsedToEdit() || TextGraph->IsVariableReadOnly())
		{
			Node->JumpToPropertyGraph();
			return FReply::Handled();
		}
	}

	return SCompoundWidget::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

void SSMTextProperty::ToggleTextEdit(bool bValue)
{
	if (FSMBlueprintEditor* Editor = FSMBlueprintEditorUtils::GetStateMachineEditor(GraphNode.Get()))
	{
		// Check that we're not in debug mode.
		if (!Editor->InEditingMode())
		{
			return;
		}
	}
	
	if (!bValue && InlineEditableTextBody->IsInEditMode())
	{
		InlineEditableTextBody->ExitEditingMode();
	}
	else
	{
		InlineEditableTextBody->EnterEditingMode();
	}
}

bool SSMTextProperty::IsReadOnly() const
{
	if (FSMBlueprintEditor* Editor = FSMBlueprintEditorUtils::GetStateMachineEditor(GraphNode.Get()))
	{
		// Check that we're not in debug mode.
		if (!Editor->InEditingMode())
		{
			return true;
		}
	}
	
	USMGraphK2Node_TextPropertyNode* PropertyNode = CastChecked<USMGraphK2Node_TextPropertyNode>(GraphNode);
	return PropertyNode->GetPropertyGraph()->IsGraphBeingUsedToEdit() || PropertyNode->GetPropertyNodeChecked()->IsVariableReadOnly();
}

FText SSMTextProperty::GetTextBody() const
{
	return CastChecked<USMTextPropertyGraph>(CastChecked<USMGraphK2Node_TextPropertyNode>(GraphNode)->GetPropertyGraph())->GetTextBody();
}

void SSMTextProperty::OnBodyTextCommited(const FText& InText, ETextCommit::Type CommitInfo)
{
	const FText PlainText = InlineEditableTextBody->GetRichTextBlock()->GetPlainText();

	USMGraphK2Node_TextPropertyNode* Node = CastChecked<USMGraphK2Node_TextPropertyNode>(GraphNode);
	CastChecked<USMTextPropertyGraph>(Node->GetPropertyGraph())->SetNewText(PlainText);
}

float SSMTextProperty::GetWrapText() const
{
	// Set to most of max width. Extra padding needed to prevent cutoff.
	if(WidgetInfo.WrapTextAt == 0)
	{
		return WidgetInfo.MaxWidth * .9f;
	}
	
	return WidgetInfo.WrapTextAt > 0 ? WidgetInfo.WrapTextAt : 0;
}
