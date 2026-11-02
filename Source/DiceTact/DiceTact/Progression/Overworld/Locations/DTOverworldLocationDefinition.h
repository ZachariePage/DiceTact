// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTOverworldLocationDefinition.generated.h"

class UDTOverworldLocationData;

/**
 * Represents the const data of a location.
 * For example, a Tavern location does not change name (maybe it does? but design should specify).
 */

UCLASS()
class DICETACT_API UDTOverworldLocationDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetLocationText() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetLocationDescription() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetLocationBrush() const;
	
#if WITH_EDITORONLY_DATA
	//Used to instantiate the right "Payload" Data in the widget (when selecting the Base Location Definition).
	UPROPERTY(EditDefaultsOnly, Category="Editor reference")
	TSubclassOf<UDTOverworldLocationData> LocationDataClass;
#endif
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Base Location")
	FText LocationText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Base Location")
	FText LocationDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Base Location")
	FSlateBrush LocationBrush;


};
