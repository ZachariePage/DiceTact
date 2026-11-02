// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTTurnSystemState.generated.h"


class IDTTurnReceiver;
class UDTTurnBaseComponent;

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
class DICETACT_API UDTTurnSystemState : public UObject
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

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsAuthorityBound() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TScriptInterface<IDTTurnReceiver> GetBoundReceiver() const;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="State")
	FName StateName = NAME_None;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UDTTurnBaseComponent> OwningTurnBaseComponent;

	/* Authority checks */
	UFUNCTION(BlueprintCallable)
	void BindAndGiveAuthorityTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver);
	void GiveAuthorityTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver) const;
	UFUNCTION(BlueprintCallable)
	void UnbindTurnReceiver();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TScriptInterface<IDTTurnReceiver> BindedTurnReceiver;

	UFUNCTION()
	virtual void Internal_OnTurnEnd();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnBindedReceiverEndedTurn", meta=(ToolTip="Called when the binded turn receiver is done with its turn."))
	void OnReceiverTurnEnd();
	
};
