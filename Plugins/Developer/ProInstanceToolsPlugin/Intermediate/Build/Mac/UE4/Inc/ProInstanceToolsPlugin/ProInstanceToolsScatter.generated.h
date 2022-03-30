// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROINSTANCETOOLSPLUGIN_ProInstanceToolsScatter_generated_h
#error "ProInstanceToolsScatter.generated.h already included, missing '#pragma once' in ProInstanceToolsScatter.h"
#endif
#define PROINSTANCETOOLSPLUGIN_ProInstanceToolsScatter_generated_h

#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_SPARSE_DATA
#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_RPC_WRAPPERS
#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProInstanceToolsScatter(); \
	friend struct Z_Construct_UClass_AProInstanceToolsScatter_Statics; \
public: \
	DECLARE_CLASS(AProInstanceToolsScatter, AProInstanceToolsParent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProInstanceToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProInstanceToolsScatter)


#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAProInstanceToolsScatter(); \
	friend struct Z_Construct_UClass_AProInstanceToolsScatter_Statics; \
public: \
	DECLARE_CLASS(AProInstanceToolsScatter, AProInstanceToolsParent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProInstanceToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProInstanceToolsScatter)


#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProInstanceToolsScatter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProInstanceToolsScatter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProInstanceToolsScatter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProInstanceToolsScatter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProInstanceToolsScatter(AProInstanceToolsScatter&&); \
	NO_API AProInstanceToolsScatter(const AProInstanceToolsScatter&); \
public:


#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProInstanceToolsScatter(AProInstanceToolsScatter&&); \
	NO_API AProInstanceToolsScatter(const AProInstanceToolsScatter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProInstanceToolsScatter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProInstanceToolsScatter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProInstanceToolsScatter)


#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_25_PROLOG
#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_SPARSE_DATA \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_RPC_WRAPPERS \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_INCLASS \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_SPARSE_DATA \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<class AProInstanceToolsScatter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ProInstanceToolsPlugin_Source_ProInstanceToolsPlugin_Private_ProInstanceToolsScatter_h


#define FOREACH_ENUM_EPROINSTANCESCATTERBOXPIVOTPOINT(op) \
	op(ScatterBoxPivotPoint_AtCenter) \
	op(ScatterBoxPivotPoint_AtCorner) 
#define FOREACH_ENUM_EPROINSTANCESCATTERPLACEMENTTYPE(op) \
	op(ScatterPlacementType_Box) \
	op(ScatterPlacementType_Sphere) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
