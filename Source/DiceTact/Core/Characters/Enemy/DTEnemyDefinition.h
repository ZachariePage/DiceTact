// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Characters/EnemyUnit.h"
#include "Engine/DataAsset.h"
#include "DTEnemyDefinition.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTEnemyDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetEnemyName() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetEnemyDescription() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetEnemyIcon() const;
	UFUNCTION(BlueprintCallable)
	TSubclassOf<AEnemyUnit> GetEnemyClass() const;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText EnemyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText EnemyDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush EnemyIcon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AEnemyUnit> EnemyClass = AEnemyUnit::StaticClass();
};
