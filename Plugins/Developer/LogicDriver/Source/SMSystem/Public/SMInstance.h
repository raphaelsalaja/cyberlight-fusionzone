// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMStateMachine.h"
#include "SMStateMachineInstance.h"
#include "SMTransitionInstance.h"
#include "ISMStateMachineInterface.h"
#include "SMNode_Info.h"

#include "Tickable.h"
#include "Net/UnrealNetwork.h"

#include "SMInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineInitializedSignature, class USMInstance*, Instance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineStartedSignature, class USMInstance*, Instance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateMachineUpdatedSignature, class USMInstance*, Instance, float, DeltaSeconds);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineStoppedSignature, class USMInstance*, Instance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateMachineTransitionTakenSignature, class USMInstance*, Instance, struct FSMTransitionInfo, Transition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStateMachineStateChangedSignature, class USMInstance*, Instance, struct FSMStateInfo, NewState, struct FSMStateInfo, PreviousState);


USTRUCT()
struct FSMDebugStateMachine
{
	GENERATED_USTRUCT_BODY()

#if WITH_EDITORONLY_DATA
	const FSMNode_Base* GetRuntimeNode(const FGuid& Guid) const
	{
		if(const TArray<FSMNode_Base*>* Nodes = MappedNodes.Find(Guid))
		{
			if (Nodes->Num() == 0)
			{
				return nullptr;
			}
			
			if(Nodes->Num() == 1)
			{
				return (*Nodes)[0];
			}

			// In the case of duplicate nodes find the most recent active one.
			// This can occur when referencing parent state machine nodes multiple times
			// and from any state transitions.
			FSMNode_Base* LastActiveNode = nullptr;
			for(FSMNode_Base* Node : *Nodes)
			{
				if(Node->IsDebugActive())
				{
					return Node;
				}
				if(Node->WasDebugActive())
				{
					LastActiveNode = Node;
				}
			}

			return LastActiveNode ? LastActiveNode : (*Nodes)[0];
		}

		return nullptr;
	}

	void UpdateRuntimeNode(FSMNode_Base* RuntimeNode)
	{
		TArray<FSMNode_Base*>& Nodes = MappedNodes.FindOrAdd(RuntimeNode->GetNodeGuid());
		Nodes.AddUnique(RuntimeNode);
	}

	/** All states including nested state machine states. These are only NodeGuids and not PathGuids. */
	TMap<FGuid, TArray<FSMNode_Base*>> MappedNodes;
#endif
};

