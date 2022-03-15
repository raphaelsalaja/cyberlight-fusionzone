// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMEditorCustomization.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineParentNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Utilities/SMNodeInstanceUtils.h"

#include "SMUtils.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "PropertyCustomizationHelpers.h"
#include "SSearchableComboBox.h"

#include "DetailWidgetRow.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SButton.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Modules/ModuleManager.h"
#include "IDetailChildrenBuilder.h"


#define LOCTEXT_NAMESPACE "SMEditorCustomization"

void FSMBaseCustomization::CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder)
{
	DetailBuilderPtr = DetailBuilder;
	CustomizeDetails(*DetailBuilder);
}

void FSMBaseCustomization::ForceUpdate()
{
	if (IDetailLayoutBuilder* DetailBuilder = DetailBuilderPtr.Pin().Get())
	{
		DetailBuilder->ForceRefreshDetails();
	}
}

void FSMNodeCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	SelectedGraphNode.Reset();
	USMGraphNode_Base* GraphNode = GetObjectBeingCustomized<USMGraphNode_Base>(DetailBuilder);
	if (!GraphNode)
	{
		return;
	}

	SelectedGraphNode = GraphNode;

	if (USMGraphNode_AnyStateNode* AnyState = Cast<USMGraphNode_AnyStateNode>(GraphNode))
	{
		IDetailCategoryBuilder& StateCategory = DetailBuilder.EditCategory("State");
		StateCategory.SetCategoryVisibility(false);

		IDetailCategoryBuilder& ClassCategory = DetailBuilder.EditCategory("Class");
		ClassCategory.SetCategoryVisibility(false);
	}

	// Hide parallel categories from nodes that don't support them.
	{
		if (USMGraphNode_ConduitNode* Conduit = Cast<USMGraphNode_ConduitNode>(GraphNode))
		{
			IDetailCategoryBuilder& ParallelCategory = DetailBuilder.EditCategory("Parallel States");
			ParallelCategory.SetCategoryVisibility(false);
		}

		if (USMGraphNode_TransitionEdge* Transition = Cast<USMGraphNode_TransitionEdge>(GraphNode))
		{
			if (USMGraphNode_StateNodeBase* PrevNode = Transition->GetFromState())
			{
				if (PrevNode->IsA<USMGraphNode_ConduitNode>())
				{
					IDetailCategoryBuilder& ParallelCategory = DetailBuilder.EditCategory("Parallel States");
					ParallelCategory.SetCategoryVisibility(false);
				}
			}
		}
	}
}

TSharedRef<IDetailCustomization> FSMNodeCustomization::MakeInstance()
{
	return MakeShareable(new FSMNodeCustomization);
}

void FSMStateMachineReferenceCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	USMGraphNode_StateMachineStateNode* StateNode = GetObjectBeingCustomized<USMGraphNode_StateMachineStateNode>(DetailBuilder);
	if(!StateNode)
	{
		return;
	}

	bool bIsParent = false;
	if(StateNode->IsA<USMGraphNode_StateMachineParentNode>())
	{
		CustomizeParentSelection(DetailBuilder);
		bIsParent = true;
	}
	
	const bool bIsReference = StateNode->IsStateMachineReference();

	// Use template -- toggles template visibility.
	if (const TSharedPtr<IPropertyHandle> Property = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, bUseTemplate)))
	{
		// Detect when value changes.
		Property->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FSMStateMachineReferenceCustomization::OnUseTemplateChange));
	}
	
	// Template visibility
	if (const TSharedPtr<IPropertyHandle> Property = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, ReferencedInstanceTemplate)))
	{
		if (IDetailPropertyRow* PropertyRow = DetailBuilder.EditDefaultProperty(Property))
		{
			PropertyRow->ShouldAutoExpand(true);
			PropertyRow->Visibility(VisibilityConverter(bIsReference && StateNode->bUseTemplate));
		}
	}

	// Misc reference visibility
	{
		if (const TSharedPtr<IPropertyHandle> Property = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, bAllowIndependentTick)))
		{
			if (IDetailPropertyRow* PropertyRow = DetailBuilder.EditDefaultProperty(Property))
			{
				PropertyRow->Visibility(VisibilityConverter(bIsReference));
			}
		}
		if (const TSharedPtr<IPropertyHandle> Property = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, bCallTickOnManualUpdate)))
		{
			if (IDetailPropertyRow* PropertyRow = DetailBuilder.EditDefaultProperty(Property))
			{
				PropertyRow->Visibility(VisibilityConverter(bIsReference));
			}
		}
		// Class template only valid for nested static state machines.
		if (const TSharedPtr<IPropertyHandle> Property = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, StateMachineClass)))
		{
			if (IDetailPropertyRow* PropertyRow = DetailBuilder.EditDefaultProperty(Property))
			{
				PropertyRow->Visibility(VisibilityConverter(!bIsReference && !bIsParent));
			}
		}
	}

	// Set overall category visibility last as this will consider it detailed and editing properties past this point won't work.
	IDetailCategoryBuilder& ReferenceCategory = DetailBuilder.EditCategory("State Machine Reference");
	ReferenceCategory.SetCategoryVisibility(bIsReference);

	if(bIsParent || bIsReference)
	{
		IDetailCategoryBuilder& DisplayCategory = DetailBuilder.EditCategory("Display");
		DisplayCategory.SetCategoryVisibility(false);

		IDetailCategoryBuilder& ColorCategory = DetailBuilder.EditCategory("Color");
		ColorCategory.SetCategoryVisibility(false);
	}

	FSMNodeCustomization::CustomizeDetails(DetailBuilder);
}

TSharedRef<IDetailCustomization> FSMStateMachineReferenceCustomization::MakeInstance()
{
	return MakeShareable(new FSMStateMachineReferenceCustomization);
}

