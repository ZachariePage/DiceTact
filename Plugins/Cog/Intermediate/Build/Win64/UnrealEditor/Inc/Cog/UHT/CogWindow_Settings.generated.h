// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogWindow_Settings.h"

#ifdef COG_CogWindow_Settings_generated_h
#error "CogWindow_Settings.generated.h already included, missing '#pragma once' in CogWindow_Settings.h"
#endif
#define COG_CogWindow_Settings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCogWindowConfig_Settings ************************************************
struct Z_Construct_UClass_UCogWindowConfig_Settings_Statics;
COG_API UClass* Z_Construct_UClass_UCogWindowConfig_Settings_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogWindowConfig_Settings(); \
	friend struct ::Z_Construct_UClass_UCogWindowConfig_Settings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COG_API UClass* ::Z_Construct_UClass_UCogWindowConfig_Settings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogWindowConfig_Settings, UCogCommonConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cog"), Z_Construct_UClass_UCogWindowConfig_Settings_NoRegister) \
	DECLARE_SERIALIZER(UCogWindowConfig_Settings)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCogWindowConfig_Settings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogWindowConfig_Settings(UCogWindowConfig_Settings&&) = delete; \
	UCogWindowConfig_Settings(const UCogWindowConfig_Settings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogWindowConfig_Settings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogWindowConfig_Settings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCogWindowConfig_Settings) \
	NO_API virtual ~UCogWindowConfig_Settings();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h_49_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h_52_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogWindowConfig_Settings;

// ********** End Class UCogWindowConfig_Settings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h

// ********** Begin Enum ECogWidgetAlignment *******************************************************
#define FOREACH_ENUM_ECOGWIDGETALIGNMENT(op) \
	op(ECogWidgetAlignment::Left) \
	op(ECogWidgetAlignment::Center) \
	op(ECogWidgetAlignment::Right) \
	op(ECogWidgetAlignment::Manual) 

enum class ECogWidgetAlignment;
template<> struct TIsUEnumClass<ECogWidgetAlignment> { enum { Value = true }; };
template<> COG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogWidgetAlignment>();
// ********** End Enum ECogWidgetAlignment *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
