// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/DTHealthComponent.h"
#include "UObject/Interface.h"
#include "DTDamageable.generated.h"

enum class ECombatUnitType : uint8;
// This class does not need to be modified.
/**
 * Interface for actors that can receive damage from combat interactions.
 *
 * Use this interface on actors that can be damaged by abilities, attacks,
 * projectiles, or other gameplay systems.
 *
 * Implementing actors are responsible for defining how incoming damage is
 * processed, including updating health, triggering damage reactions, and
 * returning information about the result of the damage operation.
 */
UINTERFACE(Blueprintable, BlueprintType)
class UDTDamageable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IDTDamageable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void GetHealthComponent(UDTHealthComponent*& HealthComponent) = 0;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Damage")
	FDamageInfo TakeDamage(AActor* Dealer, int Damage);

	virtual FDamageInfo TakeDamage_Implementation(AActor* Dealer, int Damage);
};