void FSMStateMachineReferenceCustomization::CustomizeParentSelection(IDetailLayoutBuilder& DetailBuilder)
{
	USMGraphNode_StateMachineParentNode* StateNode = GetObjectBeingCustomized<USMGraphNode_StateMachineParentNode>(DetailBuilder);
	if (!StateNode)
	{
		return;
	}

	UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNode(StateNode);
	if(!Blueprint)
	{
		return;
	}

	AvailableClasses.Reset();
	MappedClasses.Reset();
	TArray<USMBlueprintGeneratedClass*> ParentClasses;
	if (FSMBlueprintEditorUtils::TryGetParentClasses(Blueprint, ParentClasses))
	{
		for (USMBlueprintGeneratedClass* ParentClass : ParentClasses)
		{
			AvailableClasses.Add(MakeShareable(new FName(ParentClass->GetFName())));
			MappedClasses.Add(ParentClass->GetFName(), ParentClass);
		}
	}

	TSharedPtr<IPropertyHandle> ParentProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineParentNode, ParentClass), USMGraphNode_StateMachineParentNode::StaticClass());

	// Row could be null if multiple nodes selected -- Hide original property we will recreate it.
	if (IDetailPropertyRow* Row = DetailBuilder.EditDefaultProperty(ParentProperty))
	{
		Row->Visibility(EVisibility::Collapsed);
	}
	
	TSharedPtr<IPropertyHandle> ClassProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineParentNode, StateMachineClass), USMGraphNode_StateMachineParentNode::StaticClass());

	// We don't want to edit the class property for a parent.
	if (IDetailPropertyRow* Row = DetailBuilder.EditDefaultProperty(ClassProperty))
	{
		Row->Visibility(EVisibility::Collapsed);
	}

	// May want to switch to FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer").CreateClassViewer(Options, FOnClassPicked::CreateSP(this, &FSMStateMachineReferenceCustomization::OnClassPicked));

	// Add a new custom row so we don't have to deal with the automatic assigned buttons next to the drop down that using the CustomWidget of the PropertyRow gets us.
	DetailBuilder.EditCategory("Parent State Machine")
	.AddCustomRow(LOCTEXT("StateMachineParent", "State Machine Parent"))
	.NameContent()
	[
		ParentProperty->CreatePropertyNameWidget()
	]
	.ValueContent()
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		[
			SNew(SComboBox<TSharedPtr<FName>>)
			.OptionsSource(&AvailableClasses)
			.OnGenerateWidget_Lambda([](TSharedPtr<FName> InItem)
			{
				return SNew(STextBlock)
				// The combo box selection text.
				.Text(FText::FromName(*InItem));
			})
			.OnSelectionChanged_Lambda([=](TSharedPtr<FName> Selection, ESelectInfo::Type)
			{
				// When selecting a property from the drop down.
				if (ParentProperty->IsValidHandle()) {
					USMBlueprintGeneratedClass* Result = MappedClasses.FindRef(*Selection);
					ParentProperty->SetValue(Result);
			}
			})
			.ContentPadding(FMargin(2, 2))
			[
				SNew(STextBlock)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.Text_Lambda([=]() -> FText
				{
					// Display selected property text.
					if (ParentProperty->IsValidHandle())
					{
						UObject* Value = nullptr;
						const FPropertyAccess::Result Result = ParentProperty->GetValue(Value);
						if (Result == FPropertyAccess::Result::Success)
						{
							return FText::FromName(Value ? Value->GetFName() : "None");
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
}

void FSMStateMachineReferenceCustomization::OnUseTemplateChange()
{
	ForceUpdate();
}

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

		if(TransitionNode->DelegatePropertyName != NAME_None)
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
	return MakeShareable(new FSMTransitionEdgeCustomization);
}

void FSMNodeInstanceCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	SelectedGraphNode.Reset();
	USMNodeInstance* NodeInstance = GetObjectBeingCustomized<USMNodeInstance>(DetailBuilder);
	if (NodeInstance)
	{
		if (USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(NodeInstance->GetOuter()))
		{
			SelectedGraphNode = GraphNode;
		}
	}
	
	if (!SelectedGraphNode.IsValid())
	{
		// Should only be invalid when editing in the node class editor, in which case everything should be displayed.
		return;
	}

	TArray<FName> Names;
	DetailBuilder.GetCategoryNames(Names);
	for (const FName& Name : Names)
	{
		IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(Name);
		TArray<TSharedRef<IPropertyHandle>> TemplateProperties;
		Category.GetDefaultProperties(TemplateProperties);
		ProcessNodeInstance(SelectedGraphNode, TemplateProperties, NodeInstance, "Exposed Properties", DetailBuilder);
	}
}

void FSMNodeInstanceCustomization::ProcessNodeInstance(TWeakObjectPtr<USMGraphNode_Base> GraphNode, TArray<TSharedRef<IPropertyHandle>> TemplateProperties,
	class USMNodeInstance* NodeInstance, FName ExposedPropertiesName, IDetailLayoutBuilder& DetailBuilder, IDetailChildrenBuilder* ChildrenBuilder)
{
	for (const TSharedRef<IPropertyHandle>& TemplatePropertyHandle : TemplateProperties)
	{
		if (FProperty* Property = TemplatePropertyHandle->GetProperty())
		{
			if (Property->GetFName() == GET_MEMBER_NAME_CHECKED(USMGraphNode_StateNode, StateStack))
			{
				// Don't hide, struct customization will handle this.
				continue;
			}

			// Check for and hide properties which are designed to be edited from class defaults only.
			if (Property->HasMetaData("InstancedTemplate") || (NodeInstance && NodeInstance->GetTemplateGuid().IsValid() && Property->HasMetaData("NodeBaseOnly")))
			{
				TemplatePropertyHandle->MarkHiddenByCustomization();
				continue;
			}

			// Exposed properties.
			if (FSMNodeInstanceUtils::IsPropertyExposedToGraphNode(Property) && GraphNode->SupportsPropertyGraphs())
			{
				// Array properties will rely on custom array builders to generate their elements.
				if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
				{
					TemplatePropertyHandle->MarkHiddenByCustomization();

					TSharedRef<FDetailArrayBuilder> ArrayBuilder = MakeShareable(new FDetailArrayBuilder(TemplatePropertyHandle));
					ArrayBuilder->OnGenerateArrayElementWidget(FOnGenerateArrayElementWidget::CreateStatic(&FSMNodeInstanceCustomization::GenerateGraphArrayWidget,
						GraphNode, NodeInstance, FText::FromName(ExposedPropertiesName)));
					
					if (ChildrenBuilder)
					{
						ChildrenBuilder->AddCustomBuilder(ArrayBuilder);
					}
					else
					{
						IDetailCategoryBuilder& CategoryBuilder = DetailBuilder.EditCategory(ExposedPropertiesName);
						CategoryBuilder.AddCustomBuilder(ArrayBuilder);
					}
					
					continue;
				}

				// Single element processing.
				FSMGraphProperty_Base PropertyLookup;
				const FGuid& PropertyGuid = FSMNodeInstanceUtils::SetGraphPropertyFromProperty(PropertyLookup, Property, NodeInstance);
				if (!PropertyGuid.IsValid())
				{
					continue;
				}

				if (USMGraphK2Node_PropertyNode_Base* GraphPropertyNode = GraphNode->GetGraphPropertyNode(PropertyGuid))
				{
					TemplatePropertyHandle->MarkHiddenByCustomization();

					if (ChildrenBuilder)
					{
						// Struct children, such as for a state stack.
						
						ChildrenBuilder->AddCustomRow(FText::FromName(ExposedPropertiesName))
						.NameContent()
						[
							TemplatePropertyHandle->CreatePropertyNameWidget()
						]
						.ValueContent()
						[
							GraphPropertyNode->GetGraphDetailWidget().ToSharedRef()
						];
					}
					else
					{
						// Normal display such as for a node template.
						
						DetailBuilder.EditCategory(ExposedPropertiesName)
						.AddCustomRow(FText::FromString(Property->GetName()))
						.NameContent()
						[
							TemplatePropertyHandle->CreatePropertyNameWidget()
						]
						.ValueContent()
						[
							GraphPropertyNode->GetGraphDetailWidget().ToSharedRef()
						];
					}
				}
			}
		}
	}
}

TSharedRef<IDetailCustomization> FSMNodeInstanceCustomization::MakeInstance()
{
	return MakeShareable(new FSMNodeInstanceCustomization);
}

void FSMNodeInstanceCustomization::GenerateGraphArrayWidget(TSharedRef<IPropertyHandle> PropertyHandle,
                                                            int32 ArrayIndex, IDetailChildrenBuilder& ChildrenBuilder,
															TWeakObjectPtr<USMGraphNode_Base> SelectedNode, class USMNodeInstance* NodeInstance,
															FText FilterString)
{
	if (!SelectedNode.IsValid())
	{
		return;
	}

	IDetailPropertyRow& PropertyRow = ChildrenBuilder.AddProperty(PropertyHandle);

	FSMGraphProperty_Base PropertyLookup;
	const FGuid& PropertyGuid = FSMNodeInstanceUtils::SetGraphPropertyFromProperty(PropertyLookup, PropertyHandle->GetProperty(), NodeInstance, ArrayIndex);
	if (!PropertyGuid.IsValid())
	{
		return;
	}
	
	if (USMGraphK2Node_PropertyNode_Base* GraphPropertyNode = SelectedNode->GetGraphPropertyNode(PropertyGuid))
	{
		PropertyRow.CustomWidget(false)
			.NameContent()
			[
				PropertyHandle->CreatePropertyNameWidget()
			]
			.ValueContent()
			[
				GraphPropertyNode->GetGraphDetailWidget().ToSharedRef()
			]
			.FilterString(FilterString);
	}
}

USMGraphNode_Base* FSMStructCustomization::GetGraphNodeBeingCustomized(
	IPropertyTypeCustomizationUtils& StructCustomizationUtils, bool bCheckParent) const
{
	return GetObjectBeingCustomized<USMGraphNode_Base>(StructCustomizationUtils, bCheckParent);
}

TSharedRef<IPropertyTypeCustomization> FSMGraphPropertyCustomization::MakeInstance()
{
	return MakeShareable(new FSMGraphPropertyCustomization);
}

void FSMGraphPropertyCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle,
	FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	PropertyHandle = StructPropertyHandle;
	check(PropertyHandle.IsValid());
	
	USMGraphNode_Base* GraphNode = GetGraphNodeBeingCustomized(StructCustomizationUtils);

	// This isn't a graph node containing this property. Use the default display.
	if(!GraphNode)
	{
		HeaderRow
		.NameContent()
		[
			StructPropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		[
			StructPropertyHandle->CreatePropertyValueWidget()
		];
		return;
	}

	// HACK to get around the reset to defaults button from showing up when using NameContent and ValueContent below.
	// NoResetToDefault is a property level metadata and since this property can be added by a user it won't be reliable.
	// EditFixedSize is checked in FPropertyHandleBase::CanResetToDefault() and will always be false if this is set.
	StructPropertyHandle->GetProperty()->SetPropertyFlags(CPF_EditFixedSize);
	
	if(!GraphNode->GetNodeTemplate())
	{
		return;
	}

	FProperty* Property = CastField<FProperty>(StructPropertyHandle->GetProperty());
	if(!Property)
	{
		return;
	}

	USMNodeInstance* NodeTemplate = nullptr;
	if (USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(GraphNode))
	{
		const auto NodeInstanceParent = StructPropertyHandle->GetParentHandle()->GetParentHandle()->GetParentHandle()->GetParentHandle();

		if (NodeInstanceParent.IsValid())
		{
			const int32 Idx = NodeInstanceParent->GetIndexInArray();
			NodeTemplate = StateNode->GetTemplateFromIndex(Idx);
		}
	}

	if (!NodeTemplate)
	{
		NodeTemplate = GraphNode->GetNodeTemplate();
	}
	
	TArray<FSMGraphProperty_Base*> GraphProperties;
	USMUtils::BlueprintPropertyToNativeProperty<FSMGraphProperty_Base>(Property, NodeTemplate, GraphProperties);

	const int32 Index = FMath::Max(StructPropertyHandle->GetIndexInArray(), 0);
	if(Index < GraphProperties.Num())
	{
		FSMGraphProperty_Base* GraphProperty = GraphProperties[Index];
		check(GraphProperty);
		USMGraphK2Node_PropertyNode_Base* GraphPropertyNode = GraphNode->GetGraphPropertyNode(GraphProperty->GetGuid());
		if (!GraphPropertyNode)
		{
			return;
		}
		HeaderRow
			.NameContent()
			[
				StructPropertyHandle->CreatePropertyNameWidget()
			]
			.ValueContent()
			[
				GraphPropertyNode->GetGraphDetailWidget().ToSharedRef()
			];
	}
}

void FSMGraphPropertyCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle,
	IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	USMGraphNode_Base* GraphNode = GetGraphNodeBeingCustomized(StructCustomizationUtils);
	// Don't show children if we are on state machine graph.
	if(GraphNode)
	{
		return;
	}
	
	// Build out default properties as if this wasn't being customized.
	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);

	for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
	{
		const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();
		if (!ChildHandle->GetProperty()->HasMetaData("ExposeOverrideOnly"))
		{
			// Structs will have been registered unless part of expose override so hide any properties that shouldn't be displayed.
			// This customization won't be called for ExposedPropertyOverrides.
			
			StructBuilder.AddProperty(ChildHandle);
		}
	}
}

static TSet<FName> RegisteredStructs;

void FSMGraphPropertyCustomization::RegisterNewStruct(const FName& Name)
{
	if(RegisteredStructs.Contains(Name))
	{
		return;
	}
	RegisteredStructs.Add(Name);
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(Name, FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FSMGraphPropertyCustomization::MakeInstance));
}

