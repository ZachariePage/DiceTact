// © 


#include "TurnBaseComponent.h"

#include "Core/Characters/CharetteUnit.h"
#include "Core/Characters/EnemyUnit.h"
#include "Core/Characters/Hero/HeroCharacter.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "TurnBaseStates/TurnSystemState.h"

void UTurnBaseComponent::AddUnitToCombat(ATurnBaseUnit* NewUnit, ECombatUnitType InType)
{
	switch (InType)
	{
		case (ECombatUnitType::Hero):
		{
			if (AHeroCharacter* Hero = Cast<AHeroCharacter>(NewUnit))
			{
				HeroUnits.Add(Hero);
			}
			break;
		}
		case ECombatUnitType::Charette:
		{
			if (ACharetteUnit* Charette = Cast<ACharetteUnit>(NewUnit))
			{
				CharetteUnit = Charette;
			}
			break;
		}
		case ECombatUnitType::Enemy:
		{
			if (AEnemyUnit* Enemy = Cast<AEnemyUnit>(NewUnit))
			{
				EnemyUnits.Add(Enemy);
				OpponentTurnReceivers.Add(Enemy);
				UJUEDevelopmentStatics::ReportDebugMessage(OpponentTurnReceivers[0].GetObject()->GetName());
			}
			break;
		}
		default: ;
	}


}

void UTurnBaseComponent::StartCombat()
{
	SetTurnSystemState(DefaultTurnState);
}

FName UTurnBaseComponent::GetCurrentState() const
{
	return CurrentTurnSystemState ? CurrentTurnSystemState->GetStateName() : NAME_None;
}

void UTurnBaseComponent::SetTurnSystemState(TSubclassOf<UTurnSystemState> NewTurnSystemState)
{
	if (!NewTurnSystemState)
	{
		return;
	}

	//Do not switch states if they are the same one.
	if (CurrentTurnSystemState && CurrentTurnSystemState->GetClass() == NewTurnSystemState)
	{
		return;
	}

	//Find the state if it was already instantiated.
	UTurnSystemState* FoundState = nullptr;
	for (auto InventoryState : RegisteredStates)
	{
		//If the state has already been instantiated, replace it with the older.
		if (InventoryState->IsA(NewTurnSystemState))
		{
			FoundState = InventoryState;
			break;
		}
	}
	
	if (IsValid(CurrentTurnSystemState))
	{
		CurrentTurnSystemState->OnStateExit();
		OnTurnPhaseChanged.Broadcast(GetCurrentState(), false);
	}
	
	//If it was already instantiated, just set it.
	if (FoundState)
	{
		CurrentTurnSystemState = FoundState;
	}
	//Else, instantiate a new one.
	else
	{
		CurrentTurnSystemState = NewObject<UTurnSystemState>(this, NewTurnSystemState);
		CurrentTurnSystemState->InitializeState();
		RegisteredStates.Add(CurrentTurnSystemState);
	}
	CurrentTurnSystemState->OnStateEnter();
	OnTurnPhaseChanged.Broadcast(GetCurrentState(), true);
}
