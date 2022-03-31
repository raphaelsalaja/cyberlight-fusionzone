// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMExposedFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMExposedFunctions() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType;
	static UEnum* ESMExposedFunctionExecutionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMExposedFunctionExecutionType"));
		}
		return Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType.OuterSingleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMExposedFunctionExecutionType>()
	{
		return ESMExposedFunctionExecutionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::Enumerators[] = {
		{ "ESMExposedFunctionExecutionType::SM_Graph", (int64)ESMExposedFunctionExecutionType::SM_Graph },
		{ "ESMExposedFunctionExecutionType::SM_NodeInstance", (int64)ESMExposedFunctionExecutionType::SM_NodeInstance },
		{ "ESMExposedFunctionExecutionType::SM_None", (int64)ESMExposedFunctionExecutionType::SM_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
		{ "SM_Graph.Name", "ESMExposedFunctionExecutionType::SM_Graph" },
		{ "SM_NodeInstance.Comment", "// BP Graph eval required\n" },
		{ "SM_NodeInstance.Name", "ESMExposedFunctionExecutionType::SM_NodeInstance" },
		{ "SM_NodeInstance.ToolTip", "BP Graph eval required" },
		{ "SM_None.Comment", "// Node instance only\n" },
		{ "SM_None.Name", "ESMExposedFunctionExecutionType::SM_None" },
		{ "SM_None.ToolTip", "Node instance only" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		"ESMExposedFunctionExecutionType",
		"ESMExposedFunctionExecutionType",
		Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType()
	{
		if (!Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType.InnerSingleton, Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMConditionalEvaluationType;
	static UEnum* ESMConditionalEvaluationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMConditionalEvaluationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMConditionalEvaluationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMConditionalEvaluationType"));
		}
		return Z_Registration_Info_UEnum_ESMConditionalEvaluationType.OuterSingleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMConditionalEvaluationType>()
	{
		return ESMConditionalEvaluationType_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::Enumerators[] = {
		{ "ESMConditionalEvaluationType::SM_Graph", (int64)ESMConditionalEvaluationType::SM_Graph },
		{ "ESMConditionalEvaluationType::SM_NodeInstance", (int64)ESMConditionalEvaluationType::SM_NodeInstance },
		{ "ESMConditionalEvaluationType::SM_AlwaysFalse", (int64)ESMConditionalEvaluationType::SM_AlwaysFalse },
		{ "ESMConditionalEvaluationType::SM_AlwaysTrue", (int64)ESMConditionalEvaluationType::SM_AlwaysTrue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
		{ "SM_AlwaysFalse.Comment", "// Node instance only \n" },
		{ "SM_AlwaysFalse.Name", "ESMConditionalEvaluationType::SM_AlwaysFalse" },
		{ "SM_AlwaysFalse.ToolTip", "Node instance only" },
		{ "SM_AlwaysTrue.Comment", "// Never eval graph and never take conditionally\n" },
		{ "SM_AlwaysTrue.Name", "ESMConditionalEvaluationType::SM_AlwaysTrue" },
		{ "SM_AlwaysTrue.ToolTip", "Never eval graph and never take conditionally" },
		{ "SM_Graph.Name", "ESMConditionalEvaluationType::SM_Graph" },
		{ "SM_NodeInstance.Comment", "// BP Graph eval required\n" },
		{ "SM_NodeInstance.Name", "ESMConditionalEvaluationType::SM_NodeInstance" },
		{ "SM_NodeInstance.ToolTip", "BP Graph eval required" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		"ESMConditionalEvaluationType",
		"ESMConditionalEvaluationType",
		Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType()
	{
		if (!Z_Registration_Info_UEnum_ESMConditionalEvaluationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMConditionalEvaluationType.InnerSingleton, Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMConditionalEvaluationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler;
class UScriptStruct* FSMExposedFunctionHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMExposedFunctionHandler, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMExposedFunctionHandler"));
	}
	return Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMExposedFunctionHandler>()
{
	return FSMExposedFunctionHandler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handles execution of functions exposed in blueprint graphs.\n * This is often wrapped in a TArray to reduce struct memory offsets\n * for garbage collection.\n */" },
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
		{ "ToolTip", "Handles execution of functions exposed in blueprint graphs.\nThis is often wrapped in a TArray to reduce struct memory offsets\nfor garbage collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMExposedFunctionHandler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction_MetaData[] = {
		{ "Comment", "/** Name of the graph function we will be evaluating. */" },
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
		{ "ToolTip", "Name of the graph function we will be evaluating." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction = { "BoundFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, BoundFunction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType_MetaData[] = {
		{ "Comment", "/** The type of execution for this function. */" },
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
		{ "ToolTip", "The type of execution for this function." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType = { "ExecutionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, ExecutionType), Z_Construct_UEnum_SMSystem_ESMExposedFunctionExecutionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType_MetaData)) }; // 777057326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMExposedFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, OwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_ExecutionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMExposedFunctionHandler",
		sizeof(FSMExposedFunctionHandler),
		alignof(FSMExposedFunctionHandler),
		Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler()
	{
		if (!Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler.InnerSingleton, Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics::EnumInfo[] = {
		{ ESMExposedFunctionExecutionType_StaticEnum, TEXT("ESMExposedFunctionExecutionType"), &Z_Registration_Info_UEnum_ESMExposedFunctionExecutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 777057326U) },
		{ ESMConditionalEvaluationType_StaticEnum, TEXT("ESMConditionalEvaluationType"), &Z_Registration_Info_UEnum_ESMConditionalEvaluationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 468032148U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics::ScriptStructInfo[] = {
		{ FSMExposedFunctionHandler::StaticStruct, Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewStructOps, TEXT("SMExposedFunctionHandler"), &Z_Registration_Info_UScriptStruct_SMExposedFunctionHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMExposedFunctionHandler), 163563912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_552592311(TEXT("/Script/SMSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMExposedFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
