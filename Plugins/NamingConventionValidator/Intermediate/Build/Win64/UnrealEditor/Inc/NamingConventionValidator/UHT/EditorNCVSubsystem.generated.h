// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorNCVSubsystem.h"

#ifdef NAMINGCONVENTIONVALIDATOR_EditorNCVSubsystem_generated_h
#error "EditorNCVSubsystem.generated.h already included, missing '#pragma once' in EditorNCVSubsystem.h"
#endif
#define NAMINGCONVENTIONVALIDATOR_EditorNCVSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityWidget;
struct FAssetData;
struct FNamingConvention;

// ********** Begin Class UEditorNCVSubsystem ******************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenNCVWidgetTool); \
	DECLARE_FUNCTION(execOpenAndPerformAutoValidation); \
	DECLARE_FUNCTION(execPerformNamingValidationOnAsset); \
	DECLARE_FUNCTION(execStartQuickValidation);


struct Z_Construct_UClass_UEditorNCVSubsystem_Statics;
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UEditorNCVSubsystem_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorNCVSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorNCVSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGCONVENTIONVALIDATOR_API UClass* ::Z_Construct_UClass_UEditorNCVSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorNCVSubsystem, UEditorUtilitySubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NamingConventionValidator"), Z_Construct_UClass_UEditorNCVSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorNCVSubsystem)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorNCVSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorNCVSubsystem(UEditorNCVSubsystem&&) = delete; \
	UEditorNCVSubsystem(const UEditorNCVSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorNCVSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorNCVSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorNCVSubsystem) \
	NO_API virtual ~UEditorNCVSubsystem();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_13_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorNCVSubsystem;

// ********** End Class UEditorNCVSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_EditorNCVSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
