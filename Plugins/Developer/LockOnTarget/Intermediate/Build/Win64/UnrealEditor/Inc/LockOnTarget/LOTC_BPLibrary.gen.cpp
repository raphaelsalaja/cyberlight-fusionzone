// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/Utilities/LOTC_BPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLOTC_BPLibrary() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULOTC_BPLibrary_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULOTC_BPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULOTC_BPLibrary::execIs2DPointOnScreen)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULOTC_BPLibrary::Is2DPointOnScreen(Z_Param_PC,Z_Param_Out_ScreenPosition,Z_Param_Out_ScreenOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULOTC_BPLibrary::execIsVectorOnScreen)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULOTC_BPLibrary::IsVectorOnScreen(Z_Param_PC,Z_Param_Out_WorldLocation,Z_Param_Out_ScreenOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULOTC_BPLibrary::execGetBoxVertices)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtents);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Verices);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULOTC_BPLibrary::GetBoxVertices(Z_Param_Out_BoxOrigin,Z_Param_Out_BoxExtents,Z_Param_Out_Verices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULOTC_BPLibrary::execIsActorOnScreenSimple)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_UBOOL(Z_Param_bRenderCheck);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULOTC_BPLibrary::IsActorOnScreenSimple(Z_Param_Actor,Z_Param_PC,Z_Param_bRenderCheck,Z_Param_Out_ScreenOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULOTC_BPLibrary::execIsActorOnScreenComplex)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_UBOOL(Z_Param_bRenderCheck);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULOTC_BPLibrary::IsActorOnScreenComplex(Z_Param_Actor,Z_Param_PlayerController,Z_Param_bRenderCheck,Z_Param_Out_ScreenOffset);
		P_NATIVE_END;
	}
	void ULOTC_BPLibrary::StaticRegisterNativesULOTC_BPLibrary()
	{
		UClass* Class = ULOTC_BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoxVertices", &ULOTC_BPLibrary::execGetBoxVertices },
			{ "Is2DPointOnScreen", &ULOTC_BPLibrary::execIs2DPointOnScreen },
			{ "IsActorOnScreenComplex", &ULOTC_BPLibrary::execIsActorOnScreenComplex },
			{ "IsActorOnScreenSimple", &ULOTC_BPLibrary::execIsActorOnScreenSimple },
			{ "IsVectorOnScreen", &ULOTC_BPLibrary::execIsVectorOnScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics
	{
		struct LOTC_BPLibrary_eventGetBoxVertices_Parms
		{
			FVector BoxOrigin;
			FVector BoxExtents;
			TArray<FVector> Verices;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Verices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Verices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxOrigin = { "BoxOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventGetBoxVertices_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxExtents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventGetBoxVertices_Parms, BoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxExtents_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_Verices_Inner = { "Verices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_Verices = { "Verices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventGetBoxVertices_Parms, Verices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_BoxExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_Verices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::NewProp_Verices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget" },
		{ "Comment", "/** Return array of box vertices with world location. */" },
		{ "ModuleRelativePath", "Public/Utilities/LOTC_BPLibrary.h" },
		{ "ToolTip", "Return array of box vertices with world location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULOTC_BPLibrary, nullptr, "GetBoxVertices", nullptr, nullptr, sizeof(LOTC_BPLibrary_eventGetBoxVertices_Parms), Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics
	{
		struct LOTC_BPLibrary_eventIs2DPointOnScreen_Parms
		{
			APlayerController* PC;
			FIntPoint ScreenPosition;
			FVector2D ScreenOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIs2DPointOnScreen_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIs2DPointOnScreen_Parms, ScreenPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIs2DPointOnScreen_Parms, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenOffset_MetaData)) };
	void Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LOTC_BPLibrary_eventIs2DPointOnScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LOTC_BPLibrary_eventIs2DPointOnScreen_Parms), &Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget" },
		{ "Comment", "/**\n\x09 * Determines if 2D point is on the screen.\n\x09 * \n\x09 * @param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f).\n\x09 */" },
		{ "CPP_Default_ScreenOffset", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Public/Utilities/LOTC_BPLibrary.h" },
		{ "ToolTip", "Determines if 2D point is on the screen.\n\n@param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULOTC_BPLibrary, nullptr, "Is2DPointOnScreen", nullptr, nullptr, sizeof(LOTC_BPLibrary_eventIs2DPointOnScreen_Parms), Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics
	{
		struct LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms
		{
			AActor* Actor;
			APlayerController* PlayerController;
			bool bRenderCheck;
			FVector2D ScreenOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_bRenderCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_bRenderCheck_SetBit(void* Obj)
	{
		((LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms*)Obj)->bRenderCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_bRenderCheck = { "bRenderCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms), &Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_bRenderCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ScreenOffset_MetaData)) };
	void Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms), &Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_bRenderCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget" },
		{ "Comment", "/**\n\x09 * Determines if the Actor is in viewport even if there are no bounds vertices bounds on the viewport.\n\x09 * Useful for large objects. For small objects just use simple version.\n\x09 * Function uses Actor bounds and ranges overlap.\n\x09 * \n\x09 * @param Actor - Actor to check if it is on the viewport.\n\x09 * @param PlayerController - PlayerController to determine the viewport size and other things.\n\x09 * @param bRenderCheck - Can little faster determine the result. Also helps to determine if the Actor is behind any object.\n\x09 * @param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f).\n\x09 * \n\x09 * @return - Is Actor on the viewport screen.\n\x09 */" },
		{ "CPP_Default_bRenderCheck", "true" },
		{ "CPP_Default_ScreenOffset", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Public/Utilities/LOTC_BPLibrary.h" },
		{ "ToolTip", "Determines if the Actor is in viewport even if there are no bounds vertices bounds on the viewport.\nUseful for large objects. For small objects just use simple version.\nFunction uses Actor bounds and ranges overlap.\n\n@param Actor - Actor to check if it is on the viewport.\n@param PlayerController - PlayerController to determine the viewport size and other things.\n@param bRenderCheck - Can little faster determine the result. Also helps to determine if the Actor is behind any object.\n@param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f).\n\n@return - Is Actor on the viewport screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULOTC_BPLibrary, nullptr, "IsActorOnScreenComplex", nullptr, nullptr, sizeof(LOTC_BPLibrary_eventIsActorOnScreenComplex_Parms), Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics
	{
		struct LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms
		{
			AActor* Actor;
			APlayerController* PC;
			bool bRenderCheck;
			FVector2D ScreenOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_bRenderCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_bRenderCheck_SetBit(void* Obj)
	{
		((LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms*)Obj)->bRenderCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_bRenderCheck = { "bRenderCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms), &Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_bRenderCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ScreenOffset_MetaData)) };
	void Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms), &Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_bRenderCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget" },
		{ "Comment", "/**\n\x09 * Determines if the Actor is in viewport.\n\x09 * Uses Actor location, which converts to screen position.\n\x09 * For large objects you can use Complex version.\n\x09 * \n\x09 * @param Actor - Actor to check if it is on the viewport.\n\x09 * @param PlayerController - PlayerController to determine the viewport size and other things.\n\x09 * @param bRenderCheck - Can little faster determine the result. Also helps to determine if the Actor is behind any object.\n\x09 * @param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f).\n\x09 * \n\x09 * @return - Is Actor on the viewport screen.\n\x09 */" },
		{ "CPP_Default_bRenderCheck", "true" },
		{ "CPP_Default_ScreenOffset", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Public/Utilities/LOTC_BPLibrary.h" },
		{ "ToolTip", "Determines if the Actor is in viewport.\nUses Actor location, which converts to screen position.\nFor large objects you can use Complex version.\n\n@param Actor - Actor to check if it is on the viewport.\n@param PlayerController - PlayerController to determine the viewport size and other things.\n@param bRenderCheck - Can little faster determine the result. Also helps to determine if the Actor is behind any object.\n@param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f).\n\n@return - Is Actor on the viewport screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULOTC_BPLibrary, nullptr, "IsActorOnScreenSimple", nullptr, nullptr, sizeof(LOTC_BPLibrary_eventIsActorOnScreenSimple_Parms), Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics
	{
		struct LOTC_BPLibrary_eventIsVectorOnScreen_Parms
		{
			APlayerController* PC;
			FVector WorldLocation;
			FVector2D ScreenOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsVectorOnScreen_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsVectorOnScreen_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOTC_BPLibrary_eventIsVectorOnScreen_Parms, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ScreenOffset_MetaData)) };
	void Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LOTC_BPLibrary_eventIsVectorOnScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LOTC_BPLibrary_eventIsVectorOnScreen_Parms), &Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget" },
		{ "Comment", "/**\n\x09 * Determines if World location is on the screen.\n\x09 * \n\x09 * @param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utilities/LOTC_BPLibrary.h" },
		{ "ToolTip", "Determines if World location is on the screen.\n\n@param ScreenOffset - Narrows the screen resolution in percent of screen size for check viewport boundaries. Should be in (0.f, 50.f)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULOTC_BPLibrary, nullptr, "IsVectorOnScreen", nullptr, nullptr, sizeof(LOTC_BPLibrary_eventIsVectorOnScreen_Parms), Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULOTC_BPLibrary_NoRegister()
	{
		return ULOTC_BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULOTC_BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULOTC_BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULOTC_BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULOTC_BPLibrary_GetBoxVertices, "GetBoxVertices" }, // 1427842748
		{ &Z_Construct_UFunction_ULOTC_BPLibrary_Is2DPointOnScreen, "Is2DPointOnScreen" }, // 1939208204
		{ &Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenComplex, "IsActorOnScreenComplex" }, // 862620049
		{ &Z_Construct_UFunction_ULOTC_BPLibrary_IsActorOnScreenSimple, "IsActorOnScreenSimple" }, // 3431109367
		{ &Z_Construct_UFunction_ULOTC_BPLibrary_IsVectorOnScreen, "IsVectorOnScreen" }, // 3227654189
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOTC_BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/LOTC_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/Utilities/LOTC_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULOTC_BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULOTC_BPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULOTC_BPLibrary_Statics::ClassParams = {
		&ULOTC_BPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULOTC_BPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULOTC_BPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULOTC_BPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULOTC_BPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULOTC_BPLibrary, 2181512441);
	template<> LOCKONTARGET_API UClass* StaticClass<ULOTC_BPLibrary>()
	{
		return ULOTC_BPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULOTC_BPLibrary(Z_Construct_UClass_ULOTC_BPLibrary, &ULOTC_BPLibrary::StaticClass, TEXT("/Script/LockOnTarget"), TEXT("ULOTC_BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULOTC_BPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
