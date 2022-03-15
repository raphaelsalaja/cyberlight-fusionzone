// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SSMEditableTextBlock.h"
#include "SSMEditableTextBox.h"
#include "Text/SMRunTypes.h"
#include "Widgets/SBoxPanel.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Text/RichTextLayoutMarshaller.h"
#include "Framework/Text/SlateHyperlinkRun.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Text/SMMoveCursor.h"
#include "EditorStyle.h"
#include "Kismet/Private/BPVariableDragDropAction.h"
#include "Kismet/Private/MyBlueprintItemDragDropAction.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Helpers/SMDragDropHelpers.h"
#include "Configuration/SMEditorStyle.h"
#include "Configuration/SMExtendedEditorStyle.h"
#include "Utilities/SMTextGraphUtils.h"

#define LOCTEXT_NAMESPACE "SMEditableTextBlock"

FMyBlueprintItemDragDropAction_DEFINITION

static void OnBrowserLinkClicked(const FSMPropertyRun::FMetadata& Metadata)
{
	const FString* Url = Metadata.Find(TEXT("href"));
	if (Url)
	{
		FPlatformProcess::LaunchURL(**Url, nullptr, nullptr);
	}
}

TSharedPtr<FPropertyRunTypeDesc> RunTypeDesc = MakeShareable(new FPropertyRunTypeDesc(
	LOCTEXT("BrowserLinkTypeLabel", "URL"),
	LOCTEXT("BrowserLinkTypeTooltip", "A link that opens a browser window (e.g. http://www.unrealengine.com)"),
	TEXT("property"),
	FSMPropertyRun::FOnClick::CreateStatic(&OnBrowserLinkClicked)));


void SSMEditableTextBlock::Construct(const FArguments& InArgs)
{
	check(InArgs._Style);

	GraphNode = InArgs._GraphNode;

	OnBeginTextEditDelegate = InArgs._OnBeginTextEdit;
	OnTextCommittedDelegate = InArgs._OnTextCommitted;
	IsSelected = InArgs._IsSelected;
	OnVerifyTextChanged = InArgs._OnVerifyTextChanged;
	Text = InArgs._Text;
	
	bIsReadOnly = InArgs._IsReadOnly;
	bIsMultiLine = InArgs._MultiLine;
	DoubleSelectDelay = 0.0f;

	OnEnterEditingMode = InArgs._OnEnterEditingMode;
	OnExitEditingMode = InArgs._OnExitEditingMode;

	TSharedRef<FRichTextLayoutMarshaller> RichTextMarshaller = FRichTextLayoutMarshaller::Create(
		TArray<TSharedRef<ITextDecorator>>(),
		&*FSMExtendedEditorStyle::Get()
	);

	TSharedRef<FPropertyDecorator> Decorator = FPropertyDecorator::Create(RunTypeDesc->Id, RunTypeDesc->OnClickedDelegate, RunTypeDesc->TooltipTextDelegate, RunTypeDesc->TooltipDelegate);
	RichTextMarshaller->AppendInlineDecorator(Decorator);

	bIsDefaultValue = Text.Get().IsEmpty();
	
	ChildSlot
		[
			SAssignNew(HorizontalBox, SHorizontalBox)

			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			[
				SAssignNew(RichTextBlock, SRichTextBlock)
				.Marshaller(RichTextMarshaller)
				.Text(bIsDefaultValue ? InArgs._DefaultText : Text)
				.TextStyle(bIsDefaultValue ? &InArgs._DefaultTextStyle.Get() : &InArgs._Style->TextStyle)
				.HighlightText(InArgs._HighlightText)
				.ToolTipText(InArgs._ToolTipText)
				.WrapTextAt(InArgs._WrapTextAt)
				.Justification(InArgs._Justification)
			]
		];

	SAssignNew(MultiLineTextBox, SSMEditableTextBox)
		.Marshaller(RichTextMarshaller)
		.Text(InArgs._Text)
		.AllowMultiLine(bIsMultiLine)
		.Style(&InArgs._Style->EditableTextBoxStyle)
		.Font(InArgs._Font)
		.ToolTipText(InArgs._ToolTipText)
		.OnTextChanged(this, &SSMEditableTextBlock::OnTextChanged)
		.OnTextCommitted(this, &SSMEditableTextBlock::OnTextBoxCommitted)
		.WrapTextAt(InArgs._WrapTextAt)
		.Justification(InArgs._Justification)
		.SelectAllTextWhenFocused(false)
		.ClearKeyboardFocusOnCommit(true)
		.RevertTextOnEscape(true)
		.ModiferKeyForNewLine(InArgs._ModiferKeyForNewLine);
	
}

