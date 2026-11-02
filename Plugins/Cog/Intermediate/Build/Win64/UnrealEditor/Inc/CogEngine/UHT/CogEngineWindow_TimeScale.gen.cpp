// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_TimeScale.h"
#include "CogInputChord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_TimeScale() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_TimeScale();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_NoRegister();
COGIMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FCogInputChord();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineWindowConfig_TimeScale *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale;
UClass* UCogEngineWindowConfig_TimeScale::GetPrivateStaticClass()
{
	using TClass = UCogEngineWindowConfig_TimeScale;
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineWindowConfig_TimeScale"),
			Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale.InnerSingleton,
			StaticRegisterNativesUCogEngineWindowConfig_TimeScale,
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
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_NoRegister()
{
	return UCogEngineWindowConfig_TimeScale::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_TimeScale.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScales_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inline_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScaleModifiedColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_ZeroTimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_ResetTimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_FasterTimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcut_SlowerTimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_TimeScale.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineWindowConfig_TimeScale constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScales_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeScales;
	static void NewProp_Inline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Inline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeScaleModifiedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_ZeroTimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_ResetTimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_FasterTimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcut_SlowerTimeScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineWindowConfig_TimeScale constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineWindowConfig_TimeScale>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics

// ********** Begin Class UCogEngineWindowConfig_TimeScale Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, TimeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScales_Inner = { "TimeScales", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScales = { "TimeScales", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, TimeScales), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScales_MetaData), NewProp_TimeScales_MetaData) };
void Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Inline_SetBit(void* Obj)
{
	((UCogEngineWindowConfig_TimeScale*)Obj)->Inline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Inline = { "Inline", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineWindowConfig_TimeScale), &Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Inline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inline_MetaData), NewProp_Inline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScaleModifiedColor = { "TimeScaleModifiedColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, TimeScaleModifiedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScaleModifiedColor_MetaData), NewProp_TimeScaleModifiedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_ZeroTimeScale = { "Shortcut_ZeroTimeScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, Shortcut_ZeroTimeScale), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_ZeroTimeScale_MetaData), NewProp_Shortcut_ZeroTimeScale_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_ResetTimeScale = { "Shortcut_ResetTimeScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, Shortcut_ResetTimeScale), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_ResetTimeScale_MetaData), NewProp_Shortcut_ResetTimeScale_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_FasterTimeScale = { "Shortcut_FasterTimeScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, Shortcut_FasterTimeScale), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_FasterTimeScale_MetaData), NewProp_Shortcut_FasterTimeScale_MetaData) }; // 3035783925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_SlowerTimeScale = { "Shortcut_SlowerTimeScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_TimeScale, Shortcut_SlowerTimeScale), Z_Construct_UScriptStruct_FCogInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcut_SlowerTimeScale_MetaData), NewProp_Shortcut_SlowerTimeScale_MetaData) }; // 3035783925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScales_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScales,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Inline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_TimeScaleModifiedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_ZeroTimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_ResetTimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_FasterTimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::NewProp_Shortcut_SlowerTimeScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineWindowConfig_TimeScale Property Definitions **********************
UObject* (*const Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::ClassParams = {
	&UCogEngineWindowConfig_TimeScale::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::Class_MetaDataParams)
};
void UCogEngineWindowConfig_TimeScale::StaticRegisterNativesUCogEngineWindowConfig_TimeScale()
{
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_TimeScale()
{
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale.OuterSingleton, Z_Construct_UClass_UCogEngineWindowConfig_TimeScale_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale.OuterSingleton;
}
UCogEngineWindowConfig_TimeScale::UCogEngineWindowConfig_TimeScale() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineWindowConfig_TimeScale);
UCogEngineWindowConfig_TimeScale::~UCogEngineWindowConfig_TimeScale() {}
// ********** End Class UCogEngineWindowConfig_TimeScale *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_TimeScale_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineWindowConfig_TimeScale, UCogEngineWindowConfig_TimeScale::StaticClass, TEXT("UCogEngineWindowConfig_TimeScale"), &Z_Registration_Info_UClass_UCogEngineWindowConfig_TimeScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineWindowConfig_TimeScale), 1039173356U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_TimeScale_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_TimeScale_h__Script_CogEngine_19601863{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_TimeScale_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_TimeScale_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
