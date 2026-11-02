// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CogDebugLogBlueprint.h"

#ifdef COGDEBUG_CogDebugLogBlueprint_generated_h
#error "CogDebugLogBlueprint.generated.h already included, missing '#pragma once' in CogDebugLogBlueprint.h"
#endif
#define COGDEBUG_CogDebugLogBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ECogLogVerbosity : uint8;
struct FCogLogCategory;

// ********** Begin Class UCogDebugLogBlueprint ****************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLogActive); \
	DECLARE_FUNCTION(execLog);


struct Z_Construct_UClass_UCogDebugLogBlueprint_Statics;
COGDEBUG_API UClass* Z_Construct_UClass_UCogDebugLogBlueprint_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCogDebugLogBlueprint(); \
	friend struct ::Z_Construct_UClass_UCogDebugLogBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COGDEBUG_API UClass* ::Z_Construct_UClass_UCogDebugLogBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UCogDebugLogBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CogDebug"), Z_Construct_UClass_UCogDebugLogBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UCogDebugLogBlueprint)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCogDebugLogBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCogDebugLogBlueprint(UCogDebugLogBlueprint&&) = delete; \
	UCogDebugLogBlueprint(const UCogDebugLogBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCogDebugLogBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCogDebugLogBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCogDebugLogBlueprint) \
	NO_API virtual ~UCogDebugLogBlueprint();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_10_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCogDebugLogBlueprint;

// ********** End Class UCogDebugLogBlueprint ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogDebug_Public_CogDebugLogBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