SSMEditableTextBlock::~SSMEditableTextBlock()
{
	if (IsInEditMode())
	{
		// Clear the error so it will vanish.
		SetTextBoxError(FText::GetEmpty());
	}
}

void SSMEditableTextBlock::CancelEditMode()
{
	ExitEditingMode();

	// Get the text from source again.
	SetEditableText(Text);
}

bool SSMEditableTextBlock::IsDragDropValid(const FDragDropEvent& DragDropEvent) const
{
	return FSMDragDropHelpers::IsDragDropValidForPropertyNode(Cast<USMGraphK2Node_PropertyNode_Base>(GraphNode), DragDropEvent);
}

bool SSMEditableTextBlock::SupportsKeyboardFocus() const
{
	//Can not have keyboard focus if it's status of being selected is managed by another widget.
	return !IsSelected.IsBound();
}

void SSMEditableTextBlock::EnterEditingMode()
{
	if (!IsInEditMode() && !bIsReadOnly.Get() && FSlateApplication::Get().HasAnyMouseCaptor() == false)
	{
		if (RichTextBlock->GetVisibility() == EVisibility::Visible)
		{
			OnEnterEditingMode.ExecuteIfBound();

			const FText CurrentText = bIsDefaultValue ? FText::GetEmpty() : RichTextBlock->GetText();
			SetEditableText(CurrentText);

			TSharedPtr<SWidget> ActiveTextBox = GetEditableTextWidget();
			HorizontalBox->AddSlot()
				[
					ActiveTextBox.ToSharedRef()
				];

			WidgetToFocus = FSlateApplication::Get().GetKeyboardFocusedWidget();
			FSlateApplication::Get().SetKeyboardFocus(ActiveTextBox, EFocusCause::SetDirectly);

			RichTextBlock->SetVisibility(EVisibility::Collapsed);

			OnBeginTextEditDelegate.ExecuteIfBound(CurrentText);
		}
	}
}

void SSMEditableTextBlock::ExitEditingMode()
{
	if(!IsInEditMode())
	{
		return;
	}

	OnExitEditingMode.ExecuteIfBound();

	HorizontalBox->RemoveSlot(GetEditableTextWidget().ToSharedRef());
	RichTextBlock->SetVisibility(EVisibility::Visible);
	// Clear the error so it will vanish.
	SetTextBoxError(FText::GetEmpty());

	// Restore the original widget focus
	TSharedPtr<SWidget> WidgetToFocusPin = WidgetToFocus.Pin();
	if (WidgetToFocusPin.IsValid())
	{
		FSlateApplication::Get().SetKeyboardFocus(WidgetToFocusPin, EFocusCause::SetDirectly);
	}
	else
	{
		FSlateApplication::Get().ClearKeyboardFocus(EFocusCause::SetDirectly);
	}
}

bool SSMEditableTextBlock::IsInEditMode() const
{
	return RichTextBlock->GetVisibility() == EVisibility::Collapsed;
}

void SSMEditableTextBlock::SetReadOnly(bool bInIsReadOnly)
{
	bIsReadOnly = bInIsReadOnly;
}

void SSMEditableTextBlock::SetText(const TAttribute< FText >& InText)
{
	Text = InText;
	RichTextBlock->SetText(Text);
	SetEditableText(Text);
}

void SSMEditableTextBlock::SetText(const FString& InText)
{
	Text = FText::FromString(InText);
	RichTextBlock->SetText(Text);
	SetEditableText(Text);
}

void SSMEditableTextBlock::SetWrapTextAt(const TAttribute<float>& InWrapTextAt)
{
	RichTextBlock->SetWrapTextAt(InWrapTextAt);
}

