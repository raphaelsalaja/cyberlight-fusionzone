// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "SMNodeInstance.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Graph/SMGraph.h"

class USMGraphNode_Base;

// Helpers for managing node instances and related objects.
class SMSYSTEMEDITOR_API FSMNodeInstanceUtils
{
public:
	enum class ENodeStackType : uint8
	{
		None,
		StateStack,
		TransitionStack
	};
	
	/** Recursively checks a child to see if it belongs to a parent. */
	static bool IsWidgetChildOf(TSharedPtr<SWidget> Parent, TSharedPtr<SWidget> PossibleChild);

	/** Create formatted text to summarize the node class. */
	static FText CreateNodeClassTextSummary(const USMNodeInstance* NodeInstance);

	/** Create a widget to display node class information. */
	static TSharedPtr<SWidget> CreateNodeClassWidgetDisplay(const USMNodeInstance* NodeInstance);
	
	/** Sets all related internal properties. Returns the guid used. */
	static const FGuid& SetGraphPropertyFromProperty(FSMGraphProperty_Base& GraphProperty, FProperty* Property,
		USMNodeInstance* NodeInstance, int32 Index = 0, bool bSetGuid = true, bool bUseTemplateInGuid = true,
		bool bUseTempNativeGuid = false);

	/** Checks appropriate flags on a property to see if it should be exposed. */
	static bool IsPropertyExposedToGraphNode(const FProperty* Property);

	/** Checks if the property handle is a supported container and exposed. */
	static bool IsPropertyHandleExposedContainer(const TSharedPtr<IPropertyHandle>& InHandle);
	
	/** Checks if this handle should be displayed in a node stack instance template. */
	static bool ShouldHideNodeStackPropertyFromDetails(const FProperty* InProperty);

	/** Recursively check if a handle has no properties and hide the handle. */
	static bool HideEmptyCategoryHandles(const TSharedPtr<IPropertyHandle>& InHandle, ENodeStackType NodeStackType);
	
	/** Checks if the property is considered a graph property. */
	static FStructProperty* IsPropertyGraphProperty(FProperty* Property);

	/**
	 * Checks if the node might have user defined construction scripts.
	 *
	 * @param NodeClass Node class construction script graph to check.
	 * @param ExecutionType Editor or game construction scripts.
	 */
	static bool DoesNodeClassPossiblyHaveConstructionScripts(TSubclassOf<USMNodeInstance> NodeClass, ESMExecutionEnvironment ExecutionType);
};

