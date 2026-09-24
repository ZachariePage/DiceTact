// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TurnBaseUnit.h"
#include "Core/TurnBaseSystem/DTTurnReceiver.h"
#include "CharetteUnit.generated.h"

class UHealthComponent;

UCLASS(Blueprintable)
class DICETACT_API ACharetteUnit : public ATurnBaseUnit, public IDTTurnReceiver
{
	GENERATED_BODY()

public:
	
	// Sets default values for this character's properties
	ACharetteUnit();

	/* IDTTurnReceiver Interface begin */
	virtual FOnTurnFinished& GetFinishedTurnDelegate() override
	{return OnTurnFinished;}

	UPROPERTY(BlueprintAssignable)
	FOnTurnFinished OnTurnFinished;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UHealthComponent> HealthComponent;
};
