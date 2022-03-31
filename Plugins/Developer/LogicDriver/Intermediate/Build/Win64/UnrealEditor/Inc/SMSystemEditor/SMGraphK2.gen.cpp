// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/SMGraphK2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMGraphK2::StaticRegisterNativesUSMGraphK2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphK2);
	UClass* Z_Construct_UClass_USMGraphK2_NoRegister()
	{
		return USMGraphK2::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMGraphK2.h" },
		{ "ModuleRelativePath", "Private/Graph/SMGraphK2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2_Statics::ClassParams = {
		&USMGraphK2::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2()
	{
		if (!Z_Registration_Info_UClass_USMGraphK2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphK2.OuterSingleton, Z_Construct_UClass_USMGraphK2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphK2.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2>()
	{
		return USMGraphK2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMGraphK2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMGraphK2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphK2, USMGraphK2::StaticClass, TEXT("USMGraphK2"), &Z_Registration_Info_UClass_USMGraphK2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphK2), 1113558046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMGraphK2_h_2635357225(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMGraphK2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMGraphK2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
