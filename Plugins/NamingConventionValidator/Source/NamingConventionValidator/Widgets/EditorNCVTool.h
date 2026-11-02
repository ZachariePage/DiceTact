// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "NamingConventionValidator/NCValidationParameters.h"
#include "NamingConventionValidator/NCVEditorSettings.h"
#include "EditorNCVTool.generated.h"

class UNCVResultsSorterWidget;
class UNCVEditorSettings;
class UDetailsView;


UENUM(BlueprintType)
enum class EValidationResult : uint8
{
	Error,
	Success
};

USTRUCT(Blueprintable)
struct FNCValidationResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Validation Result")
	EValidationResult PrefixResult = EValidationResult::Success;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Validation Result")
	EValidationResult SuffixResult = EValidationResult::Success;
};

/**
 * Could have been a UEditorValidator 
 */

UCLASS(Blueprintable, CollapseCategories)
class NAMINGCONVENTIONVALIDATOR_API UEditorNCVTool : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable, Category="NCV Tool")
	void StartValidation();

	UFUNCTION(BlueprintCallable, Category="NCV Tool")
	void FixUpAllRedirectors();
	
	FNCValidationResult PerformNamingValidationOnAsset(const FAssetData& AssetData, const FNamingConvention* NamingConvention) const;

protected:

	/* Functions */
	void TryAddIncorrectAssetEntry(const FAssetData& AssetData, const FNamingConvention* NamingConvention,
		const FNCValidationResult& ValidationResult);

	UFUNCTION(BlueprintImplementableEvent)
	void OnDirectoryValidation(EValidationResult Result);

	/* Member properties */
	UPROPERTY(meta=(BindWidget), VisibleDefaultsOnly, BlueprintReadOnly, Category="NCV Tool")
	TObjectPtr<UDetailsView> ValidationParametersDetailsView;
	
	UPROPERTY(EditDefaultsOnly, Category="NCV Tool")
	FNCValidationParameters ValidationParameters;

	TArray<FAssetData> AssetsData;


	UPROPERTY(meta=(BindWidget), BlueprintReadOnly, Category="NCV Tool")
	TObjectPtr<UNCVResultsSorterWidget> VResultsSorterWidget;

	//Settings
	UPROPERTY()
	const UNCVEditorSettings* NCVEditorSettings = GetDefault<UNCVEditorSettings>();
};
