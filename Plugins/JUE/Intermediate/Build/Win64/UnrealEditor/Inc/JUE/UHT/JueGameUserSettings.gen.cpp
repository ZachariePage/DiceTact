// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JUE/System/Settings/JueGameUserSettings.h"
#include "JUE/System/Settings/JueGameSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJueGameUserSettings() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
JUE_API UClass* Z_Construct_UClass_UJUEGameUserSettings();
JUE_API UClass* Z_Construct_UClass_UJUEGameUserSettings_NoRegister();
JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature();
JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature();
JUE_API UFunction* Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature();
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJueGameAudioSettings();
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJueGameControlSettings();
JUE_API UScriptStruct* Z_Construct_UScriptStruct_FJueGameplaySettings();
UPackage* Z_Construct_UPackage__Script_JUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGameSettingsSignature **********************************************
struct Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics
{
	struct _Script_JUE_eventOnGameSettingsSignature_Parms
	{
		FJueGameplaySettings UpdatedGameSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegates for each setting types  */" },
#endif
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates for each setting types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedGameSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameSettingsSignature constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedGameSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameSettingsSignature constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameSettingsSignature Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::NewProp_UpdatedGameSettings = { "UpdatedGameSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_JUE_eventOnGameSettingsSignature_Parms, UpdatedGameSettings), Z_Construct_UScriptStruct_FJueGameplaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedGameSettings_MetaData), NewProp_UpdatedGameSettings_MetaData) }; // 3174331377
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::NewProp_UpdatedGameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameSettingsSignature Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_JUE, nullptr, "OnGameSettingsSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::_Script_JUE_eventOnGameSettingsSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::_Script_JUE_eventOnGameSettingsSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameSettingsSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGameSettingsSignature, FJueGameplaySettings const& UpdatedGameSettings)
{
	struct _Script_JUE_eventOnGameSettingsSignature_Parms
	{
		FJueGameplaySettings UpdatedGameSettings;
	};
	_Script_JUE_eventOnGameSettingsSignature_Parms Parms;
	Parms.UpdatedGameSettings=UpdatedGameSettings;
	OnGameSettingsSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameSettingsSignature ************************************************

// ********** Begin Delegate FOnControlsSignature **************************************************
struct Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics
{
	struct _Script_JUE_eventOnControlsSignature_Parms
	{
		FJueGameControlSettings UpdatedControls;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedControls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnControlsSignature constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnControlsSignature constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnControlsSignature Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::NewProp_UpdatedControls = { "UpdatedControls", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_JUE_eventOnControlsSignature_Parms, UpdatedControls), Z_Construct_UScriptStruct_FJueGameControlSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedControls_MetaData), NewProp_UpdatedControls_MetaData) }; // 565579940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::NewProp_UpdatedControls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnControlsSignature Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_JUE, nullptr, "OnControlsSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::_Script_JUE_eventOnControlsSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::_Script_JUE_eventOnControlsSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControlsSignature_DelegateWrapper(const FMulticastScriptDelegate& OnControlsSignature, FJueGameControlSettings const& UpdatedControls)
{
	struct _Script_JUE_eventOnControlsSignature_Parms
	{
		FJueGameControlSettings UpdatedControls;
	};
	_Script_JUE_eventOnControlsSignature_Parms Parms;
	Parms.UpdatedControls=UpdatedControls;
	OnControlsSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnControlsSignature ****************************************************

// ********** Begin Delegate FOnAudioSignature *****************************************************
struct Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics
{
	struct _Script_JUE_eventOnAudioSignature_Parms
	{
		FJueGameAudioSettings UpdatedAudio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedAudio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAudioSignature constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAudioSignature constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAudioSignature Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::NewProp_UpdatedAudio = { "UpdatedAudio", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_JUE_eventOnAudioSignature_Parms, UpdatedAudio), Z_Construct_UScriptStruct_FJueGameAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedAudio_MetaData), NewProp_UpdatedAudio_MetaData) }; // 2793710096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::NewProp_UpdatedAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAudioSignature Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_JUE, nullptr, "OnAudioSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::_Script_JUE_eventOnAudioSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::_Script_JUE_eventOnAudioSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSignature, FJueGameAudioSettings const& UpdatedAudio)
{
	struct _Script_JUE_eventOnAudioSignature_Parms
	{
		FJueGameAudioSettings UpdatedAudio;
	};
	_Script_JUE_eventOnAudioSignature_Parms Parms;
	Parms.UpdatedAudio=UpdatedAudio;
	OnAudioSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAudioSignature *******************************************************

// ********** Begin Class UJUEGameUserSettings Function GetAmbianceAudioVolume *********************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics
{
	struct JUEGameUserSettings_eventGetAmbianceAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAmbianceAudioVolume constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAmbianceAudioVolume constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAmbianceAudioVolume Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetAmbianceAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function GetAmbianceAudioVolume Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetAmbianceAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::JUEGameUserSettings_eventGetAmbianceAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::JUEGameUserSettings_eventGetAmbianceAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetAmbianceAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAmbianceAudioVolume();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetAmbianceAudioVolume ***********************

// ********** Begin Class UJUEGameUserSettings Function GetGameSpeed *******************************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics
{
	struct JUEGameUserSettings_eventGetGameSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplaySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getters */" },
#endif
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGameSpeed constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGameSpeed constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGameSpeed Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetGameSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::PropPointers) < 2048);
// ********** End Function GetGameSpeed Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetGameSpeed", 	Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::JUEGameUserSettings_eventGetGameSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::JUEGameUserSettings_eventGetGameSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetGameSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameSpeed();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetGameSpeed *********************************

// ********** Begin Class UJUEGameUserSettings Function GetHorizontalAimSensitivity ****************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics
{
	struct JUEGameUserSettings_eventGetHorizontalAimSensitivity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controls Settings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHorizontalAimSensitivity constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHorizontalAimSensitivity constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHorizontalAimSensitivity Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetHorizontalAimSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::PropPointers) < 2048);
// ********** End Function GetHorizontalAimSensitivity Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetHorizontalAimSensitivity", 	Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::JUEGameUserSettings_eventGetHorizontalAimSensitivity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::JUEGameUserSettings_eventGetHorizontalAimSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetHorizontalAimSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalAimSensitivity();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetHorizontalAimSensitivity ******************

// ********** Begin Class UJUEGameUserSettings Function GetHorizontalSensitivity *******************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics
{
	struct JUEGameUserSettings_eventGetHorizontalSensitivity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controls Settings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHorizontalSensitivity constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHorizontalSensitivity constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHorizontalSensitivity Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetHorizontalSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::PropPointers) < 2048);
// ********** End Function GetHorizontalSensitivity Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetHorizontalSensitivity", 	Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::JUEGameUserSettings_eventGetHorizontalSensitivity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::JUEGameUserSettings_eventGetHorizontalSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetHorizontalSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalSensitivity();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetHorizontalSensitivity *********************

// ********** Begin Class UJUEGameUserSettings Function GetMainAudioVolume *************************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics
{
	struct JUEGameUserSettings_eventGetMainAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMainAudioVolume constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMainAudioVolume constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMainAudioVolume Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetMainAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function GetMainAudioVolume Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetMainAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::JUEGameUserSettings_eventGetMainAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::JUEGameUserSettings_eventGetMainAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetMainAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMainAudioVolume();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetMainAudioVolume ***************************

// ********** Begin Class UJUEGameUserSettings Function GetMusicAudioVolume ************************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics
{
	struct JUEGameUserSettings_eventGetMusicAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMusicAudioVolume constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMusicAudioVolume constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMusicAudioVolume Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetMusicAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function GetMusicAudioVolume Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetMusicAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::JUEGameUserSettings_eventGetMusicAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::JUEGameUserSettings_eventGetMusicAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetMusicAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicAudioVolume();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetMusicAudioVolume **************************

// ********** Begin Class UJUEGameUserSettings Function GetSFXAudioVolume **************************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics
{
	struct JUEGameUserSettings_eventGetSFXAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSFXAudioVolume constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSFXAudioVolume constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSFXAudioVolume Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetSFXAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function GetSFXAudioVolume Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetSFXAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::JUEGameUserSettings_eventGetSFXAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::JUEGameUserSettings_eventGetSFXAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetSFXAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXAudioVolume();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetSFXAudioVolume ****************************

// ********** Begin Class UJUEGameUserSettings Function GetVerticalAimSensitivity ******************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics
{
	struct JUEGameUserSettings_eventGetVerticalAimSensitivity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controls Settings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVerticalAimSensitivity constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVerticalAimSensitivity constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVerticalAimSensitivity Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetVerticalAimSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::PropPointers) < 2048);
// ********** End Function GetVerticalAimSensitivity Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetVerticalAimSensitivity", 	Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::JUEGameUserSettings_eventGetVerticalAimSensitivity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::JUEGameUserSettings_eventGetVerticalAimSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetVerticalAimSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalAimSensitivity();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetVerticalAimSensitivity ********************

// ********** Begin Class UJUEGameUserSettings Function GetVerticalSensitivity *********************
struct Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics
{
	struct JUEGameUserSettings_eventGetVerticalSensitivity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controls Settings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVerticalSensitivity constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVerticalSensitivity constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVerticalSensitivity Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventGetVerticalSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::PropPointers) < 2048);
// ********** End Function GetVerticalSensitivity Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "GetVerticalSensitivity", 	Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::JUEGameUserSettings_eventGetVerticalSensitivity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::JUEGameUserSettings_eventGetVerticalSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execGetVerticalSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalSensitivity();
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function GetVerticalSensitivity ***********************

// ********** Begin Class UJUEGameUserSettings Function SetAimSensitivity **************************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics
{
	struct JUEGameUserSettings_eventSetAimSensitivity_Parms
	{
		float HorizontalAimSensitivity;
		float VerticalAimSensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controls Settings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAimSensitivity constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalAimSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalAimSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAimSensitivity constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAimSensitivity Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::NewProp_HorizontalAimSensitivity = { "HorizontalAimSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetAimSensitivity_Parms, HorizontalAimSensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::NewProp_VerticalAimSensitivity = { "VerticalAimSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetAimSensitivity_Parms, VerticalAimSensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::NewProp_HorizontalAimSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::NewProp_VerticalAimSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::PropPointers) < 2048);
// ********** End Function SetAimSensitivity Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetAimSensitivity", 	Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::JUEGameUserSettings_eventSetAimSensitivity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::JUEGameUserSettings_eventSetAimSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetAimSensitivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HorizontalAimSensitivity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VerticalAimSensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAimSensitivity(Z_Param_HorizontalAimSensitivity,Z_Param_VerticalAimSensitivity);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetAimSensitivity ****************************

// ********** Begin Class UJUEGameUserSettings Function SetAmbianceAudioVolume *********************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics
{
	struct JUEGameUserSettings_eventSetAmbianceAudioVolume_Parms
	{
		float AmbianceAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAmbianceAudioVolume constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbianceAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAmbianceAudioVolume constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAmbianceAudioVolume Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::NewProp_AmbianceAudioVolume = { "AmbianceAudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetAmbianceAudioVolume_Parms, AmbianceAudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::NewProp_AmbianceAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function SetAmbianceAudioVolume Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetAmbianceAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::JUEGameUserSettings_eventSetAmbianceAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::JUEGameUserSettings_eventSetAmbianceAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetAmbianceAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmbianceAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmbianceAudioVolume(Z_Param_AmbianceAudioVolume);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetAmbianceAudioVolume ***********************

// ********** Begin Class UJUEGameUserSettings Function SetGameSpeed *******************************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics
{
	struct JUEGameUserSettings_eventSetGameSpeed_Parms
	{
		float GameSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setters */" },
#endif
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setters" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameSpeed constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameSpeed constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameSpeed Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::NewProp_GameSpeed = { "GameSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetGameSpeed_Parms, GameSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::NewProp_GameSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::PropPointers) < 2048);
// ********** End Function SetGameSpeed Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetGameSpeed", 	Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::JUEGameUserSettings_eventSetGameSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::JUEGameUserSettings_eventSetGameSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetGameSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_GameSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameSpeed(Z_Param_GameSpeed);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetGameSpeed *********************************

// ********** Begin Class UJUEGameUserSettings Function SetMainAudioVolume *************************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics
{
	struct JUEGameUserSettings_eventSetMainAudioVolume_Parms
	{
		float MainAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMainAudioVolume constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MainAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMainAudioVolume constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMainAudioVolume Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::NewProp_MainAudioVolume = { "MainAudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetMainAudioVolume_Parms, MainAudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::NewProp_MainAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function SetMainAudioVolume Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetMainAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::JUEGameUserSettings_eventSetMainAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::JUEGameUserSettings_eventSetMainAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetMainAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MainAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMainAudioVolume(Z_Param_MainAudioVolume);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetMainAudioVolume ***************************

// ********** Begin Class UJUEGameUserSettings Function SetMusicAudioVolume ************************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics
{
	struct JUEGameUserSettings_eventSetMusicAudioVolume_Parms
	{
		float MusicAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMusicAudioVolume constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMusicAudioVolume constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMusicAudioVolume Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::NewProp_MusicAudioVolume = { "MusicAudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetMusicAudioVolume_Parms, MusicAudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::NewProp_MusicAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function SetMusicAudioVolume Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetMusicAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::JUEGameUserSettings_eventSetMusicAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::JUEGameUserSettings_eventSetMusicAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetMusicAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MusicAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicAudioVolume(Z_Param_MusicAudioVolume);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetMusicAudioVolume **************************

// ********** Begin Class UJUEGameUserSettings Function SetSensitivity *****************************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics
{
	struct JUEGameUserSettings_eventSetSensitivity_Parms
	{
		float HorizontalSensitivity;
		float VerticalSensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controls Settings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSensitivity constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSensitivity constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSensitivity Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::NewProp_HorizontalSensitivity = { "HorizontalSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetSensitivity_Parms, HorizontalSensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::NewProp_VerticalSensitivity = { "VerticalSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetSensitivity_Parms, VerticalSensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::NewProp_HorizontalSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::NewProp_VerticalSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::PropPointers) < 2048);
// ********** End Function SetSensitivity Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetSensitivity", 	Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::JUEGameUserSettings_eventSetSensitivity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::JUEGameUserSettings_eventSetSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetSensitivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HorizontalSensitivity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VerticalSensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSensitivity(Z_Param_HorizontalSensitivity,Z_Param_VerticalSensitivity);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetSensitivity *******************************

// ********** Begin Class UJUEGameUserSettings Function SetSFXAudioVolume **************************
struct Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics
{
	struct JUEGameUserSettings_eventSetSFXAudioVolume_Parms
	{
		float SFXAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSFXAudioVolume constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSFXAudioVolume constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSFXAudioVolume Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::NewProp_SFXAudioVolume = { "SFXAudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JUEGameUserSettings_eventSetSFXAudioVolume_Parms, SFXAudioVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::NewProp_SFXAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::PropPointers) < 2048);
// ********** End Function SetSFXAudioVolume Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJUEGameUserSettings, nullptr, "SetSFXAudioVolume", 	Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::JUEGameUserSettings_eventSetSFXAudioVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::JUEGameUserSettings_eventSetSFXAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJUEGameUserSettings::execSetSFXAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SFXAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXAudioVolume(Z_Param_SFXAudioVolume);
	P_NATIVE_END;
}
// ********** End Class UJUEGameUserSettings Function SetSFXAudioVolume ****************************

// ********** Begin Class UJUEGameUserSettings *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UJUEGameUserSettings;
UClass* UJUEGameUserSettings::GetPrivateStaticClass()
{
	using TClass = UJUEGameUserSettings;
	if (!Z_Registration_Info_UClass_UJUEGameUserSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JUEGameUserSettings"),
			Z_Registration_Info_UClass_UJUEGameUserSettings.InnerSingleton,
			StaticRegisterNativesUJUEGameUserSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UJUEGameUserSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UJUEGameUserSettings_NoRegister()
{
	return UJUEGameUserSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJUEGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/Settings/JueGameUserSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameSettingsUpdate_MetaData[] = {
		{ "Category", "GameplaySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Events Signature */" },
#endif
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events Signature" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControlsSettingsUpdate_MetaData[] = {
		{ "Category", "GameplaySettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioSettingsUpdate_MetaData[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplaySettings_MetaData[] = {
		{ "Category", "GameplaySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Settings */" },
#endif
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlSettings_MetaData[] = {
		{ "Category", "GameplaySettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSettings_MetaData[] = {
		{ "Category", "AudioSettings" },
		{ "ModuleRelativePath", "System/Settings/JueGameUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UJUEGameUserSettings constinit property declarations *********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSettingsUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControlsSettingsUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioSettingsUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplaySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UJUEGameUserSettings constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAmbianceAudioVolume"), .Pointer = &UJUEGameUserSettings::execGetAmbianceAudioVolume },
		{ .NameUTF8 = UTF8TEXT("GetGameSpeed"), .Pointer = &UJUEGameUserSettings::execGetGameSpeed },
		{ .NameUTF8 = UTF8TEXT("GetHorizontalAimSensitivity"), .Pointer = &UJUEGameUserSettings::execGetHorizontalAimSensitivity },
		{ .NameUTF8 = UTF8TEXT("GetHorizontalSensitivity"), .Pointer = &UJUEGameUserSettings::execGetHorizontalSensitivity },
		{ .NameUTF8 = UTF8TEXT("GetMainAudioVolume"), .Pointer = &UJUEGameUserSettings::execGetMainAudioVolume },
		{ .NameUTF8 = UTF8TEXT("GetMusicAudioVolume"), .Pointer = &UJUEGameUserSettings::execGetMusicAudioVolume },
		{ .NameUTF8 = UTF8TEXT("GetSFXAudioVolume"), .Pointer = &UJUEGameUserSettings::execGetSFXAudioVolume },
		{ .NameUTF8 = UTF8TEXT("GetVerticalAimSensitivity"), .Pointer = &UJUEGameUserSettings::execGetVerticalAimSensitivity },
		{ .NameUTF8 = UTF8TEXT("GetVerticalSensitivity"), .Pointer = &UJUEGameUserSettings::execGetVerticalSensitivity },
		{ .NameUTF8 = UTF8TEXT("SetAimSensitivity"), .Pointer = &UJUEGameUserSettings::execSetAimSensitivity },
		{ .NameUTF8 = UTF8TEXT("SetAmbianceAudioVolume"), .Pointer = &UJUEGameUserSettings::execSetAmbianceAudioVolume },
		{ .NameUTF8 = UTF8TEXT("SetGameSpeed"), .Pointer = &UJUEGameUserSettings::execSetGameSpeed },
		{ .NameUTF8 = UTF8TEXT("SetMainAudioVolume"), .Pointer = &UJUEGameUserSettings::execSetMainAudioVolume },
		{ .NameUTF8 = UTF8TEXT("SetMusicAudioVolume"), .Pointer = &UJUEGameUserSettings::execSetMusicAudioVolume },
		{ .NameUTF8 = UTF8TEXT("SetSensitivity"), .Pointer = &UJUEGameUserSettings::execSetSensitivity },
		{ .NameUTF8 = UTF8TEXT("SetSFXAudioVolume"), .Pointer = &UJUEGameUserSettings::execSetSFXAudioVolume },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetAmbianceAudioVolume, "GetAmbianceAudioVolume" }, // 2723145929
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetGameSpeed, "GetGameSpeed" }, // 4039065516
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalAimSensitivity, "GetHorizontalAimSensitivity" }, // 3434012074
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetHorizontalSensitivity, "GetHorizontalSensitivity" }, // 4109528613
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetMainAudioVolume, "GetMainAudioVolume" }, // 3411001094
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetMusicAudioVolume, "GetMusicAudioVolume" }, // 1393296225
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetSFXAudioVolume, "GetSFXAudioVolume" }, // 4988221
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalAimSensitivity, "GetVerticalAimSensitivity" }, // 3442568345
		{ &Z_Construct_UFunction_UJUEGameUserSettings_GetVerticalSensitivity, "GetVerticalSensitivity" }, // 693728595
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetAimSensitivity, "SetAimSensitivity" }, // 3098842395
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetAmbianceAudioVolume, "SetAmbianceAudioVolume" }, // 3705573630
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetGameSpeed, "SetGameSpeed" }, // 1198158841
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetMainAudioVolume, "SetMainAudioVolume" }, // 1248147633
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetMusicAudioVolume, "SetMusicAudioVolume" }, // 512028803
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetSensitivity, "SetSensitivity" }, // 3715170881
		{ &Z_Construct_UFunction_UJUEGameUserSettings_SetSFXAudioVolume, "SetSFXAudioVolume" }, // 2371936400
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJUEGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UJUEGameUserSettings_Statics

// ********** Begin Class UJUEGameUserSettings Property Definitions ********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_OnGameSettingsUpdate = { "OnGameSettingsUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEGameUserSettings, OnGameSettingsUpdate), Z_Construct_UDelegateFunction_JUE_OnGameSettingsSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameSettingsUpdate_MetaData), NewProp_OnGameSettingsUpdate_MetaData) }; // 403569825
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_OnControlsSettingsUpdate = { "OnControlsSettingsUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEGameUserSettings, OnControlsSettingsUpdate), Z_Construct_UDelegateFunction_JUE_OnControlsSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControlsSettingsUpdate_MetaData), NewProp_OnControlsSettingsUpdate_MetaData) }; // 4176979934
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_OnAudioSettingsUpdate = { "OnAudioSettingsUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEGameUserSettings, OnAudioSettingsUpdate), Z_Construct_UDelegateFunction_JUE_OnAudioSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioSettingsUpdate_MetaData), NewProp_OnAudioSettingsUpdate_MetaData) }; // 3044007250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_GameplaySettings = { "GameplaySettings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEGameUserSettings, GameplaySettings), Z_Construct_UScriptStruct_FJueGameplaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplaySettings_MetaData), NewProp_GameplaySettings_MetaData) }; // 3174331377
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_ControlSettings = { "ControlSettings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEGameUserSettings, ControlSettings), Z_Construct_UScriptStruct_FJueGameControlSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlSettings_MetaData), NewProp_ControlSettings_MetaData) }; // 565579940
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_AudioSettings = { "AudioSettings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJUEGameUserSettings, AudioSettings), Z_Construct_UScriptStruct_FJueGameAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSettings_MetaData), NewProp_AudioSettings_MetaData) }; // 2793710096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJUEGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_OnGameSettingsUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_OnControlsSettingsUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_OnAudioSettingsUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_GameplaySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_ControlSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJUEGameUserSettings_Statics::NewProp_AudioSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEGameUserSettings_Statics::PropPointers) < 2048);
// ********** End Class UJUEGameUserSettings Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UJUEGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_JUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJUEGameUserSettings_Statics::ClassParams = {
	&UJUEGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJUEGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJUEGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJUEGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UJUEGameUserSettings_Statics::Class_MetaDataParams)
};
void UJUEGameUserSettings::StaticRegisterNativesUJUEGameUserSettings()
{
	UClass* Class = UJUEGameUserSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UJUEGameUserSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UJUEGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UJUEGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJUEGameUserSettings.OuterSingleton, Z_Construct_UClass_UJUEGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJUEGameUserSettings.OuterSingleton;
}
UJUEGameUserSettings::UJUEGameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UJUEGameUserSettings);
UJUEGameUserSettings::~UJUEGameUserSettings() {}
// ********** End Class UJUEGameUserSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h__Script_JUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJUEGameUserSettings, UJUEGameUserSettings::StaticClass, TEXT("UJUEGameUserSettings"), &Z_Registration_Info_UClass_UJUEGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJUEGameUserSettings), 4027903311U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h__Script_JUE_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h__Script_JUE_3475160807{
	TEXT("/Script/JUE"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h__Script_JUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h__Script_JUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
