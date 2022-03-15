// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMConduit.h"
#include "SMGraphK2Node_TransitionResultNode.h"
#include "SMGraphK2Node_ConduitResultNode.generated.h"


UCLASS(MinimalAPI)
class USMGraphK2Node_ConduitResultNode : public USMGraphK2Node_TransitionResultNode
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = "State Machines")
	FSMConduit ConduitNode;

	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool IsNodePure() const override { return true; }
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	//~ End UEdGraphNode Interface

	virtual FSMNode_Base* GetRunTimeNode() override { return &ConduitNode; }
};
