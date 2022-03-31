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
struct FSMTransitionInfo;
struct FSMStateInfo;
class APawn;
class AController;
class UInputComponent;
struct FGuid;
class USMStateMachineInstance;
class ISMStateMachineNetworkedInterface;
class USMTransitionInstance;
class USMStateInstance_Base;
struct FSMStateHistory;
class UObject;
struct FGuid; struct FGuid;
class USMNodeInstance;
struct FLatentActionInfo;
class USMStateMachineComponent;
#ifdef SMSYSTEM_SMInstance_generated_h
#error "SMInstance.generated.h already included, missing '#pragma once' in SMInstance.h"
#endif
#define SMSYSTEM_SMInstance_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_18_DELEGATE \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_19_DELEGATE \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_20_DELEGATE \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_21_DELEGATE \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_22_DELEGATE \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_23_DELEGATE \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_24_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStateStartedSignature_Parms \
{ \
	USMInstance* Instance; \
	FSMStateInfo State; \
}; \
static inline void FOnStateMachineStateStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStateStartedSignature, USMInstance* Instance, FSMStateInfo State) \
{ \
	_Script_SMSystem_eventOnStateMachineStateStartedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.State=State; \
	OnStateMachineStateStartedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics; \
	SMSYSTEM_API static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMDebugStateMachine>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMReferenceContainer_Statics; \
	SMSYSTEM_API static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMReferenceContainer>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_RPC_WRAPPERS \
	virtual void OnStateMachineStateStarted_Implementation(FSMStateInfo const& State); \
	virtual void OnStateMachineStateChanged_Implementation(FSMStateInfo const& ToState, FSMStateInfo const& FromState); \
	virtual void OnStateMachineTransitionTaken_Implementation(FSMTransitionInfo const& Transition); \
	virtual void OnStateMachineStop_Implementation(); \
	virtual void OnStateMachineUpdate_Implementation(float DeltaSeconds); \
	virtual void OnStateMachineStart_Implementation(); \
	virtual void OnStateMachineInitialized_Implementation(); \
	virtual void OnPreStateMachineInitialized_Implementation(); \
	virtual void OnStateMachineInitialStateLoaded_Implementation(FGuid const& StateGuid); \
	virtual void Tick_Implementation(float DeltaTime); \
 \
	DECLARE_FUNCTION(execOnContextPawnControllerChanged); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execInternal_EventCleanup); \
	DECLARE_FUNCTION(execInternal_EventUpdate); \
	DECLARE_FUNCTION(execInternal_EvaluateAndTakeTransitionChainByGuid); \
	DECLARE_FUNCTION(execInternal_Update); \
	DECLARE_FUNCTION(execRunUpdateAsReference); \
	DECLARE_FUNCTION(execOnStateMachineStateStarted); \
	DECLARE_FUNCTION(execOnStateMachineStateChanged); \
	DECLARE_FUNCTION(execOnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execOnStateMachineStop); \
	DECLARE_FUNCTION(execOnStateMachineUpdate); \
	DECLARE_FUNCTION(execOnStateMachineStart); \
	DECLARE_FUNCTION(execOnStateMachineInitialized); \
	DECLARE_FUNCTION(execOnPreStateMachineInitialized); \
	DECLARE_FUNCTION(execSetStateMachineClass); \
	DECLARE_FUNCTION(execGetStateMachineClass); \
	DECLARE_FUNCTION(execGetMasterReferenceOwner); \
	DECLARE_FUNCTION(execGetPrimaryReferenceOwner); \
	DECLARE_FUNCTION(execGetReferenceOwner); \
	DECLARE_FUNCTION(execREP_OnReplicatedReferencesLoaded); \
	DECLARE_FUNCTION(execIsInitializingAsync); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execHasStarted); \
	DECLARE_FUNCTION(execK2_TryGetNetworkInterface); \
	DECLARE_FUNCTION(execGetNetworkInterface); \
	DECLARE_FUNCTION(execGetAllTransitionInstances); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execClearStateHistory); \
	DECLARE_FUNCTION(execGetStateHistoryMaxCount); \
	DECLARE_FUNCTION(execSetStateHistoryMaxCount); \
	DECLARE_FUNCTION(execGetStateHistory); \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execGetStopOnEndState); \
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
	DECLARE_FUNCTION(execGetRootStateMachineNodeInstance); \
	DECLARE_FUNCTION(execSetGuidRedirectMap); \
	DECLARE_FUNCTION(execGetGuidRedirectMap); \
	DECLARE_FUNCTION(execGetStateInstanceByQualifiedName); \
	DECLARE_FUNCTION(execGetNodeInstanceByGuid); \
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
	DECLARE_FUNCTION(execK2_InitializeAsync); \
	DECLARE_FUNCTION(execOnStateMachineInitialStateLoaded); \
	DECLARE_FUNCTION(execClearLoadedStates); \
	DECLARE_FUNCTION(execAreInitialStatesSetFromLoad); \
	DECLARE_FUNCTION(execLoadFromMultipleStates); \
	DECLARE_FUNCTION(execLoadFromState); \
	DECLARE_FUNCTION(execSwitchActiveStateByQualifiedName); \
	DECLARE_FUNCTION(execSwitchActiveState); \
	DECLARE_FUNCTION(execPreloadAllNodeInstances); \
	DECLARE_FUNCTION(execTakeTransitionChain); \
	DECLARE_FUNCTION(execEvaluateAndFindTransitionChain); \
	DECLARE_FUNCTION(execEvaluateAndTakeTransitionChain); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execStartWithNewContext); \
	DECLARE_FUNCTION(execReplicatedRestart); \
	DECLARE_FUNCTION(execReplicatedStop); \
	DECLARE_FUNCTION(execReplicatedStart); \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnContextPawnControllerChanged); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execInternal_EventCleanup); \
	DECLARE_FUNCTION(execInternal_EventUpdate); \
	DECLARE_FUNCTION(execInternal_EvaluateAndTakeTransitionChainByGuid); \
	DECLARE_FUNCTION(execInternal_Update); \
	DECLARE_FUNCTION(execRunUpdateAsReference); \
	DECLARE_FUNCTION(execOnStateMachineStateStarted); \
	DECLARE_FUNCTION(execOnStateMachineStateChanged); \
	DECLARE_FUNCTION(execOnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execOnStateMachineStop); \
	DECLARE_FUNCTION(execOnStateMachineUpdate); \
	DECLARE_FUNCTION(execOnStateMachineStart); \
	DECLARE_FUNCTION(execOnStateMachineInitialized); \
	DECLARE_FUNCTION(execOnPreStateMachineInitialized); \
	DECLARE_FUNCTION(execSetStateMachineClass); \
	DECLARE_FUNCTION(execGetStateMachineClass); \
	DECLARE_FUNCTION(execGetMasterReferenceOwner); \
	DECLARE_FUNCTION(execGetPrimaryReferenceOwner); \
	DECLARE_FUNCTION(execGetReferenceOwner); \
	DECLARE_FUNCTION(execREP_OnReplicatedReferencesLoaded); \
	DECLARE_FUNCTION(execIsInitializingAsync); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execHasStarted); \
	DECLARE_FUNCTION(execK2_TryGetNetworkInterface); \
	DECLARE_FUNCTION(execGetNetworkInterface); \
	DECLARE_FUNCTION(execGetAllTransitionInstances); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execClearStateHistory); \
	DECLARE_FUNCTION(execGetStateHistoryMaxCount); \
	DECLARE_FUNCTION(execSetStateHistoryMaxCount); \
	DECLARE_FUNCTION(execGetStateHistory); \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execGetStopOnEndState); \
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
	DECLARE_FUNCTION(execGetRootStateMachineNodeInstance); \
	DECLARE_FUNCTION(execSetGuidRedirectMap); \
	DECLARE_FUNCTION(execGetGuidRedirectMap); \
	DECLARE_FUNCTION(execGetStateInstanceByQualifiedName); \
	DECLARE_FUNCTION(execGetNodeInstanceByGuid); \
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
	DECLARE_FUNCTION(execK2_InitializeAsync); \
	DECLARE_FUNCTION(execOnStateMachineInitialStateLoaded); \
	DECLARE_FUNCTION(execClearLoadedStates); \
	DECLARE_FUNCTION(execAreInitialStatesSetFromLoad); \
	DECLARE_FUNCTION(execLoadFromMultipleStates); \
	DECLARE_FUNCTION(execLoadFromState); \
	DECLARE_FUNCTION(execSwitchActiveStateByQualifiedName); \
	DECLARE_FUNCTION(execSwitchActiveState); \
	DECLARE_FUNCTION(execPreloadAllNodeInstances); \
	DECLARE_FUNCTION(execTakeTransitionChain); \
	DECLARE_FUNCTION(execEvaluateAndFindTransitionChain); \
	DECLARE_FUNCTION(execEvaluateAndTakeTransitionChain); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execStartWithNewContext); \
	DECLARE_FUNCTION(execReplicatedRestart); \
	DECLARE_FUNCTION(execReplicatedStop); \
	DECLARE_FUNCTION(execReplicatedStart); \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_EVENT_PARMS \
	struct SMInstance_eventOnStateMachineInitialStateLoaded_Parms \
	{ \
		FGuid StateGuid; \
	}; \
	struct SMInstance_eventOnStateMachineStateChanged_Parms \
	{ \
		FSMStateInfo ToState; \
		FSMStateInfo FromState; \
	}; \
	struct SMInstance_eventOnStateMachineStateStarted_Parms \
	{ \
		FSMStateInfo State; \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_INCLASS_NO_PURE_DECLS \
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
		ReplicatedReferences=NETFIELD_REP_START, \
		ComponentOwner, \
		R_StateMachineContext, \
		bAutoManageTime, \
		bStopOnEndState, \
		bCanEverTick, \
		bCanTickWhenPaused, \
		TickInterval, \
		AutoReceiveInput, \
		InputPriority, \
		bBlockInput, \
		NETFIELD_REP_END=bBlockInput	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USMInstance) \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_INCLASS \
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
		ReplicatedReferences=NETFIELD_REP_START, \
		ComponentOwner, \
		R_StateMachineContext, \
		bAutoManageTime, \
		bStopOnEndState, \
		bCanEverTick, \
		bCanTickWhenPaused, \
		TickInterval, \
		AutoReceiveInput, \
		InputPriority, \
		bBlockInput, \
		NETFIELD_REP_END=bBlockInput	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USMInstance) \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_STANDARD_CONSTRUCTORS \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstance(USMInstance&&); \
	NO_API USMInstance(const USMInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_119_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
