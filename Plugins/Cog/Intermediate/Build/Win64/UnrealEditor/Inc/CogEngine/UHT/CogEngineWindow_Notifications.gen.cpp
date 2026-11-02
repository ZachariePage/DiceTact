// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Notifications.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Notifications() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Notifications();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Notifications_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Notifications *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Notifications;
UClass* UCogEngineConfig_Notifications::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Notifications;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Notifications.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Notifications"),
			Z_Registration_Info_UClass_UCogEngineConfig_Notifications.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Notifications,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Notifications.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Notifications_NoRegister()
{
	return UCogEngineConfig_Notifications::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Notifications_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Notifications.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableNotifications_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyAllWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyAllErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyConsoleCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundDefaultColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundWarningColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundErrorColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderDefaultColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderWarningColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderErrorColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextDefaultColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextWarningColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextErrorColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFixedWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextWrapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rounding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Notifications.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Notifications constinit property declarations ***********
	static void NewProp_DisableNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableNotifications;
	static void NewProp_NotifyAllWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NotifyAllWarnings;
	static void NewProp_NotifyAllErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NotifyAllErrors;
	static void NewProp_NotifyConsoleCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NotifyConsoleCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundDefaultColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundWarningColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundErrorColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderDefaultColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderWarningColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderErrorColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextDefaultColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextWarningColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextErrorColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static void NewProp_UseFixedWidth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFixedWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextWrapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rounding;
	static void NewProp_ShowBorder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBorder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Notifications constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Notifications>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Notifications_Statics

// ********** Begin Class UCogEngineConfig_Notifications Property Definitions **********************
void Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_DisableNotifications_SetBit(void* Obj)
{
	((UCogEngineConfig_Notifications*)Obj)->DisableNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_DisableNotifications = { "DisableNotifications", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Notifications), &Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_DisableNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableNotifications_MetaData), NewProp_DisableNotifications_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllWarnings_SetBit(void* Obj)
{
	((UCogEngineConfig_Notifications*)Obj)->NotifyAllWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllWarnings = { "NotifyAllWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Notifications), &Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyAllWarnings_MetaData), NewProp_NotifyAllWarnings_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllErrors_SetBit(void* Obj)
{
	((UCogEngineConfig_Notifications*)Obj)->NotifyAllErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllErrors = { "NotifyAllErrors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Notifications), &Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyAllErrors_MetaData), NewProp_NotifyAllErrors_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyConsoleCommands_SetBit(void* Obj)
{
	((UCogEngineConfig_Notifications*)Obj)->NotifyConsoleCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyConsoleCommands = { "NotifyConsoleCommands", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Notifications), &Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyConsoleCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyConsoleCommands_MetaData), NewProp_NotifyConsoleCommands_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BackgroundDefaultColor = { "BackgroundDefaultColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, BackgroundDefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundDefaultColor_MetaData), NewProp_BackgroundDefaultColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BackgroundWarningColor = { "BackgroundWarningColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, BackgroundWarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundWarningColor_MetaData), NewProp_BackgroundWarningColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BackgroundErrorColor = { "BackgroundErrorColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, BackgroundErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundErrorColor_MetaData), NewProp_BackgroundErrorColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BorderDefaultColor = { "BorderDefaultColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, BorderDefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderDefaultColor_MetaData), NewProp_BorderDefaultColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BorderWarningColor = { "BorderWarningColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, BorderWarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderWarningColor_MetaData), NewProp_BorderWarningColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BorderErrorColor = { "BorderErrorColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, BorderErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderErrorColor_MetaData), NewProp_BorderErrorColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextDefaultColor = { "TextDefaultColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, TextDefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextDefaultColor_MetaData), NewProp_TextDefaultColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextWarningColor = { "TextWarningColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, TextWarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextWarningColor_MetaData), NewProp_TextWarningColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextErrorColor = { "TextErrorColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, TextErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextErrorColor_MetaData), NewProp_TextErrorColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, Alignment), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, Padding), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_UseFixedWidth_SetBit(void* Obj)
{
	((UCogEngineConfig_Notifications*)Obj)->UseFixedWidth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_UseFixedWidth = { "UseFixedWidth", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Notifications), &Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_UseFixedWidth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFixedWidth_MetaData), NewProp_UseFixedWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextWrapping = { "TextWrapping", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, TextWrapping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextWrapping_MetaData), NewProp_TextWrapping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Rounding = { "Rounding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, Rounding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rounding_MetaData), NewProp_Rounding_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_ShowBorder_SetBit(void* Obj)
{
	((UCogEngineConfig_Notifications*)Obj)->ShowBorder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_ShowBorder = { "ShowBorder", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Notifications), &Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_ShowBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBorder_MetaData), NewProp_ShowBorder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_FadeOut = { "FadeOut", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Notifications, FadeOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOut_MetaData), NewProp_FadeOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_DisableNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyAllErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_NotifyConsoleCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BackgroundDefaultColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BackgroundWarningColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BackgroundErrorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BorderDefaultColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BorderWarningColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_BorderErrorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextDefaultColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextWarningColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextErrorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_UseFixedWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_TextWrapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Rounding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_ShowBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::NewProp_FadeOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Notifications Property Definitions ************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::ClassParams = {
	&UCogEngineConfig_Notifications::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Notifications::StaticRegisterNativesUCogEngineConfig_Notifications()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Notifications()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Notifications.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Notifications.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Notifications_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Notifications.OuterSingleton;
}
UCogEngineConfig_Notifications::UCogEngineConfig_Notifications() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Notifications);
UCogEngineConfig_Notifications::~UCogEngineConfig_Notifications() {}
// ********** End Class UCogEngineConfig_Notifications *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Notifications_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Notifications, UCogEngineConfig_Notifications::StaticClass, TEXT("UCogEngineConfig_Notifications"), &Z_Registration_Info_UClass_UCogEngineConfig_Notifications, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Notifications), 2403329454U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Notifications_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Notifications_h__Script_CogEngine_850729081{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Notifications_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Notifications_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
