// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Input/SComboButton.h"

class USMPreviewObject;
class FSMBlueprintEditor;
struct FAssetData;

DECLARE_DELEGATE_OneParam(FOnActorClassSelected, TSubclassOf<AActor> /*ActorClass*/);

/**
 * Custom actor creation combo box.
 */
class SSMAddActorCombo : public SComboButton
{
public:
	SLATE_BEGIN_ARGS(SSMAddActorCombo) {}
	SLATE_EVENT(FOnActorClassSelected, OnActorSelected)
	SLATE_END_ARGS()

	~SSMAddActorCombo();
	void Construct(const FArguments& InArgs, TSharedPtr<FSMBlueprintEditor> InStateMachineEditor);

private:
	/** Creates the combo button menu content. */
	TSharedRef<SWidget> GenerateMenuContent();
	void OnAssetSelected(const FAssetData& InAssetData);
	bool OnShouldFilterAsset(const FAssetData& InAssetData);

private:
	TWeakPtr<FSMBlueprintEditor> BlueprintEditor;
	FOnActorClassSelected OnActorClassSelectedEvent;
};
