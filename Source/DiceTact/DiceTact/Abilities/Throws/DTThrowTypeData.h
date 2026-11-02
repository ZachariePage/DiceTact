// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "DiceTact/Projectiles/Components/DTDiceMovementComponent.h"
#include "Engine/DataAsset.h"
#include "DTThrowTypeData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTThrowTypeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const;
	UFUNCTION()
	virtual void ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const;

	void RemoveThisComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float TimeBeforeErasingComponent = 10.f;

	UFUNCTION()
	virtual TSubclassOf<UDTDiceMovementComponent> GetMovementComponentSubclass() const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float AdditionalSpeedMultipliedByThrowStrength = 200.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float Speed = 1000.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float Torque = 500.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float AdditionalTorgue = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float RandomTorqueX = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float RandomTorqueY = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Throw")
	float RandomTorqueZ = 1.0f;
};
