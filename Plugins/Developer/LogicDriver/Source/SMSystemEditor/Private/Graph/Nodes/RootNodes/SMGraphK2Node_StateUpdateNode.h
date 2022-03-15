// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMGraphK2Node_RuntimeNodeContainer.h"
#include "SMGraphK2Node_StateUpdateNode.generated.h"


UCLASS(MinimalAPI)
class USMGraphK2Node_StateUpdateNode : public USMGraphK2Node_RuntimeNodeReference
{
	GENERATED_UCLASS_BODY()

	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	//~ End UEdGraphNode Interface
};
