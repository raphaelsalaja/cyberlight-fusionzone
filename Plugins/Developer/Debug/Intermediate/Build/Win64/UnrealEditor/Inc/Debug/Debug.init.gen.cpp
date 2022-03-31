// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebug_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Debug;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Debug()
	{
		if (!Z_Registration_Info_UPackage__Script_Debug.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Debug",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3D5AEAAC,
				0x4D41CF57,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Debug.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Debug.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Debug(Z_Construct_UPackage__Script_Debug, TEXT("/Script/Debug"), Z_Registration_Info_UPackage__Script_Debug, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3D5AEAAC, 0x4D41CF57));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
