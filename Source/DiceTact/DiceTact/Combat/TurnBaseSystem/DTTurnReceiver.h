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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool CanReceiveTurn() const;

	virtual bool CanReceiveTurn_Implementation() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TurnBaseSystem")
	void ReceiveTurn();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* GetControlledActor();
	
	virtual FOnTurnFinished& GetFinishedTurnDelegate() = 0;
	
};


//This doesnt work idk why
//Just Copy this and remove the '\'s in your implementation

#define INCLUDE_TURN_IMPLEMENTATION()\
/* IDTTurnReceiver Interface begin */\
UFUNCTION()\
virtual FOnTurnFinished& GetFinishedTurnDelegate() override\
{return OnTurnFinished;}\
\
UPROPERTY(BlueprintAssignable, BlueprintCallable)\
FOnTurnFinished OnTurnFinished;\
\
virtual AActor* GetControlledActor_Implementation() override\
/* IDTTurnReceiver Interface End */\
