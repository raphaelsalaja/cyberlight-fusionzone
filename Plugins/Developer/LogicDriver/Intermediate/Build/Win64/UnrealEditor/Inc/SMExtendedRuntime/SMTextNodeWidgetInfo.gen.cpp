// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedRuntime/Public/Properties/SMTextNodeWidgetInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTextNodeWidgetInfo() {}
// Cross Module References
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo();
	UPackage* Z_Construct_UPackage__Script_SMExtendedRuntime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle();
// End Cross Module References

static_assert(std::is_polymorphic<FSMTextNodeWidgetInfo>() == std::is_polymorphic<FSMTextDisplayWidgetInfo>(), "USTRUCT FSMTextNodeWidgetInfo cannot be polymorphic unless super FSMTextDisplayWidgetInfo is polymorphic");

class UScriptStruct* FSMTextNodeWidgetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMEXTENDEDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo, Z_Construct_UPackage__Script_SMExtendedRuntime(), TEXT("SMTextNodeWidgetInfo"), sizeof(FSMTextNodeWidgetInfo), Get_Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Hash());
	}
	return Singleton;
}
template<> SMEXTENDEDRUNTIME_API UScriptStruct* StaticStruct<FSMTextNodeWidgetInfo>()
{
	return FSMTextNodeWidgetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTextNodeWidgetInfo(FSMTextNodeWidgetInfo::StaticStruct, TEXT("/Script/SMExtendedRuntime"), TEXT("SMTextNodeWidgetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextNodeWidgetInfo
{
	FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextNodeWidgetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTextNodeWidgetInfo")),new UScriptStruct::TCppStructOps<FSMTextNodeWidgetInfo>);
	}
} ScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextNodeWidgetInfo;
	struct Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/SMTextNodeWidgetInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTextNodeWidgetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_EditableTextStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Properties/SMTextNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_EditableTextStyle = { "EditableTextStyle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextNodeWidgetInfo, EditableTextStyle), Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_EditableTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_EditableTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_WrapTextAt_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Properties/SMTextNodeWidgetInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_WrapTextAt = { "WrapTextAt", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextNodeWidgetInfo, WrapTextAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_WrapTextAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_WrapTextAt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_EditableTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::NewProp_WrapTextAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedRuntime,
		Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo,
		&NewStructOps,
		"SMTextNodeWidgetInfo",
		sizeof(FSMTextNodeWidgetInfo),
		alignof(FSMTextNodeWidgetInfo),
		Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMExtendedRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTextNodeWidgetInfo"), sizeof(FSMTextNodeWidgetInfo), Get_Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo_Hash() { return 1707721703U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
