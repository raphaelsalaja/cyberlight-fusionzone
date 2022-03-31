// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_StateMachineNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraph_NoRegister();
// End Cross Module References
	void USMGraphK2Node_StateMachineNode::StaticRegisterNativesUSMGraphK2Node_StateMachineNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphK2Node_StateMachineNode);
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineNode_NoRegister()
	{
		return USMGraphK2Node_StateMachineNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/SMGraphK2Node_StateMachineNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphK2Node_StateMachineNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphK2Node_StateMachineNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_StateMachineNode, BoundGraph), Z_Construct_UClass_USMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::NewProp_BoundGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_StateMachineNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::ClassParams = {
		&USMGraphK2Node_StateMachineNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineNode()
	{
		if (!Z_Registration_Info_UClass_USMGraphK2Node_StateMachineNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphK2Node_StateMachineNode.OuterSingleton, Z_Construct_UClass_USMGraphK2Node_StateMachineNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphK2Node_StateMachineNode.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_StateMachineNode>()
	{
		return USMGraphK2Node_StateMachineNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_StateMachineNode);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphK2Node_StateMachineNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphK2Node_StateMachineNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphK2Node_StateMachineNode, USMGraphK2Node_StateMachineNode::StaticClass, TEXT("USMGraphK2Node_StateMachineNode"), &Z_Registration_Info_UClass_USMGraphK2Node_StateMachineNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphK2Node_StateMachineNode), 2786992151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphK2Node_StateMachineNode_h_1894217973(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphK2Node_StateMachineNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphK2Node_StateMachineNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