void FSMGraphPropertyCustomization::UnregisterAllStructs()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	for(const FName& Name : RegisteredStructs)
	{
		PropertyModule.UnregisterCustomPropertyTypeLayout(Name);
	}
}

TSharedRef<IPropertyTypeCustomization> FSMStateStackCustomization::MakeInstance()
{
	return MakeShareable(new FSMStateStackCustomization);
}

void FSMStateStackCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle,
                                                 FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	PropertyHandle = StructPropertyHandle;
	check(PropertyHandle.IsValid());

	USMGraphNode_StateNode* GraphNode = Cast<USMGraphNode_StateNode>(GetGraphNodeBeingCustomized(StructCustomizationUtils, true));
	// Don't show children if we are on state machine graph.
	if (!GraphNode)
	{
		return;
	}
	
	const int32 IndexInArray = StructPropertyHandle->GetIndexInArray();
	USMNodeInstance* NodeInstance = GraphNode->GetTemplateFromIndex(IndexInArray);

	FString HeaderName = "";

	if (NodeInstance)
	{
		FString ClassName = NodeInstance->GetClass()->GetName();
		ClassName.RemoveFromEnd("_C");
		HeaderName = FString::FromInt(IndexInArray) + " " + ClassName;
	}
	
	HeaderRow
		.NameContent()
		[
			StructPropertyHandle->CreatePropertyNameWidget(FText::FromString(HeaderName), FText::GetEmpty(), false)
		];
}

void FSMStateStackCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle,
	IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	USMGraphNode_StateNode* GraphNode = Cast<USMGraphNode_StateNode>(GetGraphNodeBeingCustomized(StructCustomizationUtils, true));
	// Don't show children if we are on state machine graph.
	if(!GraphNode)
	{
		return;
	}

	const int32 IndexInArray = StructPropertyHandle->GetIndexInArray();

	// Build out default properties as if this wasn't being customized.
	
	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);

	for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
	{
		const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();
		StructBuilder.AddProperty(ChildHandle);

		if (ChildHandle->GetProperty() && ChildHandle->GetProperty()->GetFName() == GET_MEMBER_NAME_CHECKED(FStateStackContainer, NodeStackInstanceTemplate))
		{
			// This is the template instance.
			uint32 NumTemplateCategories;
			ChildHandle->GetNumChildren(NumTemplateCategories);
			if (NumTemplateCategories == 0)
			{
				continue;
			}
			
			TSharedPtr<IPropertyHandle> TemplateHandle = ChildHandle->GetChildHandle(0);
			if (!TemplateHandle.IsValid())
			{
				continue;
			}
			
			TemplateHandle->GetNumChildren(NumTemplateCategories);

			// Loop over each template category and send to node instance processing.
			for (uint32 CatIdx = 0; CatIdx < NumTemplateCategories; ++CatIdx)
			{
				TArray<TSharedRef<IPropertyHandle>> TemplateProperties;

				TSharedPtr<IPropertyHandle> TemplateCategoryProperty = TemplateHandle->GetChildHandle(CatIdx);
				uint32 NumTemplateProperties;
				TemplateCategoryProperty->GetNumChildren(NumTemplateProperties);
				
				for (uint32 PropertyIdx = 0; PropertyIdx < NumTemplateProperties; ++PropertyIdx)
				{
					TSharedPtr<IPropertyHandle> TemplateProperty = TemplateCategoryProperty->GetChildHandle(PropertyIdx);
					TemplateProperties.Add(TemplateProperty.ToSharedRef());
				}

				FSMNodeInstanceCustomization::ProcessNodeInstance(GraphNode, TemplateProperties,
					GraphNode->GetTemplateFromIndex(IndexInArray), "Stack Exposed Properties",
					StructBuilder.GetParentCategory().GetParentLayout(), &StructBuilder);
				{
					// Check if the entire category should be hidden.
					bool bAllCustomized = true;
					for (const auto& TemplateProperty : TemplateProperties)
					{
						if (!TemplateProperty->IsCustomized())
						{
							bAllCustomized = false;
							break;
						}
					}

					if (bAllCustomized)
					{
						TemplateCategoryProperty->MarkHiddenByCustomization();
					}
				}
			}
		}
	}
}

static TSet<FName> RegisteredStateStackStructs;

void FSMStateStackCustomization::RegisterNewStruct(const FName& Name)
{
	if(RegisteredStateStackStructs.Contains(Name))
	{
		return;
	}
	RegisteredStateStackStructs.Add(Name);
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(Name, FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FSMStateStackCustomization::MakeInstance));
}

void FSMStateStackCustomization::UnregisterAllStructs()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	for(const FName& Name : RegisteredStateStackStructs)
	{
		PropertyModule.UnregisterCustomPropertyTypeLayout(Name);
	}
}

#undef LOCTEXT_NAMESPACE
