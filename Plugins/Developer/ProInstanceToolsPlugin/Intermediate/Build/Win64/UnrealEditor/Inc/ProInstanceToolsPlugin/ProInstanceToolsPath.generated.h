// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROINSTANCETOOLSPLUGIN_ProInstanceToolsPath_generated_h
#error "ProInstanceToolsPath.generated.h already included, missing '#pragma once' in ProInstanceToolsPath.h"
#endif
#define PROINSTANCETOOLSPLUGIN_ProInstanceToolsPath_generated_h

#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_RPC_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProInstanceToolsPath(); \
	friend struct Z_Construct_UClass_AProInstanceToolsPath_Statics; \
public: \
	DECLARE_CLASS(AProInstanceToolsPath, AProInstanceToolsParent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProInstanceToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProInstanceToolsPath)


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAProInstanceToolsPath(); \
	friend struct Z_Construct_UClass_AProInstanceToolsPath_Statics; \
public: \
	DECLARE_CLASS(AProInstanceToolsPath, AProInstanceToolsParent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProInstanceToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProInstanceToolsPath)


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProInstanceToolsPath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProInstanceToolsPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProInstanceToolsPath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProInstanceToolsPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProInstanceToolsPath(AProInstanceToolsPath&&); \
	NO_API AProInstanceToolsPath(const AProInstanceToolsPath&); \
public:


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProInstanceToolsPath(AProInstanceToolsPath&&); \
	NO_API AProInstanceToolsPath(const AProInstanceToolsPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProInstanceToolsPath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProInstanceToolsPath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProInstanceToolsPath)


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_PRIVATE_PROPERTY_OFFSET
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_17_PROLOG
#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_INCLASS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<class AProInstanceToolsPath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsPath_h


#define FOREACH_ENUM_EPROINSTANCETOOLSPATHPLACEMENTTYPE(op) \
	op(PathPlacementType_Distance) \
	op(PathPlacementType_SplinePoint) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
