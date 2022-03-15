// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMInstance.h"
#include "ISMStateMachineInterface.h"

#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"

#include "SMStateMachineComponent.generated.h"

/**
 * Actor Component wrapper for a State Machine Instance. Supports Replication. Will default state machine context to the owning actor of this component.
 * Call Start() when ready.
 */
UCLASS(Blueprintable, ClassGroup = LogicDriver, meta = (BlueprintSpawnableComponent, DisplayName = "State Machine Component"))
class SMSYSTEM_API USMStateMachineComponent : public UActorComponent, public ISMStateMachineInterface, public ISMStateMachineNetworkedInterface
{
	GENERATED_UCLASS_BODY()

public:

	// UObject
	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;
#if WITH_EDITOR
	virtual void PostEditImport() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	// ~UObject
	
	// UActorComponent
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
	// ~ UActorComponent

	// ISMStateMachineInstance

	/**
	 * Initialize bound functions and load in the context. 
	 * This cannot occur during automatic Component Activation when working with Listen servers and playing in the editor. The game
	 * will incorrectly report as Stand Alone.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	virtual void Initialize(UObject* Context = nullptr) override;

	/** Start the root state machine. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	virtual void Start() override;

	/** Manual way of updating the root state machine if tick is disabled. Not used by default and for custom update implementations. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	virtual void Update(float DeltaSeconds) override;

	/** This will complete the state machine's current state and force the machine to end regardless of if the state is an end state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	virtual void Stop() override;
	
	/** Forcibly restart the state machine and place it back into an entry state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Instances")
	virtual void Restart() override;
	
	/**
	 * Shutdown this instance. Calls Stop. Must call initialize again before use.
	 * If the goal is to restart the state machine later call Stop instead.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	virtual void Shutdown() override;

	// ~ISMStateMachineInstance

	// ISMStateMachineNetworkedInstance

	/** Provide a transition for the server to take. */
	virtual void ProcessTransaction(const TArray<FSMNetworkedTransaction>& Transactions) override;

	/** Should the instance replicate states. */
	virtual bool ShouldReplicateStates() const override;

	/** If transition enter logic can currently execute. */
	virtual bool CanExecuteTransitionEnteredLogic() const override;
	
	/** Checks if this component is networked and replicated. */
	virtual bool IsConfiguredForNetworking() const override;
	
	/** If the this instance has authority (Such as an instance running on a server) */
	virtual bool HasAuthority() const override;

	/** If this is only a simulated instance. */
	virtual bool IsSimulatedProxy() const override;
	
	// ~ISMStateMachineNetworkedInstance

	/** If this is a networked environment. */
	bool IsNetworked() const;

	/** If this belongs to a player controlled on this client. */
	bool IsLocallyOwned() const;

	/** If this is the listen server. */
	bool IsListenServer() const;
	
	/** Checks tick settings depending on if this is a networked environment or not. */
	bool CanTickForEnvironment() const;

	/** If the SERVER can process transitions. */
	bool CanServerProcessTransitions() const;
	
	/** Find the highest level owning actor of this component. Useful if this component is used within a child actor component. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	AActor* GetTopMostParentActor() const;
	
	/** Retrieve the real state machine instance this component wraps. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|State Machine Components")
	USMInstance* GetInstance() const { return R_Instance; }

	/** Retrieve the archetype template the state machine instance is based on. Only valid for the CDO. */
	USMInstance* GetTemplateForInstance() const { return InstanceTemplate; }

