// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMGraphNode_StateMachineStateNode.h"
#include "SMGraphNode_StateMachineParentNode.generated.h"


UCLASS(MinimalAPI)
class USMGraphNode_StateMachineParentNode : public USMGraphNode_StateMachineStateNode
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Parent State Machine", NoClear, meta = (NoResetToDefault))
	TSubclassOf<class USMInstance> ParentClass;

	//~ Begin UEdGraphNode Interface
	virtual void PostPlacedNewNode() override;
	virtual UObject* GetJumpTargetForDoubleClick() const override;
	virtual void JumpToDefinition() const override;
	//~ End UEdGraphNode Interface

	// USMGraphNode_StateMachineStateNode
	virtual void CreateBoundGraph() override;
	virtual void UpdateEditState() override;
	virtual bool ReferenceStateMachine(USMBlueprint* OtherStateMachine, bool bRestrictCircularReference) override { return false; }
	virtual void InitStateMachineReferenceTemplate(bool bInitialLoad) override {}
	// ~USMGraphNode_StateMachineStateNode

	void SetParentIfNull();

	/** Builds all nested graphs of parents that have been expanded. Only valid during compile after ExpandParentNodes() */
	TSet<USMGraph*> GetAllNestedExpandedParents() const;

	/** A cloned graph of the parent. Only valid during compile after ExpandParentNodes(). */
	UPROPERTY(Transient, NonTransactional)
	USMGraph* ExpandedGraph;
	
protected:
	// USMGraphNode_StateNodeBase
	virtual FLinearColor Internal_GetBackgroundColor() const override;
	// ~USMGraphNode_StateNodeBase
};
