// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_BuildInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_BuildInfo() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_BuildInfo();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineConfig_BuildInfo_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCogEngineConfig_BuildInfo ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo;
UClass* UCogEngineConfig_BuildInfo::GetPrivateStaticClass()
{
	using TClass = UCogEngineConfig_BuildInfo;
	if (!Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineConfig_BuildInfo"),
			Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo.InnerSingleton,
			StaticRegisterNativesUCogEngineConfig_BuildInfo,
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
	return Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineConfig_BuildInfo_NoRegister()
{
	return UCogEngineConfig_BuildInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_BuildInfo.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowInPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBranchName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBuildDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowCurrentChangelist_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowCompatibleChangelist_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBuildConfiguration_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBuildUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBuildMachine_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBuildTargetType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowInForeground_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rounding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_BuildInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineConfig_BuildInfo constinit property declarations ***************
	static void NewProp_ShowInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowInEditor;
	static void NewProp_ShowInPackage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowInPackage;
	static void NewProp_ShowBranchName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBranchName;
	static void NewProp_ShowBuildDate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBuildDate;
	static void NewProp_ShowCurrentChangelist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCurrentChangelist;
	static void NewProp_ShowCompatibleChangelist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCompatibleChangelist;
	static void NewProp_ShowBuildConfiguration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBuildConfiguration;
	static void NewProp_ShowBuildUser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBuildUser;
	static void NewProp_ShowBuildMachine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBuildMachine;
	static void NewProp_ShowBuildTargetType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBuildTargetType;
	static void NewProp_ShowInForeground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowInForeground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rounding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineConfig_BuildInfo constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineConfig_BuildInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics

// ********** Begin Class UCogEngineConfig_BuildInfo Property Definitions **************************
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInEditor_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInEditor = { "ShowInEditor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowInEditor_MetaData), NewProp_ShowInEditor_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInPackage_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowInPackage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInPackage = { "ShowInPackage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInPackage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowInPackage_MetaData), NewProp_ShowInPackage_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBranchName_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowBranchName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBranchName = { "ShowBranchName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBranchName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBranchName_MetaData), NewProp_ShowBranchName_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildDate_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowBuildDate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildDate = { "ShowBuildDate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildDate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBuildDate_MetaData), NewProp_ShowBuildDate_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCurrentChangelist_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowCurrentChangelist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCurrentChangelist = { "ShowCurrentChangelist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCurrentChangelist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowCurrentChangelist_MetaData), NewProp_ShowCurrentChangelist_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCompatibleChangelist_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowCompatibleChangelist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCompatibleChangelist = { "ShowCompatibleChangelist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCompatibleChangelist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowCompatibleChangelist_MetaData), NewProp_ShowCompatibleChangelist_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildConfiguration_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowBuildConfiguration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildConfiguration = { "ShowBuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildConfiguration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBuildConfiguration_MetaData), NewProp_ShowBuildConfiguration_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildUser_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowBuildUser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildUser = { "ShowBuildUser", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildUser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBuildUser_MetaData), NewProp_ShowBuildUser_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildMachine_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowBuildMachine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildMachine = { "ShowBuildMachine", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildMachine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBuildMachine_MetaData), NewProp_ShowBuildMachine_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildTargetType_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowBuildTargetType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildTargetType = { "ShowBuildTargetType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildTargetType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBuildTargetType_MetaData), NewProp_ShowBuildTargetType_MetaData) };
void Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInForeground_SetBit(void* Obj)
{
	((UCogEngineConfig_BuildInfo*)Obj)->ShowInForeground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInForeground = { "ShowInForeground", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineConfig_BuildInfo), &Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInForeground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowInForeground_MetaData), NewProp_ShowInForeground_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, Alignment), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, Padding), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Rounding = { "Rounding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, Rounding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rounding_MetaData), NewProp_Rounding_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, Separator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separator_MetaData), NewProp_Separator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineConfig_BuildInfo, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBranchName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCurrentChangelist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowCompatibleChangelist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildMachine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowBuildTargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_ShowInForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Rounding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_Separator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::NewProp_TextColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineConfig_BuildInfo Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::ClassParams = {
	&UCogEngineConfig_BuildInfo::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::Class_MetaDataParams)
};
void UCogEngineConfig_BuildInfo::StaticRegisterNativesUCogEngineConfig_BuildInfo()
{
}
UClass* Z_Construct_UClass_UCogEngineConfig_BuildInfo()
{
	if (!Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo.OuterSingleton, Z_Construct_UClass_UCogEngineConfig_BuildInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo.OuterSingleton;
}
UCogEngineConfig_BuildInfo::UCogEngineConfig_BuildInfo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineConfig_BuildInfo);
UCogEngineConfig_BuildInfo::~UCogEngineConfig_BuildInfo() {}
// ********** End Class UCogEngineConfig_BuildInfo *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_BuildInfo_h__Script_CogEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineConfig_BuildInfo, UCogEngineConfig_BuildInfo::StaticClass, TEXT("UCogEngineConfig_BuildInfo"), &Z_Registration_Info_UClass_UCogEngineConfig_BuildInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineConfig_BuildInfo), 3694377854U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_BuildInfo_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_BuildInfo_h__Script_CogEngine_3351281467{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_BuildInfo_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_BuildInfo_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
