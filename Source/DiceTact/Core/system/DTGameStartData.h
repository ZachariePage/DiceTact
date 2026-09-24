// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTGameStartData.generated.h"

class UDTHeroInstance;
class UDTDiceItemInstance;

/**
 * 
 */

USTRUCT(BlueprintType)
struct FDiceTactGameData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UWorld> TargetEncounterMap; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UDTHeroInstance>> RecruitedHeroes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UDTDiceItemInstance>> DeckItems;

	//Chariot Integrity should be something else
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CartIntegrity;
};

UCLASS()
class DICETACT_API UDTGameStartData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDiceTactGameData GameData;
	
};
