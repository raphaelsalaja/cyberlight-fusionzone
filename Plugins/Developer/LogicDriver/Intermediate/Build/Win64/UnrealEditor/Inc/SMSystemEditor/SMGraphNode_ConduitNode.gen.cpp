// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_ConduitNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_ConduitNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_ConduitNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_ConduitNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateNodeBase();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMConduitInstance_NoRegister();
// End Cross Module References
	void USMGraphNode_ConduitNode::StaticRegisterNativesUSMGraphNode_ConduitNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphNode_ConduitNode);
	UClass* Z_Construct_UClass_USMGraphNode_ConduitNode_NoRegister()
	{
		return USMGraphNode_ConduitNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_ConduitNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConduitClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConduitClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalWithTransitions_MetaData[];
#endif
		static void NewProp_bEvalWithTransitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalWithTransitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_StateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/SMGraphNode_ConduitNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_ConduitNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_ConduitClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Conduit" },
		{ "Comment", "/** Select a custom node class to use for this node. This can be a blueprint or C++ class. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_ConduitNode.h" },
		{ "ToolTip", "Select a custom node class to use for this node. This can be a blueprint or C++ class." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_ConduitClass = { "ConduitClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_ConduitNode, ConduitClass), Z_Construct_UClass_USMConduitInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_ConduitClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_ConduitClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_ConduitNode.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions_SetBit(void* Obj)
	{
		((USMGraphNode_ConduitNode*)Obj)->bEvalWithTransitions_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions = { "bEvalWithTransitions", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_ConduitNode), &Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_ConduitClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::NewProp_bEvalWithTransitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_ConduitNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::ClassParams = {
		&USMGraphNode_ConduitNode::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::PropPointers),
		0,
		0x008804A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_ConduitNode()
	{
		if (!Z_Registration_Info_UClass_USMGraphNode_ConduitNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphNode_ConduitNode.OuterSingleton, Z_Construct_UClass_USMGraphNode_ConduitNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphNode_ConduitNode.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_ConduitNode>()
	{
		return USMGraphNode_ConduitNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_ConduitNode);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_ConduitNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_ConduitNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphNode_ConduitNode, USMGraphNode_ConduitNode::StaticClass, TEXT("USMGraphNode_ConduitNode"), &Z_Registration_Info_UClass_USMGraphNode_ConduitNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphNode_ConduitNode), 3330260523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_ConduitNode_h_386187488(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_ConduitNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_ConduitNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
