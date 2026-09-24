#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DiceThrowData.generated.h"

UCLASS(BlueprintType)
class DICETACT_API UDiceThrowData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float AdditionalSpeedMultipliedByThrowStrength = 200.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float Speed = 1000.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float Torque = 500.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float UpwardSpeed = 500.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float RandomTorqueX = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float RandomTorqueY = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Throw")
	float RandomTorqueZ = 1.0f;
};