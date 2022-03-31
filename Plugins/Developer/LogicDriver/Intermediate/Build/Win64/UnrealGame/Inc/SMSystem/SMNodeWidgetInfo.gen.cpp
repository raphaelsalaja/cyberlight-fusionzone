// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Properties/SMNodeWidgetInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNodeWidgetInfo() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNodeWidgetInfo();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EWidgetClipping();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo;
class UScriptStruct* FSMNodeWidgetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNodeWidgetInfo, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNodeWidgetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNodeWidgetInfo>()
{
	return FSMNodeWidgetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Clipping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clipping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Clipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForDefaultWidget_MetaData[];
#endif
		static void NewProp_bConsiderForDefaultWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForDefaultWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Info used in determining widget display on a node.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
		{ "ToolTip", "Info used in determining widget display on a node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNodeWidgetInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinWidth_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinWidth = { "MinWidth", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, MinWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, MaxWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, MinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "Comment", "/*\n\x09* @deprecated Use DisplayOrder metadata for native properties, or adjust the blueprint variable order in blueprints. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
		{ "ToolTip", "* @deprecated Use DisplayOrder metadata for native properties, or adjust the blueprint variable order in blueprints." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, DisplayOrder_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_DisplayOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_BackgroundColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping = { "Clipping", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeWidgetInfo, Clipping), Z_Construct_UEnum_SlateCore_EWidgetClipping, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping_MetaData)) }; // 1444779388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** When placing a new node the sgraph node widget will consider this node for editing text. */" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
		{ "ToolTip", "When placing a new node the sgraph node widget will consider this node for editing text." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget_SetBit(void* Obj)
	{
		((FSMNodeWidgetInfo*)Obj)->bConsiderForDefaultWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget = { "bConsiderForDefaultWidget", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMNodeWidgetInfo), &Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_DisplayOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_Clipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewProp_bConsiderForDefaultWidget,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNodeWidgetInfo",
		sizeof(FSMNodeWidgetInfo),
		alignof(FSMNodeWidgetInfo),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNodeWidgetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo.InnerSingleton, Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMTextDisplayWidgetInfo>() == std::is_polymorphic<FSMNodeWidgetInfo>(), "USTRUCT FSMTextDisplayWidgetInfo cannot be polymorphic unless super FSMNodeWidgetInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo;
class UScriptStruct* FSMTextDisplayWidgetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTextDisplayWidgetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTextDisplayWidgetInfo>()
{
	return FSMTextDisplayWidgetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDropBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnDropBackgroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Info used in determining text based widget display on a node.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
		{ "ToolTip", "Info used in determining text based widget display on a node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTextDisplayWidgetInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultText_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Default text to display when there is no object. */" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
		{ "ToolTip", "Default text to display when there is no object." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextDisplayWidgetInfo, DefaultText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultTextStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Style of default text. */" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
		{ "ToolTip", "Style of default text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultTextStyle = { "DefaultTextStyle", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextDisplayWidgetInfo, DefaultTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultTextStyle_MetaData)) }; // 2453068466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_OnDropBackgroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Properties/SMNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_OnDropBackgroundColor = { "OnDropBackgroundColor", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextDisplayWidgetInfo, OnDropBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_OnDropBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_OnDropBackgroundColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_DefaultTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewProp_OnDropBackgroundColor,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMNodeWidgetInfo,
		&NewStructOps,
		"SMTextDisplayWidgetInfo",
		sizeof(FSMTextDisplayWidgetInfo),
		alignof(FSMTextDisplayWidgetInfo),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo.InnerSingleton, Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Properties_SMNodeWidgetInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Properties_SMNodeWidgetInfo_h_Statics::ScriptStructInfo[] = {
		{ FSMNodeWidgetInfo::StaticStruct, Z_Construct_UScriptStruct_FSMNodeWidgetInfo_Statics::NewStructOps, TEXT("SMNodeWidgetInfo"), &Z_Registration_Info_UScriptStruct_SMNodeWidgetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMNodeWidgetInfo), 13301044U) },
		{ FSMTextDisplayWidgetInfo::StaticStruct, Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo_Statics::NewStructOps, TEXT("SMTextDisplayWidgetInfo"), &Z_Registration_Info_UScriptStruct_SMTextDisplayWidgetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMTextDisplayWidgetInfo), 392407362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Properties_SMNodeWidgetInfo_h_1962752199(TEXT("/Script/SMSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Properties_SMNodeWidgetInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Properties_SMNodeWidgetInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
