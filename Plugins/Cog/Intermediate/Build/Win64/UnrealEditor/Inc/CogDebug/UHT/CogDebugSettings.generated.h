// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogDebugSettings.h"

#ifdef COGDEBUG_CogDebugSettings_generated_h
#error "CogDebugSettings.generated.h already included, missing '#pragma once' in CogDebugSettings.h"
#endif
#define COGDEBUG_CogDebugSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCogDebugSettings *************************************************
struct Z_Construct_UScriptStruct_FCogDebugSettings_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogDebugSettings_Statics; \
	COGDEBUG_API static class UScriptStruct* StaticStruct();


struct FCogDebugSettings;
// ********** End ScriptStruct FCogDebugSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugSettings_h

// ********** Begin Enum ECogDebugRecolorMode ******************************************************
#define FOREACH_ENUM_ECOGDEBUGRECOLORMODE(op) \
	op(ECogDebugRecolorMode::None) \
	op(ECogDebugRecolorMode::Color) \
	op(ECogDebugRecolorMode::HueOverTime) \
	op(ECogDebugRecolorMode::HueOverFrames) 

enum class ECogDebugRecolorMode : uint8;
template<> struct TIsUEnumClass<ECogDebugRecolorMode> { enum { Value = true }; };
template<> COGDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogDebugRecolorMode>();
// ********** End Enum ECogDebugRecolorMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
