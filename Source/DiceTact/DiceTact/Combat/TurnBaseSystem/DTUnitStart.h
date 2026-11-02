// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTTurnBaseComponent.h"
#include "DTUnitStart.generated.h"

class ADTCharetteUnit;
class UDTEnemyDefinition;
class UDTHeroDefinition;
enum class ECombatUnitType : uint8;
class UCapsuleComponent;

UCLASS()
class DICETACT_API ADTUnitStart : public AActor
{
	GENERATED_BODY()
	
public:

	ADTUnitStart();

	UFUNCTION(BlueprintCallable)
	ADTHeroCharacter* SpawnHeroCharacter(const UDTHeroDefinition* HeroDefinition);
	UFUNCTION(BlueprintCallable)
	ADTCharetteUnit* SpawnCart();
	UFUNCTION(BlueprintCallable)
	ADTEnemyUnit* SpawnEnemy(const UDTEnemyDefinition* EnemyDefinition);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	ECombatUnitType GetStartUnitType() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsHeroStart() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsEnemyStart() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsCartStart() const;
	

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECombatUnitType UnitStartType = ECombatUnitType::Hero;

	UPROPERTY(EditDefaultsOnly, DisplayName="@TODO: REPLACE THIS BECAUSE THIS IS TRASH")
	TSubclassOf<ADTCharetteUnit> CharetteClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UCapsuleComponent> CapsuleComponent;
	
#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TObjectPtr<class UArrowComponent> ArrowComponent;
#endif
};
