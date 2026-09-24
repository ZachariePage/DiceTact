// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DiceTactGameMode.generated.h"

/**
 *  Simple Game Mode for a top-down perspective game
 *  Sets the default gameplay framework classes
 *  Check the Blueprint derived class for the set values
 */
UCLASS(abstract)
class ADiceTactGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	/** Constructor */
	ADiceTactGameMode();

protected:
	virtual void BeginPlay() override;
};



