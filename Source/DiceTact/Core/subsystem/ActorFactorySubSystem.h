// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActorFactorySubSystem.generated.h"

/**
 * 
 */

class UDTDiceObjectDefinition;
class ADice;
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
class DICETACT_API UActorFactorySubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Dice")
	void LateInit(const TMap<EDiceType, UDTDiceObjectDefinition*>& Definitions);
	
	ADice* SpawnDiceFromType(
		UObject* WorldContextObject,
		EDiceType Type,
		const UDTDiceResolveDefinition* ResolveDefinition,
		const FTransform& SpawnTransform,
		const FActorSpawnParameters& SpawnParams,
		bool spawnCamera
	);
	ADice* SpawnDice(UObject* WorldContextObject, const UDTDiceObjectDefinition* ObjectDefinition, UDTDiceItemInstance* ItemInstance, const FTransform& SpawnTransform, const FActorSpawnParameters& SpawnParams,bool spawnCamera);

protected:
	UPROPERTY()
	TMap<EDiceType, TObjectPtr<UDTDiceObjectDefinition>> DiceDefinitions;
};