void SSMEditableTextBlock::InsertProperty(FProperty* Property)
{
	const FName VariableName = Property->GetFName();

	FBPVariableDescription Variable;
	const bool VarExists = FSMBlueprintEditorUtils::TryGetVariableByName(FSMBlueprintEditorUtils::FindBlueprintForNode(GraphNode), VariableName, Variable);

	const FRunInfo RunInfo = FRunTypeUtils::CreatePropertyRunInfo(VariableName, VarExists ? &Variable : nullptr);

	FName TextStyleName = TEXT("SMExtendedEditor.Graph.Property.Text");
	FName ButtonStyleName = TEXT("SMExtendedEditor.Graph.Property.Button");

	// TODO: Move to run type desc / clean up from CreatePropertyRunInfo
	FTextBlockStyle TextStyle = FSMExtendedEditorStyle::Get()->GetWidgetStyle<FTextBlockStyle>(TextStyleName); 
	FButtonStyle ButtonStyle = FSMExtendedEditorStyle::Get()->GetWidgetStyle<FButtonStyle>(ButtonStyleName);

	TSharedRef<FSMPropertyRun> PropertyRun = FSMPropertyRun::Create(
		RunInfo,
		MakeShareable(new FString(VariableName.ToString())),
		ButtonStyle,
		TextStyle,
		RunTypeDesc->OnClickedDelegate,
		RunTypeDesc->TooltipDelegate,
		RunTypeDesc->TooltipTextDelegate
	);

	MultiLineTextBox->InsertRunAtCursor(PropertyRun);
}

void SSMEditableTextBlock::InsertFunction(UFunction* Function)
{
	const FRunInfo RunInfo = FRunTypeUtils::CreateFunctionRunInfo(Function);

	FName TextStyleName = TEXT("SMExtendedEditor.Graph.Property.Text");
	FName ButtonStyleName = TEXT("SMExtendedEditor.Graph.Property.Button");

	// TODO: Move to run type desc / clean up from CreatePropertyRunInfo
	FTextBlockStyle TextStyle = FSMExtendedEditorStyle::Get()->GetWidgetStyle<FTextBlockStyle>(TextStyleName);
	FButtonStyle ButtonStyle = FSMExtendedEditorStyle::Get()->GetWidgetStyle<FButtonStyle>(ButtonStyleName);

	TSharedRef<FSMPropertyRun> PropertyRun = FSMPropertyRun::Create(
		RunInfo,
		MakeShareable(new FString(Function->GetName())),
		ButtonStyle,
		TextStyle,
		RunTypeDesc->OnClickedDelegate,
		RunTypeDesc->TooltipDelegate,
		RunTypeDesc->TooltipTextDelegate
	);

	MultiLineTextBox->InsertRunAtCursor(PropertyRun);
}

FReply SSMEditableTextBlock::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (!MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) || MouseEvent.IsControlDown() || MouseEvent.IsShiftDown())
	{
		return FReply::Unhandled();
	}

	if (IsSelected.IsBound())
	{
		if (IsSelected.Execute() && !bIsReadOnly.Get() && !ActiveTimerHandle.IsValid())
		{
			RegisterActiveTimer(0.5f, FWidgetActiveTimerDelegate::CreateSP(this, &SSMEditableTextBlock::TriggerEditMode));
		}
	}
	else
	{
		// The widget is not managed by another widget, so handle the mouse input and enter edit mode if ready.
		if (HasKeyboardFocus() && !bIsReadOnly.Get())
		{
			EnterEditingMode();
			return FReply::Handled();
		}
	}

	// Do not handle the mouse input, this will allow for drag and dropping events to trigger.
	return FReply::Unhandled();
}

FReply SSMEditableTextBlock::OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (IsDragDropValid(DragDropEvent))
	{
		if (!IsInEditMode())
		{
			EnterEditingMode();
		}

		if (MultiLineTextBox.IsValid())
		{
			// Set the text cursor at the location of the mouse pointer.
			const FMoveCursor MoveCursor = FMoveCursor::ViaScreenPointer(MyGeometry.AbsoluteToLocal(DragDropEvent.GetScreenSpacePosition()), MyGeometry.Scale, ECursorAction::MoveCursor);
			MultiLineTextBox->GetEditableText()->GetTextLayout()->MoveCursor(MoveCursor);
		}

		SetCursor(EMouseCursor::GrabHand);

		// Tooltip message.
		FSMDragDropHelpers::SetDragDropMessage(DragDropEvent);
		
		return FReply::Handled();
	}

	// Cancel during a drag over event, otherwise the widget may enter edit mode.
	auto PinnedActiveTimerHandle = ActiveTimerHandle.Pin();
	if (PinnedActiveTimerHandle.IsValid())
	{
		UnRegisterActiveTimer(PinnedActiveTimerHandle.ToSharedRef());
	}

	return FReply::Unhandled();
}

void SSMEditableTextBlock::OnDragLeave(const FDragDropEvent& DragDropEvent)
{
	if (IsInEditMode())
	{
		ExitEditingMode();
	}

	SetCursor(EMouseCursor::CardinalCross);

	SCompoundWidget::OnDragLeave(DragDropEvent);
}

