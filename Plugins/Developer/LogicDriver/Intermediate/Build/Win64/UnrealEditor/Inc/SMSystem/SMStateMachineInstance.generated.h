// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMStateInstance_Base;
#ifdef SMSYSTEM_SMStateMachineInstance_generated_h
#error "SMStateMachineInstance.generated.h already included, missing '#pragma once' in SMStateMachineInstance.h"
#endif
#define SMSYSTEM_SMStateMachineInstance_generated_h

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_RPC_WRAPPERS \
	virtual void OnStateShutdown_Implementation(); \
	virtual void OnStateInitialized_Implementation(); \
	virtual void OnEndStateReached_Implementation(); \
	virtual void OnStateMachineCompleted_Implementation(); \
 \
	DECLARE_FUNCTION(execSetReuseIfNotEndState); \
	DECLARE_FUNCTION(execGetReuseIfNotEndState); \
	DECLARE_FUNCTION(execSetReuseCurrentState); \
	DECLARE_FUNCTION(execGetReuseCurrentState); \
	DECLARE_FUNCTION(execSetWaitForEndState); \
	DECLARE_FUNCTION(execGetWaitForEndState); \
	DECLARE_FUNCTION(execGetActiveStates); \
	DECLARE_FUNCTION(execGetEntryStates); \
	DECLARE_FUNCTION(execGetContainedStateByName); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execOnStateShutdown); \
	DECLARE_FUNCTION(execOnStateInitialized); \
	DECLARE_FUNCTION(execOnEndStateReached); \
	DECLARE_FUNCTION(execOnStateMachineCompleted);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReuseIfNotEndState); \
	DECLARE_FUNCTION(execGetReuseIfNotEndState); \
	DECLARE_FUNCTION(execSetReuseCurrentState); \
	DECLARE_FUNCTION(execGetReuseCurrentState); \
	DECLARE_FUNCTION(execSetWaitForEndState); \
	DECLARE_FUNCTION(execGetWaitForEndState); \
	DECLARE_FUNCTION(execGetActiveStates); \
	DECLARE_FUNCTION(execGetEntryStates); \
	DECLARE_FUNCTION(execGetContainedStateByName); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execOnStateShutdown); \
	DECLARE_FUNCTION(execOnStateInitialized); \
	DECLARE_FUNCTION(execOnEndStateReached); \
	DECLARE_FUNCTION(execOnStateMachineCompleted);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_EVENT_PARMS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateMachineInstance(); \
	friend struct Z_Construct_UClass_USMStateMachineInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateMachineInstance(); \
	friend struct Z_Construct_UClass_USMStateMachineInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineInstance(USMStateMachineInstance&&); \
	NO_API USMStateMachineInstance(const USMStateMachineInstance&); \
public:


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineInstance(USMStateMachineInstance&&); \
	NO_API USMStateMachineInstance(const USMStateMachineInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMStateMachineInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bWaitForEndState() { return STRUCT_OFFSET(USMStateMachineInstance, bWaitForEndState); } \
	FORCEINLINE static uint32 __PPO__bReuseCurrentState() { return STRUCT_OFFSET(USMStateMachineInstance, bReuseCurrentState); } \
	FORCEINLINE static uint32 __PPO__bReuseIfNotEndState() { return STRUCT_OFFSET(USMStateMachineInstance, bReuseIfNotEndState); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_16_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateMachineInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateMachineInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
