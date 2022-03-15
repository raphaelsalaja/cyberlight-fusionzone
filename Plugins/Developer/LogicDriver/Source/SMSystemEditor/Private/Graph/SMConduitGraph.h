// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMGraphK2.h"
#include "Nodes/RootNodes/SMGraphK2Node_ConduitResultNode.h"
#include "SMConduitGraph.generated.h"


UCLASS(MinimalAPI)
class USMConduitGraph : public USMGraphK2
{
	GENERATED_UCLASS_BODY()

public:
	// USMGraphK2
	virtual bool HasAnyLogicConnections() const override;
	virtual FSMNode_Base* GetRuntimeNode() const override { return ResultNode ? ResultNode->GetRunTimeNode() : nullptr; }
	// ~USMGraphK2

public:
	UPROPERTY()
	class USMGraphK2Node_ConduitResultNode* ResultNode;
};
