// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMBlueprintEditorToolbar.h"
#include "SMBlueprintEditor.h"
#include "Blueprints/SMBlueprintEditorModes.h"
#include "Commands/SMEditorCommands.h"
#include "Configuration/SMEditorStyle.h"

#include "ISMPreviewEditorModule.h"

#include "WorkflowOrientedApp/SModeWidget.h"

#define LOCTEXT_NAMESPACE "SMBlueprintEditorToolbar"

class SSMBlueprintEditorModeSeparator : public SBorder {
public:
	SLATE_BEGIN_ARGS(SSMBlueprintEditorModeSeparator) {}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArg)
	{
		SBorder::Construct(
			SBorder::FArguments()
			.BorderImage(FEditorStyle::GetBrush("BlueprintEditor.PipelineSeparator"))
			.Padding(0.0f)
		);
	}

	// SWidget interface
	virtual FVector2D ComputeDesiredSize(float) const override
	{
		const float Height = 20.0f;
		const float Thickness = 16.0f;
		return FVector2D(Thickness, Height);
	}
	// End of SWidget interface
};


void FSMBlueprintEditorToolbar::AddModesToolbar(TSharedPtr<FExtender> Extender)
{
	Extender->AddToolBarExtension(
		"Asset",
		EExtensionHook::After,
		Editor.Pin()->GetToolkitCommands(),
		FToolBarExtensionDelegate::CreateSP(this, &FSMBlueprintEditorToolbar::FillModesToolbar));
}

void FSMBlueprintEditorToolbar::AddPreviewToolbar(TSharedPtr<FExtender> Extender)
{
	Extender->AddToolBarExtension(
		"Settings",
		EExtensionHook::After,
		Editor.Pin()->GetToolkitCommands(),
		FToolBarExtensionDelegate::CreateSP(this, &FSMBlueprintEditorToolbar::FillPreviewToolbar));
}

void FSMBlueprintEditorToolbar::FillModesToolbar(FToolBarBuilder& ToolbarBuilder)
{
	TSharedPtr<FSMBlueprintEditor> EditorPtr = Editor.Pin();
	check(EditorPtr.IsValid());
	
	if (!EditorPtr->IsPreviewModeAllowed())
	{
		return;
	}
	
	TAttribute<FName> GetActiveMode(EditorPtr.ToSharedRef(), &FSMBlueprintEditor::GetCurrentMode);
	FOnModeChangeRequested SetActiveMode = FOnModeChangeRequested::CreateSP(
		EditorPtr.ToSharedRef(), &FSMBlueprintEditor::SetCurrentMode);

	// Left side padding
	EditorPtr->AddToolbarWidget(SNew(SSpacer).Size(FVector2D(4.0f, 1.0f)));

	// Graph Mode
	EditorPtr->AddToolbarWidget(
		SNew(SModeWidget, FSMBlueprintEditorModes::GetLocalizedMode(FSMBlueprintEditorModes::SMGraphMode),
			FSMBlueprintEditorModes::SMGraphMode)
		.OnGetActiveMode(GetActiveMode)
		.OnSetActiveMode(SetActiveMode)
		.ToolTipText(LOCTEXT("SMGraphMode", "Edit the state machine graph"))
		.IconImage(FSMEditorStyle::Get()->GetBrush("SMGraphThumbnail"))
	);
	
	// Preview mode
	{
		EditorPtr->AddToolbarWidget(SNew(SSMBlueprintEditorModeSeparator));

		EditorPtr->AddToolbarWidget(
			SNew(SModeWidget, FSMBlueprintEditorModes::GetLocalizedMode(FSMBlueprintEditorModes::SMPreviewMode),
				FSMBlueprintEditorModes::SMPreviewMode)
			.OnGetActiveMode(GetActiveMode)
			.OnSetActiveMode(SetActiveMode)
			.ToolTipText(LOCTEXT("SMPreviewMode", "Preview the state machine in a sandbox world"))
			.IconImage(FSMEditorStyle::Get()->GetBrush("SMPreviewEditor.PreviewMode"))
		);
	}
	
	// Right side padding
	EditorPtr->AddToolbarWidget(SNew(SSpacer).Size(FVector2D(4.0f, 1.0f)));
}

void FSMBlueprintEditorToolbar::FillPreviewToolbar(FToolBarBuilder& ToolbarBuilder)
{
	const TSharedPtr<FSMBlueprintEditor> EditorPtr = Editor.Pin();
	check(EditorPtr.IsValid());
	
	ToolbarBuilder.BeginSection("Preview");

	ISMPreviewEditorModule& PreviewModule = FModuleManager::LoadModuleChecked<ISMPreviewEditorModule>(LOGICDRIVER_PREVIEW_MODULE_NAME);

	if (PreviewModule.IsPreviewRunning(EditorPtr->GetStateMachineBlueprint()))
	{
		ToolbarBuilder.AddToolBarButton(FSMEditorCommands::Get().StopSimulateStateMachine,
			NAME_None,
			TAttribute<FText>(),
			TAttribute<FText>(),
			FSlateIcon(FSMEditorStyle::GetStyleSetName(), "SMPreviewEditor.Simulation.Stop"));
		ToolbarBuilder.EndSection();
	}
	else
	{
		ToolbarBuilder.AddToolBarButton(FSMEditorCommands::Get().StartSimulateStateMachine,
			NAME_None,
			TAttribute<FText>(),
			TAttribute<FText>(),
			FSlateIcon(FSMEditorStyle::GetStyleSetName(), "SMPreviewEditor.Simulation.Start"));
	}
}

#undef LOCTEXT_NAMESPACE
