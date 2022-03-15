// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "SMGraphK2Node_IntermediateNodes.generated.h"


/**
 * State Start override for intermediate graphs.
 */
UCLASS(MinimalAPI)
class USMGraphK2Node_IntermediateEntryNode : public USMGraphK2Node_StateMachineEntryNode
{
	GENERATED_UCLASS_BODY()

	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	//~ End UEdGraphNode Interface
};

/**
 * This blueprint's root State machine start entry point
 */
UCLASS(MinimalAPI)
class USMGraphK2Node_IntermediateStateMachineStartNode : public USMGraphK2Node_RuntimeNodeReference
{
	GENERATED_UCLASS_BODY()

	//~ Begin UEdGraphNode Interface
	virtual bool CanUserDeleteNode() const override { return true; }
	virtual void AllocateDefaultPins() override;
	virtual ERedirectType DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex, const UEdGraphPin* OldPin, int32 OldPinIndex) const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual bool IsActionFilteredOut(class FBlueprintActionFilter const& Filter) override;
	virtual void PostPlacedNewNode() override;
	//~ End UEdGraphNode Interface
};

/**
 * When the blueprint's root state machine stops.
 */
UCLASS(MinimalAPI)
class USMGraphK2Node_IntermediateStateMachineStopNode : public USMGraphK2Node_RuntimeNodeReference
{
	GENERATED_UCLASS_BODY()

	//~ Begin UEdGraphNode Interface
	virtual bool CanUserDeleteNode() const override { return true; }
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual bool IsActionFilteredOut(class FBlueprintActionFilter const& Filter) override;
	virtual void PostPlacedNewNode() override;
	//~ End UEdGraphNode Interface
};