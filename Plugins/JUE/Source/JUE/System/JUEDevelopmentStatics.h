// © Justin Renaud-Gélinas, 2025

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JUEDevelopmentStatics.generated.h"

/**
 *	Various static functions for Enhanced development.
 */

UCLASS()
class JUE_API UJUEDevelopmentStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="Development Statics")
	static void ReportErrorMessage(const FString& ErrorMessage, const UObject* WorldContextObject = nullptr, int32 MessageKey = -1);

	UFUNCTION(BlueprintCallable, Category="Development Statics")
	static void ReportWarningMessage(const FString& WarningMessage, const UObject* WorldContextObject = nullptr, int32 MessageKey = -1);
	
	UFUNCTION(BlueprintCallable, Category="Development Statics")
	static void ReportDebugMessage(const FString& DebugMessage, const UObject* WorldContextObject = nullptr, FLinearColor CustomColor = FLinearColor::Green, int32 MessageKey = -1);
	static void FormFinalMessage(const FString& DebugMessage, const UObject* WorldContextObject, FString& FinalMessage);
	
};
