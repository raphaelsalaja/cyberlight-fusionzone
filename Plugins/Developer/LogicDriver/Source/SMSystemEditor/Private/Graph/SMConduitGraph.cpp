// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMConduitGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "Utilities/SMBlueprintEditorUtils.h"


USMConduitGraph::USMConduitGraph(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), ResultNode(nullptr)
{
}

bool USMConduitGraph::HasAnyLogicConnections() const
{
	if (bHasLogicConnectionsCached.IsSet())
	{
		return bHasLogicConnectionsCached.GetValue();
	}
	
	// Check if there are any pins wired to this boolean input.
	TArray<USMGraphK2Node_ConduitResultNode*> RootNodeList;

	// We want to find the node even if it's buried in a nested graph.
	FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphK2Node_ConduitResultNode>(const_cast<USMConduitGraph*>(this), RootNodeList);

	for (USMGraphK2Node_RootNode* RootNode : RootNodeList)
	{
		if (RootNode->GetInputPin()->LinkedTo.Num() || RootNode->GetInputPin()->DefaultValue.ToBool())
		{
			const_cast<USMConduitGraph*>(this)->bHasLogicConnectionsCached = true;
			return true;
		}
	}

	const_cast<USMConduitGraph*>(this)->bHasLogicConnectionsCached = false;
	return false;
}
