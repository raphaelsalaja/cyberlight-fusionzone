// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMGraphK2Node_RuntimeNodeContainer.h"
#include "SMState.h"
#include "SMGraphK2Node_StateEntryNode.generated.h"


UCLASS(MinimalAPI)
class USMGraphK2Node_StateEntryNode : public USMGraphK2Node_RuntimeNodeContainer
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = "State Machines")
	FSMState StateNode;

	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	//~ End UEdGraphNode Interface

	virtual FSMNode_Base* GetRunTimeNode()  override { return &StateNode; }
};