	/**
	 * The context to use for initialization. Defaults to GetOwner().
	 * For native implementations overload GetContextForInitialization_Implementation.
	 * @return The context to use when initializing the state machine instance.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "State Machine Components")
	UObject* GetContextForInitialization() const;
	
	/** Called when the state machine is first initialized. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Components")
	FOnStateMachineInitializedSignature OnStateMachineInitializedEvent;

	/** Called right before the state machine is started. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Components")
	FOnStateMachineStartedSignature OnStateMachineStartedEvent;

	/** Called right before the state machine is updated. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Components")
	FOnStateMachineUpdatedSignature OnStateMachineUpdatedEvent;
	
	/** Called right after the state machine has ended. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Components")
	FOnStateMachineStoppedSignature OnStateMachineStoppedEvent;

	/** Called when a transition has evaluated to true and is being taken. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Components")
	FOnStateMachineTransitionTakenSignature OnStateMachineTransitionTakenEvent;

	/** Called when a state machine has switched states. */
	UPROPERTY(BlueprintAssignable, Category = "Logic Driver|State Machine Components")
	FOnStateMachineStateChangedSignature OnStateMachineStateChangedEvent;
protected:
	UFUNCTION()
	void Internal_OnStateMachineStarted(USMInstance* Instance);

	UFUNCTION()
	void Internal_OnStateMachineUpdated(USMInstance* Instance, float DeltaSeconds);
	
	UFUNCTION()
	void Internal_OnStateMachineStopped(USMInstance* Instance);

	UFUNCTION()
	void Internal_OnStateMachineTransitionTaken(USMInstance* Instance, FSMTransitionInfo Transition);

	UFUNCTION()
	void Internal_OnStateMachineStateChanged(USMInstance* Instance, FSMStateInfo ToState, FSMStateInfo FromState);
	
	/** Called after the state machine has initialized either locally or by replication. */
	virtual void PostInitialize();

	/** Called after the state machine has initialized either locally or by replication. */
	UFUNCTION(BlueprintImplementableEvent, Category = "State Machine Components")
	void OnPostInitialize();

	/** Configure instance specific network properties. */
	virtual void ConfigureInstanceNetworkSettings();

	/** If networked pending transitions should be discarded. */
	bool ShouldDiscardTransitionsBeforeInitialize() const;
	
#if WITH_EDITOR
	/** Initialize the USMInstance template based on the current StateMachineClass. */
	void InitInstanceTemplate();
	/** Remove the current USMInstance template. */
	void DestroyInstanceTemplate();
	/** Tick overrides are deprecated in favor of modifying the USMInstance template. */
	void ImportDeprecatedProperties();
#endif

	USMInstance* CreateInstance(UObject* Context);
	virtual void DoInitialize(UObject* Context);
	virtual void DoStart();
	virtual void DoUpdate(float DeltaTime);
	virtual void DoStop();
	virtual void DoShutdown();

	virtual void DoProcessTransactions(const TArray<FSMNetworkedTransaction>& Transactions, bool bAsServer = false);
	void SendTransactionsToClients(const TArray<FSMNetworkedTransaction>& Transactions);

	/* Removes all replicated transitions that have expired. */
	void RemoveExpiredTransactions(const FDateTime& CurrentTime);
	
	///////////////////////
	/// Server
	///////////////////////
	/** Signal the server to initialize state machine. */
	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_Initialize(UObject* Context);

	/** Signal the server to start the state machine. */
	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_Start();

	/** Update the server state machine. */
	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_Update(float DeltaTime);

	/** Signal the server to end the state machine.*/
	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_Stop();

	/** Signal the server to shutdown the state machine.*/
	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_Shutdown();

	/** Signal the server of changing transitions. */
	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_ProcessTransaction(const TArray<FSMNetworkedTransaction>& Transactions);

	/** When the StateMachineInstance is loaded from the server. */
	UFUNCTION()
	virtual void REP_OnInstanceLoaded();

	/** When the server has indicated a change. */
	UFUNCTION()
	virtual void REP_NetworkedTransactions();

