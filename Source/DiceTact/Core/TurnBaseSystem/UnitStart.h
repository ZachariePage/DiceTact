// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TurnBaseComponent.h"
#include "UnitStart.generated.h"

class ACharetteUnit;
class UDTEnemyDefinition;
class UDTHeroDefinition;
enum class ECombatUnitType : uint8;
class UCapsuleComponent;

UCLASS()
class DICETACT_API AUnitStart : public AActor
{
	GENERATED_BODY()
	
public:

	AUnitStart();

	UFUNCTION(BlueprintCallable)
	AHeroCharacter* SpawnHeroCharacter(UDTHeroDefinition* HeroDefinition);
	UFUNCTION(BlueprintCallable)
	ACharetteUnit* SpawnCart();
	UFUNCTION(BlueprintCallable)
	AEnemyUnit* SpawnEnemy(UDTEnemyDefinition* EnemyDefinition);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	ECombatUnitType GetStartUnitType() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsHeroStart() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsEnemyStart() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsCartStart() const;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECombatUnitType UnitStartType = ECombatUnitType::Hero;

	UPROPERTY(EditDefaultsOnly, DisplayName="@TODO: REPLACE THIS BECAUSE THIS IS TRASH")
	TSubclassOf<ACharetteUnit> CharetteClass;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UCapsuleComponent> CapsuleComponent;
	
	UPROPERTY()
	TObjectPtr<class UArrowComponent> ArrowComponent;
#endif
};
