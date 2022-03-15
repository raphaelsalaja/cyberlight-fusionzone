// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMState.h"
#include "SMTransition.h"
#include "SMStateMachine.generated.h"


/**
 * State machines contain states and transitions. When a transition succeeds the current state advances to the next.
 * FSMStateMachine is also considered a state since it inherits from FSMState_Base, making it possible to nest state machines.
 * 
 * When configured as a reference this will defer handling to the SMInstance (or in some cases the RootStateMachine) of the referenced Blueprint.
 */
USTRUCT(BlueprintInternalUseOnly)
struct SMSYSTEM_API FSMStateMachine : public FSMState_Base
{
	GENERATED_USTRUCT_BODY()
	
public:
	/** If this has additional logic associated with it. */
	UPROPERTY()
	bool bHasAdditionalLogic;

	/** The current state is not cleared on end and will be resumed on start. */
	UPROPERTY()
	bool bReuseCurrentState;

	/** Don't reuse if the state machine is in an end state. */
	UPROPERTY()
	bool bOnlyReuseIfNotEndState;

	/** Allows the state machine reference to tick on its own. */
	UPROPERTY()
	bool bAllowIndependentTick;

	/** Notifies instance to call tick on manual update. Only valid for references. */
	UPROPERTY()
	bool bCallReferenceTickOnManualUpdate;

	/** The reference will only be instantiated once and reused. */
	UPROPERTY()
	bool bReuseReference;

	/** Wait for an end state to be hit before evaluating transitions or being considered an end state itself. */
	UPROPERTY()
	bool bWaitForEndState;
	
	UPROPERTY()
	TArray<FSMExposedFunctionHandler> UpdateStateGraphEvaluator;

	UPROPERTY()
	TArray<FSMExposedFunctionHandler> EndStateGraphEvaluator;

public:
	FSMStateMachine();
	// FSMState_Base
	virtual void Initialize(UObject* Instance) override;
	virtual void Reset() override;
	virtual bool StartState() override;
	virtual bool UpdateState(float DeltaSeconds) override;
	virtual bool EndState(float DeltaSeconds, const FSMTransition* TransitionToTake = nullptr) override;
	virtual void ExecuteInitializeNodes() override;
	virtual void ExecuteShutdownNodes() override;
	virtual void OnStartedByInstance(USMInstance* Instance) override;
	virtual void OnStoppedByInstance(USMInstance* Instance) override;
	virtual void CalculatePathGuid(TMap<FString, int32>& MappedPaths) override;
	virtual void RunConstructionScripts() override;
	/** If the current state is an end state. */
	virtual bool IsInEndState() const override;
	virtual bool IsStateMachine() const override { return true; }
	virtual bool IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const override;
	virtual USMNodeInstance* GetNodeInstance() const override;
	virtual UClass* GetDefaultNodeInstanceClass() const override;
	virtual FSMNode_Base* GetOwnerNode() const override;
	virtual void SetStartTime(const FDateTime& InStartTime) override;
	virtual void SetServerTimeInState(float InTime) override;
	// ~FSMState_Base

	/** Add a state to this State Machine. */
	void AddState(FSMState_Base* State);

	/** Add a transition to this State Machine. */
	void AddTransition(FSMTransition* Transition);

	/** The first state to execute. Even with parallel states there is always a single root entry point. */
	void AddInitialState(FSMState_Base* State);

	/** These states will replace the initial state, but once started will be cleared.
	 * @param State A non null state will be added to the set as long as it exists within the state machine. A null value is ignored.
	 */
	void AddTemporaryInitialState(FSMState_Base* State);

	/** Removes all temporary initial states. */
	void ClearTemporaryInitialStates();
	
	/** Checks if there are any active states. */
	bool HasActiveStates() const { return ActiveStates.Num() > 0; }

	/** Checks if there any temporary initial states set. */
	bool HasTemporaryEntryStates() const { return TemporaryEntryStates.Num() > 0; }
	
	/** The current state of this State Machine. In the event of multiple parallel states the first active state is returned. */
	FSMState_Base* GetSingleActiveState() const;

