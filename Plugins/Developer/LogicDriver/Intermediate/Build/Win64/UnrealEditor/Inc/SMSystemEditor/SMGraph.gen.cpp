// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/SMGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraph() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraph_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void USMGraph::StaticRegisterNativesUSMGraph()
	{
	}
	UClass* Z_Construct_UClass_USMGraph_NoRegister()
	{
		return USMGraph::StaticClass();
	}
	struct Z_Construct_UClass_USMGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedContainerNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedContainerNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryContainerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemporaryContainerGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/SMGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraph_Statics::NewProp_GeneratedContainerNode_MetaData[] = {
		{ "Comment", "// Set by compiler -- stored on consolidated graph.\n" },
		{ "ModuleRelativePath", "Private/Graph/SMGraph.h" },
		{ "ToolTip", "Set by compiler -- stored on consolidated graph." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraph_Statics::NewProp_GeneratedContainerNode = { "GeneratedContainerNode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraph, GeneratedContainerNode), Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraph_Statics::NewProp_GeneratedContainerNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraph_Statics::NewProp_GeneratedContainerNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "Comment", "// Entry node within the state machine\n" },
		{ "ModuleRelativePath", "Private/Graph/SMGraph.h" },
		{ "ToolTip", "Entry node within the state machine" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraph, EntryNode), Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraph_Statics::NewProp_EntryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraph_Statics::NewProp_EntryNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraph_Statics::NewProp_TemporaryContainerGuid_MetaData[] = {
		{ "Comment", "/** Generated during compile to help with entry point creation. */" },
		{ "ModuleRelativePath", "Private/Graph/SMGraph.h" },
		{ "ToolTip", "Generated during compile to help with entry point creation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraph_Statics::NewProp_TemporaryContainerGuid = { "TemporaryContainerGuid", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraph, TemporaryContainerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMGraph_Statics::NewProp_TemporaryContainerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraph_Statics::NewProp_TemporaryContainerGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraph_Statics::NewProp_GeneratedContainerNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraph_Statics::NewProp_EntryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraph_Statics::NewProp_TemporaryContainerGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraph_Statics::ClassParams = {
		&USMGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraph, 4228097666);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraph>()
	{
		return USMGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraph(Z_Construct_UClass_USMGraph, &USMGraph::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
