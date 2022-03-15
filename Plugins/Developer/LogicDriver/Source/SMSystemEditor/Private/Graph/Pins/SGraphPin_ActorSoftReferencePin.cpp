// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SGraphPin_ActorSoftReferencePin.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_PropertyNode.h"
#include "Utilities/SMBlueprintEditorUtils.h"

#include "Editor.h"
#include "EngineUtils.h"
#include "PropertyCustomizationHelpers.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Selection.h"

#define LOCTEXT_NAMESPACE "SMActorSoftReferencePin"

// Active Combo pin alpha
constexpr float ActiveComboAlpha = 1.f;
// InActive Combo pin alpha
constexpr float InActiveComboAlpha = 0.6f;
// Active foreground pin alpha
constexpr float ActivePinForegroundAlpha = 1.f;
// InActive foreground pin alpha
constexpr float InactivePinForegroundAlpha = 0.15f;
// Active background pin alpha
constexpr float ActivePinBackgroundAlpha = 0.8f;
// InActive background pin alpha
constexpr float InactivePinBackgroundAlpha = 0.4f;

TSharedPtr<SGraphPin> FSMActorSoftReferencePinFactory::CreatePin(UEdGraphPin* InPin) const
{
	if (!InPin)
	{
		return nullptr;
	}

	UEdGraphNode* OwningNode = InPin->GetOwningNodeUnchecked();
	if (OwningNode == nullptr)
	{
		return nullptr;
	}

	if (!OwningNode->IsA<USMGraphK2Node_PropertyNode_Base>() &&
		FSMBlueprintEditorUtils::GetEditorSettings()->OverrideActorSoftReferencePins != ESMPinOverride::AllBlueprints)
	{
		// User has opted not to override generic soft actor reference pins.
		return nullptr;
	}
	
	UClass* TheClass;
	if (InPin->PinType.PinCategory == UEdGraphSchema_K2::PC_SoftObject &&
		InPin->PinType.PinSubCategoryObject.IsValid() &&
		(TheClass = Cast<UClass>(InPin->PinType.PinSubCategoryObject.Get())) != nullptr &&
		TheClass->IsChildOf<AActor>())
	{
		return SNew(SGraphPin_ActorSoftReferencePin, InPin);
	}

	return nullptr;
}

void FSMActorSoftReferencePinFactory::RegisterFactory()
{
	FEdGraphUtilities::RegisterVisualPinFactory(MakeShareable(new FSMActorSoftReferencePinFactory()));
}

void SGraphPin_ActorSoftReferencePin::Construct(const FArguments& InArgs, UEdGraphPin* InGraphPinObj)
{
	SGraphPin::Construct(SGraphPin::FArguments(), InGraphPinObj);
}

TSharedRef<SWidget> SGraphPin_ActorSoftReferencePin::GetDefaultValueWidget()
{
	if (GraphPinObj == nullptr)
	{
		return SNullWidget::NullWidget;
	}

	const UEdGraphSchema* Schema = GraphPinObj->GetSchema();
	if (Schema == nullptr)
	{
		return SNullWidget::NullWidget;
	}

	if (GraphPinObj->PinType.PinSubCategoryObject.IsValid())
	{
		PinObjectClass =
			Cast<UClass>(GraphPinObj->PinType.PinSubCategoryObject.Get());
	}

	if (PinObjectClass == nullptr)
	{
		return SNullWidget::NullWidget;
	}

	if (Schema->ShouldShowAssetPickerForPin(GraphPinObj))
	{
		TSharedRef<SWidget> ActorPicker =
			PropertyCustomizationHelpers::MakeInteractiveActorPicker(
				FOnGetAllowedClasses::CreateSP(
					this, &SGraphPin_ActorSoftReferencePin::OnGetAllowedClasses),
				FOnShouldFilterActor(),
				FOnActorSelected::CreateSP(
					this, &SGraphPin_ActorSoftReferencePin::OnActorSelected));
		ActorPicker->SetEnabled(!GraphPinObj->bDefaultValueIsReadOnly);

		return SNew(SHorizontalBox)
			.Visibility(this, &SGraphPin::GetDefaultValueVisibility)
			+ SHorizontalBox::Slot()
			  .AutoWidth()
			  .Padding(2, 0)
			  .MaxWidth(200.0f)
			[
				SAssignNew(AssetPickerAnchor, SComboButton)
				.ButtonStyle(FEditorStyle::Get(), "PropertyEditor.AssetComboStyle")
				.ForegroundColor(this, &SGraphPin_ActorSoftReferencePin::OnGetComboForeground)
				.ContentPadding(FMargin(2, 2, 2, 1))
				.ButtonColorAndOpacity(this, &SGraphPin_ActorSoftReferencePin::OnGetWidgetBackground)
				.MenuPlacement(MenuPlacement_BelowAnchor)
				.IsEnabled(this, &SGraphPin::IsEditingEnabled)
				.ButtonContent()
				[
					SNew(STextBlock)
					.ColorAndOpacity(this, &SGraphPin_ActorSoftReferencePin::OnGetComboForeground)
					.TextStyle(FEditorStyle::Get(), "PropertyEditor.AssetClass")
					.Font(FEditorStyle::GetFontStyle("PropertyWindow.NormalFont"))
					.Text(this, &SGraphPin_ActorSoftReferencePin::OnGetComboTextValue)
					.ToolTipText(this, &SGraphPin_ActorSoftReferencePin::GetObjectToolTip)
				]
				.OnGetMenuContent(this, &SGraphPin_ActorSoftReferencePin::OnGetMenuContent)
			]
			+ SHorizontalBox::Slot()
			  .Padding(2.0f, 0.0f)
			  .AutoWidth()
			  .VAlign(VAlign_Center)
			[
				ActorPicker
			];
	}

	return SNullWidget::NullWidget;
}

