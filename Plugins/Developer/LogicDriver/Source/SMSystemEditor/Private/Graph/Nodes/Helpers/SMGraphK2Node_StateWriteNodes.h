// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h"
#include "SMGraphK2Node_StateWriteNodes.generated.h"


UCLASS(MinimalAPI)
class USMGraphK2Node_StateWriteNode : public USMGraphK2Node_RuntimeNodeReference
{
	GENERATED_UCLASS_BODY()

	// UEdGraphNode
	virtual void PostPlacedNewNode() override;
	virtual void PostPasteNode() override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	virtual bool CanUserDeleteNode() const override { return true; }
	virtual bool CanDuplicateNode() const override { return true; }
	virtual bool IsNodePure() const override { return false; }
	virtual FText GetMenuCategory() const override;
	virtual bool IsActionFilteredOut(class FBlueprintActionFilter const& Filter) override;
	//~ UEdGraphNode

	// USMGraphK2Node_Base
	virtual bool CanCollapseNode() const override { return true; }
	virtual bool CanCollapseToFunctionOrMacro() const override { return true; }
	virtual UEdGraphPin* GetInputPin() const override;
	//~ End UEdGraphNode Interface
};


UCLASS(MinimalAPI)
class USMGraphK2Node_StateWriteNode_CanEvaluate : public USMGraphK2Node_StateWriteNode
{
	GENERATED_UCLASS_BODY()

	// UEdGraphNode
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual void AllocateDefaultPins() override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	virtual bool IsActionFilteredOut(FBlueprintActionFilter const& Filter) override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	//~ UEdGraphNode
};


UCLASS(MinimalAPI)
class USMGraphK2Node_StateWriteNode_CanEvaluateFromEvent : public USMGraphK2Node_StateWriteNode
{
	GENERATED_UCLASS_BODY()

	// UEdGraphNode
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual void AllocateDefaultPins() override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	//~ UEdGraphNode
};


UCLASS(MinimalAPI)
class USMGraphK2Node_StateWriteNode_TransitionEventReturn : public USMGraphK2Node_StateWriteNode
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = "Transition Event")
	bool bEventTriggersUpdate;
	
	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual bool IsCompatibleWithGraph(UEdGraph const* Graph) const override;
	virtual bool IsActionFilteredOut(FBlueprintActionFilter const& Filter) override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual bool CanUserDeleteNode() const override { return true; }
	virtual bool CanDuplicateNode() const override { return true; }
	virtual bool ShouldShowNodeProperties() const override { return true; }
	virtual bool DrawNodeAsExit() const override { return true; }
	//~ UEdGraphNode

	// USMGraphK2Node_RuntimeNodeReference
	virtual bool HandlesOwnExpansion() const override { return true; }
	virtual void CustomExpandNode(FSMKismetCompilerContext& CompilerContext, USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty) override;
	// ~USMGraphK2Node_RuntimeNodeReference

};