FReply SSMEditableTextBlock::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	if (MultiLineTextBox.IsValid() && IsDragDropValid(DragDropEvent))
	{
		TSharedPtr<FKismetVariableDragDropAction> VariableDragDrop = DragDropEvent.GetOperationAs<FKismetVariableDragDropAction>();
		TSharedPtr<FKismetFunctionDragDropAction> FunctionDragDrop = DragDropEvent.GetOperationAs<FKismetFunctionDragDropAction>();
		if (VariableDragDrop.IsValid())
		{
			FProperty* Property = VariableDragDrop->GetVariableProperty();
			InsertProperty(Property);
		}
		else if(FunctionDragDrop.IsValid())
		{
			UFunction const* Function = FSMDragDropAction_Function::GetFunction(FunctionDragDrop.Get());
			InsertFunction(const_cast<UFunction*>(Function));
		}
		
		return FReply::Handled();
	}

	return SCompoundWidget::OnDrop(MyGeometry, DragDropEvent);
}

FReply SSMEditableTextBlock::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	auto PinnedActiveTimerHandle = ActiveTimerHandle.Pin();
	if (PinnedActiveTimerHandle.IsValid())
	{
		UnRegisterActiveTimer(PinnedActiveTimerHandle.ToSharedRef());
	}
	return FReply::Unhandled();
}

EActiveTimerReturnType SSMEditableTextBlock::TriggerEditMode(double InCurrentTime, float InDeltaTime)
{
	EnterEditingMode();
	return EActiveTimerReturnType::Stop;
}

FReply SSMEditableTextBlock::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	if (InKeyEvent.GetKey() == EKeys::F2)
	{
		EnterEditingMode();
		return FReply::Handled();
	}
	return FReply::Unhandled();
}

void SSMEditableTextBlock::OnTextChanged(const FText& InText)
{
	if (IsInEditMode())
	{
		FText OutErrorMessage;

		if (OnVerifyTextChanged.IsBound() && !OnVerifyTextChanged.Execute(InText, OutErrorMessage))
		{
			SetTextBoxError(OutErrorMessage);
		}
		else
		{
			SetTextBoxError(FText::GetEmpty());
		}
	}
}

void SSMEditableTextBlock::OnTextBoxCommitted(const FText& InText, ETextCommit::Type InCommitType)
{
	if (InCommitType == ETextCommit::OnCleared)
	{
		CancelEditMode();
		// Commit the name, certain actions might need to be taken by the bound function
		OnTextCommittedDelegate.ExecuteIfBound(Text.Get(), InCommitType);
	}
	else if (IsInEditMode())
	{
		if (OnVerifyTextChanged.IsBound())
		{
			if (InCommitType == ETextCommit::OnEnter)
			{
				FText OutErrorMessage;
				if (!OnVerifyTextChanged.Execute(InText, OutErrorMessage))
				{
					// Display as an error.
					SetTextBoxError(OutErrorMessage);
					return;
				}
			}
			else if (InCommitType == ETextCommit::OnUserMovedFocus)
			{
				FText OutErrorMessage;
				if (!OnVerifyTextChanged.Execute(InText, OutErrorMessage))
				{
					CancelEditMode();

					// Commit the name, certain actions might need to be taken by the bound function
					OnTextCommittedDelegate.ExecuteIfBound(Text.Get(), InCommitType);

					return;
				}
			}
			else // When the user removes all focus from the window, revert the name
			{
				CancelEditMode();

				// Commit the name, certain actions might need to be taken by the bound function
				OnTextCommittedDelegate.ExecuteIfBound(Text.Get(), InCommitType);
				return;
			}
		}

		ExitEditingMode();

		OnTextCommittedDelegate.ExecuteIfBound(InText, InCommitType);

		if (!Text.IsBound())
		{
			RichTextBlock->SetText(Text);
		}
	}
}

TSharedPtr<SWidget> SSMEditableTextBlock::GetEditableTextWidget() const
{
	return MultiLineTextBox;
}

void SSMEditableTextBlock::SetEditableText(const TAttribute< FText >& InNewText)
{
	MultiLineTextBox->SetText(InNewText);
}

void SSMEditableTextBlock::SetTextBoxError(const FText& ErrorText)
{
	MultiLineTextBox->SetError(ErrorText);
}

#undef LOCTEXT