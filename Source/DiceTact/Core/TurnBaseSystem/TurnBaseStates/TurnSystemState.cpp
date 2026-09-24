// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnSystemState.h"

#include "Core/TurnBaseSystem/DTTurnReceiver.h"
#include "Core/TurnBaseSystem/TurnBaseComponent.h"

FName UTurnSystemState::GetStateName() const
{
	return StateName;
}

void UTurnSystemState::InitializeState()
{
	OwningTurnBaseComponent = Cast<UTurnBaseComponent>(GetOuter());
	check(OwningTurnBaseComponent);
}

void UTurnSystemState::OnStateEnter()
{
	BP_OnStateEntered();
}

void UTurnSystemState::OnStateExit()
{
	BP_OnStateExit();
}

void UTurnSystemState::BindTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver)
{
	TurnReceiver->GetFinishedTurnDelegate().AddUniqueDynamic(this, &UTurnSystemState::OnReceiverTurnEnd);
}

void UTurnSystemState::UnbindTurnReceiver(TScriptInterface<IDTTurnReceiver> TurnReceiver)
{
	TurnReceiver->GetFinishedTurnDelegate().RemoveDynamic(this, &UTurnSystemState::OnReceiverTurnEnd);
}

void UTurnSystemState::OnReceiverTurnEnd_Implementation()
{
	
}
