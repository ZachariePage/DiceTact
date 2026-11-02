// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DTActorFactorySubSystem.generated.h"

/**
 * 
 */

class UDTDiceObjectDefinition;
class ADTDice;
class UDTDiceResolveDefinition;
class UDTDiceItemInstance;
UENUM(BlueprintType)
enum class EDiceType : uint8
{
	four,
	eight,
	twelve,
	twenty
};

UCLASS()
class DICETACT_API UDTActorFactorySubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Dice")
	void LateInit(const TMap<EDiceType, UDTDiceObjectDefinition*>& Definitions);
	
	ADTDice* SpawnDiceFromType(
		UObject* WorldContextObject,
		EDiceType Type,
		const UDTDiceResolveDefinition* ResolveDefinition,
		const FTransform& SpawnTransform,
		const FActorSpawnParameters& SpawnParams,
		bool spawnCamera
	);
	ADTDice* SpawnDice(UObject* WorldContextObject, const UDTDiceObjectDefinition* ObjectDefinition, UDTDiceItemInstance* ItemInstance, const FTransform& SpawnTransform, const FActorSpawnParameters& SpawnParams,bool spawnCamera);

protected:
	UPROPERTY()
	TMap<EDiceType, TObjectPtr<UDTDiceObjectDefinition>> DiceDefinitions;
};
