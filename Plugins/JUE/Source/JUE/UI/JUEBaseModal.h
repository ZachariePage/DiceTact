// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "JUEBaseModal.generated.h"

/**
 * 
 */
UENUM(Blueprintable)
enum class EModalConfirmationResult : uint8
{
	Affirmative UMETA(ToolTip = "The modal's option was Confirmed.\nYes, Confirm, Apply, Etc..."),
	Negative UMETA(ToolTip = "The modal's option was denied.\nNo, Return, sometimes Cancel is also used, etc..."),
	Cancelled UMETA(ToolTip = "The modal was cancelled, usually by pressing escape, or the X button at the top-right corner.\nNo option was chosen."),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModalConfirmation, EModalConfirmationResult, Result);

UCLASS(Blueprintable)
class JUE_API UJUEBaseModal : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
	FModalConfirmation OnModalConfirmation;
};
