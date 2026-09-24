// © Justin Renaud-Gélinas, 2025


#include "JUEDevelopmentStatics.h"
#include "JUESystemStatics.h"
#include "Engine.h"


void UJUEDevelopmentStatics::ReportErrorMessage(const FString& ErrorMessage, const UObject* WorldContextObject, int32 MessageKey)
{
	if (UJUESystemStatics::IsInBuildShipping()) return;

	FString FinalMessage = "ERROR: ";
	
	FormFinalMessage(ErrorMessage, WorldContextObject, FinalMessage);
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 10, FColor::Red, FinalMessage);
	}
	UE_LOG(LogTemp, Error, TEXT("%s"), *FinalMessage);
}

void UJUEDevelopmentStatics::ReportWarningMessage(const FString& WarningMessage, const UObject* WorldContextObject, int32 MessageKey)
{
	if (UJUESystemStatics::IsInBuildShipping()) return;

	FString FinalMessage = "WARNING: ";
	
	FormFinalMessage(WarningMessage, WorldContextObject, FinalMessage);
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 7, FColor::Orange, FinalMessage);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FinalMessage);
}


void UJUEDevelopmentStatics::ReportDebugMessage(const FString& DebugMessage, const UObject* WorldContextObject, FLinearColor CustomColor, int32 MessageKey)
{
	if (UJUESystemStatics::IsInBuildShipping()) return;
	
	FString FinalMessage = "Debug: ";
	
	FormFinalMessage(DebugMessage, WorldContextObject, FinalMessage);
		
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(MessageKey, 4, CustomColor.ToFColor(true), FinalMessage);
	}
	UE_LOG(LogTemp, Display, TEXT("%s"), *FinalMessage);
}

void UJUEDevelopmentStatics::FormFinalMessage(const FString& DebugMessage, const UObject* WorldContextObject, FString& FinalMessage)
{
	if (WorldContextObject)
	{
		FinalMessage += "(" + WorldContextObject->GetName() + ") ";
	}

	FinalMessage += DebugMessage;
}
