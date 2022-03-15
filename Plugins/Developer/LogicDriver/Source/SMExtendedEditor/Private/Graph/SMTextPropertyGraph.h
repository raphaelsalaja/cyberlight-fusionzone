// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Graph/SMPropertyGraph.h"
#include "SMTextPropertyGraph.generated.h"


DECLARE_DELEGATE_OneParam(FSwitchTextEditAction, bool);

UCLASS()
class SMEXTENDEDEDITOR_API USMTextPropertyGraph : public USMPropertyGraph
{
	GENERATED_UCLASS_BODY()

public:
	/** The node used to format the text before the result node. */
	UPROPERTY()
	class UK2Node_FormatText* FormatTextNode;

	UEdGraphPin* GetFormatTextNodePin() const;

	// UObject
	virtual void PostEditUndo() override;
	// ~UObject
	
	// UEdGraph
	virtual void NotifyGraphChanged() override;
	virtual void NotifyGraphChanged(const FEdGraphEditAction& Action) override;
	// ~UEdGraph
	
	// USMPropertyGraph
	virtual void RefreshProperty(bool bModify = true, bool bSetFromPinFirst = true) override;
	virtual void ResetGraph() override;
	virtual void SetUsingGraphToEdit(bool bValue, bool bModify = true) override;
	virtual bool IsGraphBeingUsedToEdit() const override;
	virtual bool CanSetEditStatusFromReadOnlyVariable() const override { return false; }
	virtual void OnGraphManuallyCloned(USMPropertyGraph* OldGraph) override;
	// ~USMPropertyGraph

	/** Resets graph completely from updated text. */
	void SetNewText(const FText& PlainText, bool bReformatGraph = true, bool bModify = true);
	void SetNewText_NoTransaction(const FText& PlainText, bool bReformatGraph = true, bool bModify = true);
	
	/** Reparse the rich text body from the current plain text body. */
	void RefreshTextBody(bool bModify = true, bool bResetGraph = false);
	/** Set the plain text body and parse into rich text. */
	void SetTextBody(const FText& PlainText, bool bModify = true, bool bReformatGraph = true);
	/** Return a copy of the rich text body. */
	FText GetTextBody() const;
	/** The original plain text. */
	const FText& GetPlainTextBody() const { return PlainTextBody; }

	FSwitchTextEditAction SwitchTextEditAction;
	/** Toggles the actual text input widget into or out of edit mode. */
	void SetTextEditMode(bool bValue);

	/** Checks if this graph references a property by name. */
	bool ContainsProperty(const FName& InName) const;
	/** Checks if this graph references a function by name. */
	bool ContainsFunction(const FName& InName) const;

	/** True during a graph update. */
	bool IsUpdatingGraph() const { return bIsUpdatingGraph;}
	
protected:
	void SetFormatTextNodeText(const FText& NewText);
	void FindAndSetFormatTextNode();
	/** Updates the text from the current text on the format graph node. */
	void SetTextFromFormatTextNode(bool bForce = false);
	
protected:
	/** Variable name to variable guid. */
	UPROPERTY()
	TMap<FName, FGuid> StoredProperties;

	UPROPERTY()
	TMap<FName, FGuid> StoredFunctions;

	/**
	 * Rich processed text used for the text graph node to display.
	 */
	UPROPERTY()
	FText RichTextBody;

	/**
	 * The plain text which is stored in the format text node.
	 */
	UPROPERTY()
	FText PlainTextBody;

	/**
	 * Cache of PlainBodyText. Useful for comparisons when PlainBodyText
	 * has been automatically updated by a string table.
	 */
	UPROPERTY()
	FString PlainStringBody;

	TSharedPtr<class FOurEditableTextGraphPin> EditableTextProperty;

	bool bIsUpdatingGraph = false;
	bool bUpdatingFromFormatTextNode = false;
	bool bIsEditUndo = false;
};
