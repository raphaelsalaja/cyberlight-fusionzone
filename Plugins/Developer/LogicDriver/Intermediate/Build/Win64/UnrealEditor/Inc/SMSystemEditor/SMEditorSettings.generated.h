// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEMEDITOR_SMEditorSettings_generated_h
#error "SMEditorSettings.generated.h already included, missing '#pragma once' in SMEditorSettings.h"
#endif
#define SMSYSTEMEDITOR_SMEditorSettings_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_RPC_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMEditorSettings(); \
	friend struct Z_Construct_UClass_USMEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USMEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(USMEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSMEditorSettings(); \
	friend struct Z_Construct_UClass_USMEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USMEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(USMEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMEditorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMEditorSettings(USMEditorSettings&&); \
	NO_API USMEditorSettings(const USMEditorSettings&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMEditorSettings(USMEditorSettings&&); \
	NO_API USMEditorSettings(const USMEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMEditorSettings)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_19_PROLOG
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEMEDITOR_API UClass* StaticClass<class USMEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMEditorSettings_h


#define FOREACH_ENUM_ESMJUMPTOGRAPHBEHAVIOR(op) \
	op(ESMJumpToGraphBehavior::PreferLocalGraph) \
	op(ESMJumpToGraphBehavior::PreferExternalGraph) 

enum class ESMJumpToGraphBehavior : uint8;
template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMJumpToGraphBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
