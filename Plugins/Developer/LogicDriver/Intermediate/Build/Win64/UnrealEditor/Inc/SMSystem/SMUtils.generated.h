// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMInstance;
class UObject;
struct FLatentActionInfo;
#ifdef SMSYSTEM_SMUtils_generated_h
#error "SMUtils.generated.h already included, missing '#pragma once' in SMUtils.h"
#endif
#define SMSYSTEM_SMUtils_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateStateMachineInstanceFromTemplate); \
	DECLARE_FUNCTION(execK2_CreateStateMachineInstancePure); \
	DECLARE_FUNCTION(execK2_CreateStateMachineInstanceAsync); \
	DECLARE_FUNCTION(execK2_CreateStateMachineInstance);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateStateMachineInstanceFromTemplate); \
	DECLARE_FUNCTION(execK2_CreateStateMachineInstancePure); \
	DECLARE_FUNCTION(execK2_CreateStateMachineInstanceAsync); \
	DECLARE_FUNCTION(execK2_CreateStateMachineInstance);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMBlueprintUtils(); \
	friend struct Z_Construct_UClass_USMBlueprintUtils_Statics; \
public: \
	DECLARE_CLASS(USMBlueprintUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMBlueprintUtils)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSMBlueprintUtils(); \
	friend struct Z_Construct_UClass_USMBlueprintUtils_Statics; \
public: \
	DECLARE_CLASS(USMBlueprintUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMBlueprintUtils)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMBlueprintUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMBlueprintUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMBlueprintUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMBlueprintUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMBlueprintUtils(USMBlueprintUtils&&); \
	NO_API USMBlueprintUtils(const USMBlueprintUtils&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMBlueprintUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMBlueprintUtils(USMBlueprintUtils&&); \
	NO_API USMBlueprintUtils(const USMBlueprintUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMBlueprintUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMBlueprintUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMBlueprintUtils)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_15_PROLOG
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMBlueprintUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
