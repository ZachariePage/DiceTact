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
	const FDiceTactGameData& LoadGameData() const;

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	const TArray<UDTHeroInstance*>& GetHeroInstances() const;

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	const TArray<UDTDiceItemInstance*>& GetDiceItemInstances() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetCartIntegrity(const FDiceTactGameData& GameData);

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	void CreateNewSaveData(const FDiceTactGameData& NewData);

protected:

	//@TODO: Should need a proper save system.

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FDiceTactGameData SessionData;
	
};
