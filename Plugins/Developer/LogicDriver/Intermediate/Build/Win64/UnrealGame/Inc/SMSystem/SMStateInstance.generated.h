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

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_13_DELEGATE \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_12_DELEGATE \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_11_DELEGATE \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_RPC_WRAPPERS \
	virtual void OnRootStateMachineStop_Implementation(); \
	virtual void OnRootStateMachineStart_Implementation(); \
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
	DECLARE_FUNCTION(execGetPreviousActiveTransition); \
	DECLARE_FUNCTION(execGetPreviousActiveState); \
	DECLARE_FUNCTION(execGetPreviousStateByName); \
	DECLARE_FUNCTION(execGetNextStateByName); \
	DECLARE_FUNCTION(execGetNextStateByTransitionIndex); \
	DECLARE_FUNCTION(execGetTransitionByIndex); \
	DECLARE_FUNCTION(execSwitchToLinkedStateByName); \
	DECLARE_FUNCTION(execSwitchToLinkedState); \
	DECLARE_FUNCTION(execGetTransitionToTake); \
	DECLARE_FUNCTION(execGetIncomingTransitions); \
	DECLARE_FUNCTION(execGetOutgoingTransitions); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsStateMachine); \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execOnRootStateMachineStop); \
	DECLARE_FUNCTION(execOnRootStateMachineStart); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateUpdate); \
	DECLARE_FUNCTION(execOnStateBegin);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetPreviousActiveTransition); \
	DECLARE_FUNCTION(execGetPreviousActiveState); \
	DECLARE_FUNCTION(execGetPreviousStateByName); \
	DECLARE_FUNCTION(execGetNextStateByName); \
	DECLARE_FUNCTION(execGetNextStateByTransitionIndex); \
	DECLARE_FUNCTION(execGetTransitionByIndex); \
	DECLARE_FUNCTION(execSwitchToLinkedStateByName); \
	DECLARE_FUNCTION(execSwitchToLinkedState); \
	DECLARE_FUNCTION(execGetTransitionToTake); \
	DECLARE_FUNCTION(execGetIncomingTransitions); \
	DECLARE_FUNCTION(execGetOutgoingTransitions); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsStateMachine); \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execOnRootStateMachineStop); \
	DECLARE_FUNCTION(execOnRootStateMachineStart); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateUpdate); \
	DECLARE_FUNCTION(execOnStateBegin);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_EVENT_PARMS \
	struct SMStateInstance_Base_eventOnStateUpdate_Parms \
	{ \
		float DeltaSeconds; \
	};


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateInstance_Base(); \
	friend struct Z_Construct_UClass_USMStateInstance_Base_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance_Base, USMNodeInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance_Base)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateInstance_Base(); \
	friend struct Z_Construct_UClass_USMStateInstance_Base_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance_Base, USMNodeInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance_Base)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_STANDARD_CONSTRUCTORS \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance_Base(USMStateInstance_Base&&); \
	NO_API USMStateInstance_Base(const USMStateInstance_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance_Base); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USMStateInstance_Base)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAlwaysUpdate() { return STRUCT_OFFSET(USMStateInstance_Base, bAlwaysUpdate); } \
	FORCEINLINE static uint32 __PPO__bDisableTickTransitionEvaluation() { return STRUCT_OFFSET(USMStateInstance_Base, bDisableTickTransitionEvaluation); } \
	FORCEINLINE static uint32 __PPO__bDefaultToParallel() { return STRUCT_OFFSET(USMStateInstance_Base, bDefaultToParallel); } \
	FORCEINLINE static uint32 __PPO__bAllowParallelReentry() { return STRUCT_OFFSET(USMStateInstance_Base, bAllowParallelReentry); } \
	FORCEINLINE static uint32 __PPO__bStayActiveOnStateChange() { return STRUCT_OFFSET(USMStateInstance_Base, bStayActiveOnStateChange); } \
	FORCEINLINE static uint32 __PPO__bEvalTransitionsOnStart() { return STRUCT_OFFSET(USMStateInstance_Base, bEvalTransitionsOnStart); } \
	FORCEINLINE static uint32 __PPO__bExcludeFromAnyState() { return STRUCT_OFFSET(USMStateInstance_Base, bExcludeFromAnyState); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateInstance_Base>();

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_RPC_WRAPPERS \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_EVENT_PARMS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateInstance(); \
	friend struct Z_Construct_UClass_USMStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateInstance(); \
	friend struct Z_Construct_UClass_USMStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_STANDARD_CONSTRUCTORS \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance(USMStateInstance&&); \
	NO_API USMStateInstance(const USMStateInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMStateInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_PRIVATE_PROPERTY_OFFSET
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_425_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_428_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateInstance>();

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_RPC_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_RPC_WRAPPERS_NO_PURE_DECLS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMEntryStateInstance(); \
	friend struct Z_Construct_UClass_USMEntryStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMEntryStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SMSystem"), SMSYSTEM_API) \
	DECLARE_SERIALIZER(USMEntryStateInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_INCLASS \
private: \
	static void StaticRegisterNativesUSMEntryStateInstance(); \
	friend struct Z_Construct_UClass_USMEntryStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMEntryStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SMSystem"), SMSYSTEM_API) \
	DECLARE_SERIALIZER(USMEntryStateInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_STANDARD_CONSTRUCTORS \
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


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SMSYSTEM_API USMEntryStateInstance(USMEntryStateInstance&&); \
	SMSYSTEM_API USMEntryStateInstance(const USMEntryStateInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMSYSTEM_API, USMEntryStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMEntryStateInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMEntryStateInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_PRIVATE_PROPERTY_OFFSET
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_509_PROLOG
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_512_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMEntryStateInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
