// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCogEngine_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CogEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CogEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_CogEngine.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CogEngine",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xC462BED2,
			0x42F807BA,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CogEngine.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CogEngine.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CogEngine(Z_Construct_UPackage__Script_CogEngine, TEXT("/Script/CogEngine"), Z_Registration_Info_UPackage__Script_CogEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC462BED2, 0x42F807BA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
