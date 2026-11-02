// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCogDebug_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CogDebug;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CogDebug()
	{
		if (!Z_Registration_Info_UPackage__Script_CogDebug.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CogDebug",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xA8C4BE3B,
			0x815263E9,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CogDebug.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CogDebug.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CogDebug(Z_Construct_UPackage__Script_CogDebug, TEXT("/Script/CogDebug"), Z_Registration_Info_UPackage__Script_CogDebug, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA8C4BE3B, 0x815263E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
