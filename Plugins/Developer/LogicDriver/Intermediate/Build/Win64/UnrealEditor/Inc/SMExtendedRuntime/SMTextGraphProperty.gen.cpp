// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedRuntime/Public/Properties/SMTextGraphProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTextGraphProperty() {}
// Cross Module References
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty();
	UPackage* Z_Construct_UPackage__Script_SMExtendedRuntime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextSerializer();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime();
// End Cross Module References

static_assert(std::is_polymorphic<FSMTextGraphProperty>() == std::is_polymorphic<FSMGraphProperty_Base>(), "USTRUCT FSMTextGraphProperty cannot be polymorphic unless super FSMGraphProperty_Base is polymorphic");

class UScriptStruct* FSMTextGraphProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMEXTENDEDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTextGraphProperty, Z_Construct_UPackage__Script_SMExtendedRuntime(), TEXT("SMTextGraphProperty"), sizeof(FSMTextGraphProperty), Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Hash());
	}
	return Singleton;
}
template<> SMEXTENDEDRUNTIME_API UScriptStruct* StaticStruct<FSMTextGraphProperty>()
{
	return FSMTextGraphProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTextGraphProperty(FSMTextGraphProperty::StaticStruct, TEXT("/Script/SMExtendedRuntime"), TEXT("SMTextGraphProperty"), false, nullptr, nullptr);
static struct FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextGraphProperty
{
	FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextGraphProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTextGraphProperty")),new UScriptStruct::TCppStructOps<FSMTextGraphProperty>);
	}
} ScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextGraphProperty;
	struct Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextSerializer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextSerializer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09""For Logic Driver node classes only.\n\x09\n\x09The state machine graph node which owns the class will display this property\n\x09""as an editable text box directly on the node and create a blueprint graph\n\x09to parse the text.\n */" },
		{ "DisplayName", "SM Text Graph Property" },
		{ "HasNativeBreak", "SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "For Logic Driver node classes only.\n\nThe state machine graph node which owns the class will display this property\nas an editable text box directly on the node and create a blueprint graph\nto parse the text." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTextGraphProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_Result_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextGraphProperty, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_TextSerializer_MetaData[] = {
		{ "Category", "Text Serializer" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_TextSerializer = { "TextSerializer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextGraphProperty, TextSerializer), Z_Construct_UScriptStruct_FSMTextSerializer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_TextSerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_TextSerializer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_WidgetInfo_MetaData[] = {
		{ "Category", "Node Widget" },
		{ "Comment", "/** Configure the widget display properties. */" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "Configure the widget display properties." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_WidgetInfo = { "WidgetInfo", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextGraphProperty, WidgetInfo), Z_Construct_UScriptStruct_FSMTextNodeWidgetInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_WidgetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_WidgetInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_TextSerializer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::NewProp_WidgetInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedRuntime,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base,
		&NewStructOps,
		"SMTextGraphProperty",
		sizeof(FSMTextGraphProperty),
		alignof(FSMTextGraphProperty),
		Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMExtendedRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTextGraphProperty"), sizeof(FSMTextGraphProperty), Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTextGraphProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Hash() { return 3993666280U; }

static_assert(std::is_polymorphic<FSMTextGraphProperty_Runtime>() == std::is_polymorphic<FSMGraphProperty_Base_Runtime>(), "USTRUCT FSMTextGraphProperty_Runtime cannot be polymorphic unless super FSMGraphProperty_Base_Runtime is polymorphic");

class UScriptStruct* FSMTextGraphProperty_Runtime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMEXTENDEDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime, Z_Construct_UPackage__Script_SMExtendedRuntime(), TEXT("SMTextGraphProperty_Runtime"), sizeof(FSMTextGraphProperty_Runtime), Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Hash());
	}
	return Singleton;
}
template<> SMEXTENDEDRUNTIME_API UScriptStruct* StaticStruct<FSMTextGraphProperty_Runtime>()
{
	return FSMTextGraphProperty_Runtime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTextGraphProperty_Runtime(FSMTextGraphProperty_Runtime::StaticStruct, TEXT("/Script/SMExtendedRuntime"), TEXT("SMTextGraphProperty_Runtime"), false, nullptr, nullptr);
static struct FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextGraphProperty_Runtime
{
	FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextGraphProperty_Runtime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTextGraphProperty_Runtime")),new UScriptStruct::TCppStructOps<FSMTextGraphProperty_Runtime>);
	}
} ScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextGraphProperty_Runtime;
	struct Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextSerializer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextSerializer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * DO NOT USE THIS DIRECTLY. Use FSMTextGraphProperty instead.\n * \n * Runtime variant of the text graph property for Logic Driver state machines.\n * This is automatically placed in state machine blueprints when FSMTextGraphProperty is used.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "DO NOT USE THIS DIRECTLY. Use FSMTextGraphProperty instead.\n\nRuntime variant of the text graph property for Logic Driver state machines.\nThis is automatically placed in state machine blueprints when FSMTextGraphProperty is used." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTextGraphProperty_Runtime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_Result_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextGraphProperty_Runtime, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_TextSerializer_MetaData[] = {
		{ "Category", "Text Serializer" },
		{ "Comment", "// ~FSMGraphProperty_Base_Runtime\n" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "~FSMGraphProperty_Base_Runtime" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_TextSerializer = { "TextSerializer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextGraphProperty_Runtime, TextSerializer), Z_Construct_UScriptStruct_FSMTextSerializer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_TextSerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_TextSerializer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::NewProp_TextSerializer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedRuntime,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime,
		&NewStructOps,
		"SMTextGraphProperty_Runtime",
		sizeof(FSMTextGraphProperty_Runtime),
		alignof(FSMTextGraphProperty_Runtime),
		Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMExtendedRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTextGraphProperty_Runtime"), sizeof(FSMTextGraphProperty_Runtime), Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime_Hash() { return 777932282U; }
class UScriptStruct* FSMTextSerializer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMEXTENDEDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSMTextSerializer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTextSerializer, Z_Construct_UPackage__Script_SMExtendedRuntime(), TEXT("SMTextSerializer"), sizeof(FSMTextSerializer), Get_Z_Construct_UScriptStruct_FSMTextSerializer_Hash());
	}
	return Singleton;
}
template<> SMEXTENDEDRUNTIME_API UScriptStruct* StaticStruct<FSMTextSerializer>()
{
	return FSMTextSerializer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTextSerializer(FSMTextSerializer::StaticStruct, TEXT("/Script/SMExtendedRuntime"), TEXT("SMTextSerializer"), false, nullptr, nullptr);
static struct FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextSerializer
{
	FScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextSerializer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTextSerializer")),new UScriptStruct::TCppStructOps<FSMTextSerializer>);
	}
} ScriptStruct_SMExtendedRuntime_StaticRegisterNativesFSMTextSerializer;
	struct Z_Construct_UScriptStruct_FSMTextSerializer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToTextDynamicFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToTextDynamicFunctionName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToTextFunctionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToTextFunctionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToTextFunctionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextSerializer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper for converting object data to text in FSMTextGraphProperty.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "Helper for converting object data to text in FSMTextGraphProperty." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTextSerializer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextDynamicFunctionName_MetaData[] = {
		{ "Category", "Text Conversion" },
		{ "Comment", "/**\n\x09* When an object is placed in the text graph this function will be dynamically found from the object and executed.\n\x09* The function should be pure and return only text.\n\x09*\n\x09* This is dynamically looked up during run-time.\n\x09*\n\x09* If empty no function is looked up.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "When an object is placed in the text graph this function will be dynamically found from the object and executed.\nThe function should be pure and return only text.\n\nThis is dynamically looked up during run-time.\n\nIf empty no function is looked up." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextDynamicFunctionName = { "ToTextDynamicFunctionName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextSerializer, ToTextDynamicFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextDynamicFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextDynamicFunctionName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames_Inner = { "ToTextFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames_MetaData[] = {
		{ "Category", "Text Conversion" },
		{ "Comment", "/**\n\x09 * When an object is placed in the text graph this function will be looked up from the object and executed.\n\x09 * The function should be pure and return only text.\n\x09 *\n\x09 * This function must exist on the class of the object placed in the text graph.\n\x09 *\n\x09 * If empty no function is looked up.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Properties/SMTextGraphProperty.h" },
		{ "ToolTip", "When an object is placed in the text graph this function will be looked up from the object and executed.\nThe function should be pure and return only text.\n\nThis function must exist on the class of the object placed in the text graph.\n\nIf empty no function is looked up." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames = { "ToTextFunctionNames", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTextSerializer, ToTextFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTextSerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextDynamicFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTextSerializer_Statics::NewProp_ToTextFunctionNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTextSerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedRuntime,
		nullptr,
		&NewStructOps,
		"SMTextSerializer",
		sizeof(FSMTextSerializer),
		alignof(FSMTextSerializer),
		Z_Construct_UScriptStruct_FSMTextSerializer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTextSerializer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTextSerializer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTextSerializer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMExtendedRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTextSerializer"), sizeof(FSMTextSerializer), Get_Z_Construct_UScriptStruct_FSMTextSerializer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTextSerializer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTextSerializer_Hash() { return 2180105616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
