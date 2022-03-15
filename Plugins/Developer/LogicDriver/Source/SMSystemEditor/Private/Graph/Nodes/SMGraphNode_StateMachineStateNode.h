// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMInstance.h"
#include "SMGraphNode_StateNode.h"
#include "SMStateMachineInstance.h"
#include "SMGraphNode_StateMachineStateNode.generated.h"


class USMBlueprint;

UCLASS()
class SMSYSTEMEDITOR_API USMGraphNode_StateMachineStateNode : public USMGraphNode_StateNodeBase
{
	GENERATED_UCLASS_BODY()

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bReuseCurrentState_DEPRECATED;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bReuseIfNotEndState_DEPRECATED;

	/**
	 * Allows the state machine reference to tick on its own.
	 */
	UPROPERTY(EditAnywhere, Category = "State Machine Reference")
	bool bAllowIndependentTick;

	/**
	 * The Update method will call Tick only if Update was not called by native Tick.
	 */
	UPROPERTY(EditAnywhere, Category = "State Machine Reference")
	bool bCallTickOnManualUpdate;

	/**
	 * Reuse one instance of this class multiple times in the same blueprint.
	 * Only works with other references of the exact same class that have this flag checked.
	 * Will not work with templating.
	 * Will not work properly with looking up nodes by Guid or for serializing state information.
	 * Do NOT use if the state machine needs to be saved to disk and reloaded during run-time.

	 * This is to maintain legacy behavior and not encouraged for use.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "State Machine Reference", meta = (EditCondition = "!bUseTemplate"))
	bool bReuseReference;
	
	/**
	 * Enable the use of an archetype to allow default values to be set.
	 */
	UPROPERTY(EditAnywhere, Category = "State Machine Reference")
	bool bUseTemplate;

	UPROPERTY(VisibleDefaultsOnly, Export, Category = "State Machine Reference", meta = (DisplayName=Template, DisplayThumbnail=false, ShowInnerProperties))
	USMInstance* ReferencedInstanceTemplate;

	UPROPERTY(EditAnywhere, NoClear, Category = "Class", meta = (BlueprintBaseOnly))
	TSubclassOf<USMStateMachineInstance> StateMachineClass;
	
	//~ Begin UEdGraphNode Interface
	virtual void PostLoad() override;
	virtual void PostPlacedNewNode() override;
	virtual void PostPasteNode() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditUndo() override;
	virtual void DestroyNode() override;
	virtual void ValidateNodeDuringCompilation(FCompilerResultsLog& MessageLog) const override;
	virtual UObject* GetJumpTargetForDoubleClick() const override;
	virtual void JumpToDefinition() const override;
	//~ End UEdGraphNode Interface
	
	// USMGraphNode_StateNodeBase
	virtual void SetRuntimeDefaults(FSMState_Base& State) const override;
	// ~USMGraphNode_StateNodeBase

	// USMGraphNode_Base
	virtual void ImportDeprecatedProperties() override;
	virtual void CheckSetErrorMessages() override;
	virtual UClass* GetNodeClass() const override { return StateMachineClass; }
	virtual void SetNodeClass(UClass* Class) override;
	virtual FName GetFriendlyNodeName() const override { return "StateMachine"; }
	// ~USMGraphNode_Base

	/** Returns the best graph of the reference to jump to. */
	UObject* GetReferenceToJumpTo() const;

	/** Jumps to the reference regardless of intermediate graph. */
	void JumpToReference() const;
	
	/** Signals that this state machine is actually a reference to another blueprint. */
	virtual bool ReferenceStateMachine(USMBlueprint* OtherStateMachine, bool bRestrictCircularReference = true);

	/** Instantiate a template for use as an archetype. */
	virtual void InitStateMachineReferenceTemplate(bool bInitialLoad = false);

	/** Transfer the template to the transient package. */
	void DestroyReferenceTemplate();
	
	/** The blueprint state machine this node references. */
	USMBlueprint* GetStateMachineReference() const { return ReferencedStateMachine; }

	/** Return the pointer to the reference template. */
	USMInstance* GetStateMachineReferenceTemplateDirect() const { return ShouldUseTemplate() ? ReferencedInstanceTemplate : nullptr; }
	
	/** Signal if a reference graph should be used. Will create one if necessary. */
	void SetUseIntermediateGraph(bool bValue);

	/** Creates the appropriate bound graph depending on settings. */
	virtual void CreateBoundGraph();
	
	/** Set the read only state of the graph if this is a reference. */
	virtual void UpdateEditState();

	/** If this node references a state machine blueprint. */
	bool IsStateMachineReference() const { return bNeedsNewReference || ReferencedStateMachine != nullptr; }

	bool IsBoundGraphInvalid() const;
	
	/** Doesn't have intermediate graph but requires it. */
	bool NeedsIntermediateGraph() const;

	/** Set but may not be in use. */
	bool HasIntermediateGraph() const;

	/** Enabled and in use. */
	bool IsUsingIntermediateGraph() const;

	/** Use has indicated to use intermediate graph. */
	bool ShouldUseIntermediateGraph() const;

	/** If true a template will be generated. */
	bool ShouldUseTemplate() const;

	/** If the current state is reused on end/start */
	bool ShouldReuseCurrentState() const;

	/**  Do not reuse if in an end state */
	bool ShouldReuseIfNotEndState() const;

	/** If the FSM is configured to wait for an end state. */
	bool ShouldWaitForEndState() const;
	
	bool IsSwitchingGraphTypes() const;

protected:
	// USMGraphNode_StateNodeBase
	virtual FLinearColor Internal_GetBackgroundColor() const override;
	// ~USMGraphNode_StateNodeBase

	/** If this state machine contains any actual states. */
	virtual bool HasLogicStates() const;

	UPROPERTY()
	USMBlueprint* ReferencedStateMachine;

	UPROPERTY()
	FString DesiredNodeName;

	UPROPERTY()
	bool bShouldUseIntermediateGraph;

	UPROPERTY()
	bool bNeedsNewReference;

	bool bSwitchingGraphTypes;
};
