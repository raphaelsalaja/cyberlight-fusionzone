// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMNodeInstance.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Graph/SMGraph.h"

class USMGraphNode_Base;

// Helpers for managing node instances and related objects.
class SMSYSTEMEDITOR_API FSMNodeInstanceUtils
{
public:
	/** Recursively checks a child to see if it belongs to a parent. */
	static bool IsWidgetChildOf(TSharedPtr<SWidget> Parent, TSharedPtr<SWidget> PossibleChild);

	static TSharedPtr<SWidget> CreateNodeClassWidgetDisplay(USMNodeInstance* NodeInstance);

	/** Sets all related internal properties. Returns the guid used. */
	static const FGuid& SetGraphPropertyFromProperty(FSMGraphProperty_Base& GraphProperty, FProperty* Property, USMNodeInstance* NodeInstance, int32 Index = 0, bool bSetGuid = true, bool bUseTemplateInGuid = true);

	/** Checks appropriate flags on a property to see if it should be exposed. */
	static bool IsPropertyExposedToGraphNode(FProperty* Property);

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

