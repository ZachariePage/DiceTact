// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTTurnBaseUnit.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "DTCharetteUnit.generated.h"

class UDTHealthComponent;

UCLASS(Blueprintable)
class DICETACT_API ADTCharetteUnit : public ADTTurnBaseUnit, public IDTDamageable, public IDTTurnReceiver
{
	GENERATED_BODY()

public:
	
	// Sets default values for this character's properties
	ADTCharetteUnit();

	/* IDTTurnReceiver Interface begin */
	virtual FOnTurnFinished& GetFinishedTurnDelegate() override
	{return OnTurnFinished;}

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnTurnFinished OnTurnFinished;
	virtual AActor* GetControlledActor_Implementation() override;

	/* IDamageable interface begin */
	virtual void GetHealthComponent(UDTHealthComponent*& HealthComponent) override;

	virtual FDamageInfo TakeDamage_Implementation(AActor* Dealer, int Damage) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UDTHealthComponent> HealthComponent;
};
