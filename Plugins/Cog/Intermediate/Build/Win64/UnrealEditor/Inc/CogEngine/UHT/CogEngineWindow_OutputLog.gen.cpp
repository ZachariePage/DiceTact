// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_OutputLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_OutputLog() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_OutputLog();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_OutputLog_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_OutputLog ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_OutputLog;
UClass* UCogEngineConfig_OutputLog::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_OutputLog;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_OutputLog.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_OutputLog"),
			Z_Registration_Info_UClass_UCogEngineConfig_OutputLog.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_OutputLog,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_OutputLog.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_OutputLog_NoRegister()
{
	return UCogEngineConfig_OutputLog::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_OutputLog.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoScroll_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameCycle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowVerbosity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowAsTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerbosityFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseUTCTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_OutputLog.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_OutputLog constinit property declarations ***************
	static void NewProp_AutoScroll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoScroll;
	static void NewProp_ShowTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTime;
	static void NewProp_ShowFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCycle;
	static void NewProp_ShowCategory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCategory;
	static void NewProp_ShowVerbosity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowVerbosity;
	static void NewProp_ShowAsTable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowAsTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerbosityFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarningColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorColor;
	static void NewProp_UseUTCTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUTCTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_OutputLog constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_OutputLog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics

// ********** Begin Class UCogEngineConfig_OutputLog Property Definitions **************************
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_AutoScroll_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->AutoScroll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_AutoScroll = { "AutoScroll", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_AutoScroll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoScroll_MetaData), NewProp_AutoScroll_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowTime_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->ShowTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowTime = { "ShowTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowTime_MetaData), NewProp_ShowTime_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowFrame_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->ShowFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowFrame = { "ShowFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFrame_MetaData), NewProp_ShowFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_FrameCycle = { "FrameCycle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_OutputLog, FrameCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCycle_MetaData), NewProp_FrameCycle_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowCategory_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->ShowCategory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowCategory = { "ShowCategory", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowCategory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowCategory_MetaData), NewProp_ShowCategory_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowVerbosity_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->ShowVerbosity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowVerbosity = { "ShowVerbosity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowVerbosity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowVerbosity_MetaData), NewProp_ShowVerbosity_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowAsTable_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->ShowAsTable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowAsTable = { "ShowAsTable", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowAsTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowAsTable_MetaData), NewProp_ShowAsTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_VerbosityFilter = { "VerbosityFilter", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_OutputLog, VerbosityFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerbosityFilter_MetaData), NewProp_VerbosityFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_OutputLog, DefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultColor_MetaData), NewProp_DefaultColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_WarningColor = { "WarningColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_OutputLog, WarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningColor_MetaData), NewProp_WarningColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ErrorColor = { "ErrorColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_OutputLog, ErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorColor_MetaData), NewProp_ErrorColor_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_UseUTCTime_SetBit(void* Obj)
{
	((UCogEngineConfig_OutputLog*)Obj)->UseUTCTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_UseUTCTime = { "UseUTCTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_OutputLog), &Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_UseUTCTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseUTCTime_MetaData), NewProp_UseUTCTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_AutoScroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_FrameCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowVerbosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ShowAsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_VerbosityFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_DefaultColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_WarningColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_ErrorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::NewProp_UseUTCTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_OutputLog Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::ClassParams = {
	&UCogEngineConfig_OutputLog::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_OutputLog::StaticRegisterNativesUCogEngineConfig_OutputLog()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_OutputLog()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_OutputLog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_OutputLog.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_OutputLog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_OutputLog.OuterSingleton;
}
UCogEngineConfig_OutputLog::UCogEngineConfig_OutputLog() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_OutputLog);
UCogEngineConfig_OutputLog::~UCogEngineConfig_OutputLog() {}
// ********** End Class UCogEngineConfig_OutputLog *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_OutputLog_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_OutputLog, UCogEngineConfig_OutputLog::StaticClass, TEXT("UCogEngineConfig_OutputLog"), &Z_Registration_Info_UClass_UCogEngineConfig_OutputLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_OutputLog), 4121892314U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_OutputLog_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_OutputLog_h__Script_CogEngine_1137103624{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_OutputLog_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_OutputLog_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
