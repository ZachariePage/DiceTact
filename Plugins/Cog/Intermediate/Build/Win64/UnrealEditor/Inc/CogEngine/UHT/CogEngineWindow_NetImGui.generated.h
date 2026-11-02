// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogEngineWindow_NetImGui.h"

#ifdef COGENGINE_CogEngineWindow_NetImGui_generated_h
#error "CogEngineWindow_NetImGui.generated.h already included, missing '#pragma once' in CogEngineWindow_NetImGui.h"
#endif
#define COGENGINE_CogEngineWindow_NetImGui_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCogEngineWindowConfig_NetImgui ******************************************
struct Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics;
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogEngineWindowConfig_NetImgui(); \
	friend struct ::Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGENGINE_API UClass* ::Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogEngineWindowConfig_NetImgui, UCogCommonConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CogEngine"), Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_NoRegister) \
	DECLARE_SERIALIZER(UCogEngineWindowConfig_NetImgui)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCogEngineWindowConfig_NetImgui(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogEngineWindowConfig_NetImgui(UCogEngineWindowConfig_NetImgui&&) = delete; \
	UCogEngineWindowConfig_NetImgui(const UCogEngineWindowConfig_NetImgui&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogEngineWindowConfig_NetImgui); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogEngineWindowConfig_NetImgui); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCogEngineWindowConfig_NetImgui) \
	NO_API virtual ~UCogEngineWindowConfig_NetImgui();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h_58_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h_61_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogEngineWindowConfig_NetImgui;

// ********** End Class UCogEngineWindowConfig_NetImgui ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h

// ********** Begin Enum ECogNetImguiAutoConnectionMode ********************************************
#define FOREACH_ENUM_ECOGNETIMGUIAUTOCONNECTIONMODE(op) \
	op(ECogNetImguiAutoConnectionMode::NoAutoConnect) \
	op(ECogNetImguiAutoConnectionMode::AutoConnect) \
	op(ECogNetImguiAutoConnectionMode::AutoListen) 

enum class ECogNetImguiAutoConnectionMode : uint8;
template<> struct TIsUEnumClass<ECogNetImguiAutoConnectionMode> { enum { Value = true }; };
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogNetImguiAutoConnectionMode>();
// ********** End Enum ECogNetImguiAutoConnectionMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
