// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_StateMachineParentNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_StateMachineParentNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateMachineParentNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateMachineParentNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateMachineStateNode();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraph_NoRegister();
// End Cross Module References
	void USMGraphNode_StateMachineParentNode::StaticRegisterNativesUSMGraphNode_StateMachineParentNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphNode_StateMachineParentNode);
	UClass* Z_Construct_UClass_USMGraphNode_StateMachineParentNode_NoRegister()
	{
		return USMGraphNode_StateMachineParentNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpandedGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_StateMachineStateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/SMGraphNode_StateMachineParentNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineParentNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Parent State Machine" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineParentNode.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000002010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_StateMachineParentNode, ParentClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ExpandedGraph_MetaData[] = {
		{ "Comment", "/** A cloned graph of the parent. Only valid during compile after ExpandParentNodes(). */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineParentNode.h" },
		{ "ToolTip", "A cloned graph of the parent. Only valid during compile after ExpandParentNodes()." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ExpandedGraph = { "ExpandedGraph", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_StateMachineParentNode, ExpandedGraph), Z_Construct_UClass_USMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ExpandedGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ExpandedGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::NewProp_ExpandedGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_StateMachineParentNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::ClassParams = {
		&USMGraphNode_StateMachineParentNode::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::PropPointers),
		0,
		0x008804A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_StateMachineParentNode()
	{
		if (!Z_Registration_Info_UClass_USMGraphNode_StateMachineParentNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphNode_StateMachineParentNode.OuterSingleton, Z_Construct_UClass_USMGraphNode_StateMachineParentNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphNode_StateMachineParentNode.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_StateMachineParentNode>()
	{
		return USMGraphNode_StateMachineParentNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_StateMachineParentNode);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_StateMachineParentNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_StateMachineParentNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphNode_StateMachineParentNode, USMGraphNode_StateMachineParentNode::StaticClass, TEXT("USMGraphNode_StateMachineParentNode"), &Z_Registration_Info_UClass_USMGraphNode_StateMachineParentNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphNode_StateMachineParentNode), 2475179830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_StateMachineParentNode_h_624687936(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_StateMachineParentNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_StateMachineParentNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
