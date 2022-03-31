// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Blueprints/SMBlueprintGeneratedClass.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMBlueprintGeneratedClass);
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
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_USMBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_USMBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMBlueprintGeneratedClass.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMBlueprintGeneratedClass>()
	{
		return USMBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMBlueprintGeneratedClass);
	void USMNodeBlueprintGeneratedClass::StaticRegisterNativesUSMNodeBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMNodeBlueprintGeneratedClass);
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
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMNodeBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_USMNodeBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMNodeBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_USMNodeBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMNodeBlueprintGeneratedClass.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMNodeBlueprintGeneratedClass>()
	{
		return USMNodeBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMNodeBlueprintGeneratedClass);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Blueprints_SMBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Blueprints_SMBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMBlueprintGeneratedClass, USMBlueprintGeneratedClass::StaticClass, TEXT("USMBlueprintGeneratedClass"), &Z_Registration_Info_UClass_USMBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMBlueprintGeneratedClass), 3048889898U) },
		{ Z_Construct_UClass_USMNodeBlueprintGeneratedClass, USMNodeBlueprintGeneratedClass::StaticClass, TEXT("USMNodeBlueprintGeneratedClass"), &Z_Registration_Info_UClass_USMNodeBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMNodeBlueprintGeneratedClass), 2335152335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Blueprints_SMBlueprintGeneratedClass_h_904796186(TEXT("/Script/SMSystem"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Blueprints_SMBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Blueprints_SMBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
