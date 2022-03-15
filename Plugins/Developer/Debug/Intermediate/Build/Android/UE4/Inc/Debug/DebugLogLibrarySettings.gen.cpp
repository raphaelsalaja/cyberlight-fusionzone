// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/Public/DebugLogLibrarySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugLogLibrarySettings() {}
// Cross Module References
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_ELoggingOptions();
	UPackage* Z_Construct_UPackage__Script_Debug();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogType();
	DEBUG_API UClass* Z_Construct_UClass_UDebugLogLibrarySettings_NoRegister();
	DEBUG_API UClass* Z_Construct_UClass_UDebugLogLibrarySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* ELoggingOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_ELoggingOptions, Z_Construct_UPackage__Script_Debug(), TEXT("ELoggingOptions"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<ELoggingOptions>()
	{
		return ELoggingOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoggingOptions(ELoggingOptions_StaticEnum, TEXT("/Script/Debug"), TEXT("ELoggingOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_ELoggingOptions_Hash() { return 1305583126U; }
	UEnum* Z_Construct_UEnum_Debug_ELoggingOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoggingOptions"), 0, Get_Z_Construct_UEnum_Debug_ELoggingOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LO_Viewport", (int64)LO_Viewport },
				{ "LO_Console", (int64)LO_Console },
				{ "LO_Both", (int64)LO_Both },
				{ "LO_NoLog", (int64)LO_NoLog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LO_Both.DisplayName", "Viewport and Console" },
				{ "LO_Both.Name", "LO_Both" },
				{ "LO_Console.DisplayName", "Console" },
				{ "LO_Console.Name", "LO_Console" },
				{ "LO_NoLog.DisplayName", "Disabled" },
				{ "LO_NoLog.Name", "LO_NoLog" },
				{ "LO_Viewport.DisplayName", "Viewport" },
				{ "LO_Viewport.Name", "LO_Viewport" },
				{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"ELoggingOptions",
				"ELoggingOptions",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogType, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogType"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogType>()
	{
		return EDebugLogType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogType(EDebugLogType_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogType_Hash() { return 440291988U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogType"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DL_Info", (int64)DL_Info },
				{ "DL_Success", (int64)DL_Success },
				{ "DL_Warning", (int64)DL_Warning },
				{ "DL_Error", (int64)DL_Error },
				{ "DL_Fatal", (int64)DL_Fatal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DL_Error.DisplayName", "Error" },
				{ "DL_Error.Name", "DL_Error" },
				{ "DL_Fatal.DisplayName", "Fatal" },
				{ "DL_Fatal.Name", "DL_Fatal" },
				{ "DL_Info.DisplayName", "Info" },
				{ "DL_Info.Name", "DL_Info" },
				{ "DL_Success.DisplayName", "Success" },
				{ "DL_Success.Name", "DL_Success" },
				{ "DL_Warning.DisplayName", "Warning" },
				{ "DL_Warning.Name", "DL_Warning" },
				{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogType",
				"EDebugLogType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDebugLogLibrarySettings::StaticRegisterNativesUDebugLogLibrarySettings()
	{
	}
	UClass* Z_Construct_UClass_UDebugLogLibrarySettings_NoRegister()
	{
		return UDebugLogLibrarySettings::StaticClass();
	}
	struct Z_Construct_UClass_UDebugLogLibrarySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData[];
#endif
		static void NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrashGameInShippingBuildConfiguration_MetaData[];
#endif
		static void NewProp_bCrashGameInShippingBuildConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashGameInShippingBuildConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfoColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WarningColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuccessColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewportLogKeys_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ViewportLogKeys_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportLogKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ViewportLogKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSpecifiers_MetaData[];
#endif
		static void NewProp_bEnableSpecifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSpecifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplaySpecifiersIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplaySpecifiersIn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogCategorySpecifiers_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogCategorySpecifiers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogCategorySpecifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LogCategorySpecifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLogContext_MetaData[];
#endif
		static void NewProp_bLogContext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLogContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayContextIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayContextIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugLogLibrarySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Debug,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DebugLogLibrarySettings.h" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Should we use Two's Compliment when converting a decimal number to a hexadecimal value on negative numbers?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Should we use Two's Compliment when converting a decimal number to a hexadecimal value on negative numbers?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = { "bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Should the game crash if any ULog functions are called in a shipping build configuration?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Should the game crash if any ULog functions are called in a shipping build configuration?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bCrashGameInShippingBuildConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration = { "bCrashGameInShippingBuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a standard message\n" },
		{ "DisplayName", "Default Color" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a standard message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor = { "InfoColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, InfoColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a error message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a error message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor = { "ErrorColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, ErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a warning message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a warning message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor = { "WarningColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, WarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a success message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a success message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor = { "SuccessColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, SuccessColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_ValueProp = { "ViewportLogKeys", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_Key_KeyProp = { "ViewportLogKeys_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The key to use when calling any logging functions that specify its corresponding name (case-insensitive)\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The key to use when calling any logging functions that specify its corresponding name (case-insensitive)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys = { "ViewportLogKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, ViewportLogKeys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_MetaData[] = {
		{ "Category", "Specifiers" },
		{ "Comment", "// If true, add a specifier text before the final output log message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "If true, add a specifier text before the final output log message" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bEnableSpecifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers = { "bEnableSpecifiers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn_MetaData[] = {
		{ "Category", "Specifiers" },
		{ "Comment", "// The place to display the category specifier text along side the final log message\n" },
		{ "EditCondition", "bEnableSpecifiers" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The place to display the category specifier text along side the final log message" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn = { "DisplaySpecifiersIn", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, DisplaySpecifiersIn), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_ValueProp = { "LogCategorySpecifiers", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_Key_KeyProp = { "LogCategorySpecifiers_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Debug_EDebugLogType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_MetaData[] = {
		{ "Category", "Specifiers" },
		{ "Comment", "// The tag specifers to use when logging in these categories\n" },
		{ "EditCondition", "bEnableSpecifiers" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The tag specifers to use when logging in these categories" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers = { "LogCategorySpecifiers", nullptr, (EPropertyFlags)0x0010000000004041, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, LogCategorySpecifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "// Display the context of a log message?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Display the context of a log message?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bLogContext = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext = { "bLogContext", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "// The place to display the context along side the final log message\n" },
		{ "EditCondition", "bLogContext" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The place to display the context along side the final log message" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn = { "DisplayContextIn", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, DisplayContextIn), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugLogLibrarySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugLogLibrarySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::ClassParams = {
		&UDebugLogLibrarySettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugLogLibrarySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugLogLibrarySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugLogLibrarySettings, 2666179357);
	template<> DEBUG_API UClass* StaticClass<UDebugLogLibrarySettings>()
	{
		return UDebugLogLibrarySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugLogLibrarySettings(Z_Construct_UClass_UDebugLogLibrarySettings, &UDebugLogLibrarySettings::StaticClass, TEXT("/Script/Debug"), TEXT("UDebugLogLibrarySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugLogLibrarySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
