// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogCommonLog.h"

#ifdef COGCOMMON_CogCommonLog_generated_h
#error "CogCommonLog.generated.h already included, missing '#pragma once' in CogCommonLog.h"
#endif
#define COGCOMMON_CogCommonLog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCogLogCategory ***************************************************
struct Z_Construct_UScriptStruct_FCogLogCategory_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCogLogCategory_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCogLogCategory;
// ********** End ScriptStruct FCogLogCategory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogCommon_Public_CogCommonLog_h

// ********** Begin Enum ECogLogVerbosity **********************************************************
#define FOREACH_ENUM_ECOGLOGVERBOSITY(op) \
	op(ECogLogVerbosity::NoLogging) \
	op(ECogLogVerbosity::Fatal) \
	op(ECogLogVerbosity::Error) \
	op(ECogLogVerbosity::Warning) \
	op(ECogLogVerbosity::Display) \
	op(ECogLogVerbosity::Log) \
	op(ECogLogVerbosity::Verbose) \
	op(ECogLogVerbosity::VeryVerbose) 

enum class ECogLogVerbosity : uint8;
template<> struct TIsUEnumClass<ECogLogVerbosity> { enum { Value = true }; };
template<> COGCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogLogVerbosity>();
// ********** End Enum ECogLogVerbosity ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
