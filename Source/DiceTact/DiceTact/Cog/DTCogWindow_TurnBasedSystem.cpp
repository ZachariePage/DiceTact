#include "DTCogWindow_TurnBasedSystem.h"

#if ENABLE_COG
#include "DTCommonCogColors.h"
#include "DiceTact/Combat/DTCombatGameMode.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnBaseComponent.h"
#include "DiceTact/Combat/TurnBaseSystem/TurnBaseStates/DTTurnSystemState.h"
#include "GameFramework/GameModeBase.h"

void FDTCogWindow_TurnBasedSystem::Initialize()
{
	FCogWindow::Initialize();
}

void FDTCogWindow_TurnBasedSystem::RenderHelp()
{
	
	FCogWindow::RenderHelp();
	ImGui::Text("Window that displays internal variables of the Turn-Based system.");
}

void FDTCogWindow_TurnBasedSystem::RenderContent()
{
	FCogWindow::RenderContent();

	ImGui::SeparatorText("Turn-Based System");

	AGameModeBase* GM = GetWorld()->GetAuthGameMode();

	if (IsValid(GM) == false)
	{
		ImGui::TextColored(CogColors::Red, "Invalid Gamemode.");
		return;
	}
	
	ADTCombatGameMode* GMCombat = Cast<ADTCombatGameMode>(GM);
	if (IsValid(GMCombat) == false)
	{
		ImGui::TextColored(CogColors::Red, "Gamemode is not ADTGameMode_Combat.");
		return;
	}

	UDTTurnBaseComponent* TurnBasedComponent = GMCombat->GetTurnManager();
	if (IsValid(TurnBasedComponent) == false)
	{
		ImGui::TextColored(CogColors::Red, "Invalid UTurnBaseComponent.");
	}

	const UDTTurnSystemState* CurrentState = TurnBasedComponent->GetCurrentTurnSystemState();
	
	FString CurrentStateName = CurrentState ? CurrentState->GetStateName().ToString() : "None";

	ImGui::TextColored(CogColors::Cyan, "Current State: ");
	ImGui::SameLine();
	ImGui::Text("%s", TCHAR_TO_UTF8(*CurrentStateName));

	if (IsValid(CurrentState) == false)
	{
		return;
	}

	ImGui::TextColored(CogColors::Cyan, "Current Bound Turn Receiver: ");
	ImGui::SameLine();
	
	if (CurrentState->IsAuthorityBound() == false)
	{
		ImGui::TextDisabled("None");
	}
	else
	{
		TScriptInterface<IDTTurnReceiver> BoundReceiver = CurrentState->GetBoundReceiver();
		UObject* Receiver = BoundReceiver.GetObject();
		FString ReceiverName = Receiver->GetName();

		ImGui::Text(TCHAR_TO_UTF8(*ReceiverName));
	}
}

#endif
