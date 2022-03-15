// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_StateMachineEntryNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateMachineEntryNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachine();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer();
// End Cross Module References
	void USMGraphNode_StateMachineEntryNode::StaticRegisterNativesUSMGraphNode_StateMachineEntryNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_NoRegister()
	{
		return USMGraphNode_StateMachineEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachineNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowParallelEntryStates_MetaData[];
#endif
		static void NewProp_bAllowParallelEntryStates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowParallelEntryStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Created for normal state machine UEdGraphs. */" },
		{ "IncludePath", "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
		{ "ToolTip", "Created for normal state machine UEdGraphs." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_StateMachineNode_MetaData[] = {
		{ "Category", "State Machines" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_StateMachineNode = { "StateMachineNode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_StateMachineEntryNode, StateMachineNode), Z_Construct_UScriptStruct_FSMStateMachine, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_StateMachineNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_StateMachineNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/** Allow more than one initial state. Setting this to false will clear all but one initial state. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
		{ "ToolTip", "Allow more than one initial state. Setting this to false will clear all but one initial state." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates_SetBit(void* Obj)
	{
		((USMGraphNode_StateMachineEntryNode*)Obj)->bAllowParallelEntryStates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates = { "bAllowParallelEntryStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_StateMachineEntryNode), &Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_StateMachineNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::NewProp_bAllowParallelEntryStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_StateMachineEntryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::ClassParams = {
		&USMGraphNode_StateMachineEntryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_StateMachineEntryNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphNode_StateMachineEntryNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphNode_StateMachineEntryNode, 2981951626);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_StateMachineEntryNode>()
	{
		return USMGraphNode_StateMachineEntryNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphNode_StateMachineEntryNode(Z_Construct_UClass_USMGraphNode_StateMachineEntryNode, &USMGraphNode_StateMachineEntryNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphNode_StateMachineEntryNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_StateMachineEntryNode);
	void USMGraphK2Node_StateMachineEntryNode::StaticRegisterNativesUSMGraphK2Node_StateMachineEntryNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_NoRegister()
	{
		return USMGraphK2Node_StateMachineEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachineNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Created by compiler for nested state machine entry points. */" },
		{ "IncludePath", "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
		{ "ToolTip", "Created by compiler for nested state machine entry points." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::NewProp_StateMachineNode_MetaData[] = {
		{ "Category", "State Machines" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateMachineEntryNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::NewProp_StateMachineNode = { "StateMachineNode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_StateMachineEntryNode, StateMachineNode), Z_Construct_UScriptStruct_FSMStateMachine, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::NewProp_StateMachineNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::NewProp_StateMachineNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::NewProp_StateMachineNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_StateMachineEntryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::ClassParams = {
		&USMGraphK2Node_StateMachineEntryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_StateMachineEntryNode, 2611388307);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_StateMachineEntryNode>()
	{
		return USMGraphK2Node_StateMachineEntryNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_StateMachineEntryNode(Z_Construct_UClass_USMGraphK2Node_StateMachineEntryNode, &USMGraphK2Node_StateMachineEntryNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_StateMachineEntryNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_StateMachineEntryNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
