// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Graph/SMTextPropertyGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTextPropertyGraph() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraph_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraph();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraph();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FormatText_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void USMTextPropertyGraph::StaticRegisterNativesUSMTextPropertyGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMTextPropertyGraph);
	UClass* Z_Construct_UClass_USMTextPropertyGraph_NoRegister()
	{
		return USMTextPropertyGraph::StaticClass();
	}
	struct Z_Construct_UClass_USMTextPropertyGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatTextNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FormatTextNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoredProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StoredProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StoredProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoredFunctions_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StoredFunctions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StoredFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichTextBody_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RichTextBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlainTextBody_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PlainTextBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlainStringBody_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlainStringBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTextPropertyGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMPropertyGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMTextPropertyGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode_MetaData[] = {
		{ "Comment", "/** The node used to format the text before the result node. */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "The node used to format the text before the result node." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode = { "FormatTextNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, FormatTextNode), Z_Construct_UClass_UK2Node_FormatText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_ValueProp = { "StoredProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_Key_KeyProp = { "StoredProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_MetaData[] = {
		{ "Comment", "/** Variable name to variable guid. */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "Variable name to variable guid." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties = { "StoredProperties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, StoredProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_ValueProp = { "StoredFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_Key_KeyProp = { "StoredFunctions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions = { "StoredFunctions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, StoredFunctions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody_MetaData[] = {
		{ "Comment", "/**\n\x09 * Rich processed text used for the text graph node to display.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "Rich processed text used for the text graph node to display." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody = { "RichTextBody", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, RichTextBody), METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody_MetaData[] = {
		{ "Comment", "/**\n\x09 * The plain text which is stored in the format text node.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "The plain text which is stored in the format text node." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody = { "PlainTextBody", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, PlainTextBody), METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainStringBody_MetaData[] = {
		{ "Comment", "/**\n\x09 * Cache of PlainBodyText. Useful for comparisons when PlainBodyText\n\x09 * has been automatically updated by a string table.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "Cache of PlainBodyText. Useful for comparisons when PlainBodyText\nhas been automatically updated by a string table." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainStringBody = { "PlainStringBody", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, PlainStringBody), METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainStringBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainStringBody_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTextPropertyGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainStringBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTextPropertyGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTextPropertyGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMTextPropertyGraph_Statics::ClassParams = {
		&USMTextPropertyGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMTextPropertyGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTextPropertyGraph()
	{
		if (!Z_Registration_Info_UClass_USMTextPropertyGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMTextPropertyGraph.OuterSingleton, Z_Construct_UClass_USMTextPropertyGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMTextPropertyGraph.OuterSingleton;
	}
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMTextPropertyGraph>()
	{
		return USMTextPropertyGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTextPropertyGraph);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_SMTextPropertyGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_SMTextPropertyGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMTextPropertyGraph, USMTextPropertyGraph::StaticClass, TEXT("USMTextPropertyGraph"), &Z_Registration_Info_UClass_USMTextPropertyGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMTextPropertyGraph), 830518840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_SMTextPropertyGraph_h_757004092(TEXT("/Script/SMExtendedEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_SMTextPropertyGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_SMTextPropertyGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
