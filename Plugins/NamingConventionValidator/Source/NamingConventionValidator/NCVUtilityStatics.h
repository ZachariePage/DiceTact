// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NCVUtilityStatics.generated.h"

struct FNCValidationResult;
/**
 * 
 */
UCLASS()
class UNCVUtilityStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Utility Statics", meta=(ToolTip="Returns an empty string if not found in the library."))
	static FString GetCleanNameForClasses(TSubclassOf<UObject> Class, bool bPluralName = false);

	UFUNCTION(Blueprintable, BlueprintPure, Category="NCV Utility Statics")
	static bool IsValidationResultValid(const FNCValidationResult& Result);
};
