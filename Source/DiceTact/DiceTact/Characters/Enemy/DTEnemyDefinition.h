// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTEnemyDefinition.generated.h"

class UGameplayAbility;
class ADTEnemyUnit;

USTRUCT(BlueprintType)
struct FEnemyCombatData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack", meta=(Units="Centimeters"))
	float AttackRange = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack",meta=(Units="Centimeters"))
	float AttackRadius = 150;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	int32 BaseDamage = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Hitpoints = 3;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Attack")
	TSoftClassPtr<UGameplayAbility> AttackAbility = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Units="Centimeters"))
	float TravelRange = 500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PushForce;

};

/**
 * 
 */
UCLASS()
class DICETACT_API UDTEnemyDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetEnemyName() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetEnemyDescription() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetEnemyIcon() const;
	UFUNCTION(BlueprintCallable)
	TSubclassOf<ADTEnemyUnit> GetEnemyClass() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FEnemyCombatData& GetEnemyCombatData() const;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText EnemyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText EnemyDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush EnemyIcon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<ADTEnemyUnit> EnemyClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FEnemyCombatData CombatData;
};