	/** When the server has signaled this instance should shut down. */
	UFUNCTION()
	virtual void REP_ShuttingDown();
	///////////////////////
	/// End Server
	///////////////////////

public:
	/** The state machine class to use for this instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine Components", meta = (ExposeOnSpawn = true))
	TSubclassOf<USMInstance> StateMachineClass;

	/** Determine which domain to tick. The state machine must allow ticking for this to take effect. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Network", meta = (EditCondition = "bReplicates"))
	TEnumAsByte<ESMNetworkConfigurationType> NetworkTickConfiguration;

	/** 
	 * The domain to evaluate transitions. Requires Replication and a networked environment.
	 * Client - The client is allowed to evaluate and send transitions to the server. The server will only process and broadcast transitions from the client.
	 * Server - Only the server will evaluate transitions which it will then send to the client.
	 * ClientAndServer - Both the server and client may evaluate transitions. It is completely up to your implementation if any transition logic should run on the server or client.
	 *
	 * OnTransitionEntered logic is configured independently under advanced settings.
	 * All other optional execution nodes will always execute across all domains and simulated proxies.
	 *
	 * Using bIncludeSimulatedProxies with client driven transitions on an actor without a player controller will not work. Server RPC calls can only be made with a player controller.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Network", meta = (EditCondition = "bReplicates"))
	TEnumAsByte<ESMNetworkConfigurationType> NetworkTransitionConfiguration;

	/** 
	 * The domain which primary state logic can be executed on. Requires Replication and a networked environment.
	 * Client - Only the client will execute state logic.
	 * Server - Only the server will execute state logic.
	 * ClientAndServer - Both the server and client will execute state logic.
	 *
	 * This impacts OnStateBegin, OnStateUpdate, and OnStateEnd.
	 * All other optional execution nodes will always execute across all domains and simulated proxies.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Network", meta = (EditCondition = "bReplicates"))
	TEnumAsByte<ESMNetworkConfigurationType> NetworkStateConfiguration;

	/**
	 * Include simulated proxies when processing the client domain. The default client behavior only includes autonomous proxies
	 * such as actors possessed by a player controller. Client driven transitions will not work without a player controller.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Network", meta = (EditCondition = "bReplicates"))
	bool bIncludeSimulatedProxies;
	
	/** 
	 * When true, if the client determines a transition can be entered it will only notify the server and not take the transition until the server updates the client.
	 * When false, the client will take the transition immediately.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Network", meta = (EditCondition = "bReplicates"))
	bool bTakeTransitionsFromServerOnly;

	/**
	 * The domain to execute OnTransitionEntered logic.
	 * This fires for transitions when one is being taken to the next state.
	 *
	 * This setting respects bIncludeSimulatedProxies.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Network", meta = (EditCondition = "bReplicates"))
	TEnumAsByte<ESMNetworkConfigurationType> NetworkTransitionEnteredConfiguration;

	/**
	* Calculate the server time spent in states when NetworkTickConfiguration is set to client only.
	* This only impacts the client value of `GetServerTimeInState` and has no effect if the server
	* is ticking.
	*
	* When true and the server is not ticking, it will take a measurement from the timestamp of when
	* the state first started compared to when the server received the request to end the state.
	* 
	* If only using auto-bound events, or the state machine is being manually updated,
	* this may not be necessary and disabling could increase accuracy.
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Network", meta = (EditCondition = "bReplicates"))
	bool bCalculateServerTimeForClients;
	
	/**
	 * When the instance is initially replicated this will load current active states instead of the initial states.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Network", meta = (EditCondition = "bReplicates"))
	bool bReplicateStatesOnLoad;
	
	/**
	 * When true, if the client receives transitions before the state machine has initialized it will discard them.
	 * When false, it will store the transitions and execute them once initialized by replication.
	 *
	 * When bReplicateStatesOnLoad is checked pending transitions are always discarded.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Network", meta = (EditCondition = "bReplicates && !bReplicateStatesOnLoad"))
	bool bDiscardTransitionsBeforeInitialize;

	/**
	* All transitions taken are timestamped and stored in a replicated array allowing all clients to take the same transitions.
	* Once this reset time is reached all expired transitions are removed from the array.
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Network", meta = (EditCondition = "bReplicates", ClampMin="0.0"))
	float TransitionResetTimeSeconds;
	
	/** 
	 * The maximum time in seconds to wait for the server to send an update to take the transition.
	 * Once this is hit the local instance will evaluate the transition again and notify the server.
	 * Set to 0 to run indefinitely.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Network", meta = (EditCondition = "bTakeTransitionsFromServerOnly") )
	float MaxTimeToWaitForTransitionUpdate;

	/**
	 * Automatically initialize the state machine when the component begins play. This will set the Context to the owning actor of this component.
	 * This happens in two stages: On InitializeComponent the state machine is instantiated, on BeginPlay the state machine is initialized.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine Components", meta = (ExposeOnSpawn = true))
	bool bInitializeOnBeginPlay;

	/** Automatically start the state machine when the component begins play. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Machine Components", meta = (EditCondition = "bInitializeOnBeginPlay", ExposeOnSpawn = true))
	bool bStartOnBeginPlay;

	/** The default behavior is to let the actor component tick the state machine when it ticks. This legacy option allows the instance to register as a tickable object instead. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "State Machine Components")
	bool bLetInstanceManageTick;

	/**
	 * If set to false when shutdown is called the internal reference to the state machine instance is cleared so it can be garbage collected.
	 * If set to true the instance will not be freed and will be re-used when initializing.
	 *
	 * When used with replication and re-initializing the component, this setting may be better set to false so the instance can run
	 * its first time OnRep initialize logic.
	 */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category = "State Machine Components")
	bool bReuseInstanceAfterShutdown;	
	
