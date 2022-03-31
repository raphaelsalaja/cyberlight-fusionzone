// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Blueprints/SMBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMBlueprint() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprint_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeBlueprint_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeBlueprint();
// End Cross Module References
	void USMBlueprint::StaticRegisterNativesUSMBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMBlueprint);
	UClass* Z_Construct_UClass_USMBlueprint_NoRegister()
	{
		return USMBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_USMBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewObject;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * State Machine Blueprints allow you to assemble a finite state machine which is capable of running normal Blueprint logic.\n * Any UObject instance may be passed as a context for the state machine.\n */" },
		{ "DisplayName", "State Machine Blueprint" },
		{ "IncludePath", "Blueprints/SMBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprint.h" },
		{ "ToolTip", "State Machine Blueprints allow you to assemble a finite state machine which is capable of running normal Blueprint logic.\nAny UObject instance may be passed as a context for the state machine." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprint_Statics::NewProp_PreviewObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMBlueprint_Statics::NewProp_PreviewObject = { "PreviewObject", nullptr, (EPropertyFlags)0x0040000800000008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMBlueprint, PreviewObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMBlueprint_Statics::NewProp_PreviewObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprint_Statics::NewProp_PreviewObject_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprint_Statics::NewProp_AssetVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMBlueprint_Statics::NewProp_AssetVersion = { "AssetVersion", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMBlueprint, AssetVersion), METADATA_PARAMS(Z_Construct_UClass_USMBlueprint_Statics::NewProp_AssetVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprint_Statics::NewProp_AssetVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMBlueprint_Statics::NewProp_PreviewObject,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMBlueprint_Statics::NewProp_AssetVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMBlueprint_Statics::ClassParams = {
		&USMBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMBlueprint()
	{
		if (!Z_Registration_Info_UClass_USMBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMBlueprint.OuterSingleton, Z_Construct_UClass_USMBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMBlueprint.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMBlueprint>()
	{
		return USMBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMBlueprint);
	void USMNodeBlueprint::StaticRegisterNativesUSMNodeBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMNodeBlueprint);
	UClass* Z_Construct_UClass_USMNodeBlueprint_NoRegister()
	{
		return USMNodeBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_USMNodeBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMNodeBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * [Logic Driver] Node Class Blueprints allow you to define custom classes for nodes within your State Machine Blueprint. Reusable logic can be encapsulated\n * here as well as the ability to take more direct control over state machines by gaining access to other node class instances. Additionally these classes\n * can be extended using C++.\n */" },
		{ "DisplayName", "Node Class Blueprint" },
		{ "IncludePath", "Blueprints/SMBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprint.h" },
		{ "ToolTip", "[Logic Driver] Node Class Blueprints allow you to define custom classes for nodes within your State Machine Blueprint. Reusable logic can be encapsulated\nhere as well as the ability to take more direct control over state machines by gaining access to other node class instances. Additionally these classes\ncan be extended using C++." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeBlueprint_Statics::NewProp_AssetVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprints/SMBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMNodeBlueprint_Statics::NewProp_AssetVersion = { "AssetVersion", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeBlueprint, AssetVersion), METADATA_PARAMS(Z_Construct_UClass_USMNodeBlueprint_Statics::NewProp_AssetVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeBlueprint_Statics::NewProp_AssetVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMNodeBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeBlueprint_Statics::NewProp_AssetVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMNodeBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMNodeBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMNodeBlueprint_Statics::ClassParams = {
		&USMNodeBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMNodeBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMNodeBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMNodeBlueprint()
	{
		if (!Z_Registration_Info_UClass_USMNodeBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMNodeBlueprint.OuterSingleton, Z_Construct_UClass_USMNodeBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMNodeBlueprint.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMNodeBlueprint>()
	{
		return USMNodeBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMNodeBlueprint);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Blueprints_SMBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Blueprints_SMBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMBlueprint, USMBlueprint::StaticClass, TEXT("USMBlueprint"), &Z_Registration_Info_UClass_USMBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMBlueprint), 801735790U) },
		{ Z_Construct_UClass_USMNodeBlueprint, USMNodeBlueprint::StaticClass, TEXT("USMNodeBlueprint"), &Z_Registration_Info_UClass_USMNodeBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMNodeBlueprint), 1680207157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Blueprints_SMBlueprint_h_1599020121(TEXT("/Script/SMSystem"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Blueprints_SMBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Blueprints_SMBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
