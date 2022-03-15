// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Configuration/SMEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMEditorSettings() {}
// Cross Module References
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMPinOverride();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMEditorSettings_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	static UEnum* ESMPinOverride_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystemEditor_ESMPinOverride, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("ESMPinOverride"));
		}
		return Singleton;
	}
	template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMPinOverride>()
	{
		return ESMPinOverride_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMPinOverride(ESMPinOverride_StaticEnum, TEXT("/Script/SMSystemEditor"), TEXT("ESMPinOverride"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Hash() { return 1406907145U; }
	UEnum* Z_Construct_UEnum_SMSystemEditor_ESMPinOverride()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMPinOverride"), 0, Get_Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESMPinOverride::None", (int64)ESMPinOverride::None },
				{ "ESMPinOverride::LogicDriverOnly", (int64)ESMPinOverride::LogicDriverOnly },
				{ "ESMPinOverride::AllBlueprints", (int64)ESMPinOverride::AllBlueprints },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllBlueprints.Comment", "/** Override is for all blueprint types. */" },
				{ "AllBlueprints.Name", "ESMPinOverride::AllBlueprints" },
				{ "AllBlueprints.ToolTip", "Override is for all blueprint types." },
				{ "LogicDriverOnly.Comment", "/** Override is only for Logic Driver assets. */" },
				{ "LogicDriverOnly.Name", "ESMPinOverride::LogicDriverOnly" },
				{ "LogicDriverOnly.ToolTip", "Override is only for Logic Driver assets." },
				{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
				{ "None.Comment", "/** Override is disabled for all assets. Restart required. */" },
				{ "None.Name", "ESMPinOverride::None" },
				{ "None.ToolTip", "Override is disabled for all assets. Restart required." },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystemEditor,
				nullptr,
				"ESMPinOverride",
				"ESMPinOverride",
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
	void USMEditorSettings::StaticRegisterNativesUSMEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_USMEditorSettings_NoRegister()
	{
		return USMEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USMEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateDefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateDefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateWithLogicColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateWithLogicColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndStateColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndStateColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineDefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachineDefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineParentDefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachineParentDefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineWithLogicColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachineWithLogicColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnyStateDefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnyStateDefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateConnectionSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StateConnectionSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachineContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayStateStackClassNames_MetaData[];
#endif
		static void NewProp_bDisplayStateStackClassNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayStateStackClassNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableVisualCues_MetaData[];
#endif
		static void NewProp_bDisableVisualCues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableVisualCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEmptyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionEmptyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionValidColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionValidColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionHoverColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionHoverColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTransitionWithEntryLogicColor_MetaData[];
#endif
		static void NewProp_bEnableTransitionWithEntryLogicColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTransitionWithEntryLogicColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionWithEntryLogicColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionWithEntryLogicColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStateColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStateColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTransitionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTransitionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDisplayLastActiveState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplayLastActiveState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFadeLastActiveState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToFadeLastActiveState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFadeLastActiveTransition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToFadeLastActiveTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayTransitionEvaluation_MetaData[];
#endif
		static void NewProp_bDisplayTransitionEvaluation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayTransitionEvaluation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatingTransitionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluatingTransitionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnimations_MetaData[];
#endif
		static void NewProp_bEnableAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnimations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideActorSoftReferencePins_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideActorSoftReferencePins_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideActorSoftReferencePins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBlueprintToolbarExtenders_MetaData[];
#endif
		static void NewProp_bEnableBlueprintToolbarExtenders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBlueprintToolbarExtenders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBlueprintMenuExtenders_MetaData[];
#endif
		static void NewProp_bEnableBlueprintMenuExtenders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBlueprintMenuExtenders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Configuration/SMEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateDefaultColor_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateDefaultColor = { "StateDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateDefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateDefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateWithLogicColor_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** When a state has internal logic. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a state has internal logic." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateWithLogicColor = { "StateWithLogicColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateWithLogicColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateWithLogicColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateWithLogicColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EndStateColor_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** When a node is an end state. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a node is an end state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EndStateColor = { "EndStateColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, EndStateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EndStateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EndStateColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineDefaultColor_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineDefaultColor = { "StateMachineDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateMachineDefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineDefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineParentDefaultColor_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineParentDefaultColor = { "StateMachineParentDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateMachineParentDefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineParentDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineParentDefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineWithLogicColor_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** When a state machine has states. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a state machine has states." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineWithLogicColor = { "StateMachineWithLogicColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateMachineWithLogicColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineWithLogicColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineWithLogicColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_AnyStateDefaultColor_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_AnyStateDefaultColor = { "AnyStateDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, AnyStateDefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_AnyStateDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_AnyStateDefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateConnectionSize_MetaData[] = {
		{ "Category", "States" },
		{ "ClampMax", "15.0" },
		{ "ClampMin", "4.0" },
		{ "Comment", "/** The buffer size which accepts pins to create transitions. Open editors will need to be refreshed. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "The buffer size which accepts pins to create transitions. Open editors will need to be refreshed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateConnectionSize = { "StateConnectionSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateConnectionSize), METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateConnectionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateConnectionSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineContentPadding_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** The padding around the main content box for state machines. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "The padding around the main content box for state machines." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineContentPadding = { "StateMachineContentPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateMachineContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineContentPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateContentPadding_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** The padding around the main content box. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "The padding around the main content box." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateContentPadding = { "StateContentPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, StateContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateContentPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Displays the class name above state stack classes. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Displays the class name above state stack classes." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bDisplayStateStackClassNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames = { "bDisplayStateStackClassNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Prevent nodes from displaying overlay widgets indicating a special status, such as for intermediate graphs or waiting for an end state. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Prevent nodes from displaying overlay widgets indicating a special status, such as for intermediate graphs or waiting for an end state." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bDisableVisualCues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues = { "bDisableVisualCues", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionEmptyColor_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** When a transition evaluator has no input. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a transition evaluator has no input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionEmptyColor = { "TransitionEmptyColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TransitionEmptyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionEmptyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionEmptyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionValidColor_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** When the transition evaluator has input. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When the transition evaluator has input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionValidColor = { "TransitionValidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TransitionValidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionValidColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionValidColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionHoverColor_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** When a transition is hovered. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a transition is hovered." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionHoverColor = { "TransitionHoverColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TransitionHoverColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionHoverColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionHoverColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** Allow transitions with On Transition Entered logic to have a special color. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Allow transitions with On Transition Entered logic to have a special color." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bEnableTransitionWithEntryLogicColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor = { "bEnableTransitionWithEntryLogicColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionWithEntryLogicColor_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** When a transition has On Transition Entered logic. */" },
		{ "EditCondition", "bEnableTransitionWithEntryLogicColor" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a transition has On Transition Entered logic." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionWithEntryLogicColor = { "TransitionWithEntryLogicColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TransitionWithEntryLogicColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionWithEntryLogicColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionWithEntryLogicColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveStateColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** When a state is active during debug. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a state is active during debug." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveStateColor = { "ActiveStateColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, ActiveStateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveStateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveStateColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveTransitionColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** When a transition is active during debug. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a transition is active during debug." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveTransitionColor = { "ActiveTransitionColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, ActiveTransitionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveTransitionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveTransitionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToDisplayLastActiveState_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time in seconds before the last state starts to fade. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Time in seconds before the last state starts to fade." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToDisplayLastActiveState = { "TimeToDisplayLastActiveState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TimeToDisplayLastActiveState), METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToDisplayLastActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToDisplayLastActiveState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveState_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The fade time in seconds to hide the last active state. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "The fade time in seconds to hide the last active state." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveState = { "TimeToFadeLastActiveState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TimeToFadeLastActiveState), METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveTransition_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The fade time in seconds to hide the last active transition. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "The fade time in seconds to hide the last active transition." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveTransition = { "TimeToFadeLastActiveTransition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, TimeToFadeLastActiveTransition), METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Transitions that are evaluating will be highlighted in the editor during debug. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Transitions that are evaluating will be highlighted in the editor during debug." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bDisplayTransitionEvaluation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation = { "bDisplayTransitionEvaluation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EvaluatingTransitionColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** When a transition is evaluating during debug. */" },
		{ "EditCondition", "bDisplayTransitionEvaluation" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "When a transition is evaluating during debug." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EvaluatingTransitionColor = { "EvaluatingTransitionColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, EvaluatingTransitionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EvaluatingTransitionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EvaluatingTransitionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations_MetaData[] = {
		{ "Category", "Visual" },
		{ "Comment", "/** Show quick animations such as when a state is placed on a graph. */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Show quick animations such as when a state is placed on a graph." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bEnableAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations = { "bEnableAnimations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Logic Driver can add support to select soft actor references from UEdGraphPins. Unreal by default does not support this.\n\x09 * You can add support only to Logic Driver assets, to all blueprint assets, or disable completely.\n\x09 **/" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Logic Driver can add support to select soft actor references from UEdGraphPins. Unreal by default does not support this.\nYou can add support only to Logic Driver assets, to all blueprint assets, or disable completely." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins = { "OverrideActorSoftReferencePins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMEditorSettings, OverrideActorSoftReferencePins), Z_Construct_UEnum_SMSystemEditor_ESMPinOverride, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_MetaData[] = {
		{ "Category", "Plugin Compatibility" },
		{ "Comment", "/**\n\x09 * Add all Kismet toolbar extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Add all Kismet toolbar extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bEnableBlueprintToolbarExtenders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders = { "bEnableBlueprintToolbarExtenders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_MetaData[] = {
		{ "Category", "Plugin Compatibility" },
		{ "Comment", "/**\n\x09 * Add all Kismet menu extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMEditorSettings.h" },
		{ "ToolTip", "Add all Kismet menu extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver." },
	};
#endif
	void Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_SetBit(void* Obj)
	{
		((USMEditorSettings*)Obj)->bEnableBlueprintMenuExtenders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders = { "bEnableBlueprintMenuExtenders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMEditorSettings), &Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateDefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateWithLogicColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EndStateColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineDefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineParentDefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineWithLogicColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_AnyStateDefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateConnectionSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateMachineContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_StateContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayStateStackClassNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisableVisualCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionEmptyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionValidColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionHoverColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableTransitionWithEntryLogicColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TransitionWithEntryLogicColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveStateColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_ActiveTransitionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToDisplayLastActiveState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_TimeToFadeLastActiveTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bDisplayTransitionEvaluation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_EvaluatingTransitionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintToolbarExtenders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMEditorSettings_Statics::NewProp_bEnableBlueprintMenuExtenders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMEditorSettings_Statics::ClassParams = {
		&USMEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMEditorSettings, 1236801970);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMEditorSettings>()
	{
		return USMEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMEditorSettings(Z_Construct_UClass_USMEditorSettings, &USMEditorSettings::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