/**
 * The base class all blueprint state machines inherit from. The compiled state machine is accessible through GetRootStateMachine().
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = LogicDriver, hideCategories = (SMInstance), AutoExpandCategories =("State Machine Instance|Tick", "State Machine Instance|Logging"), meta = (DisplayName = "State Machine Instance"))
class SMSYSTEM_API USMInstance : public UObject, public FTickableGameObject, public ISMStateMachineInterface, public ISMInstanceInterface
{
	GENERATED_BODY()

public:
	friend class USMStateMachineComponent;
	
	USMInstance();
	// FTickableGameObject
	/** The native tick is required to update the state machine. */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual bool IsTickable() const override;
	virtual bool IsTickableInEditor() const override { return false; }
	virtual ETickableTickType GetTickableTickType() const override;
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual bool IsTickableWhenPaused() const override { return bCanTickWhenPaused; }

	virtual UWorld* GetTickableGameObjectWorld() const override;
	virtual TStatId GetStatId() const override;
	// ~FTickableGameObject

	// UObject
	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
	virtual void BeginDestroy() override;
	/** Custom implementation to return the Context World. */
	virtual UWorld* GetWorld() const override;
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override;
	virtual bool CallRemoteFunction(UFunction* Function, void* Parms, FOutParmRec* OutParms, FFrame* Stack) override;
	// ~UObject

	// ISMInstanceInterface
	/** The object which this state machine is running for. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual UObject* GetContext() const override;
	// ~ISMInstanceInterface

	/** The component owning this instance. Will be null during initialization or if this state machine was created without a component. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMStateMachineComponent* GetComponentOwner() const { return ComponentOwner; }

	// USMStateMachineInterface
	/** Initialize bound functions and load in the context. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Initialize(UObject* Context = nullptr) override;

	/** Start the root state machine. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Start() override;

	/** Manual way of updating the root state machine if tick is disabled. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Update(float DeltaSeconds=0.f) override;
	
	/** This will complete the state machine's current state and force the machine to end regardless of if the state is an end state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Stop() override;

	/** Forcibly restart the state machine and place it back into an entry state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Restart() override;
	
	/**
	 * Shutdown this instance. Calls Stop. Must call initialize again before use.
	 * If the goal is to restart the state machine later call Stop instead.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void StartWithNewContext(UObject* Context);
	// ~USMStateMachineInterface

	/**
	 * Signals to the owning state machine to process transition evaluation.
	 * This is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.
	 * All transitions are evaluated as normal starting from the root state machine down.
	 * Depending on super state transitions it's possible the state machine this state is part of may exit.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void EvaluateTransitions();
	
	/**
	 * Sets a temporary initial state of the guid's owning state machine.
	 * With AllParents to true this is useful for restoring a single active state of a state machine from GetSingleActiveStateGuid().
	 * If there are multiple active states, or the state of non active sub state machines is important use LoadFromMultipleStates() instead.
	 * @param FromGuid The state guid to load.
	 * @param bAllParents Recursively set the initial state of all parent state machines.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void LoadFromState(const FGuid& FromGuid, bool bAllParents = true);

	/**
	 * Set all owning parents' temporary initial state to the given guids. Useful for restoring multiple states within a state machine.
	 * Best used when restoring from GetAllActiveStateGuids().
	 * @param FromGuids Array of state guids to load.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void LoadFromMultipleStates(const TArray<FGuid>& FromGuids);

	/**
	 * Checks if initial entry states have been set through LoadFromState() or LoadFromMultipleStates().
	 * This will be true if at least one state was loaded this way and will become false once Stop() is called.
	 *
	 * The variable used to check this is replicated.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool AreInitialStatesSetFromLoad() const { return R_bLoadFromStatesCalled; }

protected:
	/**
	 * Called after an initial state has been set with LoadFromState() or LoadFromMultipleStates().
	 * This may be called multiple times depending whether there is more than one state being loaded
	 * or if parent state machines are also being loaded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineInitialStateLoaded(const FGuid& StateGuid);
	virtual void OnStateMachineInitialStateLoaded_Implementation(const FGuid& StateGuid);

public:	
	/**
	 * Return the current active state name, or an empty string.
	 *
	 * @deprecated Use GetSingleActiveStateInstance() with bCheckNested = false instead and read `GetNodeName` from there. 
	 */
	UE_DEPRECATED(4.24, "Use `GetSingleActiveStateInstance` with bCheckNested = false instead and read `GetNodeName` from there")
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DeprecatedFunction, DeprecationMessage = "Use `GetSingleActiveStateInstance` with bCheckNested = false instead and read `GetNodeName` from there."))
	FString GetActiveStateName() const;
	
	/**
	 * Retrieve the name of the lowest level single active state including all nested state machines.
	 * 
	 * @deprecated Use GetSingleActiveStateInstance() instead and read `GetNodeName` from there.
	 */
	UE_DEPRECATED(4.24, "Use `GetSingleActiveStateInstance` instead and read `GetNodeName` from there.")
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DeprecatedFunction, DeprecationMessage = "Use `GetSingleActiveStateInstance` instead and read `GetNodeName` from there."))
	FString GetNestedActiveStateName() const;

	/**
	 * Return the current active state Guid. If a state is not active an invalid Guid will be returned.
	 * This only returns top level states! Use GetNestedActiveStateGuid for the exact state.
	 *
	 * @deprecated Use GetSingleActiveStateGuid() with bCheckNested = false. 
	 */
	UE_DEPRECATED(4.24, "Use `GetSingleActiveStateGuid` with bCheckNested = false.")
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DeprecatedFunction, DeprecationMessage = "Use `GetSingleActiveStateGuid` with bCheckNested = false."))
	FGuid GetActiveStateGuid() const;
	
	/**
	 * Retrieve the guid of the lowest level single active state including all nested state machines.
	 * 
	 * @deprecated Use GetSingleActiveStateGuid() instead.
	 */
	UE_DEPRECATED(4.24, "Use `GetSingleActiveStateGuid` instead.")
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DeprecatedFunction, DeprecationMessage = "Use `GetSingleActiveStateGuid` instead."))
	FGuid GetNestedActiveStateGuid() const;

	/** Retrieve the lowest level single active state including all nested state machines. Returns read only information. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DisplayName = "Try Get Single Nested Active State"))
	void TryGetNestedActiveState(FSMStateInfo& FoundState, bool& bSuccess) const;

	/**
	 * Return the current top level active state. Do not use if there are multiple active states.
	 * @return null or the first active top level state.
	 */
	FSMState_Base* GetSingleActiveState() const;

	/**
	 * Retrieve the first lowest level active state including all nested state machines. Do not use if there are multiple active states.
	 * @return null or the first active state.
	 */
	FSMState_Base* GetSingleNestedActiveState() const;

	/** Recursively retrieve all active states. */
	TArray<FSMState_Base*> GetAllActiveStates() const;
	
	/**
	 * Recursively retrieve the guid of all current states. Useful if saving the current state of a state machine.
	 * 
	 * @deprecated Use GetAllActiveStateGuids() instead. 
	 */
	UE_DEPRECATED(4.24, "Use `GetAllActiveStateGuids` instead.")
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DeprecatedFunction, DeprecationMessage = "Use `GetAllActiveStateGuids` instead."))
	TArray<FGuid> GetAllCurrentStateGuids() const;

	/**
	 * Retrieve the first active state Guid. If a state is not active an invalid Guid will be returned.
	 * For multiple states GetAllActiveStateGuids() should be called instead.
	 * @param bCheckNested Check nested state machines.
	 * @return the first active state guid.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	FGuid GetSingleActiveStateGuid(bool bCheckNested=true) const;
	
	/**
	 * Recursively retrieve the guids of all active states. Useful if saving the current state of a state machine.
	 * @param ActiveGuids [Out] All current ActiveGuids. May be empty. Resets on method start.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void GetAllActiveStateGuids(TArray<FGuid>& ActiveGuids) const;

	/**
	 * Convenience method wrapper for GetAllActiveStateGuids().
	 * 
	 * Recursively retrieve the guids of all active states. Useful if saving the current state of a state machine.
	 * @return All current ActiveGuids. May be empty.
	 */
	TArray<FGuid> GetAllActiveStateGuidsCopy() const;

	/**
	 * Returns a single active state's node instance.
	 * @param bCheckNested Check nested state machines.
	 *
	 * @deprecated Use GetSingleActiveStateInstance() instead.
	 */
	UE_DEPRECATED(4.24, "Use `GetSingleActiveStateInstance` instead.")
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances", meta = (DeprecatedFunction, DeprecationMessage = "Use `GetSingleActiveStateInstance` instead."))
	USMStateInstance_Base* GetActiveStateInstance(bool bCheckNested = true) const;

	/**
	 * Locate the first active state instance. For multiple states GetAllActiveStateInstances() should be called instead.
	 * 
	 * @param bCheckNested Check nested state machines.
	 * @return A single active state's node instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMStateInstance_Base* GetSingleActiveStateInstance(bool bCheckNested = true) const;
	
	/**
	 * Recursively retrieve all active state instances.
	 * @param ActiveStateInstances [Out] All active state instances. May be empty. Resets on method start.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void GetAllActiveStateInstances(TArray<USMStateInstance_Base*>& ActiveStateInstances) const;
	
	/** Find all referenced instances. IncludeChildren will return all nested state machine references.*/
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	TArray<USMInstance*> GetAllReferencedInstances(bool bIncludeChildren = false) const;

	/** Find all internal state machine structs which contain references. */
	TArray<FSMStateMachine*> GetStateMachinesWithReferences(bool bIncludeChildren = false) const;
	
	/** Quickly returns read only information of the state belonging to the given guid. This always executes from the master. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void TryGetStateInfo(const FGuid& Guid, FSMStateInfo& StateInfo, bool& bSuccess) const;

	/** Quickly returns read only information of the transition belonging to the given guid. This always executes from the master. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void TryGetTransitionInfo(const FGuid& Guid, FSMTransitionInfo& TransitionInfo, bool& bSuccess) const;

	/** Quickly return a referenced instance given a state machine guid. This always executes from the master. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMInstance* GetReferencedInstanceByGuid(const FGuid& Guid) const;

	/** Quickly return a state instance given the state guid. This always executes from the master. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMStateInstance_Base* GetStateInstanceByGuid(const FGuid& Guid) const;

	/** Quickly return a transition instance given a transition guid. This always executes from the master. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMTransitionInstance* GetTransitionInstanceByGuid(const FGuid& Guid) const;
	
	/** Quick lookup of any state by guid. Includes all nested. */
	FSMState_Base* GetStateByGuid(const FGuid& Guid) const;

	/** Quick lookup of any transition by guid. Includes all nested.  */
	FSMTransition* GetTransitionByGuid(const FGuid& Guid) const;

	/** Quick lookup of any node by guid. Includes all nested.  */
	FSMNode_Base* GetNodeByGuid(const FGuid& Guid) const;
	
	/** Linear search all state machines for a contained node. */
	FSMState_Base* FindStateByGuid(const FGuid& Guid) const;

	/** The root state machine which may contain nested state machines. */
	FSMStateMachine& GetRootStateMachine() { return RootStateMachine; }

	/** Return the root USMStateMachineInstance node. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMStateMachineInstance* GetRootStateMachineInstance() const;

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool IsActive() const;

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool CanEverTick() const { return bCanEverTick; }

	/** If false IsTickable will return false. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetCanEverTick(bool Value);

	/** When false prevents the tick function from ever being registered. Can only be called along with initialize and cannot be changed. */
	void SetRegisterTick(bool Value);

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetTickOnManualUpdate(bool Value);

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool CanTickOnManualUpdate() const { return bCallTickOnManualUpdate; }
	
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetCanTickWhenPaused(bool Value);

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetTickBeforeBeginPlay(bool Value);
	
	/** Time in seconds between native ticks. This mostly affects the "Update" rate of the state machine. Overloaded Ticks won't be affected. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetTickInterval(float Value);

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetAutoManageTime(bool Value);

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool CanAutoManageTime() const { return bAutoManageTime; }
	
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	float GetTickInterval() const { return TickInterval; }

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetStopOnEndState(bool Value);

	/** True if the root state machine is in an end state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool IsInEndState() const;

	/** Sets a new context. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetContext(UObject* Context);

	/** Get all mapped PathGuids to nodes. */
	const TMap<FGuid, FSMNode_Base*>& GetNodeMap() const { return GuidNodeMap; }
	
	/** Get all mapped PathGuids to states. */
	const TMap<FGuid, FSMState_Base*>& GetStateMap() const { return GuidStateMap; }

	/** Get all mapped PathGuids to transitions. */
	const TMap<FGuid, FSMTransition*>& GetTransitionMap() const { return GuidTransitionMap; }

	/** Replicated active states. */
	const TArray<FSMActiveStateTransaction>& GetReplicatedStates() const { return R_ActiveStates; }

	/** Retrieve an ordered history of states, oldest to newest, not including active state(s). This always executes from the master. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	const TArray<FSMStateHistory>& GetStateHistory() const;

	/**
	 * Sets the maximum number of states to record into history.
	 * Resizes the array removing older entries if needed.
	 * @param NewSize The number of states to record. Set to -1 for no limit.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetStateHistoryMaxCount(int32 NewSize);
	
	/** Retrieve all state instances. These can be States, State Machines, and Conduits. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances) const;

	/** Retrieve all transition instances. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void GetAllTransitionInstances(TArray<USMTransitionInstance*>& TransitionInstances) const;
	
	/** Notifies this instance there is a server interface. */
	void SetNetworkInterface(TScriptInterface<ISMStateMachineNetworkedInterface> InNetworkInterface);

	/** Return the server interface if there is one. This may be null. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	TScriptInterface<ISMStateMachineNetworkedInterface> GetNetworkInterface() const;
	
	/** Updates all needed nodes with the current network conditions. Best to be called after Initialization and before Start. */
	void UpdateNetworkConditions();

	/** Copy network settings from the other instance. */
	void CopyNetworkConditionsFrom(USMInstance* OtherInstance, bool bUpdateNodes = false);

	/**
	 * Notifies state machines they are allowed to take transitions locally.
	 * @param bCanEvaluateTranstions If a state machine can check transition results.
	 * @param bCanTakeTransitions If a state machine can take a transition after evaluating it.
	 * @param MaxTimeToWait The maximum time to wait for the server to send it a transition when it expects one.
	 */
	void SetAllowTransitionsLocally(bool bCanEvaluateTranstions, bool bCanTakeTransitions, float MaxTimeToWait);

	/** Notifies state machines if they are allowed to execute state logic locally. */
	void SetAllowStateLogic(bool bAllow);

	/** True if the instance has started. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool HasStarted() const { return R_bHasStarted; }

	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	bool IsInitialized() const { return bInitialized; }

	/** If this is an archetype object used as custom defaults for a reference. */
	bool IsReferenceTemplate() const;

	/** Notify this instance is a reference owned by another instance. */
	void SetReferenceOwner(USMInstance* Owner);

	/** Get the instance owning this reference. If null this is not a reference. */
	const USMInstance* GetReferenceOwnerConst() const { return ReferenceOwner; }

	/** Look up the owners to find the root. */
	const USMInstance* GetMasterReferenceOwnerConst() const;

	/** Get the instance owning this reference. If null this is not a reference. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	USMInstance* GetReferenceOwner() const { return ReferenceOwner; }

	/** Look up the owners to find the root. Could be this instance. */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Logic Driver|State Machine Instances")
	USMInstance* GetMasterReferenceOwner();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Logic Driver|State Machine Instances")
	TSubclassOf<class USMStateMachineInstance> GetStateMachineClass() const { return StateMachineClass; }

	/**
	 * Sets the state machine node instance class.
	 *
	 * @param NewStateMachineClass The state machine class to set.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	void SetStateMachineClass(TSubclassOf<class USMStateMachineInstance> NewStateMachineClass) { StateMachineClass = NewStateMachineClass; }
	
	/** Called when the instance is first initialized.  */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineInitialized();

	/** Called right before the root state machine starts its initial state.  */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineStart();

	/** Called right before the root state machine updates.  */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineUpdate(float DeltaSeconds);
	
	/** Called right after the instance has been stopped. */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineStop();

	/** Called when a transition has evaluated to true and is being taken. */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineTransitionTaken(const FSMTransitionInfo& Transition);
	
	/** Called when a state machine has switched states. */
	UFUNCTION(BlueprintNativeEvent, Category = "State Machine Instances")
	void OnStateMachineStateChanged(const FSMStateInfo& ToState, const FSMStateInfo& FromState);

	/** Send transition events. */
	void NotifyTransitionTaken(const FSMTransition& Transition);

	/** Sent state change events. */
	void NotifyStateChange(FSMState_Base* ToState, FSMState_Base* FromState);
	
	/** Used to identify the root state machine during initialization. This is not a calculated value and represents the NodeGuid. */
	UPROPERTY()
	FGuid RootStateMachineGuid;

	/** Called when the state machine is first initialized. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Instances")
	FOnStateMachineInitializedSignature OnStateMachineInitializedEvent;

	/** Called right before the state machine is started. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Instances")
	FOnStateMachineStartedSignature OnStateMachineStartedEvent;

	/** Called right before the state machine is updated. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Instances")
	FOnStateMachineUpdatedSignature OnStateMachineUpdatedEvent;
	
	/** Called right after the state machine has ended. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Instances")
	FOnStateMachineStoppedSignature OnStateMachineStoppedEvent;

	/** Called when a transition has evaluated to true and is being taken. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Instances")
	FOnStateMachineTransitionTakenSignature OnStateMachineTransitionTakenEvent;

	/** Called when a state machine has switched states. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Instances")
	FOnStateMachineStateChangedSignature OnStateMachineStateChangedEvent;

#if WITH_EDITORONLY_DATA
	FSMDebugStateMachine& GetDebugStateMachine() { return DebugStateMachine; }
	const FSMDebugStateMachine& GetDebugStateMachineConst() const { return DebugStateMachine; }

#endif
	
	bool IsLoggingEnabled() const { return bEnableLogging; }

protected:
	virtual void Tick_Implementation(float DeltaTime);
	virtual void OnStateMachineInitialized_Implementation();
	virtual void OnStateMachineStart_Implementation();
	virtual void OnStateMachineUpdate_Implementation(float DeltaSeconds);
	virtual void OnStateMachineStop_Implementation();
	virtual void OnStateMachineTransitionTaken_Implementation(const FSMTransitionInfo& Transition);
	virtual void OnStateMachineStateChanged_Implementation(const FSMStateInfo& ToState, const FSMStateInfo& FromState);
	
	/** Internal update logic. Can be called during an update and used by event triggers. */
	UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = "Logic Driver|State Machine Instances")
	void Internal_Update(float DeltaSeconds);

	/** Internal cleanup logic after an auto-bound event fires. */
	UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = "Logic Driver|State Machine Instances")
	void Internal_EventCleanup(const FGuid& NodeGuid);
	
	/** Assemble a complete map of all nested nodes and state machines. Builds out GuidNodeMap and StateMachineGuids. InstancesMapped keeps track
	 * of all instances built to prevent stack overflow in the event of state machine references that self reference. */
	void BuildStateMachineMap(FSMStateMachine* StateMachine, TSet<USMInstance*>& InstancesMapped);

	/** Logs a warning if not initialized. */
	bool CheckIsInitialized() const;

	/** Records time running so delta time can be established if not ticking or providing accurate delta seconds. */
	void UpdateTime();

	/** Update replicate states if configured. */
	void ReplicateStates();

	/** Record the given state into the state history. */
	void RecordPreviousStateHistory(FSMState_Base* PreviousState);

	/** Makes sure state history current count doesn't exceed max count. */
	void TrimStateHistory();
	
	void DoStart();

	UFUNCTION()
	void REP_StartChanged();

