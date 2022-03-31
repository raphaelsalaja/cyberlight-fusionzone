// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMStateInstance_Base;
struct FDateTime;
class USMTransitionInstance;
struct FSMStateInfo;
class USMStateInstance;
#ifdef SMSYSTEM_SMStateInstance_generated_h
#error "SMStateInstance.generated.h already included, missing '#pragma once' in SMStateInstance.h"
#endif
#define SMSYSTEM_SMStateInstance_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_12_DELEGATE \
struct _Script_SMSystem_eventOnStateBeginSignature_Parms \
{ \
	USMStateInstance_Base* StateInstance; \
}; \
static inline void FOnStateBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateBeginSignature, USMStateInstance_Base* StateInstance) \
{ \
	_Script_SMSystem_eventOnStateBeginSignature_Parms Parms; \
	Parms.StateInstance=StateInstance; \
	OnStateBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_13_DELEGATE \
struct _Script_SMSystem_eventOnStateUpdateSignature_Parms \
{ \
	USMStateInstance_Base* StateInstance; \
	float DeltaSeconds; \
}; \
static inline void FOnStateUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateUpdateSignature, USMStateInstance_Base* StateInstance, float DeltaSeconds) \
{ \
	_Script_SMSystem_eventOnStateUpdateSignature_Parms Parms; \
	Parms.StateInstance=StateInstance; \
	Parms.DeltaSeconds=DeltaSeconds; \
	OnStateUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_14_DELEGATE \
struct _Script_SMSystem_eventOnStateEndSignature_Parms \
{ \
	USMStateInstance_Base* StateInstance; \
}; \
static inline void FOnStateEndSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateEndSignature, USMStateInstance_Base* StateInstance) \
{ \
	_Script_SMSystem_eventOnStateEndSignature_Parms Parms; \
	Parms.StateInstance=StateInstance; \
	OnStateEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_RPC_WRAPPERS \
	virtual void OnStateEnd_Implementation(); \
	virtual void OnStateUpdate_Implementation(float DeltaSeconds); \
	virtual void OnStateBegin_Implementation(); \
 \
	DECLARE_FUNCTION(execSetExcludeFromAnyState); \
	DECLARE_FUNCTION(execGetExcludeFromAnyState); \
	DECLARE_FUNCTION(execSetEvalTransitionsOnStart); \
	DECLARE_FUNCTION(execGetEvalTransitionsOnStart); \
	DECLARE_FUNCTION(execSetStayActiveOnStateChange); \
	DECLARE_FUNCTION(execGetStayActiveOnStateChange); \
	DECLARE_FUNCTION(execSetAllowParallelReentry); \
	DECLARE_FUNCTION(execGetAllowParallelReentry); \
	DECLARE_FUNCTION(execSetDefaultToParallel); \
	DECLARE_FUNCTION(execGetDefaultToParallel); \
	DECLARE_FUNCTION(execSetDisableTickTransitionEvaluation); \
	DECLARE_FUNCTION(execGetDisableTickTransitionEvaluation); \
	DECLARE_FUNCTION(execSetAlwaysUpdate); \
	DECLARE_FUNCTION(execGetAlwaysUpdate); \
	DECLARE_FUNCTION(execGetServerTimeInState); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execAreAllIncomingTransitionsFromAnAnyState); \
	DECLARE_FUNCTION(execAreAllOutgoingTransitionsFromAnAnyState); \
	DECLARE_FUNCTION(execGetPreviousActiveTransition); \
	DECLARE_FUNCTION(execGetPreviousActiveState); \
	DECLARE_FUNCTION(execGetPreviousStateByName); \
	DECLARE_FUNCTION(execGetNextStateByName); \
	DECLARE_FUNCTION(execGetNextStateByTransitionIndex); \
	DECLARE_FUNCTION(execGetTransitionByIndex); \
	DECLARE_FUNCTION(execSwitchToLinkedStateByTransition); \
	DECLARE_FUNCTION(execSwitchToLinkedStateByName); \
	DECLARE_FUNCTION(execSwitchToLinkedState); \
	DECLARE_FUNCTION(execGetTransitionToTake); \
	DECLARE_FUNCTION(execGetIncomingTransitions); \
	DECLARE_FUNCTION(execGetOutgoingTransitions); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsEntryState); \
	DECLARE_FUNCTION(execIsStateMachine); \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateUpdate); \
	DECLARE_FUNCTION(execOnStateBegin);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetExcludeFromAnyState); \
	DECLARE_FUNCTION(execGetExcludeFromAnyState); \
	DECLARE_FUNCTION(execSetEvalTransitionsOnStart); \
	DECLARE_FUNCTION(execGetEvalTransitionsOnStart); \
	DECLARE_FUNCTION(execSetStayActiveOnStateChange); \
	DECLARE_FUNCTION(execGetStayActiveOnStateChange); \
	DECLARE_FUNCTION(execSetAllowParallelReentry); \
	DECLARE_FUNCTION(execGetAllowParallelReentry); \
	DECLARE_FUNCTION(execSetDefaultToParallel); \
	DECLARE_FUNCTION(execGetDefaultToParallel); \
	DECLARE_FUNCTION(execSetDisableTickTransitionEvaluation); \
	DECLARE_FUNCTION(execGetDisableTickTransitionEvaluation); \
	DECLARE_FUNCTION(execSetAlwaysUpdate); \
	DECLARE_FUNCTION(execGetAlwaysUpdate); \
	DECLARE_FUNCTION(execGetServerTimeInState); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execAreAllIncomingTransitionsFromAnAnyState); \
	DECLARE_FUNCTION(execAreAllOutgoingTransitionsFromAnAnyState); \
	DECLARE_FUNCTION(execGetPreviousActiveTransition); \
	DECLARE_FUNCTION(execGetPreviousActiveState); \
	DECLARE_FUNCTION(execGetPreviousStateByName); \
	DECLARE_FUNCTION(execGetNextStateByName); \
	DECLARE_FUNCTION(execGetNextStateByTransitionIndex); \
	DECLARE_FUNCTION(execGetTransitionByIndex); \
	DECLARE_FUNCTION(execSwitchToLinkedStateByTransition); \
	DECLARE_FUNCTION(execSwitchToLinkedStateByName); \
	DECLARE_FUNCTION(execSwitchToLinkedState); \
	DECLARE_FUNCTION(execGetTransitionToTake); \
	DECLARE_FUNCTION(execGetIncomingTransitions); \
	DECLARE_FUNCTION(execGetOutgoingTransitions); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsEntryState); \
	DECLARE_FUNCTION(execIsStateMachine); \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateUpdate); \
	DECLARE_FUNCTION(execOnStateBegin);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_EVENT_PARMS \
	struct SMStateInstance_Base_eventOnStateUpdate_Parms \
	{ \
		float DeltaSeconds; \
	};


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateInstance_Base(); \
	friend struct Z_Construct_UClass_USMStateInstance_Base_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance_Base, USMNodeInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance_Base)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateInstance_Base(); \
	friend struct Z_Construct_UClass_USMStateInstance_Base_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance_Base, USMNodeInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance_Base)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateInstance_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateInstance_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance_Base(USMStateInstance_Base&&); \
	NO_API USMStateInstance_Base(const USMStateInstance_Base&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance_Base(USMStateInstance_Base&&); \
	NO_API USMStateInstance_Base(const USMStateInstance_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance_Base); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USMStateInstance_Base)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_21_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateInstance_Base>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_RPC_WRAPPERS \
	virtual void OnStateShutdown_Implementation(); \
	virtual void OnStateInitialized_Implementation(); \
 \
	DECLARE_FUNCTION(execGetStateStackCount); \
	DECLARE_FUNCTION(execGetStateIndexInStack); \
	DECLARE_FUNCTION(execGetAllStatesInStackOfClass); \
	DECLARE_FUNCTION(execGetStackOwnerInstance); \
	DECLARE_FUNCTION(execGetStateInStackByClass); \
	DECLARE_FUNCTION(execGetStateInStack); \
	DECLARE_FUNCTION(execGetAllStateStackInstances); \
	DECLARE_FUNCTION(execOnStateShutdown); \
	DECLARE_FUNCTION(execOnStateInitialized);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateStackCount); \
	DECLARE_FUNCTION(execGetStateIndexInStack); \
	DECLARE_FUNCTION(execGetAllStatesInStackOfClass); \
	DECLARE_FUNCTION(execGetStackOwnerInstance); \
	DECLARE_FUNCTION(execGetStateInStackByClass); \
	DECLARE_FUNCTION(execGetStateInStack); \
	DECLARE_FUNCTION(execGetAllStateStackInstances); \
	DECLARE_FUNCTION(execOnStateShutdown); \
	DECLARE_FUNCTION(execOnStateInitialized);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_EVENT_PARMS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateInstance(); \
	friend struct Z_Construct_UClass_USMStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateInstance(); \
	friend struct Z_Construct_UClass_USMStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance(USMStateInstance&&); \
	NO_API USMStateInstance(const USMStateInstance&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance(USMStateInstance&&); \
	NO_API USMStateInstance(const USMStateInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMStateInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_491_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_494_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateInstance>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_RPC_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMEntryStateInstance(); \
	friend struct Z_Construct_UClass_USMEntryStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMEntryStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SMSystem"), SMSYSTEM_API) \
	DECLARE_SERIALIZER(USMEntryStateInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_INCLASS \
private: \
	static void StaticRegisterNativesUSMEntryStateInstance(); \
	friend struct Z_Construct_UClass_USMEntryStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMEntryStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SMSystem"), SMSYSTEM_API) \
	DECLARE_SERIALIZER(USMEntryStateInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMSYSTEM_API USMEntryStateInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMEntryStateInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMSYSTEM_API, USMEntryStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMEntryStateInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SMSYSTEM_API USMEntryStateInstance(USMEntryStateInstance&&); \
	SMSYSTEM_API USMEntryStateInstance(const USMEntryStateInstance&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SMSYSTEM_API USMEntryStateInstance(USMEntryStateInstance&&); \
	SMSYSTEM_API USMEntryStateInstance(const USMEntryStateInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMSYSTEM_API, USMEntryStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMEntryStateInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMEntryStateInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_575_PROLOG
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_578_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMEntryStateInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