FText SGraphPin_ActorSoftReferencePin::GetDefaultComboText() const
{
	return LOCTEXT("DefaultComboText", "Select Actor");
}

FText SGraphPin_ActorSoftReferencePin::GetObjectToolTip() const { return GetValue(); }

FText SGraphPin_ActorSoftReferencePin::GetValue() const
{
	const FAssetData& CurrentAssetData = GetAssetData(true);
	FText Value;
	if (CurrentAssetData.IsValid())
	{
		Value = FText::FromString(CurrentAssetData.GetFullName());
	}
	else
	{
		if (GraphPinObj->GetSchema()->IsSelfPin(*GraphPinObj))
		{
			Value = FText::FromName(GraphPinObj->PinName);
		}
		else
		{
			Value = FText::GetEmpty();
		}
	}
	return Value;
}

FText SGraphPin_ActorSoftReferencePin::OnGetComboTextValue() const
{
	FText Value = GetDefaultComboText();

	if (GraphPinObj != nullptr)
	{
		const FAssetData& CurrentAssetData = GetAssetData(true);
		Value = FText::FromString(CurrentAssetData.AssetName.ToString());
	}
	return Value;
}

FSlateColor SGraphPin_ActorSoftReferencePin::OnGetComboForeground() const
{
	const float Alpha = (IsHovered() || bOnlyShowDefaultValue)
		                    ? ActiveComboAlpha
		                    : InActiveComboAlpha;
	return FSlateColor(FLinearColor(1.f, 1.f, 1.f, Alpha));
}

FSlateColor SGraphPin_ActorSoftReferencePin::OnGetWidgetForeground() const
{
	const float Alpha = (IsHovered() || bOnlyShowDefaultValue)
		                    ? ActivePinForegroundAlpha
		                    : InactivePinForegroundAlpha;
	return FSlateColor(FLinearColor(1.f, 1.f, 1.f, Alpha));
}

FSlateColor SGraphPin_ActorSoftReferencePin::OnGetWidgetBackground() const
{
	const float Alpha = (IsHovered() || bOnlyShowDefaultValue)
		                    ? ActivePinBackgroundAlpha
		                    : InactivePinBackgroundAlpha;
	return FSlateColor(FLinearColor(1.f, 1.f, 1.f, Alpha));
}

void SGraphPin_ActorSoftReferencePin::OnUse()
{
	if (UObject* Selection = GEditor->GetSelectedActors()->GetTop(PinObjectClass))
	{
		const FScopedTransaction Transaction(NSLOCTEXT("ActorSoftReferencePin", "OnUse", "Use Selected Actor"));
		GraphPinObj->Modify();
		GraphPinObj->GetSchema()->TrySetDefaultValue(*GraphPinObj, Selection->GetPathName());
	}
}

