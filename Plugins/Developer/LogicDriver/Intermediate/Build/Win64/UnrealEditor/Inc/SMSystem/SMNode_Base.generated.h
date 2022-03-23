// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEM_SMNode_Base_generated_h
#error "SMNode_Base.generated.h already included, missing '#pragma once' in SMNode_Base.h"
#endif
#define SMSYSTEM_SMNode_Base_generated_h

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNode_Base_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMNode_Base_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Guid() { return STRUCT_OFFSET(FSMNode_Base, Guid); } \
	FORCEINLINE static uint32 __PPO__OwnerGuid() { return STRUCT_OFFSET(FSMNode_Base, OwnerGuid); } \
	FORCEINLINE static uint32 __PPO__PathGuid() { return STRUCT_OFFSET(FSMNode_Base, PathGuid); } \
	FORCEINLINE static uint32 __PPO__NodeName() { return STRUCT_OFFSET(FSMNode_Base, NodeName); } \
	FORCEINLINE static uint32 __PPO__TemplateName() { return STRUCT_OFFSET(FSMNode_Base, TemplateName); } \
	FORCEINLINE static uint32 __PPO__StackTemplateNames() { return STRUCT_OFFSET(FSMNode_Base, StackTemplateNames); } \
	FORCEINLINE static uint32 __PPO__StackNodeInstances() { return STRUCT_OFFSET(FSMNode_Base, StackNodeInstances); } \
	FORCEINLINE static uint32 __PPO__OwningInstance() { return STRUCT_OFFSET(FSMNode_Base, OwningInstance); } \
	FORCEINLINE static uint32 __PPO__NodeInstance() { return STRUCT_OFFSET(FSMNode_Base, NodeInstance); } \
	FORCEINLINE static uint32 __PPO__TemplateVariableGraphProperties() { return STRUCT_OFFSET(FSMNode_Base, TemplateVariableGraphProperties); } \
	FORCEINLINE static uint32 __PPO__NodeInstanceClass() { return STRUCT_OFFSET(FSMNode_Base, NodeInstanceClass); }


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMNode_Base>();

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNode_Base_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMActiveStateTransaction>();

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNode_Base_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMNetworkedTransaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNode_Base_h


#define FOREACH_ENUM_ESMTRANSACTIONTYPE(op) \
	op(ESMTransactionType::SM_Transition) \
	op(ESMTransactionType::SM_State) 

enum class ESMTransactionType : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMTransactionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
