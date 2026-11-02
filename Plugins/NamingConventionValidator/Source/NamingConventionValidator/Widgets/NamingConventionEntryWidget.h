// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "EditorNCVTool.h"
#include "Blueprint/UserWidget.h"
#include "NamingConventionEntryWidget.generated.h"

struct FNCValidationResult;
struct FNamingConvention;
/**
 * 
 */
UCLASS()
class NAMINGCONVENTIONVALIDATOR_API UNamingConventionEntryWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="NCV Entry")
	void RemoveEntry();

	UFUNCTION(BlueprintCallable, Category="NCV Entry")
	void InitializeEntry(const FAssetData& AssetData, const FNamingConvention& NamingConvention, const FNCValidationResult& ValidationResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Entry")
	const FAssetData& GetEntryAssetData() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Entry")
	const FNamingConvention& GetEntryNamingConvention() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Entry")
	const FNCValidationResult& GetEntryValidationResult() const;

	UFUNCTION(BlueprintCallable, Category="NCV Entry")
	void BrowseToAsset();


	UFUNCTION(BlueprintCallable, Category="NCV Entry")
	void TryMatchAssetToConvention(const FString& TargetConvention, bool bSuffix);
	//My helper functions
	void FixAssetSuffix(const FString& TargetConvention, FString& FromName);
	void FixAssetPrefix(const FString& TargetConvention, FString& FromName);

	/* This is the exposed function when trying to force rename the asset.
	 * When calling it, it will update the asset,
	 * then call Updates functions (OnEntryUpdated).
	 */
	UFUNCTION(BlueprintCallable, Category="NCV Entry")
	void RenameAsset(const FString& NewAssetName);
	void RenameAssetInternal(const FString& NewName); //This is the helper function. It only does the actual job of renaming the asset.

	/* Called for updates in blueprints when the internal functions are done. */
	UFUNCTION(BlueprintImplementableEvent)
	void OnEntryInitialized(const FAssetData& AssetData, const FNamingConvention& NamingConvention, const FNCValidationResult& ValidationResult);
	
	UFUNCTION(BlueprintImplementableEvent, meta=(ToolTip="Called after trying to fix an asset. Also Updates the AssetData's location."))
	void OnEntryUpdated();
	
	FAssetData EntryAssetData;
	const FNamingConvention* EntryNamingConvention;
	FNCValidationResult EntryValidationResult;
};
