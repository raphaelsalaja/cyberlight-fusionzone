// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Schema/SMGraphK2Schema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Schema() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Schema_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Schema();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMGraphK2Schema::StaticRegisterNativesUSMGraphK2Schema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphK2Schema);
	UClass* Z_Construct_UClass_USMGraphK2Schema_NoRegister()
	{
		return USMGraphK2Schema::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Schema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Schema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Schema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMGraphK2Schema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMGraphK2Schema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Schema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Schema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Schema_Statics::ClassParams = {
		&USMGraphK2Schema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Schema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Schema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Schema()
	{
		if (!Z_Registration_Info_UClass_USMGraphK2Schema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphK2Schema.OuterSingleton, Z_Construct_UClass_USMGraphK2Schema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphK2Schema.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Schema>()
	{
		return USMGraphK2Schema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Schema);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphK2Schema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphK2Schema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphK2Schema, USMGraphK2Schema::StaticClass, TEXT("USMGraphK2Schema"), &Z_Registration_Info_UClass_USMGraphK2Schema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphK2Schema), 1252907555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphK2Schema_h_3118951250(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphK2Schema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphK2Schema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
