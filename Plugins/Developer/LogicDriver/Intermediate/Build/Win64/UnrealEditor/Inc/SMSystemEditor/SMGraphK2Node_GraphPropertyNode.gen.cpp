// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_GraphPropertyNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty();
// End Cross Module References
	void USMGraphK2Node_GraphPropertyNode::StaticRegisterNativesUSMGraphK2Node_GraphPropertyNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_NoRegister()
	{
		return USMGraphK2Node_GraphPropertyNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGraphProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeGraphProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_RuntimeGraphProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_RuntimeGraphProperty = { "RuntimeGraphProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_GraphPropertyNode, RuntimeGraphProperty), Z_Construct_UScriptStruct_FSMGraphProperty_Runtime, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_RuntimeGraphProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_RuntimeGraphProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_GraphProperty_MetaData[] = {
		{ "Category", "Graph Property" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_GraphPropertyNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_GraphProperty = { "GraphProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_GraphPropertyNode, GraphProperty), Z_Construct_UScriptStruct_FSMGraphProperty, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_GraphProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_GraphProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_RuntimeGraphProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::NewProp_GraphProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_GraphPropertyNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::ClassParams = {
		&USMGraphK2Node_GraphPropertyNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_GraphPropertyNode, 3112661806);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_GraphPropertyNode>()
	{
		return USMGraphK2Node_GraphPropertyNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_GraphPropertyNode(Z_Construct_UClass_USMGraphK2Node_GraphPropertyNode, &USMGraphK2Node_GraphPropertyNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_GraphPropertyNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_GraphPropertyNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
