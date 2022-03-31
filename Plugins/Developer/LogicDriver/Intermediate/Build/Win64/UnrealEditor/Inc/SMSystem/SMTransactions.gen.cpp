// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMTransactions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransactions() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMTransactionType();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransaction_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMInitializeTransaction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionTransaction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMActivateStateTransaction();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMFullSyncStateTransaction();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMFullSyncTransaction();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMTransactionType;
	static UEnum* ESMTransactionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMTransactionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMTransactionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMTransactionType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMTransactionType"));
		}
		return Z_Registration_Info_UEnum_ESMTransactionType.OuterSingleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMTransactionType>()
	{
		return ESMTransactionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::Enumerators[] = {
		{ "ESMTransactionType::SM_Unknown", (int64)ESMTransactionType::SM_Unknown },
		{ "ESMTransactionType::SM_Transition", (int64)ESMTransactionType::SM_Transition },
		{ "ESMTransactionType::SM_State", (int64)ESMTransactionType::SM_State },
		{ "ESMTransactionType::SM_FullSync", (int64)ESMTransactionType::SM_FullSync },
		{ "ESMTransactionType::SM_Start", (int64)ESMTransactionType::SM_Start },
		{ "ESMTransactionType::SM_Stop", (int64)ESMTransactionType::SM_Stop },
		{ "ESMTransactionType::SM_Initialize", (int64)ESMTransactionType::SM_Initialize },
		{ "ESMTransactionType::SM_Shutdown", (int64)ESMTransactionType::SM_Shutdown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "SM_FullSync.Name", "ESMTransactionType::SM_FullSync" },
		{ "SM_Initialize.Name", "ESMTransactionType::SM_Initialize" },
		{ "SM_Shutdown.Name", "ESMTransactionType::SM_Shutdown" },
		{ "SM_Start.Name", "ESMTransactionType::SM_Start" },
		{ "SM_State.Name", "ESMTransactionType::SM_State" },
		{ "SM_Stop.Name", "ESMTransactionType::SM_Stop" },
		{ "SM_Transition.Name", "ESMTransactionType::SM_Transition" },
		{ "SM_Unknown.Name", "ESMTransactionType::SM_Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		"ESMTransactionType",
		"ESMTransactionType",
		Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystem_ESMTransactionType()
	{
		if (!Z_Registration_Info_UEnum_ESMTransactionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMTransactionType.InnerSingleton, Z_Construct_UEnum_SMSystem_ESMTransactionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMTransactionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMTransaction_Base;
class UScriptStruct* FSMTransaction_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMTransaction_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMTransaction_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTransaction_Base, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTransaction_Base"));
	}
	return Z_Registration_Info_UScriptStruct_SMTransaction_Base.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTransaction_Base>()
{
	return FSMTransaction_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMTransaction_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransactionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransactionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriginatedFromServer_MetaData[];
#endif
		static void NewProp_bOriginatedFromServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriginatedFromServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTransaction_Base>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType_MetaData[] = {
		{ "Comment", "/**\n\x09 * The type of transaction, set automatically if required.\n\x09 * It might be possible to always calculate this locally through RPC rather than send it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "The type of transaction, set automatically if required.\nIt might be possible to always calculate this locally through RPC rather than send it." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType = { "TransactionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransaction_Base, TransactionType), Z_Construct_UEnum_SMSystem_ESMTransactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType_MetaData)) }; // 214140839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer_MetaData[] = {
		{ "Comment", "/**\n\x09 * If the server made the decision to send this transaction. Used to distinguish multicast calls that can be\n\x09 * executed from both the owning client or the server.\n\x09 * TODO: If we switch to direct channel updates this could likely go away, or may need to be replaced by an ID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "If the server made the decision to send this transaction. Used to distinguish multicast calls that can be\nexecuted from both the owning client or the server.\nTODO: If we switch to direct channel updates this could likely go away, or may need to be replaced by an ID." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer_SetBit(void* Obj)
	{
		((FSMTransaction_Base*)Obj)->bOriginatedFromServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer = { "bOriginatedFromServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransaction_Base), &Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_TransactionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewProp_bOriginatedFromServer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMTransaction_Base",
		sizeof(FSMTransaction_Base),
		alignof(FSMTransaction_Base),
		Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTransaction_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_SMTransaction_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMTransaction_Base.InnerSingleton, Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMTransaction_Base.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMInitializeTransaction>() == std::is_polymorphic<FSMTransaction_Base>(), "USTRUCT FSMInitializeTransaction cannot be polymorphic unless super FSMTransaction_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMInitializeTransaction;
class UScriptStruct* FSMInitializeTransaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMInitializeTransaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMInitializeTransaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMInitializeTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMInitializeTransaction"));
	}
	return Z_Registration_Info_UScriptStruct_SMInitializeTransaction.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMInitializeTransaction>()
{
	return FSMInitializeTransaction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Notify of initialization. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Notify of initialization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMInitializeTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInitializeTransaction, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewProp_Context_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewProp_Context,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMTransaction_Base,
		&NewStructOps,
		"SMInitializeTransaction",
		sizeof(FSMInitializeTransaction),
		alignof(FSMInitializeTransaction),
		Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMInitializeTransaction()
	{
		if (!Z_Registration_Info_UScriptStruct_SMInitializeTransaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMInitializeTransaction.InnerSingleton, Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMInitializeTransaction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMTransitionTransaction>() == std::is_polymorphic<FSMTransaction_Base>(), "USTRUCT FSMTransitionTransaction cannot be polymorphic unless super FSMTransaction_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMTransitionTransaction;
class UScriptStruct* FSMTransitionTransaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMTransitionTransaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMTransitionTransaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTransitionTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTransitionTransaction"));
	}
	return Z_Registration_Info_UScriptStruct_SMTransitionTransaction.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTransitionTransaction>()
{
	return FSMTransitionTransaction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalGuids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transition data to send across the network. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Transition data to send across the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTransitionTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_BaseGuid_MetaData[] = {
		{ "Comment", "/** The node path guid. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "The node path guid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_BaseGuid = { "BaseGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionTransaction, BaseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_BaseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_BaseGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids_Inner = { "AdditionalGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids_MetaData[] = {
		{ "Comment", "/**\n\x09 * Additional guids for a transaction. For transitions this can be source and destination states.\n\x09 * When using conduits that information may be required and can't be calculated from a single transition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Additional guids for a transaction. For transitions this can be source and destination states.\nWhen using conduits that information may be required and can't be calculated from a single transition." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids = { "AdditionalGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionTransaction, AdditionalGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Comment", "/** A UTC timestamp. Should be set manually. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "A UTC timestamp. Should be set manually." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionTransaction, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_ActiveTime_MetaData[] = {
		{ "Comment", "/** Source state's time in state. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Source state's time in state." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_ActiveTime = { "ActiveTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionTransaction, ActiveTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_ActiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_ActiveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_BaseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_AdditionalGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewProp_ActiveTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMTransaction_Base,
		&NewStructOps,
		"SMTransitionTransaction",
		sizeof(FSMTransitionTransaction),
		alignof(FSMTransitionTransaction),
		Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionTransaction()
	{
		if (!Z_Registration_Info_UScriptStruct_SMTransitionTransaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMTransitionTransaction.InnerSingleton, Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMTransitionTransaction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMActivateStateTransaction>() == std::is_polymorphic<FSMTransaction_Base>(), "USTRUCT FSMActivateStateTransaction cannot be polymorphic unless super FSMTransaction_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMActivateStateTransaction;
class UScriptStruct* FSMActivateStateTransaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMActivateStateTransaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMActivateStateTransaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMActivateStateTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMActivateStateTransaction"));
	}
	return Z_Registration_Info_UScriptStruct_SMActivateStateTransaction.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMActivateStateTransaction>()
{
	return FSMActivateStateTransaction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetAllParents_MetaData[];
#endif
		static void NewProp_bSetAllParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAllParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** States that need their active flag changed. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "States that need their active flag changed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMActivateStateTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_BaseGuid_MetaData[] = {
		{ "Comment", "/** The node path guid. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "The node path guid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_BaseGuid = { "BaseGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMActivateStateTransaction, BaseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_BaseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_BaseGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_TimeInState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_TimeInState = { "TimeInState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMActivateStateTransaction, TimeInState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_TimeInState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_TimeInState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FSMActivateStateTransaction*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMActivateStateTransaction), &Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents_SetBit(void* Obj)
	{
		((FSMActivateStateTransaction*)Obj)->bSetAllParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents = { "bSetAllParents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMActivateStateTransaction), &Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_BaseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_TimeInState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewProp_bSetAllParents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMTransaction_Base,
		&NewStructOps,
		"SMActivateStateTransaction",
		sizeof(FSMActivateStateTransaction),
		alignof(FSMActivateStateTransaction),
		Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMActivateStateTransaction()
	{
		if (!Z_Registration_Info_UScriptStruct_SMActivateStateTransaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMActivateStateTransaction.InnerSingleton, Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMActivateStateTransaction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMFullSyncStateTransaction>() == std::is_polymorphic<FSMTransaction_Base>(), "USTRUCT FSMFullSyncStateTransaction cannot be polymorphic unless super FSMTransaction_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction;
class UScriptStruct* FSMFullSyncStateTransaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMFullSyncStateTransaction"));
	}
	return Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMFullSyncStateTransaction>()
{
	return FSMFullSyncStateTransaction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Use for syncing the complete state of a state machine. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Use for syncing the complete state of a state machine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMFullSyncStateTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_BaseGuid_MetaData[] = {
		{ "Comment", "/** The node path guid. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "The node path guid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_BaseGuid = { "BaseGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMFullSyncStateTransaction, BaseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_BaseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_BaseGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_TimeInState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_TimeInState = { "TimeInState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMFullSyncStateTransaction, TimeInState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_TimeInState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_TimeInState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_BaseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewProp_TimeInState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMTransaction_Base,
		&NewStructOps,
		"SMFullSyncStateTransaction",
		sizeof(FSMFullSyncStateTransaction),
		alignof(FSMFullSyncStateTransaction),
		Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMFullSyncStateTransaction()
	{
		if (!Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction.InnerSingleton, Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMFullSyncTransaction>() == std::is_polymorphic<FSMTransaction_Base>(), "USTRUCT FSMFullSyncTransaction cannot be polymorphic unless super FSMTransaction_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMFullSyncTransaction;
class UScriptStruct* FSMFullSyncTransaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMFullSyncTransaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMFullSyncTransaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMFullSyncTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMFullSyncTransaction"));
	}
	return Z_Registration_Info_UScriptStruct_SMFullSyncTransaction.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMFullSyncTransaction>()
{
	return FSMFullSyncTransaction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasStarted_MetaData[];
#endif
		static void NewProp_bHasStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFromUserLoad_MetaData[];
#endif
		static void NewProp_bFromUserLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromUserLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Use for syncing the complete state of a state machine. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Use for syncing the complete state of a state machine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMFullSyncTransaction>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates_Inner = { "ActiveStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMFullSyncStateTransaction, METADATA_PARAMS(nullptr, 0) }; // 4116240503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates_MetaData[] = {
		{ "Comment", "/** All states which should be active. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "All states which should be active." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates = { "ActiveStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMFullSyncTransaction, ActiveStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates_MetaData)) }; // 4116240503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted_MetaData[] = {
		{ "Comment", "/** Has the state machine started already. */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "Has the state machine started already." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted_SetBit(void* Obj)
	{
		((FSMFullSyncTransaction*)Obj)->bHasStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted = { "bHasStarted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMFullSyncTransaction), &Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad_MetaData[] = {
		{ "Comment", "/**\n\x09 * User has specified to load these states by calling LoadFromState.\n\x09 * Consider removing and instead relying on a 'start' transaction with guids.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMTransactions.h" },
		{ "ToolTip", "User has specified to load these states by calling LoadFromState.\nConsider removing and instead relying on a 'start' transaction with guids." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad_SetBit(void* Obj)
	{
		((FSMFullSyncTransaction*)Obj)->bFromUserLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad = { "bFromUserLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMFullSyncTransaction), &Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_ActiveStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bHasStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewProp_bFromUserLoad,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMTransaction_Base,
		&NewStructOps,
		"SMFullSyncTransaction",
		sizeof(FSMFullSyncTransaction),
		alignof(FSMFullSyncTransaction),
		Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMFullSyncTransaction()
	{
		if (!Z_Registration_Info_UScriptStruct_SMFullSyncTransaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMFullSyncTransaction.InnerSingleton, Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMFullSyncTransaction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics::EnumInfo[] = {
		{ ESMTransactionType_StaticEnum, TEXT("ESMTransactionType"), &Z_Registration_Info_UEnum_ESMTransactionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 214140839U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics::ScriptStructInfo[] = {
		{ FSMTransaction_Base::StaticStruct, Z_Construct_UScriptStruct_FSMTransaction_Base_Statics::NewStructOps, TEXT("SMTransaction_Base"), &Z_Registration_Info_UScriptStruct_SMTransaction_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMTransaction_Base), 2174435138U) },
		{ FSMInitializeTransaction::StaticStruct, Z_Construct_UScriptStruct_FSMInitializeTransaction_Statics::NewStructOps, TEXT("SMInitializeTransaction"), &Z_Registration_Info_UScriptStruct_SMInitializeTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMInitializeTransaction), 1446270759U) },
		{ FSMTransitionTransaction::StaticStruct, Z_Construct_UScriptStruct_FSMTransitionTransaction_Statics::NewStructOps, TEXT("SMTransitionTransaction"), &Z_Registration_Info_UScriptStruct_SMTransitionTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMTransitionTransaction), 170070432U) },
		{ FSMActivateStateTransaction::StaticStruct, Z_Construct_UScriptStruct_FSMActivateStateTransaction_Statics::NewStructOps, TEXT("SMActivateStateTransaction"), &Z_Registration_Info_UScriptStruct_SMActivateStateTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMActivateStateTransaction), 3155051850U) },
		{ FSMFullSyncStateTransaction::StaticStruct, Z_Construct_UScriptStruct_FSMFullSyncStateTransaction_Statics::NewStructOps, TEXT("SMFullSyncStateTransaction"), &Z_Registration_Info_UScriptStruct_SMFullSyncStateTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMFullSyncStateTransaction), 4116240503U) },
		{ FSMFullSyncTransaction::StaticStruct, Z_Construct_UScriptStruct_FSMFullSyncTransaction_Statics::NewStructOps, TEXT("SMFullSyncTransaction"), &Z_Registration_Info_UScriptStruct_SMFullSyncTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMFullSyncTransaction), 1697933704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_2293090872(TEXT("/Script/SMSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMTransactions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
