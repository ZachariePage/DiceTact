// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NCVResultCategory.generated.h"

struct FNCValidationResult;
struct FNamingConvention;
/**
 * 
 */
UCLASS()
class NAMINGCONVENTIONVALIDATOR_API UNCVResultCategory : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category="NCV Result Category")
	void RemoveEntries();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="NCV Result Category")
	void InitializeCategory(TSubclassOf<UObject> ClassCategory);
	
	void AddIncorrectEntry(const FAssetData& AssetData, const FNamingConvention* NamingConvention, const FNCValidationResult& ValidationResult);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnRemoveEntries();
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnEntryAdded(const FAssetData& AssetData, const FNamingConvention& NamingConvention, const FNCValidationResult& ValidationResult);
};
