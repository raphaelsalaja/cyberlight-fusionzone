// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMTransition.h"
#include "SMGraphK2Node_RuntimeNodeContainer.h"
#include "SMGraphK2Node_TransitionResultNode.generated.h"


UCLASS()
class SMSYSTEMEDITOR_API USMGraphK2Node_TransitionResultNode : public USMGraphK2Node_RuntimeNodeContainer
{
	GENERATED_UCLASS_BODY()

	static const FName EvalPinName;
	
	UPROPERTY(EditAnywhere, Category = "State Machines")
	FSMTransition TransitionNode;

	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;

	virtual bool IsNodePure() const override { return true; }
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	//~ End UEdGraphNode Interface

	virtual FSMNode_Base* GetRunTimeNode() override { return &TransitionNode; }
	UEdGraphPin* GetTransitionEvaluationPin() const;
};