bool SGraphPin_ActorSoftReferencePin::IsFilteredActor(const AActor* const Actor) const
{
	return Actor && Actor->GetClass()->IsChildOf(PinObjectClass);
}

void SGraphPin_ActorSoftReferencePin::CloseComboButton()
{
	AssetPickerAnchor->SetIsOpen(false);
}

void SGraphPin_ActorSoftReferencePin::OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses)
{
	AllowedClasses = { PinObjectClass };
}

void SGraphPin_ActorSoftReferencePin::OnActorSelected(AActor* InActor)
{
	if (!GraphPinObj || GraphPinObj->IsPendingKill())
	{
		return;
	}

	if (!InActor)
	{
		const FScopedTransaction Transaction(NSLOCTEXT("ActorSoftReferencePin", "ClearPinValue", "Clear Soft Reference"));
		GraphPinObj->Modify();
		GraphPinObj->ResetDefaultValue();
		return;
	}

	if (!GraphPinObj->GetDefaultAsString().Equals(InActor->GetPathName()))
	{
		const FScopedTransaction Transaction(NSLOCTEXT("ActorSoftReferencePin", "ChangePinValue", "Select Soft Reference"));
		GraphPinObj->Modify();
		GraphPinObj->GetSchema()->TrySetDefaultValue(*GraphPinObj, InActor->GetPathName());
	}
}

TSharedRef<SWidget> SGraphPin_ActorSoftReferencePin::OnGetMenuContent()
{
	const FAssetData& CurrentAssetData = GetAssetData(true);
	AActor* Actor = nullptr;
	if (CurrentAssetData.IsValid())
	{
		UWorld* World = GEditor->GetEditorWorldContext().World();
		for (TActorIterator<AActor> ActorItr(World); ActorItr; ++ActorItr)
		{
			FString ActorName = *ActorItr->GetPathName();
			FString AssetName = CurrentAssetData.ObjectPath.ToString();
			if (ActorName == AssetName)
			{
				Actor = *ActorItr;
				break;
			}
		}
	}

	return PropertyCustomizationHelpers::MakeActorPickerWithMenu(
		Actor, true,
		FOnShouldFilterActor::CreateSP(this, &SGraphPin_ActorSoftReferencePin::IsFilteredActor),
		FOnActorSelected::CreateSP(this, &SGraphPin_ActorSoftReferencePin::OnActorSelected),
		FSimpleDelegate::CreateSP(this, &SGraphPin_ActorSoftReferencePin::CloseComboButton),
		FSimpleDelegate::CreateSP(this, &SGraphPin_ActorSoftReferencePin::OnUse));
}

const FAssetData& SGraphPin_ActorSoftReferencePin::GetAssetData(bool bRuntimePath) const
{
	// For normal assets, the editor and runtime path are the same
	if (GraphPinObj->DefaultObject)
	{
		if (!GraphPinObj->DefaultObject->GetPathName().Equals(CachedAssetData.ObjectPath.ToString(),
			ESearchCase::CaseSensitive))
		{
			// This always uses the exact object pointed at
			CachedAssetData = FAssetData(GraphPinObj->DefaultObject, true);
		}
	}
	else if (!GraphPinObj->DefaultValue.IsEmpty())
	{
		const FName ObjectPath = FName(*GraphPinObj->DefaultValue);
		if (ObjectPath != CachedAssetData.ObjectPath)
		{
			const FAssetRegistryModule& AssetRegistryModule =
				FModuleManager::LoadModuleChecked<FAssetRegistryModule>(
					TEXT("AssetRegistry"));

			CachedAssetData = AssetRegistryModule.Get().GetAssetByObjectPath(ObjectPath);

			if (!CachedAssetData.IsValid())
			{
				const FString PackageName = FPackageName::ObjectPathToPackageName(GraphPinObj->DefaultValue);
				const FString PackagePath = FPackageName::GetLongPackagePath(PackageName);
				const FString ObjectName = FPackageName::ObjectPathToObjectName(GraphPinObj->DefaultValue);

				// Fake one
				CachedAssetData = FAssetData(FName(*PackageName), FName(*PackagePath),
					           FName(*ObjectName), UObject::StaticClass()->GetFName());
			}
		}
	}
	else if (CachedAssetData.IsValid())
	{
		CachedAssetData = FAssetData();
	}

	return CachedAssetData;
}

#undef LOCTEXT_NAMESPACE
