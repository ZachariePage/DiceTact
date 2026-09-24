// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NCVResultsSorterWidget.generated.h"

class UNCVResultCategory;
struct FNCValidationResult;
struct FNamingConvention;
/**
 * 
 */
UCLASS()
class NAMINGCONVENTIONVALIDATOR_API UNCVResultsSorterWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Results Sorter Widget")
	bool IsEmpty() const;

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif

	void RemoveEntries();

	void AddIncorrectEntry(const FAssetData& AssetData, const FNamingConvention* NamingConvention, const FNCValidationResult& ValidationResult);

	UFUNCTION(BlueprintImplementableEvent)
	void OnCategoryAdded(UNCVResultCategory* NewCategory);
	
	UPROPERTY()
	TMap<TSubclassOf<UObject>, UNCVResultCategory*> RegisteredEntries;

	UPROPERTY(EditDefaultsOnly, Category="NCV Results Sorter Widget")
	TSubclassOf<UNCVResultCategory> ResultCategoryClass;
};
