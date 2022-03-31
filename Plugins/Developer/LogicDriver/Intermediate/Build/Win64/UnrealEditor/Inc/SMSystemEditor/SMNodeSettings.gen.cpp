// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Configuration/SMNodeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNodeSettings() {}
// Cross Module References
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting;
	static UEnum* ESMEditorConstructionScriptProjectSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("ESMEditorConstructionScriptProjectSetting"));
		}
		return Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMEditorConstructionScriptProjectSetting>()
	{
		return ESMEditorConstructionScriptProjectSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::Enumerators[] = {
		{ "ESMEditorConstructionScriptProjectSetting::SM_Standard", (int64)ESMEditorConstructionScriptProjectSetting::SM_Standard },
		{ "ESMEditorConstructionScriptProjectSetting::SM_Compile", (int64)ESMEditorConstructionScriptProjectSetting::SM_Compile },
		{ "ESMEditorConstructionScriptProjectSetting::SM_Legacy", (int64)ESMEditorConstructionScriptProjectSetting::SM_Legacy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Configuration/SMNodeSettings.h" },
		{ "SM_Compile.Comment", "/** Run only on blueprint compile. */" },
		{ "SM_Compile.DisplayName", "Compile" },
		{ "SM_Compile.Name", "ESMEditorConstructionScriptProjectSetting::SM_Compile" },
		{ "SM_Compile.ToolTip", "Run only on blueprint compile." },
		{ "SM_Legacy.Comment", "/** Run only on initial instantiation. */" },
		{ "SM_Legacy.DisplayName", "Legacy" },
		{ "SM_Legacy.Name", "ESMEditorConstructionScriptProjectSetting::SM_Legacy" },
		{ "SM_Legacy.ToolTip", "Run only on initial instantiation." },
		{ "SM_Standard.Comment", "/** Run when the blueprint is modified or compiled. */" },
		{ "SM_Standard.DisplayName", "Standard" },
		{ "SM_Standard.Name", "ESMEditorConstructionScriptProjectSetting::SM_Standard" },
		{ "SM_Standard.ToolTip", "Run when the blueprint is modified or compiled." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystemEditor,
		nullptr,
		"ESMEditorConstructionScriptProjectSetting",
		"ESMEditorConstructionScriptProjectSetting",
		Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting()
	{
		if (!Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting.InnerSingleton, Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMNodeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMNodeSettings_h_Statics::EnumInfo[] = {
		{ ESMEditorConstructionScriptProjectSetting_StaticEnum, TEXT("ESMEditorConstructionScriptProjectSetting"), &Z_Registration_Info_UEnum_ESMEditorConstructionScriptProjectSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1408986972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMNodeSettings_h_3235257613(TEXT("/Script/SMSystemEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMNodeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMNodeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
