// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEM_SMConduitInstance_generated_h
#error "SMConduitInstance.generated.h already included, missing '#pragma once' in SMConduitInstance.h"
#endif
#define SMSYSTEM_SMConduitInstance_generated_h

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_RPC_WRAPPERS \
	virtual void OnConduitShutdown_Implementation(); \
	virtual void OnConduitInitialized_Implementation(); \
	virtual void OnConduitEntered_Implementation(); \
	virtual bool CanEnterTransition_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetEvalWithTransitions); \
	DECLARE_FUNCTION(execGetEvalWithTransitions); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execOnConduitShutdown); \
	DECLARE_FUNCTION(execOnConduitInitialized); \
	DECLARE_FUNCTION(execOnConduitEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEvalWithTransitions); \
	DECLARE_FUNCTION(execGetEvalWithTransitions); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execOnConduitShutdown); \
	DECLARE_FUNCTION(execOnConduitInitialized); \
	DECLARE_FUNCTION(execOnConduitEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_EVENT_PARMS \
	struct SMConduitInstance_eventCanEnterTransition_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMConduitInstance_eventCanEnterTransition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMConduitInstance(); \
	friend struct Z_Construct_UClass_USMConduitInstance_Statics; \
public: \
	DECLARE_CLASS(USMConduitInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMConduitInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSMConduitInstance(); \
	friend struct Z_Construct_UClass_USMConduitInstance_Statics; \
public: \
	DECLARE_CLASS(USMConduitInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMConduitInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMConduitInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMConduitInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMConduitInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMConduitInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMConduitInstance(USMConduitInstance&&); \
	NO_API USMConduitInstance(const USMConduitInstance&); \
public:


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMConduitInstance(USMConduitInstance&&); \
	NO_API USMConduitInstance(const USMConduitInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMConduitInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMConduitInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMConduitInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEvalWithTransitions() { return STRUCT_OFFSET(USMConduitInstance, bEvalWithTransitions); } \
	FORCEINLINE static uint32 __PPO__bCanEvaluate() { return STRUCT_OFFSET(USMConduitInstance, bCanEvaluate); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_13_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMConduitInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
