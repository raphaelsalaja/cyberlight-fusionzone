// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/SMNodeInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNodeInstance() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMExecutionEnvironment();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNodeDescription();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMNodeInput();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister();
// End Cross Module References
	static UEnum* ESMExecutionEnvironment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMExecutionEnvironment, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMExecutionEnvironment"));
		}
		return Singleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMExecutionEnvironment>()
	{
		return ESMExecutionEnvironment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMExecutionEnvironment(ESMExecutionEnvironment_StaticEnum, TEXT("/Script/SMSystem"), TEXT("ESMExecutionEnvironment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystem_ESMExecutionEnvironment_Hash() { return 3811499309U; }
	UEnum* Z_Construct_UEnum_SMSystem_ESMExecutionEnvironment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMExecutionEnvironment"), 0, Get_Z_Construct_UEnum_SMSystem_ESMExecutionEnvironment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESMExecutionEnvironment::EditorExecution", (int64)ESMExecutionEnvironment::EditorExecution },
				{ "ESMExecutionEnvironment::GameExecution", (int64)ESMExecutionEnvironment::GameExecution },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EditorExecution.Comment", "/**\n\x09* This node is running for an editor state machine. This is generally only valid\n\x09* during editor time construction scripts. Use this to allow the construction script\n\x09* to set default values during compile instead of recalculating values during run-time.\n\x09*\n\x09* To configure editor construction script settings, go under\n\x09* Project Settings -> Logic Driver -> Editor Node Construction Script Setting.\n\x09*/" },
				{ "EditorExecution.Name", "ESMExecutionEnvironment::EditorExecution" },
				{ "EditorExecution.ToolTip", "This node is running for an editor state machine. This is generally only valid\nduring editor time construction scripts. Use this to allow the construction script\nto set default values during compile instead of recalculating values during run-time.\n\nTo configure editor construction script settings, go under\nProject Settings -> Logic Driver -> Editor Node Construction Script Setting." },
				{ "GameExecution.Comment", "/**\n\x09 * This node is running in a simulation or game.\n\x09 */" },
				{ "GameExecution.Name", "ESMExecutionEnvironment::GameExecution" },
				{ "GameExecution.ToolTip", "This node is running in a simulation or game." },
				{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
				nullptr,
				"ESMExecutionEnvironment",
				"ESMExecutionEnvironment",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSMNodeDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNodeDescription, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNodeDescription"), sizeof(FSMNodeDescription), Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNodeDescription>()
{
	return FSMNodeDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMNodeDescription(FSMNodeDescription::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMNodeDescription"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeDescription
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMNodeDescription")),new UScriptStruct::TCppStructOps<FSMNodeDescription>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMNodeDescription;
	struct Z_Construct_UScriptStruct_FSMNodeDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This information will be viewable when selecting new nodes or hovering over nodes.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "This information will be viewable when selecting new nodes or hovering over nodes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNodeDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The name of this node type. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The name of this node type." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Which category this should fall under. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Which category this should fall under." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeDescription, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The tooltip when selecting the action. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The tooltip when selecting the action." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeDescription, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNodeDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNodeDescription",
		sizeof(FSMNodeDescription),
		alignof(FSMNodeDescription),
		Z_Construct_UScriptStruct_FSMNodeDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNodeDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMNodeDescription"), sizeof(FSMNodeDescription), Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMNodeDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash() { return 154913704U; }
	DEFINE_FUNCTION(USMNodeInstance::execOnContextPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextPawnControllerChanged(Z_Param_Pawn,Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execResetVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execWithExecutionEnvironment)
	{
		P_GET_ENUM_REF(ESMExecutionEnvironment,Z_Param_Out_ExecutionEnvironment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WithExecutionEnvironment((ESMExecutionEnvironment&)(Z_Param_Out_ExecutionEnvironment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execIsEditorExecution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEditorExecution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execSetVariableHidden)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
		P_GET_UBOOL(Z_Param_bSetHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableHidden(Z_Param_VariableName,Z_Param_bSetHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execSetVariableReadOnly)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
		P_GET_UBOOL(Z_Param_bSetIsReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableReadOnly(Z_Param_VariableName,Z_Param_bSetIsReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execSetUseCustomIcon)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCustomIcon(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execSetUseCustomColor)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCustomColor(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execSetNodeColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNodeColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execSetDisplayName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayName(Z_Param_NewDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetNodePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execEvaluateGraphProperties)
	{
		P_GET_UBOOL(Z_Param_bTargetOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateGraphProperties(Z_Param_bTargetOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeIconTintColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetNodeIconTintColor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeIconSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetNodeIconSize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetNodeIcon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execHasUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execIsInEndState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInEndState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetTimeInState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeInState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNetworkInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<ISMStateMachineNetworkedInterface>*)Z_Param__Result=P_THIS->GetNetworkInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetOwningStateMachineNodeInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateMachineInstance**)Z_Param__Result=P_THIS->GetOwningStateMachineNodeInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetStateMachineInstance)
	{
		P_GET_UBOOL(Z_Param_bTopMostInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetStateMachineInstance(Z_Param_bTopMostInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execConstructionScript)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructionScript_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetContext();
		P_NATIVE_END;
	}
	static FName NAME_USMNodeInstance_ConstructionScript = FName(TEXT("ConstructionScript"));
	void USMNodeInstance::ConstructionScript()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_ConstructionScript),NULL);
	}
	static FName NAME_USMNodeInstance_GetNodeIcon = FName(TEXT("GetNodeIcon"));
	UTexture2D* USMNodeInstance::GetNodeIcon() const
	{
		SMNodeInstance_eventGetNodeIcon_Parms Parms;
		const_cast<USMNodeInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_GetNodeIcon),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USMNodeInstance_GetNodeIconSize = FName(TEXT("GetNodeIconSize"));
	FVector2D USMNodeInstance::GetNodeIconSize() const
	{
		SMNodeInstance_eventGetNodeIconSize_Parms Parms;
		const_cast<USMNodeInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_GetNodeIconSize),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USMNodeInstance_GetNodeIconTintColor = FName(TEXT("GetNodeIconTintColor"));
	FLinearColor USMNodeInstance::GetNodeIconTintColor() const
	{
		SMNodeInstance_eventGetNodeIconTintColor_Parms Parms;
		const_cast<USMNodeInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_GetNodeIconTintColor),&Parms);
		return Parms.ReturnValue;
	}
	void USMNodeInstance::StaticRegisterNativesUSMNodeInstance()
	{
		UClass* Class = USMNodeInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructionScript", &USMNodeInstance::execConstructionScript },
			{ "EvaluateGraphProperties", &USMNodeInstance::execEvaluateGraphProperties },
			{ "GetContext", &USMNodeInstance::execGetContext },
			{ "GetGuid", &USMNodeInstance::execGetGuid },
			{ "GetNetworkInterface", &USMNodeInstance::execGetNetworkInterface },
			{ "GetNodeIcon", &USMNodeInstance::execGetNodeIcon },
			{ "GetNodeIconSize", &USMNodeInstance::execGetNodeIconSize },
			{ "GetNodeIconTintColor", &USMNodeInstance::execGetNodeIconTintColor },
			{ "GetNodeName", &USMNodeInstance::execGetNodeName },
			{ "GetNodePosition", &USMNodeInstance::execGetNodePosition },
			{ "GetOwningStateMachineNodeInstance", &USMNodeInstance::execGetOwningStateMachineNodeInstance },
			{ "GetStateMachineInstance", &USMNodeInstance::execGetStateMachineInstance },
			{ "GetTimeInState", &USMNodeInstance::execGetTimeInState },
			{ "HasUpdated", &USMNodeInstance::execHasUpdated },
			{ "IsActive", &USMNodeInstance::execIsActive },
			{ "IsEditorExecution", &USMNodeInstance::execIsEditorExecution },
			{ "IsInEndState", &USMNodeInstance::execIsInEndState },
			{ "IsInitialized", &USMNodeInstance::execIsInitialized },
			{ "OnContextPawnControllerChanged", &USMNodeInstance::execOnContextPawnControllerChanged },
			{ "ResetVariables", &USMNodeInstance::execResetVariables },
			{ "SetDisplayName", &USMNodeInstance::execSetDisplayName },
			{ "SetNodeColor", &USMNodeInstance::execSetNodeColor },
			{ "SetUseCustomColor", &USMNodeInstance::execSetUseCustomColor },
			{ "SetUseCustomIcon", &USMNodeInstance::execSetUseCustomIcon },
			{ "SetVariableHidden", &USMNodeInstance::execSetVariableHidden },
			{ "SetVariableReadOnly", &USMNodeInstance::execSetVariableReadOnly },
			{ "WithExecutionEnvironment", &USMNodeInstance::execWithExecutionEnvironment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09* A construction script that runs in the editor when the blueprint is modified.\n\x09* During run-time it will run after all nodes have instantiated.\n\x09*\n\x09* CAUTION:\n\x09* Any values set here while running with editor execution will replace the\n\x09* instance default values in state machine graphs when that state machine is compiled.\n\x09*\n\x09* If construction scripts aren't working in the editor, you may need to adjust your\n\x09* settings to `Standard`.\n\x09* \n\x09* To configure editor construction script settings, go under\n\x09* Project Settings -> Logic Driver -> Editor Node Construction Script Setting.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "A construction script that runs in the editor when the blueprint is modified.\nDuring run-time it will run after all nodes have instantiated.\n\nCAUTION:\nAny values set here while running with editor execution will replace the\ninstance default values in state machine graphs when that state machine is compiled.\n\nIf construction scripts aren't working in the editor, you may need to adjust your\nsettings to `Standard`.\n\nTo configure editor construction script settings, go under\nProject Settings -> Logic Driver -> Editor Node Construction Script Setting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "ConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_ConstructionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics
	{
		struct SMNodeInstance_eventEvaluateGraphProperties_Parms
		{
			bool bTargetOnly;
		};
		static void NewProp_bTargetOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::NewProp_bTargetOnly_SetBit(void* Obj)
	{
		((SMNodeInstance_eventEvaluateGraphProperties_Parms*)Obj)->bTargetOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::NewProp_bTargetOnly = { "bTargetOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventEvaluateGraphProperties_Parms), &Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::NewProp_bTargetOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::NewProp_bTargetOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Evaluate graphs of properties exposed directly on this node.\n\x09 * @param bTargetOnly Only evaluate graph properties for the target node instance (such as a self target). Useful for only evaluating properties of select state stack instances.\n\x09 */" },
		{ "CPP_Default_bTargetOnly", "false" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Evaluate graphs of properties exposed directly on this node.\n@param bTargetOnly Only evaluate graph properties for the target node instance (such as a self target). Useful for only evaluating properties of select state stack instances." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "EvaluateGraphProperties", nullptr, nullptr, sizeof(SMNodeInstance_eventEvaluateGraphProperties_Parms), Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetContext_Statics
	{
		struct SMNodeInstance_eventGetContext_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetContext_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The object which this node is running for. Determined by the owning state machine. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The object which this node is running for. Determined by the owning state machine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetContext", nullptr, nullptr, sizeof(SMNodeInstance_eventGetContext_Parms), Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics
	{
		struct SMNodeInstance_eventGetGuid_Parms
		{
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Unique identifier taking into account qualified path. Unique across blueprints if called after Instance initialization. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Unique identifier taking into account qualified path. Unique across blueprints if called after Instance initialization." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetGuid", nullptr, nullptr, sizeof(SMNodeInstance_eventGetGuid_Parms), Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics
	{
		struct SMNodeInstance_eventGetNetworkInterface_Parms
		{
			TScriptInterface<ISMStateMachineNetworkedInterface> ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNetworkInterface_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Network" },
		{ "Comment", "/** Return the server interface if there is one. This may be null. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Return the server interface if there is one. This may be null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNetworkInterface", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNetworkInterface_Parms), Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/** Retrieve the icon representing this node. Null by default. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the icon representing this node. Null by default." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeIcon", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeIcon_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeIconSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/** Retrieve the size to use when displaying the icon. Leave 0,0 to auto size. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the size to use when displaying the icon. Leave 0,0 to auto size." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeIconSize", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeIconSize_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeIconTintColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/** Retrieve the tint to use when displaying the icon. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the tint to use when displaying the icon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeIconTintColor", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeIconTintColor_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics
	{
		struct SMNodeInstance_eventGetNodeName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Retrieve the node name. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the node name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeName", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeName_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics
	{
		struct SMNodeInstance_eventGetNodePosition_Parms
		{
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Retrieve the node position in the graph. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the node position in the graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodePosition", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodePosition_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics
	{
		struct SMNodeInstance_eventGetOwningStateMachineNodeInstance_Parms
		{
			USMStateMachineInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetOwningStateMachineNodeInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The instance of the direct state machine node this node is part of. Every node except the root state machine has an owning state machine node. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The instance of the direct state machine node this node is part of. Every node except the root state machine has an owning state machine node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetOwningStateMachineNodeInstance", nullptr, nullptr, sizeof(SMNodeInstance_eventGetOwningStateMachineNodeInstance_Parms), Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics
	{
		struct SMNodeInstance_eventGetStateMachineInstance_Parms
		{
			bool bTopMostInstance;
			USMInstance* ReturnValue;
		};
		static void NewProp_bTopMostInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTopMostInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance_SetBit(void* Obj)
	{
		((SMNodeInstance_eventGetStateMachineInstance_Parms*)Obj)->bTopMostInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance = { "bTopMostInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventGetStateMachineInstance_Parms), &Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetStateMachineInstance_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve an owning blueprint state machine.\n\x09 * @param bTopMostInstance If the state machine is a reference return the top most instance.\n\x09 * @return The state machine instance this node is running for.\n\x09 */" },
		{ "CPP_Default_bTopMostInstance", "false" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve an owning blueprint state machine.\n@param bTopMostInstance If the state machine is a reference return the top most instance.\n@return The state machine instance this node is running for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetStateMachineInstance", nullptr, nullptr, sizeof(SMNodeInstance_eventGetStateMachineInstance_Parms), Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics
	{
		struct SMNodeInstance_eventGetTimeInState_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetTimeInState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The current time spent in the state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The current time spent in the state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetTimeInState", nullptr, nullptr, sizeof(SMNodeInstance_eventGetTimeInState_Parms), Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetTimeInState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics
	{
		struct SMNodeInstance_eventHasUpdated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventHasUpdated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventHasUpdated_Parms), &Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** State has updated at least once. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "State has updated at least once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "HasUpdated", nullptr, nullptr, sizeof(SMNodeInstance_eventHasUpdated_Parms), Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_HasUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_IsActive_Statics
	{
		struct SMNodeInstance_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventIsActive_Parms), &Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** If this node is active. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "If this node is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "IsActive", nullptr, nullptr, sizeof(SMNodeInstance_eventIsActive_Parms), Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics
	{
		struct SMNodeInstance_eventIsEditorExecution_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventIsEditorExecution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventIsEditorExecution_Parms), &Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Checks if this node is running for an editor state machine. This is generally only valid\n\x09 * during editor time construction scripts. Use this to allow the construction script\n\x09 * to set default values during compile instead of recalculating values during run-time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Checks if this node is running for an editor state machine. This is generally only valid\nduring editor time construction scripts. Use this to allow the construction script\nto set default values during compile instead of recalculating values during run-time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "IsEditorExecution", nullptr, nullptr, sizeof(SMNodeInstance_eventIsEditorExecution_Parms), Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_IsEditorExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_IsEditorExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics
	{
		struct SMNodeInstance_eventIsInEndState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventIsInEndState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventIsInEndState_Parms), &Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** State Machine is in an end state or the state is an end state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "State Machine is in an end state or the state is an end state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "IsInEndState", nullptr, nullptr, sizeof(SMNodeInstance_eventIsInEndState_Parms), Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_IsInEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics
	{
		struct SMNodeInstance_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventIsInitialized_Parms), &Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** True after the initialize sequence is called on this node and false after shutdown is called. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "True after the initialize sequence is called on this node and false after shutdown is called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "IsInitialized", nullptr, nullptr, sizeof(SMNodeInstance_eventIsInitialized_Parms), Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics
	{
		struct SMNodeInstance_eventOnContextPawnControllerChanged_Parms
		{
			APawn* Pawn;
			AController* NewController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventOnContextPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventOnContextPawnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "OnContextPawnControllerChanged", nullptr, nullptr, sizeof(SMNodeInstance_eventOnContextPawnControllerChanged_Parms), Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_ResetVariables_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_ResetVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Experimental" },
		{ "Comment", "/**\n\x09 * [EXPERIMENTAL] Resets all properties back to their defaults. Exposed graph properties will also be reset and may need to be re-evaluated.\n\x09 * This API may be removed or modified in a future update.\n\x09 */" },
		{ "DisplayName", "Reset Variables (Experimental)" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "[EXPERIMENTAL] Resets all properties back to their defaults. Exposed graph properties will also be reset and may need to be re-evaluated.\nThis API may be removed or modified in a future update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_ResetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "ResetVariables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_ResetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_ResetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_ResetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_ResetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics
	{
		struct SMNodeInstance_eventSetDisplayName_Parms
		{
			FName NewDisplayName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventSetDisplayName_Parms, NewDisplayName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::NewProp_NewDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/**\n\x09 * Sets the display name of the node. Valid from editor construction scripts only.\n\x09 * Development Only!\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Sets the display name of the node. Valid from editor construction scripts only.\nDevelopment Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "SetDisplayName", nullptr, nullptr, sizeof(SMNodeInstance_eventSetDisplayName_Parms), Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics
	{
		struct SMNodeInstance_eventSetNodeColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventSetNodeColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/**\n\x09 * Sets the color of the node. Requires UseCustomColor set to true. Valid from editor construction scripts only.\n\x09 * Development Only!\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Sets the color of the node. Requires UseCustomColor set to true. Valid from editor construction scripts only.\nDevelopment Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "SetNodeColor", nullptr, nullptr, sizeof(SMNodeInstance_eventSetNodeColor_Parms), Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_SetNodeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_SetNodeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics
	{
		struct SMNodeInstance_eventSetUseCustomColor_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventSetUseCustomColor_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventSetUseCustomColor_Parms), &Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/**\n\x09 * Tells the node to use a custom color. Valid from editor construction scripts only.\n\x09 * Development Only!\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Tells the node to use a custom color. Valid from editor construction scripts only.\nDevelopment Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "SetUseCustomColor", nullptr, nullptr, sizeof(SMNodeInstance_eventSetUseCustomColor_Parms), Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics
	{
		struct SMNodeInstance_eventSetUseCustomIcon_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventSetUseCustomIcon_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventSetUseCustomIcon_Parms), &Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/**\n\x09 * Tells the node to use a custom icon. Valid from editor construction scripts only.\n\x09 * Override the GetNodeIcon function to dynamically set the icon.\n\x09 * Development Only!\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Tells the node to use a custom icon. Valid from editor construction scripts only.\nOverride the GetNodeIcon function to dynamically set the icon.\nDevelopment Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "SetUseCustomIcon", nullptr, nullptr, sizeof(SMNodeInstance_eventSetUseCustomIcon_Parms), Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics
	{
		struct SMNodeInstance_eventSetVariableHidden_Parms
		{
			FName VariableName;
			bool bSetHidden;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
		static void NewProp_bSetHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventSetVariableHidden_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::NewProp_bSetHidden_SetBit(void* Obj)
	{
		((SMNodeInstance_eventSetVariableHidden_Parms*)Obj)->bSetHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::NewProp_bSetHidden = { "bSetHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventSetVariableHidden_Parms), &Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::NewProp_bSetHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::NewProp_bSetHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/**\n\x09* Sets the hidden status of an exposed variable. Valid from editor construction scripts only.\n\x09* Development Only!\n\x09*\n\x09* @param VariableName The name of the exposed variable as defined in this node class.\n\x09* @param bSetHidden Set the variable hidden status.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Sets the hidden status of an exposed variable. Valid from editor construction scripts only.\nDevelopment Only!\n\n@param VariableName The name of the exposed variable as defined in this node class.\n@param bSetHidden Set the variable hidden status." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "SetVariableHidden", nullptr, nullptr, sizeof(SMNodeInstance_eventSetVariableHidden_Parms), Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_SetVariableHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_SetVariableHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics
	{
		struct SMNodeInstance_eventSetVariableReadOnly_Parms
		{
			FName VariableName;
			bool bSetIsReadOnly;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
		static void NewProp_bSetIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetIsReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventSetVariableReadOnly_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::NewProp_bSetIsReadOnly_SetBit(void* Obj)
	{
		((SMNodeInstance_eventSetVariableReadOnly_Parms*)Obj)->bSetIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::NewProp_bSetIsReadOnly = { "bSetIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventSetVariableReadOnly_Parms), &Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::NewProp_bSetIsReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::NewProp_bSetIsReadOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/**\n\x09 * Sets the read only status of an exposed variable. Valid from editor construction scripts only.\n\x09 * Development Only!\n\x09 *\n\x09 * @param VariableName The name of the exposed variable as defined in this node class.\n\x09 * @param bSetIsReadOnly Set the variable read only status.\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Sets the read only status of an exposed variable. Valid from editor construction scripts only.\nDevelopment Only!\n\n@param VariableName The name of the exposed variable as defined in this node class.\n@param bSetIsReadOnly Set the variable read only status." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "SetVariableReadOnly", nullptr, nullptr, sizeof(SMNodeInstance_eventSetVariableReadOnly_Parms), Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics
	{
		struct SMNodeInstance_eventWithExecutionEnvironment_Parms
		{
			ESMExecutionEnvironment ExecutionEnvironment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionEnvironment_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionEnvironment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::NewProp_ExecutionEnvironment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::NewProp_ExecutionEnvironment = { "ExecutionEnvironment", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventWithExecutionEnvironment_Parms, ExecutionEnvironment), Z_Construct_UEnum_SMSystem_ESMExecutionEnvironment, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::NewProp_ExecutionEnvironment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::NewProp_ExecutionEnvironment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09* Determine if this node is running for editor construction scripts or for a game.\n\x09*/" },
		{ "ExpandEnumAsExecs", "ExecutionEnvironment" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Determine if this node is running for editor construction scripts or for a game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "WithExecutionEnvironment", nullptr, nullptr, sizeof(SMNodeInstance_eventWithExecutionEnvironment_Parms), Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMNodeInstance_NoRegister()
	{
		return USMNodeInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMNodeInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipNativeEditorConstructionScripts_MetaData[];
#endif
		static void NewProp_bSkipNativeEditorConstructionScripts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipNativeEditorConstructionScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditorConstructionScripts_MetaData[];
#endif
		static void NewProp_bHasEditorConstructionScripts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditorConstructionScripts;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasGameConstructionScripts_MetaData[];
#endif
		static void NewProp_bHasGameConstructionScripts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGameConstructionScripts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedPropertyOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedPropertyOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedPropertyOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEvalExposedProperties_MetaData[];
#endif
		static void NewProp_bAutoEvalExposedProperties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEvalExposedProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIconTintColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIconTintColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetVariablesOnInitialize_MetaData[];
#endif
		static void NewProp_bResetVariablesOnInitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetVariablesOnInitialize;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayCustomIcon_MetaData[];
#endif
		static void NewProp_bDisplayCustomIcon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayCustomIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomColors_MetaData[];
#endif
		static void NewProp_bUseCustomColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoReceiveInput_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoReceiveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockInput_MetaData[];
#endif
		static void NewProp_bBlockInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMNodeInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMNodeInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMNodeInstance_ConstructionScript, "ConstructionScript" }, // 1182724005
		{ &Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties, "EvaluateGraphProperties" }, // 1053773794
		{ &Z_Construct_UFunction_USMNodeInstance_GetContext, "GetContext" }, // 691862361
		{ &Z_Construct_UFunction_USMNodeInstance_GetGuid, "GetGuid" }, // 1845350954
		{ &Z_Construct_UFunction_USMNodeInstance_GetNetworkInterface, "GetNetworkInterface" }, // 2739517826
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeIcon, "GetNodeIcon" }, // 1827421475
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize, "GetNodeIconSize" }, // 763232257
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor, "GetNodeIconTintColor" }, // 3151880573
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeName, "GetNodeName" }, // 4119869675
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodePosition, "GetNodePosition" }, // 449758883
		{ &Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance, "GetOwningStateMachineNodeInstance" }, // 3234452116
		{ &Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance, "GetStateMachineInstance" }, // 771997323
		{ &Z_Construct_UFunction_USMNodeInstance_GetTimeInState, "GetTimeInState" }, // 1160551447
		{ &Z_Construct_UFunction_USMNodeInstance_HasUpdated, "HasUpdated" }, // 3830231522
		{ &Z_Construct_UFunction_USMNodeInstance_IsActive, "IsActive" }, // 2055439648
		{ &Z_Construct_UFunction_USMNodeInstance_IsEditorExecution, "IsEditorExecution" }, // 1552390073
		{ &Z_Construct_UFunction_USMNodeInstance_IsInEndState, "IsInEndState" }, // 3694079582
		{ &Z_Construct_UFunction_USMNodeInstance_IsInitialized, "IsInitialized" }, // 148939071
		{ &Z_Construct_UFunction_USMNodeInstance_OnContextPawnControllerChanged, "OnContextPawnControllerChanged" }, // 1662231281
		{ &Z_Construct_UFunction_USMNodeInstance_ResetVariables, "ResetVariables" }, // 1388964543
		{ &Z_Construct_UFunction_USMNodeInstance_SetDisplayName, "SetDisplayName" }, // 3835525326
		{ &Z_Construct_UFunction_USMNodeInstance_SetNodeColor, "SetNodeColor" }, // 491386726
		{ &Z_Construct_UFunction_USMNodeInstance_SetUseCustomColor, "SetUseCustomColor" }, // 1873287643
		{ &Z_Construct_UFunction_USMNodeInstance_SetUseCustomIcon, "SetUseCustomIcon" }, // 3064942220
		{ &Z_Construct_UFunction_USMNodeInstance_SetVariableHidden, "SetVariableHidden" }, // 2713731589
		{ &Z_Construct_UFunction_USMNodeInstance_SetVariableReadOnly, "SetVariableReadOnly" }, // 1487853457
		{ &Z_Construct_UFunction_USMNodeInstance_WithExecutionEnvironment, "WithExecutionEnvironment" }, // 2277489077
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * [Logic Driver] The abstract base node class all state machine nodes derive from.\n */" },
		{ "DisplayName", "Node Class Base" },
		{ "HideCategories", "SMNodeInstance" },
		{ "IncludePath", "Nodes/SMNodeInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "[Logic Driver] The abstract base node class all state machine nodes derive from." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts_MetaData[] = {
		{ "Comment", "/**\n\x09* Tell the state machine compiler to skip editor construction scripts for this native class.\n\x09* \n\x09* This is primarily an optimization to improve performance when construction scripts aren't used on native classes.\n\x09* For blueprint classes the state machine compiler can easily check if there is logic defined, but not for native classes.\n\x09* \n\x09* Children class may override this behavior, and blueprint children will override if there is any construction script\n\x09* logic defined.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Tell the state machine compiler to skip editor construction scripts for this native class.\n\nThis is primarily an optimization to improve performance when construction scripts aren't used on native classes.\nFor blueprint classes the state machine compiler can easily check if there is logic defined, but not for native classes.\n\nChildren class may override this behavior, and blueprint children will override if there is any construction script\nlogic defined." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bSkipNativeEditorConstructionScripts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts = { "bSkipNativeEditorConstructionScripts", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts_MetaData[] = {
		{ "Comment", "// If editor construction scripts are defined; set during bp compile.\n// Should always match CDO. Variable is looked up by name in several places.\n" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "If editor construction scripts are defined; set during bp compile.\nShould always match CDO. Variable is looked up by name in several places." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bHasEditorConstructionScripts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts = { "bHasEditorConstructionScripts", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts_MetaData[] = {
		{ "Comment", "// If run-time construction scripts are defined; set during bp compile.\n// Should always match CDO. Variable is looked up by name in several places.\n" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "If run-time construction scripts are defined; set during bp compile.\nShould always match CDO. Variable is looked up by name in several places." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bHasGameConstructionScripts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts = { "bHasGameConstructionScripts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_Inner = { "ExposedPropertyOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMGraphProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09* Customize how exposed graph properties are displayed on the node.\n\x09* \n\x09* Match the variable name with the variable you want to override.\n\x09* Property must be instance editable.\n\x09*/" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Customize how exposed graph properties are displayed on the node.\n\nMatch the variable name with the variable you want to override.\nProperty must be instance editable." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides = { "ExposedPropertyOverrides", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, ExposedPropertyOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * Properties marked as public will be exposed on this node as a graph.\n\x09 * \n\x09 * When this is true that graph will automatically evaluate on state entry.\n\x09 * When this is false you should manually call EvaluateGraphProperties().\n\x09 * \n\x09 * Graph properties are only valid for nodes deriving from USMStateInstance_Base.\n\x09 */" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Properties marked as public will be exposed on this node as a graph.\n\nWhen this is true that graph will automatically evaluate on state entry.\nWhen this is false you should manually call EvaluateGraphProperties().\n\nGraph properties are only valid for nodes deriving from USMStateInstance_Base." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bAutoEvalExposedProperties = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties = { "bAutoEvalExposedProperties", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * The icon to use when displaying this node.\n\x09 * This exists in run-time as well in case this image is needed for purposes outside of editor use. */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "The icon to use when displaying this node.\nThis exists in run-time as well in case this image is needed for purposes outside of editor use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon = { "NodeIcon", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The size of the node icon. Leave 0,0 to auto size. */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "The size of the node icon. Leave 0,0 to auto size." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize = { "NodeIconSize", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeIconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The tint color to apply to the node icon. */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "The tint color to apply to the node icon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor = { "NodeIconTintColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeIconTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * [EXPERIMENTAL] Resets all properties back to their default values when the node is initialized.\n\x09 * Please communicate any issues with this to Recursoft.\n\x09 */" },
		{ "DisplayName", "[Experimental] Reset Variables On Initialize" },
		{ "Experimental", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "[EXPERIMENTAL] Resets all properties back to their default values when the node is initialized.\nPlease communicate any issues with this to Recursoft." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bResetVariablesOnInitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize = { "bResetVariablesOnInitialize", nullptr, (EPropertyFlags)0x00200c0000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Describe the node. This provides information to the context menu and to tooltips. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Describe the node. This provides information to the context menu and to tooltips." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription = { "NodeDescription", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeDescription), Z_Construct_UScriptStruct_FSMNodeDescription, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Override editor default icon with the custom icon chosen. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Override editor default icon with the custom icon chosen." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bDisplayCustomIcon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon = { "bDisplayCustomIcon", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Override editor preference colors. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Override editor preference colors." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bUseCustomColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors = { "bUseCustomColors", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The standard color for this node. */" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bUseCustomColors" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The standard color for this node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_AutoReceiveInput_MetaData[] = {
		{ "Category", "Input (Node)" },
		{ "Comment", "/**\n\x09 * Automatically registers this node to receive input from a player.\n\x09 * Input is valid only from when the node is initialized and until it is shutdown.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Automatically registers this node to receive input from a player.\nInput is valid only from when the node is initialized and until it is shutdown." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_AutoReceiveInput = { "AutoReceiveInput", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, AutoReceiveInput), Z_Construct_UEnum_SMSystem_ESMNodeInput, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_AutoReceiveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_AutoReceiveInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputPriority_MetaData[] = {
		{ "Category", "Input (Node)" },
		{ "Comment", "/**\n\x09 * The priority of this input component when pushed in to the stack.\n\x09 * If AutoReceiveInput is set to UseOwningStateMachine this has no effect. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The priority of this input component when pushed in to the stack.\nIf AutoReceiveInput is set to UseOwningStateMachine this has no effect." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, InputPriority), METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput_MetaData[] = {
		{ "Category", "Input (Node)" },
		{ "Comment", "/**\n\x09 * Whether any components lower on the input stack should be allowed to receive input.\n\x09 * If AutoReceiveInput is set to UseOwningStateMachine this has no effect. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Whether any components lower on the input stack should be allowed to receive input.\nIf AutoReceiveInput is set to UseOwningStateMachine this has no effect." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bBlockInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput = { "bBlockInput", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid_MetaData[] = {
		{ "Comment", "/** Assigned from the editor and used in tracking specific templates. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Assigned from the editor and used in tracking specific templates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid = { "TemplateGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, TemplateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMNodeInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bSkipNativeEditorConstructionScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasEditorConstructionScripts,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bHasGameConstructionScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bResetVariablesOnInitialize,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_AutoReceiveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_InputPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bBlockInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMNodeInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(USMNodeInstance, ISMInstanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMNodeInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMNodeInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMNodeInstance_Statics::ClassParams = {
		&USMNodeInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMNodeInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMNodeInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMNodeInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMNodeInstance, 2718174937);
	template<> SMSYSTEM_API UClass* StaticClass<USMNodeInstance>()
	{
		return USMNodeInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMNodeInstance(Z_Construct_UClass_USMNodeInstance, &USMNodeInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMNodeInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMNodeInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
