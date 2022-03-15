// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_RuntimeNodeContainer() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RootNode();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference();
// End Cross Module References
	void USMGraphK2Node_RuntimeNodeContainer::StaticRegisterNativesUSMGraphK2Node_RuntimeNodeContainer()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_NoRegister()
	{
		return USMGraphK2Node_RuntimeNodeContainer::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerOwnerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOwnerGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_RootNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::NewProp_ContainerOwnerGuid_MetaData[] = {
		{ "Comment", "/** Generated during compile so this container can be found by references when placed on the consolidated event graph. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
		{ "ToolTip", "Generated during compile so this container can be found by references when placed on the consolidated event graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::NewProp_ContainerOwnerGuid = { "ContainerOwnerGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_RuntimeNodeContainer, ContainerOwnerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::NewProp_ContainerOwnerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::NewProp_ContainerOwnerGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::NewProp_ContainerOwnerGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_RuntimeNodeContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::ClassParams = {
		&USMGraphK2Node_RuntimeNodeContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_RuntimeNodeContainer, 2029473287);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_RuntimeNodeContainer>()
	{
		return USMGraphK2Node_RuntimeNodeContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_RuntimeNodeContainer(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeContainer, &USMGraphK2Node_RuntimeNodeContainer::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_RuntimeNodeContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_RuntimeNodeContainer);
	void USMGraphK2Node_RuntimeNodeReference::StaticRegisterNativesUSMGraphK2Node_RuntimeNodeReference()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_NoRegister()
	{
		return USMGraphK2Node_RuntimeNodeReference::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeNodeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeNodeGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerOwnerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOwnerGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_RootNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_RuntimeNodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_RuntimeNodeGuid = { "RuntimeNodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_RuntimeNodeReference, RuntimeNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_RuntimeNodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_RuntimeNodeGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_ContainerOwnerGuid_MetaData[] = {
		{ "Comment", "/** Set during compile to match id generated in this reference's owning container. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/RootNodes/SMGraphK2Node_RuntimeNodeContainer.h" },
		{ "ToolTip", "Set during compile to match id generated in this reference's owning container." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_ContainerOwnerGuid = { "ContainerOwnerGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_RuntimeNodeReference, ContainerOwnerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_ContainerOwnerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_ContainerOwnerGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_RuntimeNodeGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::NewProp_ContainerOwnerGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_RuntimeNodeReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::ClassParams = {
		&USMGraphK2Node_RuntimeNodeReference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_RuntimeNodeReference, 91001668);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_RuntimeNodeReference>()
	{
		return USMGraphK2Node_RuntimeNodeReference::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_RuntimeNodeReference(Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference, &USMGraphK2Node_RuntimeNodeReference::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_RuntimeNodeReference"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_RuntimeNodeReference);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
