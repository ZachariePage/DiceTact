// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJUE_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature();
	JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature();
	JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature();
	JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JUE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JUE()
	{
		if (!Z_Registration_Info_UPackage__Script_JUE.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_JUE_ModalConfirmation__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/JUE",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x928DFD03,
			0x1035B517,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JUE.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_JUE.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JUE(Z_Construct_UPackage__Script_JUE, TEXT("/Script/JUE"), Z_Registration_Info_UPackage__Script_JUE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x928DFD03, 0x1035B517));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
