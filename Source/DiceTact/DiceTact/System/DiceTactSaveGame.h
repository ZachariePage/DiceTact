// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DiceTactSaveGame.generated.h"

class UDTGameStartData;
class UDTHeroInstance;
class UDTDiceItemInstance;

/**
 * 
 */

USTRUCT(BlueprintType)
struct FCartGameData
{
	GENERATED_BODY()

	FCartGameData()
	{
		
	}

	FCartGameData(int32 Crnt, int32 Max)
	{
		CurrentHealth = Crnt;
		MaxHealth = Max;
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentHealth = 20;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxHealth = 20;
};

USTRUCT(BlueprintType)
struct FHeroGameData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UDTHeroInstance>> RecruitedHeroes = {};

	//More Idk
};

USTRUCT(BlueprintType)
struct FDiceGameData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UDTDiceItemInstance>> DeckItems = {};
};

//@DEPRECATED: Data are put in their respective structs.
USTRUCT(BlueprintType)
struct FDiceTactGameData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UDTHeroInstance>> RecruitedHeroes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UDTDiceItemInstance>> DeckItems;

	//Chariot Integrity should be something else
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCartGameData CartData;
};

UCLASS()
class DICETACT_API UDiceTactSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	
	/* Getters */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FHeroGameData& GetHeroData() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FDiceGameData& GetDeckData() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FCartGameData& GetCartData() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FName GetCurrentLocation() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure) //BP variant
	void GetTargetLevel(TSoftObjectPtr<UWorld>& OutWorld, bool& OutPointsToPath, bool& OutValidObject) const;
	TSoftObjectPtr<UWorld> GetTargetLevel() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FName GetCurrentBiome() const;

	/* Setters */
	UFUNCTION(BlueprintCallable, meta=(ToolTip="Overwrites everything based on the UDTGameStartData."))
	void SetDataFromGameStartData(const UDTGameStartData* FromData);
	UFUNCTION(BlueprintCallable)
	void SetDeckCollection(const TArray<UDTDiceItemInstance*>& DeckItems);
	UFUNCTION(BlueprintCallable)
	void AddNewDice(UDTDiceItemInstance* NewDice);
	
	UFUNCTION(BlueprintCallable)
	void SetHeroCollection(const TArray<UDTHeroInstance*>& HeroItems);
	UFUNCTION(BlueprintCallable)
	void SetCartData(const FCartGameData& CartData);
	
	UFUNCTION(BlueprintCallable)
	void SetCurrentLocation(FName CurrentLocation);
	UFUNCTION(BlueprintCallable)
	void SetTargetLevel(TSoftObjectPtr<UWorld> ToLevel);
	UFUNCTION(BlueprintCallable)
	void SetCurrentBiome(FName CurrentBiome);
	
protected:

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Overworld")
	FName CurrentLocation = FName("GameStart");

	//This is saved here because I need to save the level in case the player quits while in the battle.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Overworld")
	TSoftObjectPtr<UWorld> TargetLevel;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Overworld")
	FName CurrentBiome = FName("Village");

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FHeroGameData HeroData;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FDiceGameData DeckData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FCartGameData CartData;
	

};
