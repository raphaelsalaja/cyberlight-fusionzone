// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEBUG_DebugLogLibrarySettings_generated_h
#error "DebugLogLibrarySettings.generated.h already included, missing '#pragma once' in DebugLogLibrarySettings.h"
#endif
#define DEBUG_DebugLogLibrarySettings_generated_h

#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_SPARSE_DATA
#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_RPC_WRAPPERS
#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugLogLibrarySettings(); \
	friend struct Z_Construct_UClass_UDebugLogLibrarySettings_Statics; \
public: \
	DECLARE_CLASS(UDebugLogLibrarySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Debug"), NO_API) \
	DECLARE_SERIALIZER(UDebugLogLibrarySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDebugLogLibrarySettings(); \
	friend struct Z_Construct_UClass_UDebugLogLibrarySettings_Statics; \
public: \
	DECLARE_CLASS(UDebugLogLibrarySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Debug"), NO_API) \
	DECLARE_SERIALIZER(UDebugLogLibrarySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugLogLibrarySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugLogLibrarySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugLogLibrarySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugLogLibrarySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugLogLibrarySettings(UDebugLogLibrarySettings&&); \
	NO_API UDebugLogLibrarySettings(const UDebugLogLibrarySettings&); \
public:


#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugLogLibrarySettings(UDebugLogLibrarySettings&&); \
	NO_API UDebugLogLibrarySettings(const UDebugLogLibrarySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugLogLibrarySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugLogLibrarySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugLogLibrarySettings)


#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_31_PROLOG
#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_SPARSE_DATA \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_RPC_WRAPPERS \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_INCLASS \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_SPARSE_DATA \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEBUG_API UClass* StaticClass<class UDebugLogLibrarySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Debug_Source_Debug_Public_DebugLogLibrarySettings_h


#define FOREACH_ENUM_ELOGGINGOPTIONS(op) \
	op(LO_Viewport) \
	op(LO_Console) \
	op(LO_Both) \
	op(LO_NoLog) 
#define FOREACH_ENUM_EDEBUGLOGTYPE(op) \
	op(DL_Info) \
	op(DL_Success) \
	op(DL_Warning) \
	op(DL_Error) \
	op(DL_Fatal) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
