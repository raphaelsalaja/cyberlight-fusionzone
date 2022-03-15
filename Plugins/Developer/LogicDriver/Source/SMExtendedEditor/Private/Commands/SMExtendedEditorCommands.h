// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "EditorStyle.h"
#include "Framework/Commands/Commands.h"


class FSMExtendedEditorCommands : public TCommands<FSMExtendedEditorCommands>
{
public:
	/** Constructor */
	FSMExtendedEditorCommands()
		: TCommands<FSMExtendedEditorCommands>(TEXT("SMExtendedEditor"), NSLOCTEXT("Contexts", "SMExtendedEditor", "State Machine Editor"),
			NAME_None, FEditorStyle::GetStyleSetName())
	{
	}

	// TCommand
	virtual void RegisterCommands() override;
	FORCENOINLINE static const FSMExtendedEditorCommands& Get();
	// ~TCommand

	static void OnEditorCommandsCreated(class FSMBlueprintEditor* Editor, TSharedPtr<FUICommandList> CommandList);

	/** Use the node to edit. */
	TSharedPtr<FUICommandInfo> StartTextPropertyEdit;
	static void EditText(FSMBlueprintEditor* Editor);
	static bool CanEditText(FSMBlueprintEditor* Editor);
	
};
