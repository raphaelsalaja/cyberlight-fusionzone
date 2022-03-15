// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/RootNodes/SMGraphK2Node_TransitionInitializedNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_TransitionInitializedNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMGraphK2Node_TransitionInitializedNode::StaticRegisterNativesUSMGraphK2Node_TransitionInitializedNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_NoRegister()
	{
		return USMGraphK2Node_TransitionInitializedNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be used in Transition graphs and Conduit graphs when they're configured as transitions.\n */" },
		{ "IncludePath", "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionInitializedNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_TransitionInitializedNode.h" },
		{ "ToolTip", "Can be used in Transition graphs and Conduit graphs when they're configured as transitions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_TransitionInitializedNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::ClassParams = {
		&USMGraphK2Node_TransitionInitializedNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_TransitionInitializedNode, 720498992);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_TransitionInitializedNode>()
	{
		return USMGraphK2Node_TransitionInitializedNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_TransitionInitializedNode(Z_Construct_UClass_USMGraphK2Node_TransitionInitializedNode, &USMGraphK2Node_TransitionInitializedNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_TransitionInitializedNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_TransitionInitializedNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
