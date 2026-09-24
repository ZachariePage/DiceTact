#include "CogWindow_TurnBasedSystem.h"

#if ENABLE_COG
#include "Core/System/DTGameState_Combat.h"
#include "Core/TurnBaseSystem/TurnBaseComponent.h"
#include "GameFramework/GameModeBase.h"

void FCogWindow_TurnBasedSystem::Initialize()
{
	FCogWindow::Initialize();
}

void FCogWindow_TurnBasedSystem::RenderHelp()
{
	
	FCogWindow::RenderHelp();
	ImGui::Text("Window that displays internal variables of the Turn-Based system.");
}

void FCogWindow_TurnBasedSystem::RenderContent()
{
	FCogWindow::RenderContent();

	ImGui::SeparatorText("Turn-Based System");

	AGameModeBase* GM = GetWorld()->GetAuthGameMode();

	if (IsValid(GM) == false)
	{
		ImGui::TextColored(CogColors::Red, "Invalid Gamemode.");
		return;
	}
	
	ADTGameState_Combat* GSCombat = GM->GetGameState<ADTGameState_Combat>();
	if (IsValid(GSCombat) == false)
	{
		ImGui::TextColored(CogColors::Red, "Game state is not ADTGameState_Combat.");
		return;
	}

	UTurnBaseComponent* TurnBasedComponent = GSCombat->GetTurnManager();
	if (IsValid(TurnBasedComponent) == false)
	{
		ImGui::TextColored(CogColors::Red, "Invalid UTurnBaseComponent.");
	}

	FString CurrentState = TurnBasedComponent->GetCurrentState().ToString();

	ImGui::TextColored(CogColors::Cyan, "Current State: ");
	ImGui::SameLine();
	ImGui::Text("%s", TCHAR_TO_UTF8(*CurrentState));
}

#endif