protected:
	/** The component owning this instance. */
	UPROPERTY(Replicated)
	USMStateMachineComponent* ComponentOwner;

	/** Pointer to server object to notify of active transitions. */
	UPROPERTY()
	TScriptInterface<ISMStateMachineNetworkedInterface> NetworkInterface;
	
	/** Flattened map of all node Path Guids -> Node references */
	TMap<FGuid, FSMNode_Base*> GuidNodeMap;
	
	/** Flattened map of all state Path Guids -> State references. */
	TMap<FGuid, FSMState_Base*> GuidStateMap;
	
	/** Flattened map of all transition Path Guids -> Transition references. */
	TMap<FGuid, FSMTransition*> GuidTransitionMap;
	
	/** Map of all StateMachine Path Guids */
	TSet<FGuid> StateMachineGuids;
	
	/** Networked transactions that are currently being executed. Only valid for one update cycle and only used if there is a server object. */
	UPROPERTY(Transient)
	TArray<FSMNetworkedTransaction> ActiveTransactions;

	/** Ordered history of states, oldest to newest, not including active state(s). */
	UPROPERTY(VisibleInstanceOnly, Category = "State Machine Instance|History")
	TArray<FSMStateHistory> StateHistory;
	
	/** Top level state machine */
	UPROPERTY()
	FSMStateMachine RootStateMachine;

	/** The context to run the state machine in. */
	UPROPERTY(Replicated, Transient, meta = (DisplayName=Context))
	UObject* R_StateMachineContext;

	/** Replicated active state guids. */
	UPROPERTY(Replicated, Transient)
	TArray<FSMActiveStateTransaction> R_ActiveStates;
	
	/** If this instance is owned by another instance making this a reference. */
	UPROPERTY()
	USMInstance* ReferenceOwner;

	/** The custom node instance class to use for this state machine. This is not the same as USMInstance. */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance", meta = (BlueprintBaseOnly, DisplayName = "Node Class"))
	TSubclassOf<class USMStateMachineInstance> StateMachineClass;

	/** Automatically calculate delta seconds if none are provided. Requires context with a valid World. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance")
	bool bAutoManageTime = true;

	/** Should this instance stop itself once an end state has been reached. An Update call is required for this to occur. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance")
	bool bStopOnEndState = false;
	
	/** Should this instance tick. By default it will update the state machine. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|Tick")
	bool bCanEverTick = true;

	/** Should this instance tick when the game is paused. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|Tick", meta = (EditCondition = "bCanEverTick"))
	bool bCanTickWhenPaused = false;

	/** Time in seconds between native ticks. This mostly affects the "Update" rate of the state machine. Overloaded Ticks won't be affected. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|Tick", DisplayName = "Tick Interval", meta = (EditCondition = "bCanEverTick", ClampMin = "0.0"))
	float TickInterval;

	/**
	 * Setting to false physically prevents the tick function from being registered and the instance from ever ticking.
	 * This is different from bCanEverTick in that it cannot be changed and it also offers slightly better performance.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance|Tick")
	bool bTickRegistered = true;

	/**
	 * Allow the state machine to tick before it is initialized.
	 * This likely isn't necessary as CreateStateMachineInstance will initialize the state machine.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance|Tick", meta = (EditCondition = "bTickRegistered"))
	bool bTickBeforeInitialize;

	/** When false IsTickable checks if the world has started play. */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance|Tick", meta = (EditCondition = "bTickRegistered"))
	bool bTickBeforeBeginPlay;
	
	/** The total number of states to keep in history. Set to -1 for no limit. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|History", meta = (ClampMin = "-1"))
	int32 StateHistoryMaxCount = 20;
	
	/** Enable info logging for the state machine. */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance|Logging")
	bool bEnableLogging = false;

	/** Log when a state change occurs. This includes when a state machine starts or exits where transitions won't apply. */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance|Logging", meta = (EditCondition = "bEnableLogging"))
	bool bLogStateChange = true;

	/** Log whenever a transition occurs. */
	UPROPERTY(EditDefaultsOnly, Category = "State Machine Instance|Logging", meta = (EditCondition = "bEnableLogging"))
	bool bLogTransitionTaken = true;

	///////////////////////
	/// Input
	///////////////////////
