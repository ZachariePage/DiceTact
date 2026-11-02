// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTSystemStatics.generated.h"

class UDiceTactSaveGame;
class UDiceTactGameInstance;
struct FDiceTactGameData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTSystemStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="System Statics", DisplayName="Get DiceTact Game Instance")
	static UDiceTactGameInstance* GetDTGameInstance();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "System Statics|Save Game")
	static bool IsSaveGameLoaded();

	UFUNCTION(BlueprintCallable, Category = "System Statics|Save Game")
	static UDiceTactSaveGame* GetLoadedGameSave();

	UFUNCTION(BlueprintCallable, Category = "System Statics|Session Data")
	static TSoftObjectPtr<UWorld> GetNextLevel();
	
	UFUNCTION(BlueprintCallable, Category = "System Statics|Save Game", meta=(ToolTip="Saves the current Game Save to the Disk."))
	static bool SaveGameToDisk();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "System Statics|Save Game")
	static int32 GetCartCurrentHealth(const FDiceTactGameData& GameData);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "System Statics|Save Game")
	static int32 GetCartMaxHealth(const FDiceTactGameData& GameData);

};
