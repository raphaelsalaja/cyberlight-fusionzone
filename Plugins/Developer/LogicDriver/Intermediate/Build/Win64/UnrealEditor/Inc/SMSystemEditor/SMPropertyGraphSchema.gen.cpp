// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Schema/SMPropertyGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMPropertyGraphSchema() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraphSchema_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraphSchema();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Schema();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMPropertyGraphSchema::StaticRegisterNativesUSMPropertyGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMPropertyGraphSchema);
	UClass* Z_Construct_UClass_USMPropertyGraphSchema_NoRegister()
	{
		return USMPropertyGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USMPropertyGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMPropertyGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Schema,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPropertyGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMPropertyGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMPropertyGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMPropertyGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMPropertyGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMPropertyGraphSchema_Statics::ClassParams = {
		&USMPropertyGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMPropertyGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMPropertyGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMPropertyGraphSchema()
	{
		if (!Z_Registration_Info_UClass_USMPropertyGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMPropertyGraphSchema.OuterSingleton, Z_Construct_UClass_USMPropertyGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMPropertyGraphSchema.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMPropertyGraphSchema>()
	{
		return USMPropertyGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMPropertyGraphSchema);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMPropertyGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMPropertyGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMPropertyGraphSchema, USMPropertyGraphSchema::StaticClass, TEXT("USMPropertyGraphSchema"), &Z_Registration_Info_UClass_USMPropertyGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMPropertyGraphSchema), 1230942514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMPropertyGraphSchema_h_3107200186(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMPropertyGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMPropertyGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
