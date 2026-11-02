// Fill out your copyright notice in the Description page of Project Settings.


#include "JUEBaseController.h"

#include "CommonUserWidget.h"
#include "System/JUEDevelopmentStatics.h"
#include "System/JUEEngineSettings.h"

void AJUEBaseController::BeginPlay()
{
	
	if (IsLocalPlayerController())
	{
		const UJUEEngineSettings* EngineSettings = GetDefault<UJUEEngineSettings>();
		
		if (TSubclassOf<UCommonUserWidget> RootLayoutRef = EngineSettings->GetRootLayoutWidgetClass())
		{
			RootLayout = CreateWidget<UCommonUserWidget>(this, RootLayoutRef);
			RootLayout->AddToPlayerScreen();
		}
		else
		{
			UJUEDevelopmentStatics::ReportErrorMessage("Invalid Root layout reference! Please set it in the (JUE) Project Settings", this);
		}
		
	}

	Super::BeginPlay();
}

UCommonUserWidget* AJUEBaseController::GetRootLayout() const
{
	return RootLayout;
}
