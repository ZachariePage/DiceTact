// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogWindow_Settings.h"
#include "CogInputChord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogWindow_Settings() {}

// ********** Begin Cross Module References ********************************************************
COG_API UClass* Z_Construct_UClass_UCogWindowConfig_Settings();
COG_API UClass* Z_Construct_UClass_UCogWindowConfig_Settings_NoRegister();
COG_API UEnum* Z_Construct_UEnum_Cog_ECogWidgetAlignment();
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGIMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FCogInputChord();
UPackage* Z_Construct_UPackage__Script_Cog();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogWidgetAlignment *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogWidgetAlignment;
static UEnum* ECogWidgetAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogWidgetAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogWidgetAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Cog_ECogWidgetAlignment, (UObject*)Z_Construct_UPackage__Script_Cog(), TEXT("ECogWidgetAlignment"));
	}
	return Z_Registration_Info_UEnum_ECogWidgetAlignment.OuterSingleton;
}
template<> COG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogWidgetAlignment>()
{
	return ECogWidgetAlignment_StaticEnum();
}
struct Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Center.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Center.Name", "ECogWidgetAlignment::Center" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "Left.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Left.Name", "ECogWidgetAlignment::Left" },
		{ "Manual.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Manual.Name", "ECogWidgetAlignment::Manual" },
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
		{ "Right.Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Right.Name", "ECogWidgetAlignment::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogWidgetAlignment::Left", (int64)ECogWidgetAlignment::Left },
		{ "ECogWidgetAlignment::Center", (int64)ECogWidgetAlignment::Center },
		{ "ECogWidgetAlignment::Right", (int64)ECogWidgetAlignment::Right },
		{ "ECogWidgetAlignment::Manual", (int64)ECogWidgetAlignment::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Cog,
	nullptr,
	"ECogWidgetAlignment",
	"ECogWidgetAlignment",
	Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Cog_ECogWidgetAlignment()
{
	if (!Z_Registration_Info_UEnum_ECogWidgetAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogWidgetAlignment.InnerSingleton, Z_Construct_UEnum_Cog_ECogWidgetAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogWidgetAlignment.InnerSingleton;
}
// ********** End Enum ECogWidgetAlignment *********************************************************

// ********** Begin Class UCogWindowConfig_Settings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogWindowConfig_Settings;
UClass* UCogWindowConfig_Settings::GetPrivateStaticClass()
{
	using TClass = UCogWindowConfig_Settings;
	if (!Z_Registration_Info_UClass_UCogWindowConfig_Settings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogWindowConfig_Settings"),
			Z_Registration_Info_UClass_UCogWindowConfig_Settings.InnerSingleton,
			StaticRegisterNativesUCogWindowConfig_Settings,
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
	return Z_Registration_Info_UClass_UCogWindowConfig_Settings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogWindowConfig_Settings_NoRegister()
{
	return UCogWindowConfig_Settings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogWindowConfig_Settings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogWindow_Settings.h" },
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DPIScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewports_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompactMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransparentMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHelp_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWindowsInMainMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShareMouse_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShareMouseWithGameplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShareKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavEnableKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableConflictingCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableShortcutsWhenImGuiWantTextInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowWidgetBorders_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_ToggleImguiInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_LoadLayout1_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_LoadLayout2_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_LoadLayout3_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_LoadLayout4_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_SaveLayout1_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_SaveLayout2_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_SaveLayout3_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_SaveLayout4_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_ResetLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogWindow_Settings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogWindowConfig_Settings constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DPIScale;
	static void NewProp_bEnableViewports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewports;
	static void NewProp_bCompactMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactMode;
	static void NewProp_bTransparentMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransparentMode;
	static void NewProp_bShowHelp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHelp;
	static void NewProp_bShowWindowsInMainMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWindowsInMainMenu;
	static void NewProp_bEnableInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInput;
	static void NewProp_bShareMouse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShareMouse;
	static void NewProp_bShareMouseWithGameplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShareMouseWithGameplay;
	static void NewProp_bShareKeyboard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShareKeyboard;
	static void NewProp_bNavEnableKeyboard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavEnableKeyboard;
	static void NewProp_bDisableConflictingCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableConflictingCommands;
	static void NewProp_bDisableShortcutsWhenImGuiWantTextInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableShortcutsWhenImGuiWantTextInput;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WidgetAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetAlignment;
	static void NewProp_ShowWidgetBorders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowWidgetBorders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_ToggleImguiInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_LoadLayout1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_LoadLayout2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_LoadLayout3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_LoadLayout4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_SaveLayout1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_SaveLayout2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_SaveLayout3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_SaveLayout4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_ResetLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogWindowConfig_Settings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogWindowConfig_Settings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogWindowConfig_Settings_Statics

// ********** Begin Class UCogWindowConfig_Settings Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_DPIScale = { "DPIScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, DPIScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DPIScale_MetaData), NewProp_DPIScale_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableViewports_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bEnableViewports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableViewports = { "bEnableViewports", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableViewports_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableViewports_MetaData), NewProp_bEnableViewports_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bCompactMode_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bCompactMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bCompactMode = { "bCompactMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bCompactMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompactMode_MetaData), NewProp_bCompactMode_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bTransparentMode_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bTransparentMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bTransparentMode = { "bTransparentMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bTransparentMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransparentMode_MetaData), NewProp_bTransparentMode_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowHelp_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bShowHelp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowHelp = { "bShowHelp", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowHelp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHelp_MetaData), NewProp_bShowHelp_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowWindowsInMainMenu_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bShowWindowsInMainMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowWindowsInMainMenu = { "bShowWindowsInMainMenu", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowWindowsInMainMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWindowsInMainMenu_MetaData), NewProp_bShowWindowsInMainMenu_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableInput_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bEnableInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableInput = { "bEnableInput", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableInput_MetaData), NewProp_bEnableInput_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouse_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bShareMouse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouse = { "bShareMouse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShareMouse_MetaData), NewProp_bShareMouse_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouseWithGameplay_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bShareMouseWithGameplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouseWithGameplay = { "bShareMouseWithGameplay", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouseWithGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShareMouseWithGameplay_MetaData), NewProp_bShareMouseWithGameplay_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareKeyboard_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bShareKeyboard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareKeyboard = { "bShareKeyboard", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareKeyboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShareKeyboard_MetaData), NewProp_bShareKeyboard_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bNavEnableKeyboard_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bNavEnableKeyboard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bNavEnableKeyboard = { "bNavEnableKeyboard", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bNavEnableKeyboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavEnableKeyboard_MetaData), NewProp_bNavEnableKeyboard_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableConflictingCommands_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bDisableConflictingCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableConflictingCommands = { "bDisableConflictingCommands", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableConflictingCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableConflictingCommands_MetaData), NewProp_bDisableConflictingCommands_MetaData) };
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableShortcutsWhenImGuiWantTextInput_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->bDisableShortcutsWhenImGuiWantTextInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableShortcutsWhenImGuiWantTextInput = { "bDisableShortcutsWhenImGuiWantTextInput", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableShortcutsWhenImGuiWantTextInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableShortcutsWhenImGuiWantTextInput_MetaData), NewProp_bDisableShortcutsWhenImGuiWantTextInput_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_WidgetAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_WidgetAlignment = { "WidgetAlignment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, WidgetAlignment), Z_Construct_UEnum_Cog_ECogWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetAlignment_MetaData), NewProp_WidgetAlignment_MetaData) }; // 2375712432
void Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_ShowWidgetBorders_SetBit(void* Obj)
{
	((UCogWindowConfig_Settings*)Obj)->ShowWidgetBorders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_ShowWidgetBorders = { "ShowWidgetBorders", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogWindowConfig_Settings), &Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_ShowWidgetBorders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowWidgetBorders_MetaData), NewProp_ShowWidgetBorders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Font), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_ToggleImguiInput = { "Shortcut_ToggleImguiInput", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_ToggleImguiInput), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_ToggleImguiInput_MetaData), NewProp_Shortcut_ToggleImguiInput_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout1 = { "Shortcut_LoadLayout1", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_LoadLayout1), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_LoadLayout1_MetaData), NewProp_Shortcut_LoadLayout1_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout2 = { "Shortcut_LoadLayout2", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_LoadLayout2), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_LoadLayout2_MetaData), NewProp_Shortcut_LoadLayout2_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout3 = { "Shortcut_LoadLayout3", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_LoadLayout3), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_LoadLayout3_MetaData), NewProp_Shortcut_LoadLayout3_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout4 = { "Shortcut_LoadLayout4", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_LoadLayout4), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_LoadLayout4_MetaData), NewProp_Shortcut_LoadLayout4_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout1 = { "Shortcut_SaveLayout1", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_SaveLayout1), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_SaveLayout1_MetaData), NewProp_Shortcut_SaveLayout1_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout2 = { "Shortcut_SaveLayout2", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_SaveLayout2), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_SaveLayout2_MetaData), NewProp_Shortcut_SaveLayout2_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout3 = { "Shortcut_SaveLayout3", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_SaveLayout3), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_SaveLayout3_MetaData), NewProp_Shortcut_SaveLayout3_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout4 = { "Shortcut_SaveLayout4", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_SaveLayout4), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_SaveLayout4_MetaData), NewProp_Shortcut_SaveLayout4_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_ResetLayout = { "Shortcut_ResetLayout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogWindowConfig_Settings, Shortcut_ResetLayout), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_ResetLayout_MetaData), NewProp_Shortcut_ResetLayout_MetaData) }; // 3035783925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogWindowConfig_Settings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_DPIScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableViewports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bCompactMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bTransparentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowHelp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShowWindowsInMainMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bEnableInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareMouseWithGameplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bShareKeyboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bNavEnableKeyboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableConflictingCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_bDisableShortcutsWhenImGuiWantTextInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_WidgetAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_WidgetAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_ShowWidgetBorders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_ToggleImguiInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_LoadLayout4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_SaveLayout4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogWindowConfig_Settings_Statics::NewProp_Shortcut_ResetLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogWindowConfig_Settings_Statics::PropPointers) < 2048);
// ********** End Class UCogWindowConfig_Settings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UCogWindowConfig_Settings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_Cog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogWindowConfig_Settings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogWindowConfig_Settings_Statics::ClassParams = {
	&UCogWindowConfig_Settings::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogWindowConfig_Settings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogWindowConfig_Settings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogWindowConfig_Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogWindowConfig_Settings_Statics::Class_MetaDataParams)
};
void UCogWindowConfig_Settings::StaticRegisterNativesUCogWindowConfig_Settings()
{
}
UClass* Z_Construct_UClass_UCogWindowConfig_Settings()
{
	if (!Z_Registration_Info_UClass_UCogWindowConfig_Settings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogWindowConfig_Settings.OuterSingleton, Z_Construct_UClass_UCogWindowConfig_Settings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogWindowConfig_Settings.OuterSingleton;
}
UCogWindowConfig_Settings::UCogWindowConfig_Settings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogWindowConfig_Settings);
UCogWindowConfig_Settings::~UCogWindowConfig_Settings() {}
// ********** End Class UCogWindowConfig_Settings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogWidgetAlignment_StaticEnum, TEXT("ECogWidgetAlignment"), &Z_Registration_Info_UEnum_ECogWidgetAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2375712432U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogWindowConfig_Settings, UCogWindowConfig_Settings::StaticClass, TEXT("UCogWindowConfig_Settings"), &Z_Registration_Info_UClass_UCogWindowConfig_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogWindowConfig_Settings), 3491140223U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_305174812{
	TEXT("/Script/Cog"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_Cog_Public_CogWindow_Settings_h__Script_Cog_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
