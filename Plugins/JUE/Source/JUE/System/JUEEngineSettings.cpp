// Fill out your copyright notice in the Description page of Project Settings.


#include "JUEEngineSettings.h"

#include "CommonUserWidget.h"

UJUEEngineSettings::UJUEEngineSettings(const FObjectInitializer& ObjectInitializer)
{
	CategoryName = "Plugins";
	SectionName = "Justin's Unreal Essentials";
}

#if WITH_EDITOR
FText UJUEEngineSettings::GetSectionText() const
{
	return FText::AsCultureInvariant("JUE Engine Settings");
}

FText UJUEEngineSettings::GetSectionDescription() const
{
	return FText::AsCultureInvariant("Justin's Unreal Essentials is a plugin compiling common base content found in Unreal Engine projects.");
}
#endif

TSubclassOf<UCommonUserWidget> UJUEEngineSettings::GetRootLayoutWidgetClass() const
{
	return RootLayoutWidget.Get();
}
