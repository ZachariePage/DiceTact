// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/System/Settings/JueGameSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJueGameSettings() {}

// ********** Begin Cross Module References ********************************************************
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJueGameAudioSettings();
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJueGameControlSettings();
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJueGameplaySettings();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FJueGameplaySettings **********************************************
struct Z_Construct_UScriptStruct_FJueGameplaySettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FJueGameplaySettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJueGameplaySettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSpeed_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJueGameplaySettings constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJueGameplaySettings constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJueGameplaySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FJueGameplaySettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJueGameplaySettings;
class UScriptStruct* FJueGameplaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJueGameplaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJueGameplaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJueGameplaySettings, (UObject*)Z_Construct_UPackage__Script_JUE(), TEXT("JueGameplaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_FJueGameplaySettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FJueGameplaySettings Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::NewProp_GameSpeed = { "GameSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameplaySettings, GameSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSpeed_MetaData), NewProp_GameSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::NewProp_GameSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FJueGameplaySettings Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
	nullptr,
	&NewStructOps,
	"JueGameplaySettings",
	Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::PropPointers),
	sizeof(FJueGameplaySettings),
	alignof(FJueGameplaySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJueGameplaySettings()
{
	if (!Z_Registration_Info_UScriptStruct_FJueGameplaySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJueGameplaySettings.InnerSingleton, Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJueGameplaySettings.InnerSingleton);
}
// ********** End ScriptStruct FJueGameplaySettings ************************************************

// ********** Begin ScriptStruct FJueGameControlSettings *******************************************
struct Z_Construct_UScriptStruct_FJueGameControlSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FJueGameControlSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJueGameControlSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSensitivity_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSensitivity_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XInverted_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "DisplayName", "Inverted Horizontal Axis" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YInverted_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "DisplayName", "Inverted Vertical Axis" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAimSensitivity_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAimSensitivity_MetaData[] = {
		{ "Category", "Sensitivity" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJueGameControlSettings constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalSensitivity;
	static void NewProp_XInverted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_XInverted;
	static void NewProp_YInverted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_YInverted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalAimSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalAimSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJueGameControlSettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJueGameControlSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FJueGameControlSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJueGameControlSettings;
class UScriptStruct* FJueGameControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJueGameControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJueGameControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJueGameControlSettings, (UObject*)Z_Construct_UPackage__Script_JUE(), TEXT("JueGameControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FJueGameControlSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FJueGameControlSettings Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_HorizontalSensitivity = { "HorizontalSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameControlSettings, HorizontalSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalSensitivity_MetaData), NewProp_HorizontalSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_VerticalSensitivity = { "VerticalSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameControlSettings, VerticalSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalSensitivity_MetaData), NewProp_VerticalSensitivity_MetaData) };
void Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_XInverted_SetBit(void* Obj)
{
	((FJueGameControlSettings*)Obj)->XInverted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_XInverted = { "XInverted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJueGameControlSettings), &Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_XInverted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XInverted_MetaData), NewProp_XInverted_MetaData) };
void Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_YInverted_SetBit(void* Obj)
{
	((FJueGameControlSettings*)Obj)->YInverted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_YInverted = { "YInverted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJueGameControlSettings), &Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_YInverted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YInverted_MetaData), NewProp_YInverted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_HorizontalAimSensitivity = { "HorizontalAimSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameControlSettings, HorizontalAimSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAimSensitivity_MetaData), NewProp_HorizontalAimSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_VerticalAimSensitivity = { "VerticalAimSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameControlSettings, VerticalAimSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAimSensitivity_MetaData), NewProp_VerticalAimSensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_HorizontalSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_VerticalSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_XInverted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_YInverted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_HorizontalAimSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewProp_VerticalAimSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FJueGameControlSettings Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
	nullptr,
	&NewStructOps,
	"JueGameControlSettings",
	Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::PropPointers),
	sizeof(FJueGameControlSettings),
	alignof(FJueGameControlSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJueGameControlSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FJueGameControlSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJueGameControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJueGameControlSettings.InnerSingleton);
}
// ********** End ScriptStruct FJueGameControlSettings *********************************************

// ********** Begin ScriptStruct FJueGameAudioSettings *********************************************
struct Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FJueGameAudioSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJueGameAudioSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAudioVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicAudioVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXAudioVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbianceAudioVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "System/Settings/JueGameSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJueGameAudioSettings constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MainAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbianceAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJueGameAudioSettings constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJueGameAudioSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJueGameAudioSettings;
class UScriptStruct* FJueGameAudioSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJueGameAudioSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJueGameAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJueGameAudioSettings, (UObject*)Z_Construct_UPackage__Script_JUE(), TEXT("JueGameAudioSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FJueGameAudioSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FJueGameAudioSettings Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_MainAudioVolume = { "MainAudioVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameAudioSettings, MainAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAudioVolume_MetaData), NewProp_MainAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_MusicAudioVolume = { "MusicAudioVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameAudioSettings, MusicAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicAudioVolume_MetaData), NewProp_MusicAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_SFXAudioVolume = { "SFXAudioVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameAudioSettings, SFXAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXAudioVolume_MetaData), NewProp_SFXAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_AmbianceAudioVolume = { "AmbianceAudioVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJueGameAudioSettings, AmbianceAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbianceAudioVolume_MetaData), NewProp_AmbianceAudioVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_MainAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_MusicAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_SFXAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewProp_AmbianceAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FJueGameAudioSettings Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
	nullptr,
	&NewStructOps,
	"JueGameAudioSettings",
	Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::PropPointers),
	sizeof(FJueGameAudioSettings),
	alignof(FJueGameAudioSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJueGameAudioSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FJueGameAudioSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJueGameAudioSettings.InnerSingleton, Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJueGameAudioSettings.InnerSingleton);
}
// ********** End ScriptStruct FJueGameAudioSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameSettings_h__Script_JUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJueGameplaySettings::StaticStruct, Z_Construct_UScriptStruct_FJueGameplaySettings_Statics::NewStructOps, TEXT("JueGameplaySettings"),&Z_Registration_Info_UScriptStruct_FJueGameplaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJueGameplaySettings), 3174331377U) },
		{ FJueGameControlSettings::StaticStruct, Z_Construct_UScriptStruct_FJueGameControlSettings_Statics::NewStructOps, TEXT("JueGameControlSettings"),&Z_Registration_Info_UScriptStruct_FJueGameControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJueGameControlSettings), 565579940U) },
		{ FJueGameAudioSettings::StaticStruct, Z_Construct_UScriptStruct_FJueGameAudioSettings_Statics::NewStructOps, TEXT("JueGameAudioSettings"),&Z_Registration_Info_UScriptStruct_FJueGameAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJueGameAudioSettings), 2793710096U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameSettings_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameSettings_h__Script_JUE_2453863564{
	TEXT("/Script/JUE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameSettings_h__Script_JUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameSettings_h__Script_JUE_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
