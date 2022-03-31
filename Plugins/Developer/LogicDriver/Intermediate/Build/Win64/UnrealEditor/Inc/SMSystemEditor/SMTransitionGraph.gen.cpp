// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/SMTransitionGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransitionGraph() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMTransitionGraph_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMTransitionGraph();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_NoRegister();
// End Cross Module References
	void USMTransitionGraph::StaticRegisterNativesUSMTransitionGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMTransitionGraph);
	UClass* Z_Construct_UClass_USMTransitionGraph_NoRegister()
	{
		return USMTransitionGraph::StaticClass();
	}
	struct Z_Construct_UClass_USMTransitionGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTransitionGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMTransitionGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/SMTransitionGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionGraph_Statics::NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMTransitionGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMTransitionGraph_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionGraph, ResultNode), Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMTransitionGraph_Statics::NewProp_ResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionGraph_Statics::NewProp_ResultNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTransitionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionGraph_Statics::NewProp_ResultNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTransitionGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTransitionGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMTransitionGraph_Statics::ClassParams = {
		&USMTransitionGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMTransitionGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMTransitionGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTransitionGraph()
	{
		if (!Z_Registration_Info_UClass_USMTransitionGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMTransitionGraph.OuterSingleton, Z_Construct_UClass_USMTransitionGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMTransitionGraph.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMTransitionGraph>()
	{
		return USMTransitionGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTransitionGraph);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMTransitionGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMTransitionGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMTransitionGraph, USMTransitionGraph::StaticClass, TEXT("USMTransitionGraph"), &Z_Registration_Info_UClass_USMTransitionGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMTransitionGraph), 164075158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMTransitionGraph_h_3607078222(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMTransitionGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMTransitionGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
