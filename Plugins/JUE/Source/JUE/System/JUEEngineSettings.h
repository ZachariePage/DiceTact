// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "JUEEngineSettings.generated.h"

class UCommonUserWidget;
/**
 * 
 */
UCLASS(Config="Engine", DefaultConfig)
class JUE_API UJUEEngineSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:

	UJUEEngineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	virtual FText GetSectionDescription() const override;
#endif
	UFUNCTION(BlueprintCallable, Category="Widgets references")
	TSubclassOf<UCommonUserWidget> GetRootLayoutWidgetClass() const;

protected:

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Widgets references")
	TSoftClassPtr<UCommonUserWidget> RootLayoutWidget;

	
};
