// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Blueprints/SMBlueprintGeneratedClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMBlueprintGeneratedClass() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprintGeneratedClass_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeBlueprintGeneratedClass_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeBlueprintGeneratedClass();
// End Cross Module References
	void USMBlueprintGeneratedClass::StaticRegisterNativesUSMBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_USMBlueprintGeneratedClass_NoRegister()
	{
		return USMBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_USMBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/SMBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprintGeneratedClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::NewProp_RootGuid_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::NewProp_RootGuid = { "RootGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMBlueprintGeneratedClass, RootGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::NewProp_RootGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::NewProp_RootGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::NewProp_RootGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::ClassParams = {
		&USMBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMBlueprintGeneratedClass, 75576550);
	template<> SMSYSTEM_API UClass* StaticClass<USMBlueprintGeneratedClass>()
	{
		return USMBlueprintGeneratedClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMBlueprintGeneratedClass(Z_Construct_UClass_USMBlueprintGeneratedClass, &USMBlueprintGeneratedClass::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMBlueprintGeneratedClass);
	void USMNodeBlueprintGeneratedClass::StaticRegisterNativesUSMNodeBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_USMNodeBlueprintGeneratedClass_NoRegister()
	{
		return USMNodeBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/SMBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprintGeneratedClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMNodeBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::ClassParams = {
		&USMNodeBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMNodeBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMNodeBlueprintGeneratedClass, 1462587592);
	template<> SMSYSTEM_API UClass* StaticClass<USMNodeBlueprintGeneratedClass>()
	{
		return USMNodeBlueprintGeneratedClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMNodeBlueprintGeneratedClass(Z_Construct_UClass_USMNodeBlueprintGeneratedClass, &USMNodeBlueprintGeneratedClass::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMNodeBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMNodeBlueprintGeneratedClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
