// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTOverworldLocationData.generated.h"

/**
 * Base class to define what happens when we travel to a location.
 * The Logical implementation is in Blueprints.
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTravelEnd);

class UDTOverworldLocationWidget;

UCLASS(DefaultToInstanced, Blueprintable, Abstract, EditInlineNew, DisplayName="Base Overworld Location")
class DICETACT_API UDTOverworldLocationData : public UObject
{
	GENERATED_BODY()


public:

	virtual void Init();

	virtual void TryTravel();

	UPROPERTY(BlueprintAssignable)
	FOnTravelEnd OnTravelEnd;
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerTravel();

	UFUNCTION(BlueprintCallable)
	virtual void FinishTravel();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UDTOverworldLocationWidget> OwnerLocationWidget;

	
};
