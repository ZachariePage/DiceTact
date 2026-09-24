// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/HealthComponent.h"
#include "UObject/Interface.h"
#include "IDamageable.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable, BlueprintType)
class UIDamageable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IIDamageable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Damage")
	FDamageInfo TakeDamage(AActor* Dealer, int Damage);
};
