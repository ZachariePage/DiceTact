// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTactSaveGame.h"
#include "Engine/DataAsset.h"
#include "DTGameStartData.generated.h"

/**
 * 
 */

UCLASS(Const)
class DICETACT_API UDTGameStartData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ToolTip="Used to load a default location for the overworld."))
	FName CurrentOverworldLocation = FName("Village_Start");

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName CurrentOverworldBiome = FName("Village");

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FHeroGameData HeroesData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDiceGameData DiceData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FCartGameData CartData;
};
