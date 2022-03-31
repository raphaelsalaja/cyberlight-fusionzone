// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/SMStateGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMStateGraph() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMStateGraph_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMStateGraph();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateEntryNode_NoRegister();
// End Cross Module References
	void USMStateGraph::StaticRegisterNativesUSMStateGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMStateGraph);
	UClass* Z_Construct_UClass_USMStateGraph_NoRegister()
	{
		return USMStateGraph::StaticClass();
	}
	struct Z_Construct_UClass_USMStateGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMStateGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/SMStateGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMStateGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMStateGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateGraph, EntryNode), Z_Construct_UClass_USMGraphK2Node_StateEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMStateGraph_Statics::NewProp_EntryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateGraph_Statics::NewProp_EntryNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMStateGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateGraph_Statics::NewProp_EntryNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMStateGraph_Statics::ClassParams = {
		&USMStateGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMStateGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMStateGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateGraph()
	{
		if (!Z_Registration_Info_UClass_USMStateGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMStateGraph.OuterSingleton, Z_Construct_UClass_USMStateGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMStateGraph.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMStateGraph>()
	{
		return USMStateGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateGraph);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMStateGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMStateGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMStateGraph, USMStateGraph::StaticClass, TEXT("USMStateGraph"), &Z_Registration_Info_UClass_USMStateGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMStateGraph), 1535546558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMStateGraph_h_1231201872(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMStateGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMStateGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