	/** Returns a copy of all active states specific to this FSM making it safe for iteration modification. */
	TArray<FSMState_Base*> GetActiveStates() const;

	/** Return a list of all active states recursively searching nested state machines. */
	TArray<FSMState_Base*> GetAllNestedActiveStates() const;
	
	/** Retrieve nodes of all types.
	 * @param bIncludeNested If nested state machines should have their nodes returned as well.
	 */
	TArray<FSMNode_Base*> GetAllNodes(bool bIncludeNested = false) const;

	/** Retrieve nodes of all state types. */
	const TArray<FSMState_Base*>& GetStates() const { return States; }

	/** Retrieve nodes of only transitions. */
	const TArray<FSMTransition*>& GetTransitions() const { return Transitions; }

	/** Returns only the original entry states. */
	const TSet<FSMState_Base*>& GetEntryStates() const;
	
	/** The entry state of this state machine. Returns either the temporary or default. Possible to be greater than 0 when loading from temporary parallel states. */
	TArray<FSMState_Base*> GetInitialStates() const;

	/** Returns either null or the first initial state. Only use this if you know the FSM doesn't have parallel states.  */
	FSMState_Base* GetSingleInitialState() const;

	/** Returns either null or the first initial temporary state. Only use this if you know the FSM doesn't have parallel states.  */
	FSMState_Base* GetSingleInitialTemporaryState() const;
	
	/** Linear search recursively through all states and state machines. */
	FSMState_Base* FindState(const FGuid& StateGuid) const;
	
	/** Determine how to process transitions and states in different environments. */
	void SetNetworkedConditions(TArray<FSMNetworkedTransaction>& TransitionArray, bool bEvaluateTransitions, bool bTakeTransitions, float MaxTimeToWait, bool bCanExecuteStateLogic);

	/**
	 * Determine if the current state should be stopped or started or evaluate a transition.
	 * @param DeltaSeconds Time since last update.
	 * @param bForceTransitionEvaluationOnly The update (Tick) logic for a state won't be called unless the state is ending and bAlwaysUpdate is checked. Start and End may still be called.
	 * @param InCurrentRunGuid A guid unique to this call stack. Leave empty, for internal use.
	 */
	void ProcessStates(float DeltaSeconds, bool bForceTransitionEvaluationOnly = false, const FGuid& InCurrentRunGuid = FGuid());

	/**
	 * Attempt to take a transition. Returns true if successful.
	 * @param Transition The transition to process.
	 * @param SourceState The original state to transition from.
	 * @param DestinationState the final state to transition to.
	 * @param Transaction A network transaction if one exists. May be null.
	 * @param DeltaSeconds The time in seconds since the last update.
	 * @param CurrentTime The current UTC time. Only utilized in networked environments when checking for expired previous transitions.
	 */
	bool ProcessTransition(FSMTransition* Transition, FSMState_Base* SourceState, FSMState_Base* DestinationState, const FSMNetworkedTransaction* Transaction, float DeltaSeconds, FDateTime* CurrentTime = nullptr);

	/** Check for and remove expired transactions. */
	void CleanupPreviousTransactions(const FDateTime& CurrentTime, float PreviousTransactionTimeout);
	
	/** State Machine is currently waiting for a transition update from the server. */
	bool IsWaitingForUpdate() const { return bWaitingForTransitionUpdate; }

	/*
	 * When true the current state is reused on exit/reentry.
	 * When false the current state is cleared on end and the initial state used on reentry.
	 */
	void SetReuseCurrentState(bool bValue, bool bOnlyWhenNotInEndState);

	/** Is the current state reused or reset on exit/reentry. */
	bool CanReuseCurrentState() const;

	void SetClassReference(UClass* ClassReference);
	UClass* GetClassReference() const { return ReferencedStateMachineClass; }

	void SetInstanceReference(USMInstance* InstanceReference);
	USMInstance* GetInstanceReference() const { return ReferencedStateMachine; }

	void SetReferencedTemplateName(const FName& Name);
	const FName& GetReferencedTemplateName() const { return ReferencedTemplateName; }
	
