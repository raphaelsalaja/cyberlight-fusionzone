// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedRuntime/Public/Properties/SMExtendedPropertyHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMExtendedPropertyHelpers() {}
// Cross Module References
	SMEXTENDEDRUNTIME_API UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers_NoRegister();
	SMEXTENDEDRUNTIME_API UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SMExtendedRuntime();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USMExtendedGraphPropertyHelpers::execObjectToText)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_InFunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USMExtendedGraphPropertyHelpers::ObjectToText(Z_Param_InObject,Z_Param_InFunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMExtendedGraphPropertyHelpers::execBreakTextGraphProperty)
	{
		P_GET_STRUCT_REF(FSMTextGraphProperty,Z_Param_Out_GraphProperty);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USMExtendedGraphPropertyHelpers::BreakTextGraphProperty(Z_Param_Out_GraphProperty,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void USMExtendedGraphPropertyHelpers::StaticRegisterNativesUSMExtendedGraphPropertyHelpers()
	{
		UClass* Class = USMExtendedGraphPropertyHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakTextGraphProperty", &USMExtendedGraphPropertyHelpers::execBreakTextGraphProperty },
			{ "ObjectToText", &USMExtendedGraphPropertyHelpers::execObjectToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics
	{
		struct SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms
		{
			FSMTextGraphProperty GraphProperty;
			FText Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphProperty;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty = { "GraphProperty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms, GraphProperty), Z_Construct_UScriptStruct_FSMTextGraphProperty, METADATA_PARAMS(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Property" },
		{ "Comment", "/** Evaluate a text graph property. */" },
		{ "ModuleRelativePath", "Public/Properties/SMExtendedPropertyHelpers.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Evaluate a text graph property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMExtendedGraphPropertyHelpers, nullptr, "BreakTextGraphProperty", nullptr, nullptr, sizeof(SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms), Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics
	{
		struct SMExtendedGraphPropertyHelpers_eventObjectToText_Parms
		{
			UObject* InObject;
			FName InFunctionName;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFunctionName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventObjectToText_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventObjectToText_Parms, InFunctionName), METADATA_PARAMS(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InFunctionName_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventObjectToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_InFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Graph Property" },
		{ "Comment", "/** Convert an object to text by dynamically looking up a `ToText` function on the object during run-time. */" },
		{ "ModuleRelativePath", "Public/Properties/SMExtendedPropertyHelpers.h" },
		{ "ToolTip", "Convert an object to text by dynamically looking up a `ToText` function on the object during run-time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMExtendedGraphPropertyHelpers, nullptr, "ObjectToText", nullptr, nullptr, sizeof(SMExtendedGraphPropertyHelpers_eventObjectToText_Parms), Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers_NoRegister()
	{
		return USMExtendedGraphPropertyHelpers::StaticClass();
	}
	struct Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty, "BreakTextGraphProperty" }, // 2111927163
		{ &Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_ObjectToText, "ObjectToText" }, // 1686405402
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/SMExtendedPropertyHelpers.h" },
		{ "ModuleRelativePath", "Public/Properties/SMExtendedPropertyHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMExtendedGraphPropertyHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::ClassParams = {
		&USMExtendedGraphPropertyHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMExtendedGraphPropertyHelpers, 780957337);
	template<> SMEXTENDEDRUNTIME_API UClass* StaticClass<USMExtendedGraphPropertyHelpers>()
	{
		return USMExtendedGraphPropertyHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMExtendedGraphPropertyHelpers(Z_Construct_UClass_USMExtendedGraphPropertyHelpers, &USMExtendedGraphPropertyHelpers::StaticClass, TEXT("/Script/SMExtendedRuntime"), TEXT("USMExtendedGraphPropertyHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMExtendedGraphPropertyHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
