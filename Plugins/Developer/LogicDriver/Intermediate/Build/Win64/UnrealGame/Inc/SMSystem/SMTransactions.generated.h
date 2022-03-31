// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEM_SMTransactions_generated_h
#error "SMTransactions.generated.h already included, missing '#pragma once' in SMTransactions.h"
#endif
#define SMSYSTEM_SMTransactions_generated_h

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMTransaction_Base_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMTransaction_Base>();

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSMTransaction_Base Super;


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMInitializeTransaction>();

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSMTransaction_Base Super;


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMTransitionTransaction>();

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSMTransaction_Base Super;


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMActivateStateTransaction>();

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSMTransaction_Base Super;


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMFullSyncStateTransaction>();

#define FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSMTransaction_Base Super;


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMFullSyncTransaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMTransactions_h


#define FOREACH_ENUM_ESMTRANSACTIONTYPE(op) \
	op(ESMTransactionType::SM_Unknown) \
	op(ESMTransactionType::SM_Transition) \
	op(ESMTransactionType::SM_State) \
	op(ESMTransactionType::SM_FullSync) \
	op(ESMTransactionType::SM_Start) \
	op(ESMTransactionType::SM_Stop) \
	op(ESMTransactionType::SM_Initialize) \
	op(ESMTransactionType::SM_Shutdown) 

enum class ESMTransactionType : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMTransactionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
