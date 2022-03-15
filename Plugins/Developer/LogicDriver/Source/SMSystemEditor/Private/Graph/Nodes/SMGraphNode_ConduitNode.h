// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "SMConduitInstance.h"
#include "SMGraphNode_StateNode.h"
#include "SMGraphNode_ConduitNode.generated.h"


class USMGraphNode_TransitionEdge;
class USMGraph;

UCLASS(MinimalAPI)
class USMGraphNode_ConduitNode : public USMGraphNode_StateNodeBase
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, NoClear, Category = "Class", meta = (BlueprintBaseOnly))
	TSubclassOf<USMConduitInstance> ConduitClass;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bEvalWithTransitions_DEPRECATED;
	
	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual FText GetTooltipText() const override;
	virtual void PostPlacedNewNode() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	//~ UEdGraphNode

	// USMGraphNode_Base
	virtual void ResetDebugState() override;
	virtual void UpdateTime(float DeltaTime) override;
	virtual void ImportDeprecatedProperties() override;
	virtual void PlaceDefaultInstanceNodes() override;
	virtual UClass* GetNodeClass() const override { return ConduitClass; }
	virtual void SetNodeClass(UClass* Class) override;
	virtual FName GetFriendlyNodeName() const override { return "Conduit"; }
	virtual void SetRuntimeDefaults(FSMState_Base& State) const override;
	virtual FLinearColor GetActiveBackgroundColor() const override;
	// ~USMGraphNode_Base

	/** If this conduit should be configured to evaluate with transitions. */
	bool ShouldEvalWithTransitions() const;
	bool WasEvaluating() const { return bWasEvaluating; }

protected:
	virtual FLinearColor Internal_GetBackgroundColor() const override;

	bool bWasEvaluating;
};
