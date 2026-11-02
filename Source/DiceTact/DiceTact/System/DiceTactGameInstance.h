// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTGameStartData.h"
#include "Engine/GameInstance.h"
#include "DiceTactGameInstance.generated.h"

class UDTDiceItemInstance;
class UDTHeroInstance;

/**
 * 
 */
UCLASS()
class DICETACT_API UDiceTactGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	virtual void Init() override;

	UFUNCTION(BlueprintCallable, Category= "Saved Data")
	UDiceTactSaveGame* GetLoadedGameSave() const;

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	const FHeroGameData& GetSavedHeroData() const;

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	const FDiceGameData& GetSavedDiceData() const;

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	const FCartGameData& GetSavedCartData() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TSoftObjectPtr<UWorld> GetNextLevel() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FString& GetCurrentGameSlotName() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FString& GetDefaultGameSlotName() const;

	//Blueprint Variant with additional Out variable.
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsSaveGameLoaded(FString& OutSaveGameSlot) const;
	bool IsSaveGameLoaded() const;


	/* Save Game functions */
	UFUNCTION(BlueprintCallable)
	bool CreateNewSaveGame(const FString& InSlot);
	UFUNCTION(BlueprintCallable)
	bool SaveGameToDisk();
	UFUNCTION(BlueprintCallable)
	bool LoadSaveGame(const FString& FromSlot);
	
	UFUNCTION(BlueprintCallable, Category = "Save Data")
	bool SaveGameCartData(const FCartGameData& NewData);
	UFUNCTION(BlueprintCallable, Category = "Save Data")
	bool SetTargetLevel(TSoftObjectPtr<UWorld> TargetEncounterMap);
	UFUNCTION(BlueprintCallable, Category = "Save Data")
	bool SaveGameNewDice(const UDTDiceItemInstance* NewDice);
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString DefaultGameSlotName = "MainGameSlot1";
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString CurrentGameSlot = "";

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDiceTactSaveGame> CurrentSaveGame;
	
};
