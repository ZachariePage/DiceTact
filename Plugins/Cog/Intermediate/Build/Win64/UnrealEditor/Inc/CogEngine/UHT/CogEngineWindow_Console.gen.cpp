// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_Console.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_Console() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Console();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_Console_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_Console *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_Console;
UClass* UCogEngineConfig_Console::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_Console;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Console.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_Console"),
			Z_Registration_Info_UClass_UCogEngineConfig_Console.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_Console,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_Console.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_Console_NoRegister()
{
	return UCogEngineConfig_Console::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_Console_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_Console.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DockInputInMenuBar_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusWidgetWhenAppearing_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseClipper_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHelp_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHistoryCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionMinimumCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_Console.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_Console constinit property declarations *****************
	static void NewProp_SortCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SortCommands;
	static void NewProp_DockInputInMenuBar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DockInputInMenuBar;
	static void NewProp_FocusWidgetWhenAppearing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FocusWidgetWhenAppearing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WidgetWidth;
	static void NewProp_UseClipper_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseClipper;
	static void NewProp_ShowHelp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowHelp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHistoryCommands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompletionMinimumCharacters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_Console constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_Console>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_Console_Statics

// ********** Begin Class UCogEngineConfig_Console Property Definitions ****************************
void Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_SortCommands_SetBit(void* Obj)
{
	((UCogEngineConfig_Console*)Obj)->SortCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_SortCommands = { "SortCommands", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Console), &Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_SortCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortCommands_MetaData), NewProp_SortCommands_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_DockInputInMenuBar_SetBit(void* Obj)
{
	((UCogEngineConfig_Console*)Obj)->DockInputInMenuBar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_DockInputInMenuBar = { "DockInputInMenuBar", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Console), &Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_DockInputInMenuBar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DockInputInMenuBar_MetaData), NewProp_DockInputInMenuBar_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_FocusWidgetWhenAppearing_SetBit(void* Obj)
{
	((UCogEngineConfig_Console*)Obj)->FocusWidgetWhenAppearing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_FocusWidgetWhenAppearing = { "FocusWidgetWhenAppearing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Console), &Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_FocusWidgetWhenAppearing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusWidgetWhenAppearing_MetaData), NewProp_FocusWidgetWhenAppearing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_WidgetWidth = { "WidgetWidth", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Console, WidgetWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetWidth_MetaData), NewProp_WidgetWidth_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_UseClipper_SetBit(void* Obj)
{
	((UCogEngineConfig_Console*)Obj)->UseClipper = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_UseClipper = { "UseClipper", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Console), &Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_UseClipper_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseClipper_MetaData), NewProp_UseClipper_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_ShowHelp_SetBit(void* Obj)
{
	((UCogEngineConfig_Console*)Obj)->ShowHelp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_ShowHelp = { "ShowHelp", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_Console), &Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_ShowHelp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHelp_MetaData), NewProp_ShowHelp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_NumHistoryCommands = { "NumHistoryCommands", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Console, NumHistoryCommands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHistoryCommands_MetaData), NewProp_NumHistoryCommands_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_CompletionMinimumCharacters = { "CompletionMinimumCharacters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Console, CompletionMinimumCharacters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionMinimumCharacters_MetaData), NewProp_CompletionMinimumCharacters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_HistoryColor = { "HistoryColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_Console, HistoryColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryColor_MetaData), NewProp_HistoryColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_Console_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_SortCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_DockInputInMenuBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_FocusWidgetWhenAppearing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_WidgetWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_UseClipper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_ShowHelp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_NumHistoryCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_CompletionMinimumCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_Console_Statics::NewProp_HistoryColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Console_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_Console Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_Console_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Console_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_Console_Statics::ClassParams = {
	&UCogEngineConfig_Console::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_Console_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Console_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_Console_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_Console_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_Console::StaticRegisterNativesUCogEngineConfig_Console()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_Console()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_Console.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_Console.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_Console_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_Console.OuterSingleton;
}
UCogEngineConfig_Console::UCogEngineConfig_Console() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_Console);
UCogEngineConfig_Console::~UCogEngineConfig_Console() {}
// ********** End Class UCogEngineConfig_Console ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Console_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_Console, UCogEngineConfig_Console::StaticClass, TEXT("UCogEngineConfig_Console"), &Z_Registration_Info_UClass_UCogEngineConfig_Console, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_Console), 2852103207U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Console_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Console_h__Script_CogEngine_3555887256{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Console_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_Console_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
