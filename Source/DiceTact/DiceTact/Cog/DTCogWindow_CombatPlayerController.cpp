#include "DTCogWindow_CombatPlayerController.h"

#if ENABLE_COG

#include "DTCogWindow_TurnBasedSystem.h"
#include "DiceTact/Abilities/HeroPower/DTHeroPowerDefinition.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "DiceTact/Dice/Definitions/DTDiceObjectDefinition.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "DiceTact/Cog/DTCommonCogColors.h"


void FDTCogWindow_CombatPlayerController::Initialize()
{
	FCogWindow::Initialize();
}

void FDTCogWindow_CombatPlayerController::RenderHelp()
{
	FCogWindow::RenderHelp();
	ImGui::Text("Window that displays internal variables of the Combat Player Controller");
}

void FDTCogWindow_CombatPlayerController::RenderContent()
{
	FCogWindow::RenderContent();

	ImGui::SeparatorText("Combat Player Controller");

	AActor* Selection = GetSelection();

	ADTCombatPlayerController* PCCombat = nullptr;

	//trying to get the controller
	{
		PCCombat = Cast<ADTCombatPlayerController>(Selection);
		if (IsValid(PCCombat) == false)
		{
			if (APawn* Pawn = Cast<APawn>(Selection))
			{
				PCCombat = Cast<ADTCombatPlayerController>(Pawn->GetController());
			}
		}
	}
	
	if (IsValid(PCCombat) == false)
	{
		ImGui::TextColored(CogColors::Red, "Selection is not Combat Player Controller");
		return;
	}

	{
		ImGui::TextColored(CogColors::Cyan, "Selected Hero: ");
		ImGui::SameLine();
		ADTHeroCharacter* SelectedHero = PCCombat->GetSelectedHero();
		if (IsValid(SelectedHero) == false)
		{
			ImGui::TextDisabled("None");
		}
		else
		{
			FString CharName = SelectedHero->GetActorNameOrLabel();
			ImGui::Text(TCHAR_TO_UTF8(*CharName));
		}
	
	}

	ImGui::Separator();

	/* Dice Debugs */
	{
		ImGui::TextColored(CogColors::Cyan, "Selected Dice: ");
		UDTDiceItemInstance* SelectedDice = PCCombat->GetSelectedDice();

		if (IsValid(SelectedDice) == false)
		{
			ImGui::SameLine();
			ImGui::TextDisabled("None");
		}
		else
		{
			{
				ImGui::TextColored(CogColors::Turquoise, "Object Definition: ");
				ImGui::SameLine();
				auto ObjectDef = SelectedDice->GetDiceObjectDefinition();
				FString ObjectName = ObjectDef->GetDisplayedName().ToString();
				ImGui::Text(TCHAR_TO_UTF8(*ObjectName));
			}

			{
				ImGui::TextColored(CogColors::Turquoise, "Resolve Definition: ");
				ImGui::SameLine();
				auto ResolveDefinition = SelectedDice->GetResolveDefinition();
				FString ResolveName = ResolveDefinition->GetResolveName().ToString();
				ImGui::Text(TCHAR_TO_UTF8(*ResolveName));
			}
		}
	}

	ImGui::Separator();

	/* Selected Power debugs */
	{
		ImGui::TextColored(CogColors::Cyan, "Selected Power: ");
		ImGui::SameLine();
		
		UDTHeroPowerDefinition* Power = PCCombat->GetSelectedPower();
		if (IsValid(Power))
		{
			FString PowerName = Power->GetHeroPowerName().ToString();
			ImGui::Text(TCHAR_TO_UTF8(*Power->GetName()));			
		}
		else
		{
			ImGui::TextDisabled("None");
		}
	}	
	
}
#endif
