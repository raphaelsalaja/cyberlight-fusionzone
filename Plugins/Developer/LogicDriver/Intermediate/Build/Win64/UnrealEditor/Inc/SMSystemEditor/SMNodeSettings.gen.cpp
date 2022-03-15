// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Configuration/SMNodeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNodeSettings() {}
// Cross Module References
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	static UEnum* ESMEditorConstructionScriptProjectSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("ESMEditorConstructionScriptProjectSetting"));
		}
		return Singleton;
	}
	template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMEditorConstructionScriptProjectSetting>()
	{
		return ESMEditorConstructionScriptProjectSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMEditorConstructionScriptProjectSetting(ESMEditorConstructionScriptProjectSetting_StaticEnum, TEXT("/Script/SMSystemEditor"), TEXT("ESMEditorConstructionScriptProjectSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Hash() { return 1007722010U; }
	UEnum* Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMEditorConstructionScriptProjectSetting"), 0, Get_Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESMEditorConstructionScriptProjectSetting::SM_Standard", (int64)ESMEditorConstructionScriptProjectSetting::SM_Standard },
				{ "ESMEditorConstructionScriptProjectSetting::SM_Compile", (int64)ESMEditorConstructionScriptProjectSetting::SM_Compile },
				{ "ESMEditorConstructionScriptProjectSetting::SM_Legacy", (int64)ESMEditorConstructionScriptProjectSetting::SM_Legacy },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystemEditor,
				nullptr,
				"ESMEditorConstructionScriptProjectSetting",
				"ESMEditorConstructionScriptProjectSetting",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
