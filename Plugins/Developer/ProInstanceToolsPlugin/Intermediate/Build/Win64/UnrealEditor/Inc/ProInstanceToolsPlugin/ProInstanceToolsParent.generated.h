// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef PROINSTANCETOOLSPLUGIN_ProInstanceToolsParent_generated_h
#error "ProInstanceToolsParent.generated.h already included, missing '#pragma once' in ProInstanceToolsParent.h"
#endif
#define PROINSTANCETOOLSPLUGIN_ProInstanceToolsParent_generated_h

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceInstance_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceInstance>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceInstanceSettings>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceCurrentInstanceArrayContainer>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceCurrentInstanceContainer>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceScale_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceScale>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceRotation_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceRotation>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProInstanceLocation_Statics; \
	PROINSTANCETOOLSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<struct FProInstanceLocation>();

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBakeInstances); \
	DECLARE_FUNCTION(execRandomizeSeed); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execSetupInstances); \
	DECLARE_FUNCTION(execDestroyComponents);


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBakeInstances); \
	DECLARE_FUNCTION(execRandomizeSeed); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execSetupInstances); \
	DECLARE_FUNCTION(execDestroyComponents);


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProInstanceToolsParent(); \
	friend struct Z_Construct_UClass_AProInstanceToolsParent_Statics; \
public: \
	DECLARE_CLASS(AProInstanceToolsParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProInstanceToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProInstanceToolsParent)


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_INCLASS \
private: \
	static void StaticRegisterNativesAProInstanceToolsParent(); \
	friend struct Z_Construct_UClass_AProInstanceToolsParent_Statics; \
public: \
	DECLARE_CLASS(AProInstanceToolsParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProInstanceToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProInstanceToolsParent)


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProInstanceToolsParent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProInstanceToolsParent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProInstanceToolsParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProInstanceToolsParent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProInstanceToolsParent(AProInstanceToolsParent&&); \
	NO_API AProInstanceToolsParent(const AProInstanceToolsParent&); \
public:


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProInstanceToolsParent(AProInstanceToolsParent&&); \
	NO_API AProInstanceToolsParent(const AProInstanceToolsParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProInstanceToolsParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProInstanceToolsParent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProInstanceToolsParent)


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_PRIVATE_PROPERTY_OFFSET
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_227_PROLOG
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_INCLASS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<class AProInstanceToolsParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsParent_h


#define FOREACH_ENUM_EPROINSTANCEROTATETOACTORBYAXES(op) \
	op(RotateToActorByAxes_XYZ) \
	op(RotateToActorByAxes_XY) \
	op(RotateToActorByAxes_Z) 
#define FOREACH_ENUM_EPROINSTANCEINSTANCESELFOVERLAP(op) \
	op(InstanceSelfOverlap_Ignore) \
	op(InstanceSelfOverlap_Destroy) 
#define FOREACH_ENUM_EPROINSTANCEINSTANCETYPE(op) \
	op(InstanceType_StaticMesh) \
	op(InstanceType_ISM) \
	op(InstanceType_HISM) \
	op(InstanceType_ActorClass) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
