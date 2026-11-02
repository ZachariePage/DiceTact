// Copyright Epic Games, Inc. All Rights Reserved.

#include "Loi101Plugin.h"

#define LOCTEXT_NAMESPACE "FLoi101PluginModule"

void FLoi101PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	GConfig->SetString( TEXT("Internationalization"), TEXT("Language"), TEXT("English"), GEditorSettingsIni );
	GConfig->SetString( TEXT("Internationalization"), TEXT("Culture"), TEXT(""), GEditorSettingsIni ); // Clear legacy setting
	GConfig->Flush(false, GEditorSettingsIni);
}

void FLoi101PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLoi101PluginModule, Loi101Plugin)