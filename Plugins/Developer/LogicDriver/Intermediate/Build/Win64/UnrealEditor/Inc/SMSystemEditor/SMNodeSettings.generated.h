// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEMEDITOR_SMNodeSettings_generated_h
#error "SMNodeSettings.generated.h already included, missing '#pragma once' in SMNodeSettings.h"
#endif
#define SMSYSTEMEDITOR_SMNodeSettings_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMNodeSettings_h


#define FOREACH_ENUM_ESMEDITORCONSTRUCTIONSCRIPTPROJECTSETTING(op) \
	op(ESMEditorConstructionScriptProjectSetting::SM_Standard) \
	op(ESMEditorConstructionScriptProjectSetting::SM_Compile) \
	op(ESMEditorConstructionScriptProjectSetting::SM_Legacy) 

enum class ESMEditorConstructionScriptProjectSetting : uint8;
template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMEditorConstructionScriptProjectSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
