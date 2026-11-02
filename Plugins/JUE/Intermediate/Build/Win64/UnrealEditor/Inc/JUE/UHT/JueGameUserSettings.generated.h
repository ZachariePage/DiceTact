// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/Settings/JueGameUserSettings.h"

#ifdef JUE_JueGameUserSettings_generated_h
#error "JueGameUserSettings.generated.h already included, missing '#pragma once' in JueGameUserSettings.h"
#endif
#define JUE_JueGameUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJueGameAudioSettings;
struct FJueGameControlSettings;
struct FJueGameplaySettings;

// ********** Begin Delegate FOnGameSettingsSignature **********************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_13_DELEGATE \
JUE_API void FOnGameSettingsSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGameSettingsSignature, FJueGameplaySettings const& UpdatedGameSettings);


// ********** End Delegate FOnGameSettingsSignature ************************************************

// ********** Begin Delegate FOnControlsSignature **************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_14_DELEGATE \
JUE_API void FOnControlsSignature_DelegateWrapper(const FMulticastScriptDelegate& OnControlsSignature, FJueGameControlSettings const& UpdatedControls);


// ********** End Delegate FOnControlsSignature ****************************************************

// ********** Begin Delegate FOnAudioSignature *****************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_15_DELEGATE \
JUE_API void FOnAudioSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSignature, FJueGameAudioSettings const& UpdatedAudio);


// ********** End Delegate FOnAudioSignature *******************************************************

// ********** Begin Class UJUEGameUserSettings *****************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAmbianceAudioVolume); \
	DECLARE_FUNCTION(execGetSFXAudioVolume); \
	DECLARE_FUNCTION(execGetMusicAudioVolume); \
	DECLARE_FUNCTION(execGetMainAudioVolume); \
	DECLARE_FUNCTION(execGetVerticalAimSensitivity); \
	DECLARE_FUNCTION(execGetHorizontalAimSensitivity); \
	DECLARE_FUNCTION(execGetVerticalSensitivity); \
	DECLARE_FUNCTION(execGetHorizontalSensitivity); \
	DECLARE_FUNCTION(execGetGameSpeed); \
	DECLARE_FUNCTION(execSetAmbianceAudioVolume); \
	DECLARE_FUNCTION(execSetSFXAudioVolume); \
	DECLARE_FUNCTION(execSetMusicAudioVolume); \
	DECLARE_FUNCTION(execSetMainAudioVolume); \
	DECLARE_FUNCTION(execSetAimSensitivity); \
	DECLARE_FUNCTION(execSetSensitivity); \
	DECLARE_FUNCTION(execSetGameSpeed);


struct Z_Construct_UClass_UJUEGameUserSettings_Statics;
JUE_API UClass* Z_Construct_UClass_UJUEGameUserSettings_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJUEGameUserSettings(); \
	friend struct ::Z_Construct_UClass_UJUEGameUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JUE_API UClass* ::Z_Construct_UClass_UJUEGameUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UJUEGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JUE"), Z_Construct_UClass_UJUEGameUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UJUEGameUserSettings)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJUEGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJUEGameUserSettings(UJUEGameUserSettings&&) = delete; \
	UJUEGameUserSettings(const UJUEGameUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJUEGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJUEGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJUEGameUserSettings) \
	NO_API virtual ~UJUEGameUserSettings();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_23_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJUEGameUserSettings;

// ********** End Class UJUEGameUserSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_JUE_Source_JUE_System_Settings_JueGameUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
