// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "EditorNCVSubsystem.generated.h"

struct FNamingConvention;
class UNCVEditorSettings;
/**
 */
UCLASS()
class NAMINGCONVENTIONVALIDATOR_API UEditorNCVSubsystem : public UEditorUtilitySubsystem
{
	GENERATED_BODY()

public:

	//Very mid function, maybe should recreate it because it's not very useful
	UFUNCTION(BlueprintCallable, Category="Validation")
	void StartQuickValidation();

	UFUNCTION(BlueprintCallable, Category="Validation")
	void PerformNamingValidationOnAsset(const FAssetData& AssetData, const FNamingConvention& FoundNamingConvention) const;

	UFUNCTION(BlueprintCallable, Category="Validation")
	void OpenAndPerformAutoValidation();
	
	UFUNCTION(BlueprintCallable, Category="Validation")
	UEditorUtilityWidget* OpenNCVWidgetTool();

protected:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	void OnEditorInitialized( TSharedPtr<SWindow> InRootWindow, 
	bool bIsRunningStartupDialog);
	
	UPROPERTY()
	const UNCVEditorSettings* NCVEditorSettings = GetDefault<UNCVEditorSettings>();
};
