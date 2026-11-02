// © Justin Renaud-Gélinas, 2026

#pragma once

#include "CoreMinimal.h"
#include "NCValidationParameters.h"
#include "Engine/DeveloperSettings.h"
#include "NCVEditorSettings.generated.h"


class UEditorUtilityWidgetBlueprint;
class UEditorNCVTool;

USTRUCT(BlueprintType, meta=(ToolTip="Naming convention of a type. Add an underscore (_) at the end or beginning."))
struct FNamingConvention
{
	GENERATED_BODY()

	FNamingConvention(){}
	
	FNamingConvention(TArray<FString> Prefixes, TArray<FString> Suffixes)
	{
		AllowedPrefixes = Prefixes;
		AllowedSuffixes = Suffixes;
	}

	FNamingConvention(FString Prefix, FString Suffix)
	{
		AllowedPrefixes = {Prefix};
		AllowedSuffixes = {Suffix};
	}

	FNamingConvention(FString Prefix)
	{
		AllowedPrefixes = {Prefix};
		AllowedSuffixes = {};
	}

public:
	UPROPERTY(EditDefaultsOnly, Category="Convention Parameters", BlueprintReadOnly, DisplayName="Allow Validation on this naming convention")
	bool bAllowValidation = true;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, DisplayName="Validates this classes")
	//bool bValidateSubClasses = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Convention Parameters")
	TArray<FString> AllowedPrefixes = {""};

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Convention Parameters")
	TArray<FString> AllowedSuffixes = {};
};

/**
 * When finding the class, first find it in the map, then if not found, check if it is a subclass of it.
 */
UCLASS(Config = "NCVEditor", DefaultConfig)
class NAMINGCONVENTIONVALIDATOR_API UNCVEditorSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	

	UNCVEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual FText GetSectionText() const override;
	virtual FText GetSectionDescription() const override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Editor Settings")
	bool ShouldPerformValidationOnLoad() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Editor Settings")
	bool ShouldCheckSubDirectories() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Editor Settings")
	bool ShouldLogMatchingConventions() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Editor Settings")
	const FDirectoryPath& GetTargetValidationDirectory() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Editor Settings")
	UEditorUtilityWidgetBlueprint* GetNCVWidgetTool() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="NCV Editor Settings")
	const TMap<TSubclassOf<UObject>, FNamingConvention>& GetNamingConventions() const;
	const FNamingConvention* FindNamingConvention(TSubclassOf<UObject> Class) const;

	void AddNamingConvention(TSubclassOf<UObject> Class, const FNamingConvention& NewNamingConvention);
	

protected:

	UPROPERTY(Config, EditDefaultsOnly, Category="On Project Loaded", DisplayName="Perform validation on module Loaded", meta=(ToolTip="Perform a validation on all assets after the project is launched."))
	bool bPerformValidationOnLoad = false;

	UPROPERTY(Config, EditDefaultsOnly, Category="Default Validation Parameters")
	FNCValidationParameters DefaultValidationParameters;
	
	UPROPERTY(Config, EditDefaultsOnly, Category="Default Validation Parameters", DisplayName="Editor Utility Widget Validation Tool")
	TSoftObjectPtr<UEditorUtilityWidgetBlueprint> EUWidget;

	UPROPERTY(Config, EditDefaultsOnly, BlueprintReadOnly, Category="Naming conventions", meta=(ToolTip="Add entries that should be scanned"))
	TMap<TSubclassOf<UObject>, FNamingConvention> NamingConventions;

};
