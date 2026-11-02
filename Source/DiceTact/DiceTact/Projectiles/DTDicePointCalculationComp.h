// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "DTDicePointCalculationComp.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTDicePointCalculationComp : public UArrowComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTDicePointCalculationComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
	int sideValue = 0;
};
