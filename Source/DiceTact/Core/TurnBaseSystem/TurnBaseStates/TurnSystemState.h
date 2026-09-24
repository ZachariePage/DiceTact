// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TurnSystemState.generated.h"


class UTurnBaseComponent;

namespace TurnSystemStates
{
	static const FName ResolvingDices("ResolvingDices");
	static const FName HeroesTurn("HeroesTurn");
	static const FName OpposingTeamTurn("OpposingTeamTurn");
	static const FName CharetteTurn("CharetteTurn");
}

/**
 * 
 */
UCLASS(Blueprintable, Abstract, DisplayName="Turn-Based System State (Base class)", meta=(ToolTip="Subclass this for Blueprint Implementation."))
class DICETACT_API UTurnSystemState : public UObject
{
	GENERATED_BODY()

public:

	FName GetStateName() const;

	void InitializeState();

	virtual void OnStateEnter();
	virtual void OnStateExit();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnStateEntered")
	void BP_OnStateEntered();
	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnStateExit")
	void BP_OnStateExit();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="State")
	FName StateName = NAME_None;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UTurnBaseComponent> OwningTurnBaseComponent;

	UFUNCTION(BlueprintCallable)
	void BindTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver);

	UFUNCTION(BlueprintCallable)
	void UnbindTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver);

	UFUNCTION(BlueprintNativeEvent)
	void OnReceiverTurnEnd();
	
};
