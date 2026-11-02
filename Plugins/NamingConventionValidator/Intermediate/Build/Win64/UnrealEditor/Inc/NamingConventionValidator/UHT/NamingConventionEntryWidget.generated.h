// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/NamingConventionEntryWidget.h"

#ifdef NAMINGCONVENTIONVALIDATOR_NamingConventionEntryWidget_generated_h
#error "NamingConventionEntryWidget.generated.h already included, missing '#pragma once' in NamingConventionEntryWidget.h"
#endif
#define NAMINGCONVENTIONVALIDATOR_NamingConventionEntryWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
struct FNamingConvention;
struct FNCValidationResult;

// ********** Begin Class UNamingConventionEntryWidget *********************************************
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execTryMatchAssetToConvention); \
	DECLARE_FUNCTION(execBrowseToAsset); \
	DECLARE_FUNCTION(execGetEntryValidationResult); \
	DECLARE_FUNCTION(execGetEntryNamingConvention); \
	DECLARE_FUNCTION(execGetEntryAssetData); \
	DECLARE_FUNCTION(execInitializeEntry); \
	DECLARE_FUNCTION(execRemoveEntry);


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNamingConventionEntryWidget_Statics;
NAMINGCONVENTIONVALIDATOR_API UClass* Z_Construct_UClass_UNamingConventionEntryWidget_NoRegister();

#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNamingConventionEntryWidget(); \
	friend struct ::Z_Construct_UClass_UNamingConventionEntryWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGCONVENTIONVALIDATOR_API UClass* ::Z_Construct_UClass_UNamingConventionEntryWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamingConventionEntryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NamingConventionValidator"), Z_Construct_UClass_UNamingConventionEntryWidget_NoRegister) \
	DECLARE_SERIALIZER(UNamingConventionEntryWidget)


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamingConventionEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamingConventionEntryWidget(UNamingConventionEntryWidget&&) = delete; \
	UNamingConventionEntryWidget(const UNamingConventionEntryWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamingConventionEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamingConventionEntryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamingConventionEntryWidget) \
	NO_API virtual ~UNamingConventionEntryWidget();


#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_15_PROLOG
#define FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_CALLBACK_WRAPPERS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamingConventionEntryWidget;

// ********** End Class UNamingConventionEntryWidget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_NamingConventionValidator_Source_NamingConventionValidator_Widgets_NamingConventionEntryWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
