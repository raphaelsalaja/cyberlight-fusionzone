// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMNodeInstance.h"
#include "SMNode_Info.h"
#include "SMTransitionInstance.generated.h"

class USMStateInstance_Base;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransitionEnteredSignature, class USMTransitionInstance*, TransitionInstance);

/**
 * Connect states and define conditions to signal when the active state should end and the next state begin.
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = LogicDriver, hideCategories = (SMTransitionInstance), meta = (DisplayName = "Transition Class"))
class SMSYSTEM_API USMTransitionInstance : public USMNodeInstance
{
	GENERATED_BODY()

public:
	USMTransitionInstance();

	/** Conditional check to determine if the transition can be taken. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	bool CanEnterTransition() const;

	/** Called when this transition has been evaluated and taken. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Instance")
	void OnTransitionEntered();

	/** Called after the state leading to this node is initialized but before OnStateBegin. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Instance")
	void OnTransitionInitialized();

	/** Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Instance")
	void OnTransitionShutdown();

	/** The state this transition leaves from. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	USMStateInstance_Base* GetPreviousStateInstance() const;

	/** The state this transition leads to. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	USMStateInstance_Base* GetNextStateInstance() const;

	/**
	* Return the state that last triggered this transition.
	* This may be a state prior to a transition conduit.
	* This will be valid during OnTransitionEntered().
	*
	* @return The first state to trigger this transition chain or null.
	*/
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	USMStateInstance_Base* GetSourceStateForActiveTransition() const;

	/**
	* Return the destination state we are transitioning to or last transitioned to.
	* This may be a state after a transition conduit.
	* This will be valid during OnTransitionEntered().
	*
	* @return The final state after the transition chain or null.
	*/
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	USMStateInstance_Base* GetDestinationStateForActiveTransition() const;
	
	/** Return read only information about the owning transition. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	void GetTransitionInfo(FSMTransitionInfo& Transition) const;

	/** Return the last server timestamp of this transition. If not networked this won't be set. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	const FDateTime& GetServerTimestamp() const;
	
	/**
	 * Evaluates the transition's local graph which usually calls #CanEnterTransition of this instance.
	 * This is equivalent to the state machine determining if a transition succeeds.
	 *
	 * This is best used from an external caller when checking a transition result.
	 *
	 * Do NOT call this from within CanEnterTransition of the instance or the local graph
	 * or you may trigger an infinite loop.
	 *
	 * @return The transition result.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	bool DoesTransitionPass() const;

	/**
	 * 1. Enables evaluation for this transition.
	 * 2. Calls EvaluateTransitions from the owning state machine.
	 * 3. Disables evaluation for this transition.
	 * 
	 * Use at the end of execution from manually bound events.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	void EvaluateFromManuallyBoundEvent();
	
protected:
	/* Override in native classes to implement. Never call these directly. */
	
	virtual bool CanEnterTransition_Implementation() const { return false; }
	virtual void OnTransitionEntered_Implementation() {}
	virtual void OnTransitionInitialized_Implementation() {}
	virtual void OnTransitionShutdown_Implementation() {}
	
#if WITH_EDITORONLY_DATA
public:
	const FSMTransitionConnectionValidator& GetAllowedConnections() const { return ConnectionRules; }
	bool IsIconHidden() const { return bHideIcon; }
	float GetIconLocationPercentage() const { return IconLocationPercentage; }
protected:
	/** Define what types of connections are allowed. Default is all. */
	UPROPERTY(EditDefaultsOnly, Category = "Behavior", meta = (InstancedTemplate, ShowOnlyInnerProperties))
	FSMTransitionConnectionValidator ConnectionRules;

	/** Completely hide the transition icon. If the connection is hovered or selected it will become visible. */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category = "Display", meta = (InstancedTemplate))
	bool bHideIcon;

	/** Set the position of the icon along the connection. */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category = "Display", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float IconLocationPercentage;
	
#endif

public:
	/** Sets whether this node is allowed to evaluate or not. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	void SetCanEvaluate(const bool bValue);
	/** Check whether this transition is allowed to evaluate. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	bool GetCanEvaluate() const;
	
	/** Public getter for #PriorityOrder. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	int32 GetPriorityOrder() const;
	/**
	 * Public setter for #PriorityOrder.
	 * Only valid from the editor construction script.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	void SetPriorityOrder(const int32 Value);

	/** Public getter for #bRunParallel. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	bool GetRunParallel() const;
	/** Public setter for #bRunParallel. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	void SetRunParallel(const bool bValue);

	/** Public getter for #bEvalIfNextStateActive. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	bool GetEvalIfNextStateActive() const;
	/** Public setter for #bEvalIfNextStateActive. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	void SetEvalIfNextStateActive(const bool bValue);

	/** Public getter for #bCanEvaluateFromEvent. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	bool GetCanEvaluateFromEvent() const;
	/** Public setter for #bCanEvaluateFromEvent. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	void SetCanEvaluateFromEvent(const bool bValue);

	/** Public getter for #bCanEvalWithStartState. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	bool GetCanEvalWithStartState() const;
	/** Public setter for #bCanEvalWithStartState. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Defaults")
	void SetCanEvalWithStartState(const bool bValue);
private:
	friend class USMGraphNode_TransitionEdge;
	
	/**
	 * Lower number transitions will be evaluated first.
	 */
	UPROPERTY(EditDefaultsOnly, Category = Transition)
	int32 PriorityOrder;

	/**
	 * If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.
	 * This allows the possibility for multiple active states. Transitions from Conduit nodes are not supported.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Parallel States")
	bool bRunParallel;

	/**
	 * Should the transition should still evaluate if already connecting to an active state.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Parallel States")
	bool bEvalIfNextStateActive;

	/**
	 * If this transition is allowed to evaluate conditionally.
	 */
	UPROPERTY(EditDefaultsOnly, Category = Transition, meta=(DisplayName = "Can Evaluate Conditionally"))
	bool bCanEvaluate;
	
	/** If this transition can evaluate from auto-bound events. */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category = Transition)
	bool bCanEvaluateFromEvent;
	
	/**
	 * Setting to false forces this transition to never evaluate on the same tick as Start State.
	 * Only checked if this transition's from state has bEvalTransitionsOnStart set to true.
	 */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category = Transition, meta = (NoResetToDefault))
	bool bCanEvalWithStartState;
	
public:
	/** Called when this transition has been entered from the previous state. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|Node Instance")
	FOnTransitionEnteredSignature OnTransitionEnteredEvent;
};