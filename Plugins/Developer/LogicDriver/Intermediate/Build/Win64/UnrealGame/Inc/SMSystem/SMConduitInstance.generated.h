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

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_RPC_WRAPPERS \
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


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEvalWithTransitions); \
	DECLARE_FUNCTION(execGetEvalWithTransitions); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execOnConduitShutdown); \
	DECLARE_FUNCTION(execOnConduitInitialized); \
	DECLARE_FUNCTION(execOnConduitEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_EVENT_PARMS \
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


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMConduitInstance(); \
	friend struct Z_Construct_UClass_USMConduitInstance_Statics; \
public: \
	DECLARE_CLASS(USMConduitInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMConduitInstance)


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSMConduitInstance(); \
	friend struct Z_Construct_UClass_USMConduitInstance_Statics; \
public: \
	DECLARE_CLASS(USMConduitInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMConduitInstance)


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_STANDARD_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMConduitInstance(USMConduitInstance&&); \
	NO_API USMConduitInstance(const USMConduitInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMConduitInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMConduitInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMConduitInstance)


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_12_PROLOG \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_EVENT_PARMS


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_INCLASS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMConduitInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
