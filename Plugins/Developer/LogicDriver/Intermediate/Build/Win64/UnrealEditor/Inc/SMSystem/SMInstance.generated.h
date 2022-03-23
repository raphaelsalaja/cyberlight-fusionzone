// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMInstance;
struct FSMStateInfo;
struct FSMTransitionInfo;
class APawn;
class AController;
struct FGuid;
class USMStateMachineInstance;
class ISMStateMachineNetworkedInterface;
class USMTransitionInstance;
class USMStateInstance_Base;
struct FSMStateHistory;
class UObject;
class USMStateMachineComponent;
#ifdef SMSYSTEM_SMInstance_generated_h
#error "SMInstance.generated.h already included, missing '#pragma once' in SMInstance.h"
#endif
#define SMSYSTEM_SMInstance_generated_h

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics; \
	SMSYSTEM_API static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMDebugStateMachine>();

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_21_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms \
{ \
	USMInstance* Instance; \
	FSMStateInfo NewState; \
	FSMStateInfo PreviousState; \
}; \
static inline void FOnStateMachineStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStateChangedSignature, USMInstance* Instance, FSMStateInfo NewState, FSMStateInfo PreviousState) \
{ \
	_Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.NewState=NewState; \
	Parms.PreviousState=PreviousState; \
	OnStateMachineStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_20_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms \
{ \
	USMInstance* Instance; \
	FSMTransitionInfo Transition; \
}; \
static inline void FOnStateMachineTransitionTakenSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineTransitionTakenSignature, USMInstance* Instance, FSMTransitionInfo Transition) \
{ \
	_Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.Transition=Transition; \
	OnStateMachineTransitionTakenSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_19_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStoppedSignature_Parms \
{ \
	USMInstance* Instance; \
}; \
static inline void FOnStateMachineStoppedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStoppedSignature, USMInstance* Instance) \
{ \
	_Script_SMSystem_eventOnStateMachineStoppedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnStateMachineStoppedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_18_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms \
{ \
	USMInstance* Instance; \
	float DeltaSeconds; \
}; \
static inline void FOnStateMachineUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineUpdatedSignature, USMInstance* Instance, float DeltaSeconds) \
{ \
	_Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.DeltaSeconds=DeltaSeconds; \
	OnStateMachineUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_17_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStartedSignature_Parms \
{ \
	USMInstance* Instance; \
}; \
static inline void FOnStateMachineStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStartedSignature, USMInstance* Instance) \
{ \
	_Script_SMSystem_eventOnStateMachineStartedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnStateMachineStartedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_16_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineInitializedSignature_Parms \
{ \
	USMInstance* Instance; \
}; \
static inline void FOnStateMachineInitializedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineInitializedSignature, USMInstance* Instance) \
{ \
	_Script_SMSystem_eventOnStateMachineInitializedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnStateMachineInitializedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_RPC_WRAPPERS \
	virtual void OnStateMachineStateChanged_Implementation(FSMStateInfo const& ToState, FSMStateInfo const& FromState); \
	virtual void OnStateMachineTransitionTaken_Implementation(FSMTransitionInfo const& Transition); \
	virtual void OnStateMachineStop_Implementation(); \
	virtual void OnStateMachineUpdate_Implementation(float DeltaSeconds); \
	virtual void OnStateMachineStart_Implementation(); \
	virtual void OnStateMachineInitialized_Implementation(); \
	virtual void OnStateMachineInitialStateLoaded_Implementation(FGuid const& StateGuid); \
	virtual void Tick_Implementation(float DeltaTime); \
 \
	DECLARE_FUNCTION(execOnContextPawnControllerChanged); \
	DECLARE_FUNCTION(execREP_StartChanged); \
	DECLARE_FUNCTION(execInternal_EventCleanup); \
	DECLARE_FUNCTION(execInternal_Update); \
	DECLARE_FUNCTION(execOnStateMachineStateChanged); \
	DECLARE_FUNCTION(execOnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execOnStateMachineStop); \
	DECLARE_FUNCTION(execOnStateMachineUpdate); \
	DECLARE_FUNCTION(execOnStateMachineStart); \
	DECLARE_FUNCTION(execOnStateMachineInitialized); \
	DECLARE_FUNCTION(execSetStateMachineClass); \
	DECLARE_FUNCTION(execGetStateMachineClass); \
	DECLARE_FUNCTION(execGetMasterReferenceOwner); \
	DECLARE_FUNCTION(execGetReferenceOwner); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execHasStarted); \
	DECLARE_FUNCTION(execGetNetworkInterface); \
	DECLARE_FUNCTION(execGetAllTransitionInstances); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execSetStateHistoryMaxCount); \
	DECLARE_FUNCTION(execGetStateHistory); \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execSetStopOnEndState); \
	DECLARE_FUNCTION(execGetTickInterval); \
	DECLARE_FUNCTION(execCanAutoManageTime); \
	DECLARE_FUNCTION(execSetAutoManageTime); \
	DECLARE_FUNCTION(execSetTickInterval); \
	DECLARE_FUNCTION(execSetTickBeforeBeginPlay); \
	DECLARE_FUNCTION(execSetCanTickWhenPaused); \
	DECLARE_FUNCTION(execCanTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetCanEverTick); \
	DECLARE_FUNCTION(execCanEverTick); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetRootStateMachineInstance); \
	DECLARE_FUNCTION(execGetTransitionInstanceByGuid); \
	DECLARE_FUNCTION(execGetStateInstanceByGuid); \
	DECLARE_FUNCTION(execGetReferencedInstanceByGuid); \
	DECLARE_FUNCTION(execTryGetTransitionInfo); \
	DECLARE_FUNCTION(execTryGetStateInfo); \
	DECLARE_FUNCTION(execGetAllReferencedInstances); \
	DECLARE_FUNCTION(execGetAllActiveStateInstances); \
	DECLARE_FUNCTION(execGetSingleActiveStateInstance); \
	DECLARE_FUNCTION(execGetActiveStateInstance); \
	DECLARE_FUNCTION(execGetAllActiveStateGuids); \
	DECLARE_FUNCTION(execGetSingleActiveStateGuid); \
	DECLARE_FUNCTION(execGetAllCurrentStateGuids); \
	DECLARE_FUNCTION(execTryGetNestedActiveState); \
	DECLARE_FUNCTION(execGetNestedActiveStateGuid); \
	DECLARE_FUNCTION(execGetActiveStateGuid); \
	DECLARE_FUNCTION(execGetNestedActiveStateName); \
	DECLARE_FUNCTION(execGetActiveStateName); \
	DECLARE_FUNCTION(execOnStateMachineInitialStateLoaded); \
	DECLARE_FUNCTION(execAreInitialStatesSetFromLoad); \
	DECLARE_FUNCTION(execLoadFromMultipleStates); \
	DECLARE_FUNCTION(execLoadFromState); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execStartWithNewContext); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetComponentOwner); \
	DECLARE_FUNCTION(execGetContext); \
	DECLARE_FUNCTION(execIsTickableWhenPaused); \
	DECLARE_FUNCTION(execIsTickable); \
	DECLARE_FUNCTION(execTick);


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnContextPawnControllerChanged); \
	DECLARE_FUNCTION(execREP_StartChanged); \
	DECLARE_FUNCTION(execInternal_EventCleanup); \
	DECLARE_FUNCTION(execInternal_Update); \
	DECLARE_FUNCTION(execOnStateMachineStateChanged); \
	DECLARE_FUNCTION(execOnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execOnStateMachineStop); \
	DECLARE_FUNCTION(execOnStateMachineUpdate); \
	DECLARE_FUNCTION(execOnStateMachineStart); \
	DECLARE_FUNCTION(execOnStateMachineInitialized); \
	DECLARE_FUNCTION(execSetStateMachineClass); \
	DECLARE_FUNCTION(execGetStateMachineClass); \
	DECLARE_FUNCTION(execGetMasterReferenceOwner); \
	DECLARE_FUNCTION(execGetReferenceOwner); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execHasStarted); \
	DECLARE_FUNCTION(execGetNetworkInterface); \
	DECLARE_FUNCTION(execGetAllTransitionInstances); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execSetStateHistoryMaxCount); \
	DECLARE_FUNCTION(execGetStateHistory); \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execSetStopOnEndState); \
	DECLARE_FUNCTION(execGetTickInterval); \
	DECLARE_FUNCTION(execCanAutoManageTime); \
	DECLARE_FUNCTION(execSetAutoManageTime); \
	DECLARE_FUNCTION(execSetTickInterval); \
	DECLARE_FUNCTION(execSetTickBeforeBeginPlay); \
	DECLARE_FUNCTION(execSetCanTickWhenPaused); \
	DECLARE_FUNCTION(execCanTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetCanEverTick); \
	DECLARE_FUNCTION(execCanEverTick); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetRootStateMachineInstance); \
	DECLARE_FUNCTION(execGetTransitionInstanceByGuid); \
	DECLARE_FUNCTION(execGetStateInstanceByGuid); \
	DECLARE_FUNCTION(execGetReferencedInstanceByGuid); \
	DECLARE_FUNCTION(execTryGetTransitionInfo); \
	DECLARE_FUNCTION(execTryGetStateInfo); \
	DECLARE_FUNCTION(execGetAllReferencedInstances); \
	DECLARE_FUNCTION(execGetAllActiveStateInstances); \
	DECLARE_FUNCTION(execGetSingleActiveStateInstance); \
	DECLARE_FUNCTION(execGetActiveStateInstance); \
	DECLARE_FUNCTION(execGetAllActiveStateGuids); \
	DECLARE_FUNCTION(execGetSingleActiveStateGuid); \
	DECLARE_FUNCTION(execGetAllCurrentStateGuids); \
	DECLARE_FUNCTION(execTryGetNestedActiveState); \
	DECLARE_FUNCTION(execGetNestedActiveStateGuid); \
	DECLARE_FUNCTION(execGetActiveStateGuid); \
	DECLARE_FUNCTION(execGetNestedActiveStateName); \
	DECLARE_FUNCTION(execGetActiveStateName); \
	DECLARE_FUNCTION(execOnStateMachineInitialStateLoaded); \
	DECLARE_FUNCTION(execAreInitialStatesSetFromLoad); \
	DECLARE_FUNCTION(execLoadFromMultipleStates); \
	DECLARE_FUNCTION(execLoadFromState); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execStartWithNewContext); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetComponentOwner); \
	DECLARE_FUNCTION(execGetContext); \
	DECLARE_FUNCTION(execIsTickableWhenPaused); \
	DECLARE_FUNCTION(execIsTickable); \
	DECLARE_FUNCTION(execTick);


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_EVENT_PARMS \
	struct SMInstance_eventOnStateMachineInitialStateLoaded_Parms \
	{ \
		FGuid StateGuid; \
	}; \
	struct SMInstance_eventOnStateMachineStateChanged_Parms \
	{ \
		FSMStateInfo ToState; \
		FSMStateInfo FromState; \
	}; \
	struct SMInstance_eventOnStateMachineTransitionTaken_Parms \
	{ \
		FSMTransitionInfo Transition; \
	}; \
	struct SMInstance_eventOnStateMachineUpdate_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct SMInstance_eventTick_Parms \
	{ \
		float DeltaTime; \
	};


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_CALLBACK_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstance(); \
	friend struct Z_Construct_UClass_USMInstance_Statics; \
