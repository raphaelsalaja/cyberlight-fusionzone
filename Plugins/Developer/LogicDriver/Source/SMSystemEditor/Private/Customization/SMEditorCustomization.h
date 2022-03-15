// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Blueprints/SMBlueprintGeneratedClass.h"

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "DetailLayoutBuilder.h"
#include "IPropertyUtilities.h"


template<typename T>
static T* GetObjectBeingCustomized(IDetailLayoutBuilder& DetailBuilder)
{
	TArray<TWeakObjectPtr<UObject>> Objects;
	DetailBuilder.GetObjectsBeingCustomized(Objects);
	for(TWeakObjectPtr<UObject> Object : Objects)
	{
		if(T* CastedObject = Cast<T>(Object.Get()))
		{
			return CastedObject;
		}
	}

	return nullptr;
}

static EVisibility VisibilityConverter(bool bValue)
{
	return bValue ? EVisibility::Visible : EVisibility::Collapsed;
}

class FSMBaseCustomization : public IDetailCustomization
{
	// IDetailCustomization
	virtual void CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder) override;
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override {}
	// ~IDetailCustomization

protected:
	void ForceUpdate();
	
	TWeakPtr<IDetailLayoutBuilder> DetailBuilderPtr;
};

class FSMNodeCustomization : public FSMBaseCustomization {
public:
	// IDetailCustomization
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// ~IDetailCustomization

	static TSharedRef<IDetailCustomization> MakeInstance();

protected:
	TWeakObjectPtr<class USMGraphNode_Base> SelectedGraphNode;
};

class FSMStateMachineReferenceCustomization : public FSMNodeCustomization {
public:
	// IDetailCustomization
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// ~IDetailCustomization

	static TSharedRef<IDetailCustomization> MakeInstance();

protected:
	void CustomizeParentSelection(IDetailLayoutBuilder& DetailBuilder);
	void OnUseTemplateChange();
	
	TArray<TSharedPtr<FName>> AvailableClasses;
	TMap<FName, USMBlueprintGeneratedClass*> MappedClasses;
};

class FSMTransitionEdgeCustomization : public FSMNodeCustomization {
public:
	// IDetailCustomization
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// ~IDetailCustomization

	static TSharedRef<IDetailCustomization> MakeInstance();

protected:
	TArray<TSharedPtr<FString>> AvailableDelegates;
};

class FSMNodeInstanceCustomization : public FSMBaseCustomization {
public:
	// IDetailCustomization
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// ~IDetailCustomization

	/**
	 * Handle the details panel for exposed graph properties for all node instances.
	 *
	 * @param GraphNode					The selected graph node.
	 * @param TemplateProperties		All template properties to check.
	 * @param NodeInstance				The node instance template containing the properties.
	 * @param ExposedPropertiesName		The name of the category to use for exposed properties.
	 * @param DetailBuilder				The detail builder to use if ChildrenBuilder is not supplied.
	 * @param ChildrenBuilder			An optional DetailChildrenBuilder such as for child structs.
	 * 
	 */
	static void ProcessNodeInstance(TWeakObjectPtr<USMGraphNode_Base> GraphNode, TArray<TSharedRef<IPropertyHandle>> TemplateProperties,
		class USMNodeInstance* NodeInstance, FName ExposedPropertiesName, IDetailLayoutBuilder& DetailBuilder, IDetailChildrenBuilder* ChildrenBuilder = nullptr);
	
	static TSharedRef<IDetailCustomization> MakeInstance();

protected:
	static void GenerateGraphArrayWidget(TSharedRef<IPropertyHandle> PropertyHandle, int32 ArrayIndex, IDetailChildrenBuilder& ChildrenBuilder,
		TWeakObjectPtr<USMGraphNode_Base> SelectedNode, class USMNodeInstance* NodeInstance, FText FilterString);
	TWeakObjectPtr<class USMGraphNode_Base> SelectedGraphNode;
};

class FSMStructCustomization : public IPropertyTypeCustomization
{
public:

	class USMGraphNode_Base* GetGraphNodeBeingCustomized(IPropertyTypeCustomizationUtils& StructCustomizationUtils, bool bCheckParent = false) const;

	template<typename T>
	T* GetObjectBeingCustomized(IPropertyTypeCustomizationUtils& StructCustomizationUtils,
	                            bool bCheckParent = false) const
	{
		const TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized = StructCustomizationUtils
			.GetPropertyUtilities()->GetSelectedObjects();

		if (ObjectsBeingCustomized.Num() != 1)
		{
			return nullptr;
		}

		if (T* GraphNode = Cast<T>(ObjectsBeingCustomized[0]))
		{
			return GraphNode;
		}

		if (bCheckParent)
		{
			return Cast<T>(ObjectsBeingCustomized[0]->GetOuter());
		}

		return nullptr;
	}
};

class FSMGraphPropertyCustomization : public FSMStructCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	/** IPropertyTypeCustomization interface */
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

	/** Register the given struct with the Property Editor. */
	static void RegisterNewStruct(const FName& Name);

	/** Unregister all previously registered structs from the Property Editor. */
	static void UnregisterAllStructs();
	
private:
	TSharedPtr<IPropertyHandle> PropertyHandle;
};

class FSMStateStackCustomization : public FSMStructCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	/** IPropertyTypeCustomization interface */
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

	/** Register the given struct with the Property Editor. */
	static void RegisterNewStruct(const FName& Name);

	/** Unregister all previously registered structs from the Property Editor. */
	static void UnregisterAllStructs();
private:
	TSharedPtr<IPropertyHandle> PropertyHandle;
};