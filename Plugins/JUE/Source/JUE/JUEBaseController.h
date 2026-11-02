// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "JUEBaseController.generated.h"

class UCommonUserWidget;
/**
 * 
 */
UCLASS()
class JUE_API AJUEBaseController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="JUE Base Controller")
	UCommonUserWidget* GetRootLayout() const;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Widgets references")
	TObjectPtr<UCommonUserWidget> RootLayout;
	
};
