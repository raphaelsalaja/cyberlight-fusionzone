// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_AnyStateNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_AnyStateNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateNodeBase();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void USMGraphNode_AnyStateNode::StaticRegisterNativesUSMGraphNode_AnyStateNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphNode_AnyStateNode);
	UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode_NoRegister()
	{
		return USMGraphNode_AnyStateNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnyStateTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnyStateTagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnyStateColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnyStateColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideColor_MetaData[];
#endif
		static void NewProp_bOverrideColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInitialReentry_MetaData[];
#endif
		static void NewProp_bAllowInitialReentry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInitialReentry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_StateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Nodes without a graph that just serve to transfer their transitions to all other USMGraphNode_StateNodeBase in a single SMGraph.\n */" },
		{ "IncludePath", "Graph/Nodes/SMGraphNode_AnyStateNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_AnyStateNode.h" },
		{ "ToolTip", "Nodes without a graph that just serve to transfer their transitions to all other USMGraphNode_StateNodeBase in a single SMGraph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateTagQuery_MetaData[] = {
		{ "Category", "Any State" },
		{ "Comment", "/**\n\x09 * Define a query to limit the number of states impacted by this Any State node.\n\x09 * Add tags to each state's AnyStateTags. Only valid in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_AnyStateNode.h" },
		{ "ToolTip", "Define a query to limit the number of states impacted by this Any State node.\nAdd tags to each state's AnyStateTags. Only valid in the editor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateTagQuery = { "AnyStateTagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_AnyStateNode, AnyStateTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateTagQuery_MetaData)) }; // 2452190958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateColor_MetaData[] = {
		{ "Category", "Any State" },
		{ "Comment", "/** Chose the color of the Any State, will override any tag colors. */" },
		{ "DisplayAfter", "bOverrideColor" },
		{ "EditCondition", "bOverrideColor" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_AnyStateNode.h" },
		{ "ToolTip", "Chose the color of the Any State, will override any tag colors." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateColor = { "AnyStateColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_AnyStateNode, AnyStateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor_MetaData[] = {
		{ "Category", "Any State" },
		{ "Comment", "/** Manually choose a color for this Any State. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_AnyStateNode.h" },
		{ "ToolTip", "Manually choose a color for this Any State." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor_SetBit(void* Obj)
	{
		((USMGraphNode_AnyStateNode*)Obj)->bOverrideColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor = { "bOverrideColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_AnyStateNode), &Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_MetaData[] = {
		{ "Category", "Any State" },
		{ "Comment", "/**\n\x09 * Allows the initial transitions to evaluate even when the active state is an initial state of this node.\n\x09 * Default behavior prevents this.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_AnyStateNode.h" },
		{ "ToolTip", "Allows the initial transitions to evaluate even when the active state is an initial state of this node.\nDefault behavior prevents this." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_SetBit(void* Obj)
	{
		((USMGraphNode_AnyStateNode*)Obj)->bAllowInitialReentry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry = { "bAllowInitialReentry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_AnyStateNode), &Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_AnyStateNode.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_AnyStateNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_AnyStateColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_AnyStateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::ClassParams = {
		&USMGraphNode_AnyStateNode::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::PropPointers),
		0,
		0x008804A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode()
	{
		if (!Z_Registration_Info_UClass_USMGraphNode_AnyStateNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphNode_AnyStateNode.OuterSingleton, Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphNode_AnyStateNode.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_AnyStateNode>()
	{
		return USMGraphNode_AnyStateNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_AnyStateNode);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_AnyStateNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_AnyStateNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphNode_AnyStateNode, USMGraphNode_AnyStateNode::StaticClass, TEXT("USMGraphNode_AnyStateNode"), &Z_Registration_Info_UClass_USMGraphNode_AnyStateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphNode_AnyStateNode), 2436552044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_AnyStateNode_h_3965493925(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_AnyStateNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_AnyStateNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
