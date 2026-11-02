// © 


#include "DTTurnBaseComponent.h"
#include "DiceTact/Abilities/DTPendingAbility.h"
#include "DiceTact/Characters/DTCharetteUnit.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Combat/DTGameStartDataHolder.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "TurnBaseStates/DTTurnSystemState.h"

void UDTTurnBaseComponent::AddPendingAbility(const FDTPendingAbility& NewPendingAbility)
{
	PendingAbilities.Add(NewPendingAbility);
}

void UDTTurnBaseComponent::AddUnitToCombat(ADTTurnBaseUnit* NewUnit, ECombatUnitType InType)
{
	if (IsValid(NewUnit) == false)
	{
		UJUEDevelopmentStatics::ReportWarningMessage("Could not add Unit to Combat", this);
	}
	
	switch (InType)
	{
		case (ECombatUnitType::Hero):
		{
			if (ADTHeroCharacter* Hero = Cast<ADTHeroCharacter>(NewUnit))
			{
				HeroUnits.Add(Hero);
			}
			break;
		}
		case ECombatUnitType::Charette:
		{
			if (ADTCharetteUnit* Charette = Cast<ADTCharetteUnit>(NewUnit))
			{
				CharetteUnit = Charette;
			}
			break;
		}
		case ECombatUnitType::Enemy:
		{
			if (ADTEnemyUnit* Enemy = Cast<ADTEnemyUnit>(NewUnit))
			{
				EnemyUnits.Add(Enemy);
			}
			break;
		}
		default: ;
	}
	
}

void UDTTurnBaseComponent::RemoveUnitFromCombat(ADTTurnBaseUnit* RemovedUnit, ECombatUnitType InType)
{
	switch (InType)
	{
	case (ECombatUnitType::Hero):
		{
			if (ADTHeroCharacter* Hero = Cast<ADTHeroCharacter>(RemovedUnit))
			{
				HeroUnits.Remove(Hero);
			}
			break;
		}
	case ECombatUnitType::Charette:
		{
			//Bruh
			break;
		}
	case ECombatUnitType::Enemy:
		{
			if (ADTEnemyUnit* Enemy = Cast<ADTEnemyUnit>(RemovedUnit))
			{
				EnemyUnits.Remove(Enemy);
			}
			break;
		}
	default: ;
	}
}

void UDTTurnBaseComponent::AddTurnReceiver(TScriptInterface<IDTTurnReceiver> NewReceiver, ECombatUnitType InType)
{
	switch (InType)
	{
	case (ECombatUnitType::Hero):
		{
			AlliedTurnReceivers.Add(NewReceiver);
			break;
		}
	case ECombatUnitType::Charette:
		{
			//Bruh
			break;
		}
	case ECombatUnitType::Enemy:
		{
			OpponentTurnReceivers.Add(NewReceiver);
			break;
		}
	default: ;
	}
}

void UDTTurnBaseComponent::RemoveTurnReceiver(TScriptInterface<IDTTurnReceiver> RemovedReceiver, ECombatUnitType InType)
{
	switch (InType)
	{
	case (ECombatUnitType::Hero):
		{
			AlliedTurnReceivers.Remove(RemovedReceiver);
			break;
		}
	case ECombatUnitType::Charette:
		{
			//Bruh
			break;
		}
	case ECombatUnitType::Enemy:
		{
			OpponentTurnReceivers.Remove(RemovedReceiver);
			break;
		}
	default: ;
	}
}

void UDTTurnBaseComponent::StartCombat()
{
	CurrentTurnIndex = 0;
	
	const ADTGameStartDataHolder* DataActor = ADTGameStartDataHolder::Get(this);
	if (DataActor != nullptr)
	{
		PhasesInOrderForEncounter = DataActor->EncounterTypeData->PhasesInOrder;
	}
	else
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Level does not contain a GameStartDataHolder", this);
	}
	SetTurnSystemState(DefaultTurnState);
}

FName UDTTurnBaseComponent::GetCurrentStateName() const
{
	return CurrentTurnSystemState ? CurrentTurnSystemState->GetStateName() : NAME_None;
}

int UDTTurnBaseComponent::GetCurrentTurnIndex() const
{
	return CurrentTurnIndex;
}

const TArray<FDTPendingAbility>& UDTTurnBaseComponent::GetAllPendingAbilities() const
{
	return PendingAbilities;
}

bool UDTTurnBaseComponent::PerformCombatStateCheck()
{

	//Maybe transfer state to Combat End
	//Yeah that makes sense
	if (IsAlliedTeamDead())
	{
		OnCombatEnded.Broadcast(false);
		return true;
	}

	if (IsOpposingTeamDead())
	{
		OnCombatEnded.Broadcast(true);
		return true;
	}

	return false;
}

bool UDTTurnBaseComponent::IsAlliedTeamDead() const
{
	UDTHealthComponent* ChariotHealth = nullptr;
	CharetteUnit->GetHealthComponent(ChariotHealth);

	if (IsValid(ChariotHealth))
	{
		return !ChariotHealth->IsAlive();
	}

	return false;
}

bool UDTTurnBaseComponent::IsOpposingTeamDead() const
{
	//If there are no opponents, then the game is simply over.
	if (EnemyUnits.IsEmpty())
	{
		return true;
	}
	
	UDTHealthComponent* ChariotHealth = nullptr;
	
	for (const auto& Opponent : EnemyUnits)
	{
		Opponent->GetHealthComponent(ChariotHealth);

		if (ChariotHealth->IsAlive())
		{
			return false;
		}
	}
	return true;
}

const UDTTurnSystemState* UDTTurnBaseComponent::GetCurrentTurnSystemState() const
{
	return CurrentTurnSystemState;
}

void UDTTurnBaseComponent::SetTurnSystemState(TSubclassOf<UDTTurnSystemState> NewTurnSystemState)
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
	UDTTurnSystemState* FoundState = nullptr;
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
		OnTurnPhaseChanged.Broadcast(GetCurrentStateName(), false);

		if (CurrentTurnSystemState.GetClass() == DefaultTurnState)
		{
			CurrentTurnIndex++;
		}
	}
	
	//If it was already instantiated, just set it.
	if (FoundState)
	{
		CurrentTurnSystemState = FoundState;
	}
	//Else, instantiate a new one.
	else
	{
		CurrentTurnSystemState = NewObject<UDTTurnSystemState>(this, NewTurnSystemState);
		CurrentTurnSystemState->InitializeState();
		RegisteredStates.Add(CurrentTurnSystemState);
	}
	CurrentTurnSystemState->OnStateEnter();
	OnTurnPhaseChanged.Broadcast(GetCurrentStateName(), true);
}

void UDTTurnBaseComponent::GoToNextPhase()
{
	if (PhasesInOrderForEncounter.IsEmpty()) { return; }

	int32 NextIndex = 0;

	if (CurrentTurnSystemState)
	{
		const int32 CurrentIndex = PhasesInOrderForEncounter.IndexOfByPredicate(
			[this](const TSubclassOf<UDTTurnSystemState>& PhaseClass)
			{
				return PhaseClass == CurrentTurnSystemState->GetClass();
			});

		if (CurrentIndex != INDEX_NONE)
		{
			NextIndex = (CurrentIndex + 1) % PhasesInOrderForEncounter.Num();
		}
	}

	SetTurnSystemState(PhasesInOrderForEncounter[NextIndex]);
}
