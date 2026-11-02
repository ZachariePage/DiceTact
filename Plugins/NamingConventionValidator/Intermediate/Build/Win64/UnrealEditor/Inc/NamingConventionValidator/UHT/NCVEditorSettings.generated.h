// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NCVEditorSettings.h"

#ifdef NAMINGCONVENTIONVALIDATOR_NCVEditorSettings_generated_h
#error "NCVEditorSettings.generated.h already included, missing '#pragma once' in NCVEditorSettings.h"
#endif
#define NAMINGCONVENTIONVALIDATOR_NCVEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEditorUtilityWidgetBlueprint;
class UObject;
struct FDirectoryPath;
struct FNamingConvention;

// ********** Begin ScriptStruct FNamingConvention *************************************************
struct Z_Construct_UScriptStruct_FNamingConvention_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamingConvention_Statics; \
	NAMINGCONVENTIONVALIDATOR_API static class UScriptStruct* StaticStruct();


struct FNamingConvention;
// ********** End ScriptStruct FNamingConvention ***************************************************

// ********** Begin Class UNCVEditorSettings *******************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNamingConventions); \
	DECLARE_FUNCTION(execGetNCVWidgetTool); \
	DECLARE_FUNCTION(execGetTargetValidationDirectory); \
	DECLARE_FUNCTION(execShouldLogMatchingConventions); \
	DECLARE_FUNCTION(execShouldCheckSubDirectories); \
	DECLARE_FUNCTION(execShouldPerformValidationOnLoad);


struct Z_Construct_UClass_UNCVEditorSettings_Statics;
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNCVEditorSettings_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNCVEditorSettings(); \
	friend struct ::Z_Construct_UClass_UNCVEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGCONVENTIONVALIDATOR_API UClass* ::Z_Construct_UClass_UNCVEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNCVEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NamingConventionValidator"), Z_Construct_UClass_UNCVEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UNCVEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("NCVEditor");} \



#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNCVEditorSettings(UNCVEditorSettings&&) = delete; \
	UNCVEditorSettings(const UNCVEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNCVEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNCVEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNCVEditorSettings) \
	NO_API virtual ~UNCVEditorSettings();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_56_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNCVEditorSettings;

// ********** End Class UNCVEditorSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_NCVEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
