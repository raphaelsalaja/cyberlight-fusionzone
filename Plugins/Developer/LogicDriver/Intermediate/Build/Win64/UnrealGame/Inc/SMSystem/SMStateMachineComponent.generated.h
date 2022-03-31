// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSMFullSyncTransaction;
struct FSMActivateStateTransaction;
struct FSMTransitionTransaction;
struct FSMTransaction_Base;
struct FSMInitializeTransaction;
class USMInstance;
struct FSMStateInfo;
struct FSMTransitionInfo;
class UObject;
class AActor;
class USMStateMachineComponent;
struct FLatentActionInfo;
#ifdef SMSYSTEM_SMStateMachineComponent_generated_h
#error "SMStateMachineComponent.generated.h already included, missing '#pragma once' in SMStateMachineComponent.h"
#endif
#define SMSYSTEM_SMStateMachineComponent_generated_h

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_SPARSE_DATA
#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_RPC_WRAPPERS \
	virtual void CLIENT_FullSync_Implementation(FSMFullSyncTransaction const& FullSyncTransaction); \
	virtual void MULTICAST_FullSync_Implementation(FSMFullSyncTransaction const& FullSyncTransaction); \
	virtual void CLIENT_ActivateStates_Implementation(TArray<FSMActivateStateTransaction> const& StateTransactions); \
	virtual void MULTICAST_ActivateStates_Implementation(TArray<FSMActivateStateTransaction> const& StateTransactions); \
	virtual void CLIENT_TakeTransitions_Implementation(TArray<FSMTransitionTransaction> const& Transactions); \
	virtual void MULTICAST_TakeTransitions_Implementation(TArray<FSMTransitionTransaction> const& Transactions); \
	virtual void CLIENT_Shutdown_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void MULTICAST_Shutdown_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void CLIENT_Stop_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void MULTICAST_Stop_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void CLIENT_Start_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void MULTICAST_Start_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_FullSync_Implementation(FSMFullSyncTransaction const& FullSyncTransaction); \
	virtual void SERVER_RequestFullSync_Implementation(); \
	virtual void SERVER_ActivateStates_Implementation(TArray<FSMActivateStateTransaction> const& StateTransactions); \
	virtual void SERVER_TakeTransitions_Implementation(TArray<FSMTransitionTransaction> const& TransitionTransactions); \
	virtual void SERVER_Shutdown_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_Stop_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_Update_Implementation(float DeltaTime); \
	virtual void SERVER_Start_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_Initialize_Implementation(FSMInitializeTransaction const& Transaction); \
	virtual UObject* GetContextForInitialization_Implementation() const; \
 \
	DECLARE_FUNCTION(execCLIENT_FullSync); \
	DECLARE_FUNCTION(execMULTICAST_FullSync); \
	DECLARE_FUNCTION(execCLIENT_ActivateStates); \
	DECLARE_FUNCTION(execMULTICAST_ActivateStates); \
	DECLARE_FUNCTION(execCLIENT_TakeTransitions); \
	DECLARE_FUNCTION(execMULTICAST_TakeTransitions); \
	DECLARE_FUNCTION(execCLIENT_Shutdown); \
	DECLARE_FUNCTION(execMULTICAST_Shutdown); \
	DECLARE_FUNCTION(execCLIENT_Stop); \
	DECLARE_FUNCTION(execMULTICAST_Stop); \
	DECLARE_FUNCTION(execCLIENT_Start); \
	DECLARE_FUNCTION(execMULTICAST_Start); \
	DECLARE_FUNCTION(execREP_OnInstanceLoaded); \
	DECLARE_FUNCTION(execSERVER_FullSync); \
	DECLARE_FUNCTION(execSERVER_RequestFullSync); \
	DECLARE_FUNCTION(execSERVER_ActivateStates); \
	DECLARE_FUNCTION(execSERVER_TakeTransitions); \
	DECLARE_FUNCTION(execSERVER_Shutdown); \
	DECLARE_FUNCTION(execSERVER_Stop); \
	DECLARE_FUNCTION(execSERVER_Update); \
	DECLARE_FUNCTION(execSERVER_Start); \
	DECLARE_FUNCTION(execSERVER_Initialize); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStateStarted); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStateChanged); \
	DECLARE_FUNCTION(execInternal_OnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStopped); \
	DECLARE_FUNCTION(execInternal_OnStateMachineUpdated); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStarted); \
	DECLARE_FUNCTION(execInternal_OnReplicatedInstanceInitialized); \
	DECLARE_FUNCTION(execInternal_OnInstanceInitializedAsync); \
	DECLARE_FUNCTION(execGetContextForInitialization); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execGetTopMostParentActor); \
	DECLARE_FUNCTION(execSetCanInstanceNetworkTick); \
	DECLARE_FUNCTION(execCopySettingsFromOtherComponent); \
	DECLARE_FUNCTION(execIsStateMachineActive); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execK2_InitializeAsync); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize);


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CLIENT_FullSync_Implementation(FSMFullSyncTransaction const& FullSyncTransaction); \
	virtual void MULTICAST_FullSync_Implementation(FSMFullSyncTransaction const& FullSyncTransaction); \
	virtual void CLIENT_ActivateStates_Implementation(TArray<FSMActivateStateTransaction> const& StateTransactions); \
	virtual void MULTICAST_ActivateStates_Implementation(TArray<FSMActivateStateTransaction> const& StateTransactions); \
	virtual void CLIENT_TakeTransitions_Implementation(TArray<FSMTransitionTransaction> const& Transactions); \
	virtual void MULTICAST_TakeTransitions_Implementation(TArray<FSMTransitionTransaction> const& Transactions); \
	virtual void CLIENT_Shutdown_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void MULTICAST_Shutdown_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void CLIENT_Stop_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void MULTICAST_Stop_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void CLIENT_Start_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void MULTICAST_Start_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_FullSync_Implementation(FSMFullSyncTransaction const& FullSyncTransaction); \
	virtual void SERVER_RequestFullSync_Implementation(); \
	virtual void SERVER_ActivateStates_Implementation(TArray<FSMActivateStateTransaction> const& StateTransactions); \
	virtual void SERVER_TakeTransitions_Implementation(TArray<FSMTransitionTransaction> const& TransitionTransactions); \
	virtual void SERVER_Shutdown_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_Stop_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_Update_Implementation(float DeltaTime); \
	virtual void SERVER_Start_Implementation(FSMTransaction_Base const& Transaction); \
	virtual void SERVER_Initialize_Implementation(FSMInitializeTransaction const& Transaction); \
	virtual UObject* GetContextForInitialization_Implementation() const; \
 \
	DECLARE_FUNCTION(execCLIENT_FullSync); \
	DECLARE_FUNCTION(execMULTICAST_FullSync); \
	DECLARE_FUNCTION(execCLIENT_ActivateStates); \
	DECLARE_FUNCTION(execMULTICAST_ActivateStates); \
	DECLARE_FUNCTION(execCLIENT_TakeTransitions); \
	DECLARE_FUNCTION(execMULTICAST_TakeTransitions); \
	DECLARE_FUNCTION(execCLIENT_Shutdown); \
	DECLARE_FUNCTION(execMULTICAST_Shutdown); \
	DECLARE_FUNCTION(execCLIENT_Stop); \
	DECLARE_FUNCTION(execMULTICAST_Stop); \
	DECLARE_FUNCTION(execCLIENT_Start); \
	DECLARE_FUNCTION(execMULTICAST_Start); \
	DECLARE_FUNCTION(execREP_OnInstanceLoaded); \
	DECLARE_FUNCTION(execSERVER_FullSync); \
	DECLARE_FUNCTION(execSERVER_RequestFullSync); \
	DECLARE_FUNCTION(execSERVER_ActivateStates); \
	DECLARE_FUNCTION(execSERVER_TakeTransitions); \
	DECLARE_FUNCTION(execSERVER_Shutdown); \
	DECLARE_FUNCTION(execSERVER_Stop); \
	DECLARE_FUNCTION(execSERVER_Update); \
	DECLARE_FUNCTION(execSERVER_Start); \
	DECLARE_FUNCTION(execSERVER_Initialize); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStateStarted); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStateChanged); \
	DECLARE_FUNCTION(execInternal_OnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStopped); \
	DECLARE_FUNCTION(execInternal_OnStateMachineUpdated); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStarted); \
	DECLARE_FUNCTION(execInternal_OnReplicatedInstanceInitialized); \
	DECLARE_FUNCTION(execInternal_OnInstanceInitializedAsync); \
	DECLARE_FUNCTION(execGetContextForInitialization); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execGetTopMostParentActor); \
	DECLARE_FUNCTION(execSetCanInstanceNetworkTick); \
	DECLARE_FUNCTION(execCopySettingsFromOtherComponent); \
	DECLARE_FUNCTION(execIsStateMachineActive); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execK2_InitializeAsync); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize);


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_EVENT_PARMS \
	struct SMStateMachineComponent_eventCLIENT_ActivateStates_Parms \
	{ \
		TArray<FSMActivateStateTransaction> StateTransactions; \
	}; \
	struct SMStateMachineComponent_eventCLIENT_FullSync_Parms \
	{ \
		FSMFullSyncTransaction FullSyncTransaction; \
	}; \
	struct SMStateMachineComponent_eventCLIENT_Shutdown_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventCLIENT_Start_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventCLIENT_Stop_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventCLIENT_TakeTransitions_Parms \
	{ \
		TArray<FSMTransitionTransaction> Transactions; \
	}; \
	struct SMStateMachineComponent_eventGetContextForInitialization_Parms \
	{ \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMStateMachineComponent_eventGetContextForInitialization_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SMStateMachineComponent_eventMULTICAST_ActivateStates_Parms \
	{ \
		TArray<FSMActivateStateTransaction> StateTransactions; \
	}; \
	struct SMStateMachineComponent_eventMULTICAST_FullSync_Parms \
	{ \
		FSMFullSyncTransaction FullSyncTransaction; \
	}; \
	struct SMStateMachineComponent_eventMULTICAST_Shutdown_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventMULTICAST_Start_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventMULTICAST_Stop_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventMULTICAST_TakeTransitions_Parms \
	{ \
		TArray<FSMTransitionTransaction> Transactions; \
	}; \
	struct SMStateMachineComponent_eventSERVER_ActivateStates_Parms \
	{ \
		TArray<FSMActivateStateTransaction> StateTransactions; \
	}; \
	struct SMStateMachineComponent_eventSERVER_FullSync_Parms \
	{ \
		FSMFullSyncTransaction FullSyncTransaction; \
	}; \
	struct SMStateMachineComponent_eventSERVER_Initialize_Parms \
	{ \
		FSMInitializeTransaction Transaction; \
	}; \
	struct SMStateMachineComponent_eventSERVER_Shutdown_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventSERVER_Start_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventSERVER_Stop_Parms \
	{ \
		FSMTransaction_Base Transaction; \
	}; \
	struct SMStateMachineComponent_eventSERVER_TakeTransitions_Parms \
	{ \
		TArray<FSMTransitionTransaction> TransitionTransactions; \
	}; \
	struct SMStateMachineComponent_eventSERVER_Update_Parms \
	{ \
		float DeltaTime; \
	};


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USMStateMachineComponent, NO_API)


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateMachineComponent(); \
	friend struct Z_Construct_UClass_USMStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineComponent) \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USMStateMachineComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StateMachineClass=NETFIELD_REP_START, \
		bInitializeOnBeginPlay, \
		bStartOnBeginPlay, \
		bStopOnEndPlay, \
		BeginPlayInitializationMode, \
		bReuseInstanceAfterShutdown, \
		StateChangeAuthority, \
		NetworkTickConfiguration, \
		NetworkStateExecution, \
		bIncludeSimulatedProxies, \
		ReplicatedInitializationMode, \
		NetworkTransitionEnteredConfiguration, \
		bWaitForTransactionsFromServer, \
		bCalculateServerTimeForClients, \
		bUseOwnerNetUpdateFrequency, \
		ClientNetUpdateFrequency, \
		bAlwaysMulticast, \
		R_Instance, \
		NETFIELD_REP_END=R_Instance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateMachineComponent(); \
	friend struct Z_Construct_UClass_USMStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineComponent) \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USMStateMachineComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StateMachineClass=NETFIELD_REP_START, \
		bInitializeOnBeginPlay, \
		bStartOnBeginPlay, \
		bStopOnEndPlay, \
		BeginPlayInitializationMode, \
		bReuseInstanceAfterShutdown, \
		StateChangeAuthority, \
		NetworkTickConfiguration, \
		NetworkStateExecution, \
		bIncludeSimulatedProxies, \
		ReplicatedInitializationMode, \
		NetworkTransitionEnteredConfiguration, \
		bWaitForTransactionsFromServer, \
		bCalculateServerTimeForClients, \
		bUseOwnerNetUpdateFrequency, \
		ClientNetUpdateFrequency, \
		bAlwaysMulticast, \
		R_Instance, \
		NETFIELD_REP_END=R_Instance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineComponent(USMStateMachineComponent&&); \
	NO_API USMStateMachineComponent(const USMStateMachineComponent&); \
public:


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineComponent(USMStateMachineComponent&&); \
	NO_API USMStateMachineComponent(const USMStateMachineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineComponent)


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_34_PROLOG \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_EVENT_PARMS


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_RPC_WRAPPERS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_INCLASS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SMStateMachineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateMachineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMStateMachineComponent_h


#define FOREACH_ENUM_ESMTHREADMODE(op) \
	op(ESMThreadMode::Blocking) \
	op(ESMThreadMode::Async) 

enum class ESMThreadMode : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMThreadMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
