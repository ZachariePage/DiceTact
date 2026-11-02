// Fill out your copyright notice in the Description page of Project Settings.


#include "DTTurnSystemState.h"

#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnBaseComponent.h"

FName UDTTurnSystemState::GetStateName() const
{
	return StateName;
}

void UDTTurnSystemState::InitializeState()
{
	OwningTurnBaseComponent = Cast<UDTTurnBaseComponent>(GetOuter());
	check(OwningTurnBaseComponent);
}

void UDTTurnSystemState::OnStateEnter()
{
	BP_OnStateEntered();
}

void UDTTurnSystemState::OnStateExit()
{
	BP_OnStateExit();
}

bool UDTTurnSystemState::IsAuthorityBound() const
{
	return BindedTurnReceiver != nullptr;
}

const TScriptInterface<IDTTurnReceiver> UDTTurnSystemState::GetBoundReceiver() const
{
	return BindedTurnReceiver;
}

void UDTTurnSystemState::BindAndGiveAuthorityTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver)
{
	//Skip if the TurnReceiver is invalid.
	//In fact, I should remove it from the array.
	if (TurnReceiver == nullptr || IDTTurnReceiver::Execute_CanReceiveTurn(TurnReceiver.GetObject()) == false)
	{
		Internal_OnTurnEnd();
		return;
	}
	
	TurnReceiver->GetFinishedTurnDelegate().AddUniqueDynamic(this, &UDTTurnSystemState::Internal_OnTurnEnd);
	BindedTurnReceiver = TurnReceiver;
	GiveAuthorityTurnReceiver(TurnReceiver);
}

void UDTTurnSystemState::GiveAuthorityTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver) const
{
	IDTTurnReceiver::Execute_ReceiveTurn(TurnReceiver.GetObject());
	OwningTurnBaseComponent->OnUnitTurnStarted.Broadcast(IDTTurnReceiver::Execute_GetControlledActor(TurnReceiver.GetObject()));

	//GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>()->RegisterNewFocus(TurnReceiver.GetObject())
}

void UDTTurnSystemState::UnbindTurnReceiver()
{
	if (IsAuthorityBound() == false)
	{
		return;
	}
	BindedTurnReceiver->GetFinishedTurnDelegate().RemoveDynamic(this, &UDTTurnSystemState::Internal_OnTurnEnd);
	BindedTurnReceiver = nullptr;
}

void UDTTurnSystemState::Internal_OnTurnEnd()
{
	//Perform a Combat State check after each turn (Could be optional for Turns that we know aren't impactful)
	if (OwningTurnBaseComponent->PerformCombatStateCheck())
	{
		//Do not continue the state if the combat has ended.
		return;
	}
	OnReceiverTurnEnd();	
}
