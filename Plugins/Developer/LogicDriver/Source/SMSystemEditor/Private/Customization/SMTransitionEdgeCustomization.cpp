#include "SMTransitionEdgeCustomization.h"

#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SlateNodes/SGraphNode_TransitionEdge.h"
#include "Utilities/SMBlueprintEditorUtils.h"

#include "SSearchableComboBox.h"
#include "Widgets/Input/SButton.h"
#include "DetailWidgetRow.h"
#include "IDetailChildrenBuilder.h"
#include "PropertyCustomizationHelpers.h"
#include "DetailCategoryBuilder.h"

#define LOCTEXT_NAMESPACE "SMTransitionEdgeCustomization"

void FSMTransitionEdgeCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	USMGraphNode_TransitionEdge* TransitionNode = GetObjectBeingCustomized<USMGraphNode_TransitionEdge>(DetailBuilder);
	if (!TransitionNode)
	{
		return;
	}

	UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNode(TransitionNode);
	if (!Blueprint)
	{
		return;
	}

	AvailableDelegates.Reset();
	AvailableDelegates.Add(MakeShareable(new FString()));

	if (UClass* DelegateOwnerClass = TransitionNode->GetSelectedDelegateOwnerClass())
	{
		for (TFieldIterator<FMulticastDelegateProperty> It(DelegateOwnerClass, EFieldIteratorFlags::IncludeSuper); It; ++It)
		{
			if (FMulticastDelegateProperty* Delegate = CastField<FMulticastDelegateProperty>(*It))
			{
				AvailableDelegates.Add(MakeShareable(new FString(Delegate->GetName())));
			}
		}
	}

	TSharedPtr<IPropertyHandle> DelegatePropertyName = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, DelegatePropertyName), USMGraphNode_TransitionEdge::StaticClass());
	TSharedPtr<IPropertyHandle> DelegatePropertyClass = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, DelegateOwnerClass), USMGraphNode_TransitionEdge::StaticClass());
	TSharedPtr<IPropertyHandle> DelegatePropertyInstance = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, DelegateOwnerInstance), USMGraphNode_TransitionEdge::StaticClass());

	DelegatePropertyInstance->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FSMTransitionEdgeCustomization::ForceUpdate));
	DelegatePropertyClass->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FSMTransitionEdgeCustomization::ForceUpdate));
	DelegatePropertyName->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FSMTransitionEdgeCustomization::ForceUpdate));
	
	// Custom delegate name picker.
	if (IDetailPropertyRow* Row = DetailBuilder.EditDefaultProperty(DelegatePropertyName))
	{
		TSharedPtr<SHorizontalBox> DelegateButtonsRow;
		
		Row->CustomWidget()
		.NameContent()
		[
			DelegatePropertyName->CreatePropertyNameWidget()
		]
		.ValueContent()
		.MinDesiredWidth(125.f)
		.MaxDesiredWidth(400.f)
		[
			SAssignNew(DelegateButtonsRow, SHorizontalBox)
			+ SHorizontalBox::Slot()
			[
				SNew(SSearchableComboBox)
				.OptionsSource(&AvailableDelegates)
				.OnGenerateWidget_Lambda([](TSharedPtr<FString> InItem)
				{
					return SNew(STextBlock)
					// The combo box selection text.
					.Text(FText::FromString(*InItem));
				})
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> Selection, ESelectInfo::Type)
				{
					// When selecting a property from the drop down.
					if (DelegatePropertyName->IsValidHandle())
					{
						DelegatePropertyName->SetValue(*Selection);
						ForceUpdate();
					}
				})
				.ContentPadding(FMargin(2, 2))
				[
					SNew(STextBlock)
					.Font(IDetailLayoutBuilder::GetDetailFont())
					.Text_Lambda([=]() -> FText
					{
						// Display selected property text.
						if (DelegatePropertyName->IsValidHandle())
						{
							FString Value;
							const FPropertyAccess::Result Result = DelegatePropertyName->GetValue(Value);
							if (Result == FPropertyAccess::Result::Success)
							{
								return FText::FromString(Value);
							}
							if (Result == FPropertyAccess::Result::MultipleValues)
							{
								return FText::FromString("Multiple Values");
							}
						}

						return FText::GetEmpty();
					})
					]
				]
		.HAlign(HAlign_Fill)
		];

		if (TransitionNode->DelegatePropertyName != NAME_None)
		{
			DelegateButtonsRow->AddSlot()
			[
				SNew(SButton)
				.Text(LOCTEXT("GoToDelegate", "Open Graph"))
				.OnClicked_Lambda([=]
				{
					if (TransitionNode)
					{
						TransitionNode->GoToTransitionEventNode();
					}
					return FReply::Handled();
				})
			];
		}
	}

	// Only allow class selection when the class isn't inherently known.
	if (TransitionNode->DelegateOwnerInstance != SMDO_Context)
	{
		if (IDetailPropertyRow* Row = DetailBuilder.EditDefaultProperty(DelegatePropertyClass))
		{
			Row->Visibility(EVisibility::Collapsed);
		}
	}

	FSMNodeCustomization::CustomizeDetails(DetailBuilder);
}

TSharedRef<IDetailCustomization> FSMTransitionEdgeCustomization::MakeInstance()
{
	return MakeShared<FSMTransitionEdgeCustomization>();
}

#undef LOCTEXT_NAMESPACE