public:
	TEnumAsByte<ESMStateMachineInput::Type> GetInputType() const { return AutoReceiveInput; }
	int32 GetInputPriority() const { return InputPriority; }
	bool GetBlockInput() const { return bBlockInput; }
	/** Attempt to find a valid player controller for this state machine. Requires input enabled and may return null. */
	APlayerController* GetInputController() const;

protected:
	UFUNCTION()
	void OnContextPawnControllerChanged(APawn* Pawn, AController* NewController);
	
protected:
	UPROPERTY(Transient)
	UInputComponent* InputComponent;

	/**
	 * Automatically registers this state machine to receive input from a player.
	 * Input events placed in the event graph will always fire and execute.
	 *
	 * Input placed in node graphs will ALWAYS fire (consume input if checked)
	 * but only execute their logic while the node is initialized.
	 *
	 * Example: State A is entered. Any input events in state A and all outbound
	 * transitions including conduits will fire and execute when the key is pressed.
	 * Once State A exits all of the input events will still fire when pressed, but
	 * any blueprint logic will not execute.
	 *
	 * If consuming input is a problem, either uncheck the ConsumeInput option on
	 * the input event, or create a custom node class and use input actions there.
	 */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|Input")
	TEnumAsByte<ESMStateMachineInput::Type> AutoReceiveInput;
	
	/** The priority of this input component when pushed in to the stack. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|Input")
	int32 InputPriority = 3;

	/** Whether any components lower on the input stack should be allowed to receive input. */
	UPROPERTY(EditAnywhere, Category = "State Machine Instance|Input")
	bool bBlockInput = false;
	///////////////////////
	/// End Input
	///////////////////////
	
	UPROPERTY(Transient)
	float MaxTimeToWaitForUpdate;
	
	/** Time since the last valid tick occurred. */
	UPROPERTY()
	float TimeSinceAllowedTick;

	UPROPERTY(Transient)
	float WorldSeconds;

	UPROPERTY(Transient)
	float WorldTimeDelta;
	
	/** The Update method will call Tick only if Update was not called by native Tick. */
	UPROPERTY()
	uint32 bCallTickOnManualUpdate: 1;
	
	UPROPERTY(Transient)
	uint32 bIsTicking : 1;

	UPROPERTY(Transient)
	uint32 bIsUpdating : 1;

	/** Should this instance be allowed to process transitions. */
	UPROPERTY(Transient)
	uint32 bCanEvaluateTransitionsLocally: 1;

	/** Should this instance take transitions or only notify the server. */
	UPROPERTY(Transient)
	uint32 bCanTakeTransitionsLocally: 1;

	/** Should this instance be allowed to execute state logic. */
	UPROPERTY(Transient)
	uint32 bCanExecuteStateLogic: 1;

	UPROPERTY(Transient, ReplicatedUsing = REP_StartChanged)
	uint32 R_bHasStarted: 1;

	/** This will be true if at least one initial state was set from user load and will always be set to false on Stop(). */
	UPROPERTY(Replicated, Transient)
	uint32 R_bLoadFromStatesCalled: 1;

	/** Signal the state machine has been initialized. Normally set automatically when calling Initialize(). */
	uint32 bInitialized: 1;
public:
	/*
	 * Archetype objects used for instantiating references. Only valid from the CDO.
	 * DuplicateTransient is used to prevent loading defaults in non nativized packages.
	 * Cannot set Transient or CDO won't be created properly in BP Nativization. Instead
	 * this value is manually cleaned on compile. 
	 */
	UPROPERTY(Instanced, DuplicateTransient)
	TArray<UObject*> ReferenceTemplates;

private:
#if WITH_EDITORONLY_DATA
	FSMDebugStateMachine DebugStateMachine;
#endif
};