// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMTransitionInstance;
struct FDateTime;
struct FSMTransitionInfo;
class USMStateInstance_Base;
#ifdef SMSYSTEM_SMTransitionInstance_generated_h
#error "SMTransitionInstance.generated.h already included, missing '#pragma once' in SMTransitionInstance.h"
#endif
#define SMSYSTEM_SMTransitionInstance_generated_h

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_12_DELEGATE \
struct _Script_SMSystem_eventOnTransitionEnteredSignature_Parms \
{ \
	USMTransitionInstance* TransitionInstance; \
}; \
static inline void FOnTransitionEnteredSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTransitionEnteredSignature, USMTransitionInstance* TransitionInstance) \
{ \
	_Script_SMSystem_eventOnTransitionEnteredSignature_Parms Parms; \
	Parms.TransitionInstance=TransitionInstance; \
	OnTransitionEnteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_RPC_WRAPPERS \
	virtual void OnTransitionShutdown_Implementation(); \
	virtual void OnTransitionInitialized_Implementation(); \
	virtual void OnTransitionEntered_Implementation(); \
	virtual bool CanEnterTransition_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetCanEvalWithStartState); \
	DECLARE_FUNCTION(execGetCanEvalWithStartState); \
	DECLARE_FUNCTION(execSetCanEvaluateFromEvent); \
	DECLARE_FUNCTION(execGetCanEvaluateFromEvent); \
	DECLARE_FUNCTION(execSetEvalIfNextStateActive); \
	DECLARE_FUNCTION(execGetEvalIfNextStateActive); \
	DECLARE_FUNCTION(execSetRunParallel); \
	DECLARE_FUNCTION(execGetRunParallel); \
	DECLARE_FUNCTION(execSetPriorityOrder); \
	DECLARE_FUNCTION(execGetPriorityOrder); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execEvaluateFromManuallyBoundEvent); \
	DECLARE_FUNCTION(execDoesTransitionPass); \
	DECLARE_FUNCTION(execGetServerTimestamp); \
	DECLARE_FUNCTION(execGetTransitionInfo); \
	DECLARE_FUNCTION(execGetDestinationStateForActiveTransition); \
	DECLARE_FUNCTION(execGetSourceStateForActiveTransition); \
	DECLARE_FUNCTION(execGetNextStateInstance); \
	DECLARE_FUNCTION(execGetPreviousStateInstance); \
	DECLARE_FUNCTION(execOnTransitionShutdown); \
	DECLARE_FUNCTION(execOnTransitionInitialized); \
	DECLARE_FUNCTION(execOnTransitionEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCanEvalWithStartState); \
	DECLARE_FUNCTION(execGetCanEvalWithStartState); \
	DECLARE_FUNCTION(execSetCanEvaluateFromEvent); \
	DECLARE_FUNCTION(execGetCanEvaluateFromEvent); \
	DECLARE_FUNCTION(execSetEvalIfNextStateActive); \
	DECLARE_FUNCTION(execGetEvalIfNextStateActive); \
	DECLARE_FUNCTION(execSetRunParallel); \
	DECLARE_FUNCTION(execGetRunParallel); \
	DECLARE_FUNCTION(execSetPriorityOrder); \
	DECLARE_FUNCTION(execGetPriorityOrder); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execEvaluateFromManuallyBoundEvent); \
	DECLARE_FUNCTION(execDoesTransitionPass); \
	DECLARE_FUNCTION(execGetServerTimestamp); \
	DECLARE_FUNCTION(execGetTransitionInfo); \
	DECLARE_FUNCTION(execGetDestinationStateForActiveTransition); \
	DECLARE_FUNCTION(execGetSourceStateForActiveTransition); \
	DECLARE_FUNCTION(execGetNextStateInstance); \
	DECLARE_FUNCTION(execGetPreviousStateInstance); \
	DECLARE_FUNCTION(execOnTransitionShutdown); \
	DECLARE_FUNCTION(execOnTransitionInitialized); \
	DECLARE_FUNCTION(execOnTransitionEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_EVENT_PARMS \
	struct SMTransitionInstance_eventCanEnterTransition_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMTransitionInstance_eventCanEnterTransition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMTransitionInstance(); \
	friend struct Z_Construct_UClass_USMTransitionInstance_Statics; \
public: \
	DECLARE_CLASS(USMTransitionInstance, USMNodeInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMTransitionInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSMTransitionInstance(); \
	friend struct Z_Construct_UClass_USMTransitionInstance_Statics; \
public: \
	DECLARE_CLASS(USMTransitionInstance, USMNodeInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMTransitionInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMTransitionInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMTransitionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMTransitionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMTransitionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMTransitionInstance(USMTransitionInstance&&); \
	NO_API USMTransitionInstance(const USMTransitionInstance&); \
public:


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMTransitionInstance(USMTransitionInstance&&); \
	NO_API USMTransitionInstance(const USMTransitionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMTransitionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMTransitionInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMTransitionInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PriorityOrder() { return STRUCT_OFFSET(USMTransitionInstance, PriorityOrder); } \
	FORCEINLINE static uint32 __PPO__bRunParallel() { return STRUCT_OFFSET(USMTransitionInstance, bRunParallel); } \
	FORCEINLINE static uint32 __PPO__bEvalIfNextStateActive() { return STRUCT_OFFSET(USMTransitionInstance, bEvalIfNextStateActive); } \
	FORCEINLINE static uint32 __PPO__bCanEvaluate() { return STRUCT_OFFSET(USMTransitionInstance, bCanEvaluate); } \
	FORCEINLINE static uint32 __PPO__bCanEvaluateFromEvent() { return STRUCT_OFFSET(USMTransitionInstance, bCanEvaluateFromEvent); } \
	FORCEINLINE static uint32 __PPO__bCanEvalWithStartState() { return STRUCT_OFFSET(USMTransitionInstance, bCanEvalWithStartState); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMTransitionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
