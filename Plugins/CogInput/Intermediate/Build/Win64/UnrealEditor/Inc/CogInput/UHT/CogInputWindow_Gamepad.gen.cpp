// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogInputWindow_Gamepad.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogInputWindow_Gamepad() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGINPUT_API UClass* Z_Construct_UClass_UCogInputConfig_Gamepad();
COGINPUT_API UClass* Z_Construct_UClass_UCogInputConfig_Gamepad_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogInput();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogInputConfig_Gamepad **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogInputConfig_Gamepad;
UClass* UCogInputConfig_Gamepad::GetPrivateStaticClass()
{
	using TClass = UCogInputConfig_Gamepad;
	if (!Z_Registration_Info_UClass_UCogInputConfig_Gamepad.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogInputConfig_Gamepad"),
			Z_Registration_Info_UClass_UCogInputConfig_Gamepad.InnerSingleton,
			StaticRegisterNativesUCogInputConfig_Gamepad,
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
	return Z_Registration_Info_UClass_UCogInputConfig_Gamepad.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogInputConfig_Gamepad_NoRegister()
{
	return UCogInputConfig_Gamepad::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogInputConfig_Gamepad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogInputWindow_Gamepad.h" },
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowAsOverlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertRightStickY_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertLeftStickY_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftStickSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStickSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InjectColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatPeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Gamepad.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogInputConfig_Gamepad constinit property declarations ******************
	static void NewProp_bShowAsOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAsOverlay;
	static void NewProp_bLockPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static void NewProp_bInvertRightStickY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertRightStickY;
	static void NewProp_bInvertLeftStickY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertLeftStickY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftStickSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightStickSensitivity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InjectColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Border;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatPeriod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogInputConfig_Gamepad constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogInputConfig_Gamepad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogInputConfig_Gamepad_Statics

// ********** Begin Class UCogInputConfig_Gamepad Property Definitions *****************************
void Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bShowAsOverlay_SetBit(void* Obj)
{
	((UCogInputConfig_Gamepad*)Obj)->bShowAsOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bShowAsOverlay = { "bShowAsOverlay", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogInputConfig_Gamepad), &Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bShowAsOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowAsOverlay_MetaData), NewProp_bShowAsOverlay_MetaData) };
void Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bLockPosition_SetBit(void* Obj)
{
	((UCogInputConfig_Gamepad*)Obj)->bLockPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bLockPosition = { "bLockPosition", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogInputConfig_Gamepad), &Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bLockPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockPosition_MetaData), NewProp_bLockPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, Alignment), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, Padding), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
void Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertRightStickY_SetBit(void* Obj)
{
	((UCogInputConfig_Gamepad*)Obj)->bInvertRightStickY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertRightStickY = { "bInvertRightStickY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogInputConfig_Gamepad), &Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertRightStickY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertRightStickY_MetaData), NewProp_bInvertRightStickY_MetaData) };
void Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertLeftStickY_SetBit(void* Obj)
{
	((UCogInputConfig_Gamepad*)Obj)->bInvertLeftStickY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertLeftStickY = { "bInvertLeftStickY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogInputConfig_Gamepad), &Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertLeftStickY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertLeftStickY_MetaData), NewProp_bInvertLeftStickY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_LeftStickSensitivity = { "LeftStickSensitivity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, LeftStickSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftStickSensitivity_MetaData), NewProp_LeftStickSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_RightStickSensitivity = { "RightStickSensitivity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, RightStickSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStickSensitivity_MetaData), NewProp_RightStickSensitivity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, BackgroundColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_ButtonColor = { "ButtonColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, ButtonColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonColor_MetaData), NewProp_ButtonColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, BorderColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_PressedColor = { "PressedColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, PressedColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedColor_MetaData), NewProp_PressedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_HoveredColor = { "HoveredColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, HoveredColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredColor_MetaData), NewProp_HoveredColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_InjectColor = { "InjectColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, InjectColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InjectColor_MetaData), NewProp_InjectColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_Border = { "Border", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, Border), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_MetaData), NewProp_Border_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_RepeatPeriod = { "RepeatPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Gamepad, RepeatPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatPeriod_MetaData), NewProp_RepeatPeriod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bShowAsOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bLockPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertRightStickY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_bInvertLeftStickY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_LeftStickSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_RightStickSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_ButtonColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_PressedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_HoveredColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_InjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_Border,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::NewProp_RepeatPeriod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::PropPointers) < 2048);
// ********** End Class UCogInputConfig_Gamepad Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::ClassParams = {
	&UCogInputConfig_Gamepad::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::Class_MetaDataParams)
};
void UCogInputConfig_Gamepad::StaticRegisterNativesUCogInputConfig_Gamepad()
{
}
UClass* Z_Construct_UClass_UCogInputConfig_Gamepad()
{
	if (!Z_Registration_Info_UClass_UCogInputConfig_Gamepad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogInputConfig_Gamepad.OuterSingleton, Z_Construct_UClass_UCogInputConfig_Gamepad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogInputConfig_Gamepad.OuterSingleton;
}
UCogInputConfig_Gamepad::UCogInputConfig_Gamepad() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogInputConfig_Gamepad);
UCogInputConfig_Gamepad::~UCogInputConfig_Gamepad() {}
// ********** End Class UCogInputConfig_Gamepad ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Gamepad_h__Script_CogInput_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogInputConfig_Gamepad, UCogInputConfig_Gamepad::StaticClass, TEXT("UCogInputConfig_Gamepad"), &Z_Registration_Info_UClass_UCogInputConfig_Gamepad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogInputConfig_Gamepad), 3211998121U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Gamepad_h__Script_CogInput_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Gamepad_h__Script_CogInput_111601217{
	TEXT("/Script/CogInput"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Gamepad_h__Script_CogInput_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Gamepad_h__Script_CogInput_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
