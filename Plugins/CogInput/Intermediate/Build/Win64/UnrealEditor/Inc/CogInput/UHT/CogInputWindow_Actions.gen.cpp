// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogInputWindow_Actions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogInputWindow_Actions() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGINPUT_API UClass* Z_Construct_UClass_UCogInputConfig_Actions();
COGINPUT_API UClass* Z_Construct_UClass_UCogInputConfig_Actions_NoRegister();
UPackage* Z_Construct_UPackage__Script_CogInput();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogInputConfig_Actions **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogInputConfig_Actions;
UClass* UCogInputConfig_Actions::GetPrivateStaticClass()
{
	using TClass = UCogInputConfig_Actions;
	if (!Z_Registration_Info_UClass_UCogInputConfig_Actions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogInputConfig_Actions"),
			Z_Registration_Info_UClass_UCogInputConfig_Actions.InnerSingleton,
			StaticRegisterNativesUCogInputConfig_Actions,
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
	return Z_Registration_Info_UClass_UCogInputConfig_Actions.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogInputConfig_Actions_NoRegister()
{
	return UCogInputConfig_Actions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogInputConfig_Actions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogInputWindow_Actions.h" },
		{ "ModuleRelativePath", "Public/CogInputWindow_Actions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatPeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Actions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHeader_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogInputWindow_Actions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogInputConfig_Actions constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatPeriod;
	static void NewProp_ShowHeader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowHeader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogInputConfig_Actions constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogInputConfig_Actions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogInputConfig_Actions_Statics

// ********** Begin Class UCogInputConfig_Actions Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCogInputConfig_Actions_Statics::NewProp_RepeatPeriod = { "RepeatPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogInputConfig_Actions, RepeatPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatPeriod_MetaData), NewProp_RepeatPeriod_MetaData) };
void Z_Construct_UClass_UCogInputConfig_Actions_Statics::NewProp_ShowHeader_SetBit(void* Obj)
{
	((UCogInputConfig_Actions*)Obj)->ShowHeader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogInputConfig_Actions_Statics::NewProp_ShowHeader = { "ShowHeader", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogInputConfig_Actions), &Z_Construct_UClass_UCogInputConfig_Actions_Statics::NewProp_ShowHeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHeader_MetaData), NewProp_ShowHeader_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogInputConfig_Actions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Actions_Statics::NewProp_RepeatPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogInputConfig_Actions_Statics::NewProp_ShowHeader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Actions_Statics::PropPointers) < 2048);
// ********** End Class UCogInputConfig_Actions Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UCogInputConfig_Actions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Actions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogInputConfig_Actions_Statics::ClassParams = {
	&UCogInputConfig_Actions::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogInputConfig_Actions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Actions_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogInputConfig_Actions_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogInputConfig_Actions_Statics::Class_MetaDataParams)
};
void UCogInputConfig_Actions::StaticRegisterNativesUCogInputConfig_Actions()
{
}
UClass* Z_Construct_UClass_UCogInputConfig_Actions()
{
	if (!Z_Registration_Info_UClass_UCogInputConfig_Actions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogInputConfig_Actions.OuterSingleton, Z_Construct_UClass_UCogInputConfig_Actions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogInputConfig_Actions.OuterSingleton;
}
UCogInputConfig_Actions::UCogInputConfig_Actions() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogInputConfig_Actions);
UCogInputConfig_Actions::~UCogInputConfig_Actions() {}
// ********** End Class UCogInputConfig_Actions ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Actions_h__Script_CogInput_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogInputConfig_Actions, UCogInputConfig_Actions::StaticClass, TEXT("UCogInputConfig_Actions"), &Z_Registration_Info_UClass_UCogInputConfig_Actions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogInputConfig_Actions), 2171269416U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Actions_h__Script_CogInput_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Actions_h__Script_CogInput_3305704576{
	TEXT("/Script/CogInput"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Actions_h__Script_CogInput_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_CogInput_Source_CogInput_Public_CogInputWindow_Actions_h__Script_CogInput_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