public: \
	DECLARE_CLASS(USMInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComponentOwner=NETFIELD_REP_START, \
		R_StateMachineContext, \
		R_ActiveStates, \
		R_bHasStarted, \
		R_bLoadFromStatesCalled, \
		NETFIELD_REP_END=R_bLoadFromStatesCalled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USMInstance) \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUSMInstance(); \
	friend struct Z_Construct_UClass_USMInstance_Statics; \
public: \
	DECLARE_CLASS(USMInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComponentOwner=NETFIELD_REP_START, \
		R_StateMachineContext, \
		R_ActiveStates, \
		R_bHasStarted, \
		R_bLoadFromStatesCalled, \
		NETFIELD_REP_END=R_bLoadFromStatesCalled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USMInstance) \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstance(USMInstance&&); \
	NO_API USMInstance(const USMInstance&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstance(USMInstance&&); \
	NO_API USMInstance(const USMInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMInstance)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ComponentOwner() { return STRUCT_OFFSET(USMInstance, ComponentOwner); } \
	FORCEINLINE static uint32 __PPO__NetworkInterface() { return STRUCT_OFFSET(USMInstance, NetworkInterface); } \
	FORCEINLINE static uint32 __PPO__ActiveTransactions() { return STRUCT_OFFSET(USMInstance, ActiveTransactions); } \
	FORCEINLINE static uint32 __PPO__StateHistory() { return STRUCT_OFFSET(USMInstance, StateHistory); } \
	FORCEINLINE static uint32 __PPO__RootStateMachine() { return STRUCT_OFFSET(USMInstance, RootStateMachine); } \
	FORCEINLINE static uint32 __PPO__R_StateMachineContext() { return STRUCT_OFFSET(USMInstance, R_StateMachineContext); } \
	FORCEINLINE static uint32 __PPO__R_ActiveStates() { return STRUCT_OFFSET(USMInstance, R_ActiveStates); } \
	FORCEINLINE static uint32 __PPO__ReferenceOwner() { return STRUCT_OFFSET(USMInstance, ReferenceOwner); } \
	FORCEINLINE static uint32 __PPO__StateMachineClass() { return STRUCT_OFFSET(USMInstance, StateMachineClass); } \
	FORCEINLINE static uint32 __PPO__bAutoManageTime() { return STRUCT_OFFSET(USMInstance, bAutoManageTime); } \
	FORCEINLINE static uint32 __PPO__bStopOnEndState() { return STRUCT_OFFSET(USMInstance, bStopOnEndState); } \
	FORCEINLINE static uint32 __PPO__bCanEverTick() { return STRUCT_OFFSET(USMInstance, bCanEverTick); } \
	FORCEINLINE static uint32 __PPO__bCanTickWhenPaused() { return STRUCT_OFFSET(USMInstance, bCanTickWhenPaused); } \
	FORCEINLINE static uint32 __PPO__TickInterval() { return STRUCT_OFFSET(USMInstance, TickInterval); } \
	FORCEINLINE static uint32 __PPO__bTickRegistered() { return STRUCT_OFFSET(USMInstance, bTickRegistered); } \
	FORCEINLINE static uint32 __PPO__bTickBeforeInitialize() { return STRUCT_OFFSET(USMInstance, bTickBeforeInitialize); } \
	FORCEINLINE static uint32 __PPO__bTickBeforeBeginPlay() { return STRUCT_OFFSET(USMInstance, bTickBeforeBeginPlay); } \
	FORCEINLINE static uint32 __PPO__StateHistoryMaxCount() { return STRUCT_OFFSET(USMInstance, StateHistoryMaxCount); } \
	FORCEINLINE static uint32 __PPO__bEnableLogging() { return STRUCT_OFFSET(USMInstance, bEnableLogging); } \
	FORCEINLINE static uint32 __PPO__bLogStateChange() { return STRUCT_OFFSET(USMInstance, bLogStateChange); } \
	FORCEINLINE static uint32 __PPO__bLogTransitionTaken() { return STRUCT_OFFSET(USMInstance, bLogTransitionTaken); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(USMInstance, InputComponent); } \
	FORCEINLINE static uint32 __PPO__AutoReceiveInput() { return STRUCT_OFFSET(USMInstance, AutoReceiveInput); } \
	FORCEINLINE static uint32 __PPO__InputPriority() { return STRUCT_OFFSET(USMInstance, InputPriority); } \
	FORCEINLINE static uint32 __PPO__bBlockInput() { return STRUCT_OFFSET(USMInstance, bBlockInput); } \
	FORCEINLINE static uint32 __PPO__MaxTimeToWaitForUpdate() { return STRUCT_OFFSET(USMInstance, MaxTimeToWaitForUpdate); } \
	FORCEINLINE static uint32 __PPO__TimeSinceAllowedTick() { return STRUCT_OFFSET(USMInstance, TimeSinceAllowedTick); } \
	FORCEINLINE static uint32 __PPO__WorldSeconds() { return STRUCT_OFFSET(USMInstance, WorldSeconds); } \
	FORCEINLINE static uint32 __PPO__WorldTimeDelta() { return STRUCT_OFFSET(USMInstance, WorldTimeDelta); }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_80_PROLOG \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_EVENT_PARMS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_INCLASS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