	void SetReferencedBy(USMInstance* FromInstance, FSMStateMachine* FromStateMachine);
	
	/** The instance referencing this state machine. */
	USMInstance* GetReferencedByInstance() const { return IsReferencedByInstance; }

	/** The exact state machine referencing this, if any. */
	FSMStateMachine* GetReferencedByStateMachine() const { return IsReferencedByStateMachine; }
	
	/** True only if this FSM is networked. */
	bool IsNetworked() const { return AllActiveTransactions != nullptr; }

	/** Accessor for retrieving any previous transactions. */
	TMap<FGuid, FSMNetworkedTransaction>& GetPreviousTransactions() { return PreviousTransactions; }

	/** All contained states mapped out by their name, limited to this FSM scope. */
	const TMap<FString, FSMState_Base*>& GetStateNameMap() const { return StateNameMap; }
	
	/**
	 * Forcibly add an active state.
	 *
	 * @param State The state to add to the active list.
	 * @param bReplicate If this should be replicated.
	 */
	void AddActiveState(FSMState_Base* State, bool bReplicate = false);
	
	/**
	 * Forcibly remove an active state.
	 *
	 * @param State The state to remove from the active list.
	 * @param bReplicate If this should be replicated.
	 */
	void RemoveActiveState(FSMState_Base* State, bool bReplicate = false);
protected:
	/**
	 * Switches the current state and notifies the owning instance.
	 *
	 * @param ToState: The state we should be switching to. May be null.
	 * @param FromState: The state we are switching from. If not null it will be removed from the active list if bStayActiveOnStateChange is false.
	 * @param SourceState: The original source state we are transitioning from. This can be different from the FromState if transition conduits are involved.
	 */
	void SetCurrentState(FSMState_Base* ToState, FSMState_Base* FromState, FSMState_Base* SourceState = nullptr);
	
private:
	TArray<FSMState_Base*> States;
	TArray<FSMTransition*> Transitions;
	TArray<FSMNetworkedTransaction>* AllActiveTransactions;

	/* The transaction ID mapped to the transaction. */
	UPROPERTY(Transient)
	TMap<FGuid, FSMNetworkedTransaction> PreviousTransactions;

	/** The default root entry point. */
	TSet<FSMState_Base*> EntryStates;

	/** Entry states that are temporary and used for loading purposes. */
	TSet<FSMState_Base*> TemporaryEntryStates;

	/** In most cases this should be of size 0 or 1. Greater than 1 implies the sm is configured for multiple active states.
	 *  Array container needed for exact order when adding parallel states. O(n) operations should be acceptable for average number
	 *  of active states and only on state changes. */
	TArray<FSMState_Base*> ActiveStates;
	
	/** All contained states, mapped by their name. */
	TMap<FString, FSMState_Base*> StateNameMap;

	/** Keeps track of states currently processing for the given FSM scope.
		Helps with possible infinite recursion when using multiple states that can re-enter each other. */
	TMap<FGuid, TSet<FSMState_Base*>> ProcessingStates;
	
	UPROPERTY()
	UClass* ReferencedStateMachineClass;

	/** The name of a template archetype to use when constructing a reference. This allows default values be passed into the reference. */
	UPROPERTY()
	FName ReferencedTemplateName;
	
	/** This state machine is referencing an instance. */
	UPROPERTY()
	USMInstance* ReferencedStateMachine;
	
	/** This state machine is being referenced from an instance. */
	UPROPERTY()
	USMInstance* IsReferencedByInstance;

	/** The state machine referencing this state machine, if any. */
	FSMStateMachine* IsReferencedByStateMachine;

	/** Current time spent waiting for an update. */
	float TimeSpentWaitingForUpdate;

	/** The maximum allowed time to wait. */
	float MaxTimeToSpendWaitingForUpdate;

	/** Is currently waiting for an update. */
	bool bWaitingForTransitionUpdate;

	/** Can this instance even evaluate transitions. */
	bool bCanEvaluateTransitions;

	/** Once evaluated can this instance take the transition. */
	bool bCanTakeTransitions;
};