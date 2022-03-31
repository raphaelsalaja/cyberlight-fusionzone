// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEMEDITOR_NodeStackContainer_generated_h
#error "NodeStackContainer.generated.h already included, missing '#pragma once' in NodeStackContainer.h"
#endif
#define SMSYSTEMEDITOR_NodeStackContainer_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeStackContainer_Statics; \
	SMSYSTEMEDITOR_API static class UScriptStruct* StaticStruct();


template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<struct FNodeStackContainer>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateStackContainer_Statics; \
	SMSYSTEMEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FNodeStackContainer Super;


template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<struct FStateStackContainer>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransitionStackContainer_Statics; \
	SMSYSTEMEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FNodeStackContainer Super;


template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<struct FTransitionStackContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h


#define FOREACH_ENUM_ESMEXPRESSIONMODE(op) \
	op(ESMExpressionMode::AND) \
	op(ESMExpressionMode::OR) 

enum class ESMExpressionMode : uint8;
template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMExpressionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
