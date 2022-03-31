// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Graph/Schema/SMTextPropertyGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTextPropertyGraphSchema() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraphSchema_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraphSchema();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraphSchema();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
// End Cross Module References
	void USMTextPropertyGraphSchema::StaticRegisterNativesUSMTextPropertyGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMTextPropertyGraphSchema);
	UClass* Z_Construct_UClass_USMTextPropertyGraphSchema_NoRegister()
	{
		return USMTextPropertyGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USMTextPropertyGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMPropertyGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMTextPropertyGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMTextPropertyGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTextPropertyGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::ClassParams = {
		&USMTextPropertyGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTextPropertyGraphSchema()
	{
		if (!Z_Registration_Info_UClass_USMTextPropertyGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMTextPropertyGraphSchema.OuterSingleton, Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMTextPropertyGraphSchema.OuterSingleton;
	}
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMTextPropertyGraphSchema>()
	{
		return USMTextPropertyGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTextPropertyGraphSchema);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Schema_SMTextPropertyGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Schema_SMTextPropertyGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMTextPropertyGraphSchema, USMTextPropertyGraphSchema::StaticClass, TEXT("USMTextPropertyGraphSchema"), &Z_Registration_Info_UClass_USMTextPropertyGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMTextPropertyGraphSchema), 513429479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Schema_SMTextPropertyGraphSchema_h_1542002198(TEXT("/Script/SMExtendedEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Schema_SMTextPropertyGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Schema_SMTextPropertyGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
