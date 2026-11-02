// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTThrowTypeData.h"
#include "DTLobThrowData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTLobThrowData : public UDTThrowTypeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Throw|Lob")
	float AngleDegreeMdofication = 55.f;
	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const override;
};
