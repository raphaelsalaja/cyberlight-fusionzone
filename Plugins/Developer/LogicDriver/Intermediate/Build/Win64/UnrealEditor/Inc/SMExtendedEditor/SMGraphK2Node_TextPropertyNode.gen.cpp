// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_TextPropertyNode() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty();
// End Cross Module References
	void USMGraphK2Node_TextPropertyNode::StaticRegisterNativesUSMGraphK2Node_TextPropertyNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphK2Node_TextPropertyNode);
	UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_NoRegister()
	{
		return USMGraphK2Node_TextPropertyNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTextProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeTextProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty = { "RuntimeTextProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_TextPropertyNode, RuntimeTextProperty), Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty_MetaData)) }; // 695363371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty_MetaData[] = {
		{ "Category", "Graph Property" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty = { "TextProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_TextPropertyNode, TextProperty), Z_Construct_UScriptStruct_FSMTextGraphProperty, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty_MetaData)) }; // 3845436528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_TextPropertyNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::ClassParams = {
		&USMGraphK2Node_TextPropertyNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode()
	{
		if (!Z_Registration_Info_UClass_USMGraphK2Node_TextPropertyNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphK2Node_TextPropertyNode.OuterSingleton, Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphK2Node_TextPropertyNode.OuterSingleton;
	}
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMGraphK2Node_TextPropertyNode>()
	{
		return USMGraphK2Node_TextPropertyNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_TextPropertyNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USMGraphK2Node_TextPropertyNode)
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Nodes_PropertyNodes_SMGraphK2Node_TextPropertyNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Nodes_PropertyNodes_SMGraphK2Node_TextPropertyNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphK2Node_TextPropertyNode, USMGraphK2Node_TextPropertyNode::StaticClass, TEXT("USMGraphK2Node_TextPropertyNode"), &Z_Registration_Info_UClass_USMGraphK2Node_TextPropertyNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphK2Node_TextPropertyNode), 287226883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Nodes_PropertyNodes_SMGraphK2Node_TextPropertyNode_h_2643571427(TEXT("/Script/SMExtendedEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Nodes_PropertyNodes_SMGraphK2Node_TextPropertyNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Graph_Nodes_PropertyNodes_SMGraphK2Node_TextPropertyNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
