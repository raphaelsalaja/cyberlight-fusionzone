// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEMEDITOR_SMProjectEditorSettings_generated_h
#error "SMProjectEditorSettings.generated.h already included, missing '#pragma once' in SMProjectEditorSettings.h"
#endif
#define SMSYSTEMEDITOR_SMProjectEditorSettings_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_RPC_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMProjectEditorSettings(); \
	friend struct Z_Construct_UClass_USMProjectEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USMProjectEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(USMProjectEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSMProjectEditorSettings(); \
	friend struct Z_Construct_UClass_USMProjectEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USMProjectEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(USMProjectEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMProjectEditorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMProjectEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMProjectEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMProjectEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMProjectEditorSettings(USMProjectEditorSettings&&); \
	NO_API USMProjectEditorSettings(const USMProjectEditorSettings&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMProjectEditorSettings(USMProjectEditorSettings&&); \
	NO_API USMProjectEditorSettings(const USMProjectEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMProjectEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMProjectEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMProjectEditorSettings)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_25_PROLOG
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEMEDITOR_API UClass* StaticClass<class USMProjectEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h


#define FOREACH_ENUM_ESMPINOVERRIDE(op) \
	op(ESMPinOverride::None) \
	op(ESMPinOverride::LogicDriverOnly) \
	op(ESMPinOverride::AllBlueprints) 

enum class ESMPinOverride : uint8;
template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMPinOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
