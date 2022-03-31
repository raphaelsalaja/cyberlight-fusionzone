// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEM_SMExposedFunctions_generated_h
#error "SMExposedFunctions.generated.h already included, missing '#pragma once' in SMExposedFunctions.h"
#endif
#define SMSYSTEM_SMExposedFunctions_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMExposedFunctionHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h


#define FOREACH_ENUM_ESMEXPOSEDFUNCTIONEXECUTIONTYPE(op) \
	op(ESMExposedFunctionExecutionType::SM_Graph) \
	op(ESMExposedFunctionExecutionType::SM_NodeInstance) \
	op(ESMExposedFunctionExecutionType::SM_None) 

enum class ESMExposedFunctionExecutionType : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMExposedFunctionExecutionType>();

#define FOREACH_ENUM_ESMCONDITIONALEVALUATIONTYPE(op) \
	op(ESMConditionalEvaluationType::SM_Graph) \
	op(ESMConditionalEvaluationType::SM_NodeInstance) \
	op(ESMConditionalEvaluationType::SM_AlwaysFalse) \
	op(ESMConditionalEvaluationType::SM_AlwaysTrue) 

enum class ESMConditionalEvaluationType : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMConditionalEvaluationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
