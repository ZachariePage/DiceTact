// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/EditorNCVTool.h"

#ifdef NAMINGCONVENTIONVALIDATOR_EditorNCVTool_generated_h
#error "EditorNCVTool.generated.h already included, missing '#pragma once' in EditorNCVTool.h"
#endif
#define NAMINGCONVENTIONVALIDATOR_EditorNCVTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EValidationResult : uint8;

// ********** Begin ScriptStruct FNCValidationResult ***********************************************
struct Z_Construct_UScriptStruct_FNCValidationResult_Statics;
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNCValidationResult_Statics; \
	NAMINGCONVENTIONVALIDATOR_API static class UScriptStruct* StaticStruct();


struct FNCValidationResult;
// ********** End ScriptStruct FNCValidationResult *************************************************

// ********** Begin Class UEditorNCVTool ***********************************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFixUpAllRedirectors); \
	DECLARE_FUNCTION(execStartValidation);


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEditorNCVTool_Statics;
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UEditorNCVTool_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorNCVTool(); \
	friend struct ::Z_Construct_UClass_UEditorNCVTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGCONVENTIONVALIDATOR_API UClass* ::Z_Construct_UClass_UEditorNCVTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorNCVTool, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NamingConventionValidator"), Z_Construct_UClass_UEditorNCVTool_NoRegister) \
	DECLARE_SERIALIZER(UEditorNCVTool)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorNCVTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorNCVTool(UEditorNCVTool&&) = delete; \
	UEditorNCVTool(const UEditorNCVTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorNCVTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorNCVTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorNCVTool) \
	NO_API virtual ~UEditorNCVTool();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_38_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_CALLBACK_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorNCVTool;

// ********** End Class UEditorNCVTool *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_EditorNCVTool_h

// ********** Begin Enum EValidationResult *********************************************************
#define FOREACH_ENUM_EVALIDATIONRESULT(op) \
	op(EValidationResult::Error) \
	op(EValidationResult::Success) 

enum class EValidationResult : uint8;
template<> struct TIsUEnumClass<EValidationResult> { enum { Value = true }; };
template<> NAMINGCONVENTIONVALIDATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EValidationResult>();
// ********** End Enum EValidationResult ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
