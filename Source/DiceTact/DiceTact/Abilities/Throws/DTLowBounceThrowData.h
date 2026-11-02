// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTThrowTypeData.h"
#include "DTLowBounceThrowData.generated.h"

class UDTBounceData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTLowBounceThrowData : public UDTThrowTypeData
{
	GENERATED_BODY()

public:
	UPROPERTY(
	EditDefaultsOnly,
	Category = "Bounce",
	meta = (ClampMin = "0.0",ClampMax = "1.0",ToolTip = "0 throw at feet, 1 throw directly to target."))
	float BouncePointRatio = 0.5f;
	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const override;
	virtual void ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTBounceData> BounceData;
};
