// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DTTurnReceiver.generated.h"

class FDelegateHandle;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnFinished);

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UDTTurnReceiver : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IDTTurnReceiver
{
	GENERATED_BODY()

	

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TurnBaseSystem")
	void ReceiveTurn();
	
	virtual FOnTurnFinished& GetFinishedTurnDelegate() = 0;
	
};
