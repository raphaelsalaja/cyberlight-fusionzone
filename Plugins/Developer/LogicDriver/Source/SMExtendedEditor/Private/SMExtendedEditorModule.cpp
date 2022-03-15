// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMExtendedEditorModule.h"
#include "Configuration/SMExtendedEditorStyle.h"
#include "Utilities/SMTextGraphUtils.h"
#include "Commands/SMExtendedEditorCommands.h"

#include "Blueprints/SMBlueprintEditor.h"

#define LOCTEXT_NAMESPACE "SMExtendedEditorModule"

void FSMExtendedEditorModule::StartupModule()
{
	FSMExtendedEditorStyle::Initialize();
	FSMExtendedEditorCommands::Register();
	RegisterSettings();

	// Variable renames have special handling.
	RenameVariableReferencesDelegateHandle = FBlueprintEditorUtils::OnRenameVariableReferencesEvent.AddStatic(&FSMTextGraphUtils::HandleRenameVariableReferencesEvent);
	RenameGraphsDelegateHandle = USMBlueprint::OnRenameGraphEvent.AddStatic(&FSMTextGraphUtils::HandleRenameGraphEvent);
	OnEditorCommandsCreatedHandle = FSMBlueprintEditor::OnCreateGraphEditorCommandsEvent.AddStatic(&FSMExtendedEditorCommands::OnEditorCommandsCreated);
	OnPropertyChangedHandle = FCoreUObjectDelegates::OnObjectPropertyChanged.AddStatic(&FSMTextGraphUtils::HandleOnPropertyChangedEvent);
	OnBlueprintPostConditionallyCompiledHandle = FSMBlueprintEditorUtils::OnBlueprintPostConditionallyCompiledEvent.AddStatic(&FSMTextGraphUtils::HandlePostConditionallyCompileBlueprintEvent);
}

void FSMExtendedEditorModule::ShutdownModule()
{
	FBlueprintEditorUtils::OnRenameVariableReferencesEvent.Remove(RenameVariableReferencesDelegateHandle);
	USMBlueprint::OnRenameGraphEvent.Remove(RenameGraphsDelegateHandle);
	FSMBlueprintEditor::OnCreateGraphEditorCommandsEvent.Remove(OnEditorCommandsCreatedHandle);
	FCoreUObjectDelegates::OnObjectPropertyChanged.Remove(OnPropertyChangedHandle);
	FSMBlueprintEditorUtils::OnBlueprintPostConditionallyCompiledEvent.Remove(OnBlueprintPostConditionallyCompiledHandle);
	
	FSMExtendedEditorStyle::Shutdown();
	FSMExtendedEditorCommands::Unregister();
	UnregisterSettings();
}

void FSMExtendedEditorModule::RegisterSettings()
{
}

void FSMExtendedEditorModule::UnregisterSettings()
{
}

#undef LOCTEXT_NAMESPACE

