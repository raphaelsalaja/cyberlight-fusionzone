// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEM_SMTransition_generated_h
#error "SMTransition.generated.h already included, missing '#pragma once' in SMTransition.h"
#endif
#define SMSYSTEM_SMTransition_generated_h

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMTransition_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSMNode_Base Super;


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMTransition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h


#define FOREACH_ENUM_ESMCONDITIONALEVALUATIONTYPE(op) \
	op(ESMConditionalEvaluationType::SM_Graph) \
	op(ESMConditionalEvaluationType::SM_NodeInstance) \
	op(ESMConditionalEvaluationType::SM_AlwaysFalse) \
	op(ESMConditionalEvaluationType::SM_AlwaysTrue) 

enum class ESMConditionalEvaluationType : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMConditionalEvaluationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
