// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/RootNodes/SMGraphK2Node_TransitionResultNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_TransitionResultNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TransitionResultNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransition();
// End Cross Module References
	void USMGraphK2Node_TransitionResultNode::StaticRegisterNativesUSMGraphK2Node_TransitionResultNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_NoRegister()
	{
		return USMGraphK2Node_TransitionResultNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionResultNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_TransitionResultNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::NewProp_TransitionNode_MetaData[] = {
		{ "Category", "State Machines" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_TransitionResultNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::NewProp_TransitionNode = { "TransitionNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_TransitionResultNode, TransitionNode), Z_Construct_UScriptStruct_FSMTransition, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::NewProp_TransitionNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::NewProp_TransitionNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::NewProp_TransitionNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_TransitionResultNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::ClassParams = {
		&USMGraphK2Node_TransitionResultNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_TransitionResultNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_TransitionResultNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_TransitionResultNode, 3895890468);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_TransitionResultNode>()
	{
		return USMGraphK2Node_TransitionResultNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_TransitionResultNode(Z_Construct_UClass_USMGraphK2Node_TransitionResultNode, &USMGraphK2Node_TransitionResultNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_TransitionResultNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_TransitionResultNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