protected:
	/** Transactions which the server has replicated. Generally transitions. */
	UPROPERTY(Transient, ReplicatedUsing = REP_NetworkedTransactions)
	TArray<FSMNetworkedTransaction> R_NetworkedTransactions;

	/** Transitions which couldn't be processed yet. */
	UPROPERTY(Transient)
	TArray<FSMNetworkedTransaction> PendingTransactions;
	
	/** The actual state machine instance. */
	UPROPERTY(Transient, ReplicatedUsing = REP_OnInstanceLoaded, meta=(DisplayName = Instance))
	USMInstance* R_Instance;

	/** The template to use when initializing the state machine. Only valid within the CDO. */
	UPROPERTY(VisibleDefaultsOnly, Instanced, DuplicateTransient, Category = "State Machine Components", meta = (DisplayName=Template, DisplayThumbnail=false))
	USMInstance* InstanceTemplate;

	/**
	 * If false the default setting will be used. When replicated this component may still perform some level of override depending on the NetworkTickConfiguration.
	 *
	 * @deprecated Use bCanEverTick on the instance template instead.
	 */
	UPROPERTY()
	bool bOverrideTick_DEPRECATED;

	/**
	 * Allow the machine to tick. Overrides default State Machine blueprint configuration.
	 *
	 * @deprecated Use bCanEverTick on the instance template instead.
	 */
	UPROPERTY()
	bool bCanEverTick_DEPRECATED;

	/**
	 * If false the default setting will be used.
	 *
	 * @deprecated Use TickInterval on the instance template instead.
	 */
	UPROPERTY()
	bool bOverrideTickInterval_DEPRECATED;

	/**
	 * Time in seconds between native ticks. This mostly affects the "Update" rate of the state machine. Overloaded Ticks won't be affected.
	 * Overrides default state machine blueprint configuration.
	 *
	 * @deprecated Use TickInterval on the instance template instead.
	 */
	UPROPERTY()
	float TickInterval_DEPRECATED;
	
	UPROPERTY(Transient, ReplicatedUsing = REP_ShuttingDown)
	bool R_bShuttingDown;

	/** Set from the template and adjusted for the network configuration. */
	UPROPERTY(Transient)
	bool bCanInstanceNetworkTick;
};