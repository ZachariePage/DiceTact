// Copyright Epic Games, Inc. All Rights Reserved.

#include "NamingConventionValidator.h"

#include "NamingConventionValidator/EditorNCVSubsystem.h"

#define LOCTEXT_NAMESPACE "FNamingConventionValidatorModule"


void FNamingConventionValidatorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::
		CreateRaw(this, &FNamingConventionValidatorModule::RegisterMenuExtensions));
	
}

void FNamingConventionValidatorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);
}

void FNamingConventionValidatorModule::RegisterMenuExtensions()
{
	
	FToolMenuOwnerScoped OwnerScoped(this);
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolbar");
	FToolMenuSection& ToolBarSection = Menu->AddSection("PlayGameExtensions", TAttribute<FText>(), FToolMenuInsert("Play", EToolMenuInsertType::After));

	//Open Mov stats button
	FToolMenuEntry OpenMovStatsEntry = FToolMenuEntry::InitToolBarButton(
		"My new Toolbar Button",
		FExecuteAction::CreateRaw(this, &FNamingConventionValidatorModule::OnNCVToolOpened),
		FText::AsCultureInvariant("Open Validation Tool"),
		FText::AsCultureInvariant("Open Naming Convention Validation Tool widget."),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.GameSettings")
		);
	OpenMovStatsEntry.StyleNameOverride = "CalloutToolbar";
	ToolBarSection.AddEntry(OpenMovStatsEntry);
}

void FNamingConventionValidatorModule::OnNCVToolOpened()
{
	if (UEditorNCVSubsystem* EdNCVSubsystem = GEditor->GetEditorSubsystem<UEditorNCVSubsystem>())
	{
		EdNCVSubsystem->OpenNCVWidgetTool();
	}
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNamingConventionValidatorModule, NamingConventionValidator)