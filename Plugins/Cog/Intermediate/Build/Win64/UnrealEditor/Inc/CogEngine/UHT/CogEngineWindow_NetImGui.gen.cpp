// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CogEngineWindow_NetImGui.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCogEngineWindow_NetImGui() {}

// ********** Begin Cross Module References ********************************************************
COGCOMMON_API UClass* Z_Construct_UClass_UCogCommonConfig();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_NetImgui();
COGENGINE_API UClass* Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_NoRegister();
COGENGINE_API UEnum* Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode();
UPackage* Z_Construct_UPackage__Script_CogEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECogNetImguiAutoConnectionMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode;
static UEnum* ECogNetImguiAutoConnectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode, (UObject*)Z_Construct_UPackage__Script_CogEngine(), TEXT("ECogNetImguiAutoConnectionMode"));
	}
	return Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode.OuterSingleton;
}
template<> COGENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECogNetImguiAutoConnectionMode>()
{
	return ECogNetImguiAutoConnectionMode_StaticEnum();
}
struct Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoConnect.Name", "ECogNetImguiAutoConnectionMode::AutoConnect" },
		{ "AutoListen.Name", "ECogNetImguiAutoConnectionMode::AutoListen" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
		{ "NoAutoConnect.Name", "ECogNetImguiAutoConnectionMode::NoAutoConnect" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECogNetImguiAutoConnectionMode::NoAutoConnect", (int64)ECogNetImguiAutoConnectionMode::NoAutoConnect },
		{ "ECogNetImguiAutoConnectionMode::AutoConnect", (int64)ECogNetImguiAutoConnectionMode::AutoConnect },
		{ "ECogNetImguiAutoConnectionMode::AutoListen", (int64)ECogNetImguiAutoConnectionMode::AutoListen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CogEngine,
	nullptr,
	"ECogNetImguiAutoConnectionMode",
	"ECogNetImguiAutoConnectionMode",
	Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode()
{
	if (!Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode.InnerSingleton, Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode.InnerSingleton;
}
// ********** End Enum ECogNetImguiAutoConnectionMode **********************************************

// ********** Begin Class UCogEngineWindowConfig_NetImgui ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui;
UClass* UCogEngineWindowConfig_NetImgui::GetPrivateStaticClass()
{
	using TClass = UCogEngineWindowConfig_NetImgui;
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CogEngineWindowConfig_NetImgui"),
			Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui.InnerSingleton,
			StaticRegisterNativesUCogEngineWindowConfig_NetImgui,
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
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui.InnerSingleton;
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_NoRegister()
{
	return UCogEngineWindowConfig_NetImgui::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "CogEngineWindow_NetImGui.h" },
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientPort_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectOnDedicatedServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectOnListenServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectOnClient_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectOnStandalone_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerExecutable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerArguments_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRunServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CogEngineWindow_NetImGui.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCogEngineWindowConfig_NetImgui constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClientPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoConnectOnDedicatedServer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoConnectOnDedicatedServer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoConnectOnListenServer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoConnectOnListenServer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoConnectOnClient_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoConnectOnClient;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoConnectOnStandalone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoConnectOnStandalone;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerExecutable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerArguments;
	static void NewProp_AutoRunServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoRunServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCogEngineWindowConfig_NetImgui constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCogEngineWindowConfig_NetImgui>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics

// ********** Begin Class UCogEngineWindowConfig_NetImgui Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ClientName = { "ClientName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ClientName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientName_MetaData), NewProp_ClientName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ClientPort = { "ClientPort", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ClientPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientPort_MetaData), NewProp_ClientPort_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnDedicatedServer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnDedicatedServer = { "AutoConnectOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, AutoConnectOnDedicatedServer), Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectOnDedicatedServer_MetaData), NewProp_AutoConnectOnDedicatedServer_MetaData) }; // 2340567000
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnListenServer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnListenServer = { "AutoConnectOnListenServer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, AutoConnectOnListenServer), Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectOnListenServer_MetaData), NewProp_AutoConnectOnListenServer_MetaData) }; // 2340567000
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnClient_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnClient = { "AutoConnectOnClient", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, AutoConnectOnClient), Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectOnClient_MetaData), NewProp_AutoConnectOnClient_MetaData) }; // 2340567000
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnStandalone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnStandalone = { "AutoConnectOnStandalone", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, AutoConnectOnStandalone), Z_Construct_UEnum_CogEngine_ECogNetImguiAutoConnectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectOnStandalone_MetaData), NewProp_AutoConnectOnStandalone_MetaData) }; // 2340567000
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ServerAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAddress_MetaData), NewProp_ServerAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPort_MetaData), NewProp_ServerPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerDirectory = { "ServerDirectory", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ServerDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerDirectory_MetaData), NewProp_ServerDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerExecutable = { "ServerExecutable", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ServerExecutable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerExecutable_MetaData), NewProp_ServerExecutable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerArguments = { "ServerArguments", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCogEngineWindowConfig_NetImgui, ServerArguments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerArguments_MetaData), NewProp_ServerArguments_MetaData) };
void Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoRunServer_SetBit(void* Obj)
{
	((UCogEngineWindowConfig_NetImgui*)Obj)->AutoRunServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoRunServer = { "AutoRunServer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCogEngineWindowConfig_NetImgui), &Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoRunServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRunServer_MetaData), NewProp_AutoRunServer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ClientName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ClientPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnDedicatedServer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnListenServer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnListenServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnClient_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnStandalone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoConnectOnStandalone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerExecutable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_ServerArguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::NewProp_AutoRunServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::PropPointers) < 2048);
// ********** End Class UCogEngineWindowConfig_NetImgui Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCogCommonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_CogEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::ClassParams = {
	&UCogEngineWindowConfig_NetImgui::StaticClass,
	"Cog",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::Class_MetaDataParams), Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::Class_MetaDataParams)
};
void UCogEngineWindowConfig_NetImgui::StaticRegisterNativesUCogEngineWindowConfig_NetImgui()
{
}
UClass* Z_Construct_UClass_UCogEngineWindowConfig_NetImgui()
{
	if (!Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui.OuterSingleton, Z_Construct_UClass_UCogEngineWindowConfig_NetImgui_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui.OuterSingleton;
}
UCogEngineWindowConfig_NetImgui::UCogEngineWindowConfig_NetImgui() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCogEngineWindowConfig_NetImgui);
UCogEngineWindowConfig_NetImgui::~UCogEngineWindowConfig_NetImgui() {}
// ********** End Class UCogEngineWindowConfig_NetImgui ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECogNetImguiAutoConnectionMode_StaticEnum, TEXT("ECogNetImguiAutoConnectionMode"), &Z_Registration_Info_UEnum_ECogNetImguiAutoConnectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2340567000U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCogEngineWindowConfig_NetImgui, UCogEngineWindowConfig_NetImgui::StaticClass, TEXT("UCogEngineWindowConfig_NetImgui"), &Z_Registration_Info_UClass_UCogEngineWindowConfig_NetImgui, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCogEngineWindowConfig_NetImgui), 3577861180U) },
	};
}; // Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_1148933201{
	TEXT("/Script/CogEngine"),
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewDiceTact_20263_Projets3e_DiceTact_DiceTactUE_Plugins_Cog_Source_CogEngine_Public_CogEngineWindow_NetImGui_h__Script_CogEngine_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
