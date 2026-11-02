#include "DTCogWindow_SaveSystem.h"

#include "DTCommonCogColors.h"
#include "DiceTact/System/DiceTactGameInstance.h"

#if ENABLE_COG

void FDTCogWindow_SaveSystem::Initialize()
{
	FCogWindow::Initialize();
	UGameInstance* GI = GetWorld()->GetGameInstance();

	if (GI == nullptr)
	{
		return;
	}

	GameInstance = Cast<const UDiceTactGameInstance>(GI);
	
}

void FDTCogWindow_SaveSystem::RenderHelp()
{
	FCogWindow::RenderHelp();
	ImGui::Text("Displays the internal variables of the Currently Loaded Save Game.");
}

void FDTCogWindow_SaveSystem::RenderContent()
{
	FCogWindow::RenderContent();

	ImGui::SeparatorText("Save System");
	
	if (IsValid(GameInstance) == false)
	{
		ImGui::TextColored(CogColors::Red, "Could not find DiceTactGameInstance!");
		return;
	}

	if (GameInstance->IsSaveGameLoaded() == false)
	{
		ImGui::TextColored(CogColors::Yellow, "No Save Game is loaded now.");
		return;
	}

	const FString& SaveGameSlotName = GameInstance->GetCurrentGameSlotName();
		
	ImGui::TextColored(CogColors::Cyan, "Current Slot Name: ");
	ImGui::SameLine();

	if (SaveGameSlotName.IsEmpty())
	{
		ImGui::TextDisabled("None");	
	}
	else
	{
		ImGui::Text(TCHAR_TO_UTF8(*SaveGameSlotName));
	}

	
	/* Show Game Slot Data */
	ImGui::SeparatorText("Game Save Data");
	
	const UDiceTactSaveGame* GameSave = GameInstance->GetLoadedGameSave();
	{

		// Current Biome
		ImGui::TextColored(CogColors::Cyan,"Current Biome: ");
		ImGui::SameLine();
		const FName CurrentBiome = GameSave->GetCurrentBiome();

		if (CurrentBiome.IsNone())
		{
			ImGui::TextDisabled("None");
		}
		else
		{
			ImGui::Text(TCHAR_TO_UTF8(*CurrentBiome.ToString()));
		}


		// Current Location
		ImGui::TextColored(CogColors::Cyan,"Current Location: ");
		ImGui::SameLine();
		
		const FName CrntLocation = GameSave->GetCurrentLocation();

		if (CrntLocation.IsNone())
		{
			ImGui::TextDisabled("None");
		}
		else
		{
			ImGui::Text(TCHAR_TO_UTF8(*CrntLocation.ToString()));
		}

		ImGui::TextColored(CogColors::Cyan,"TargetLevel: ");
		ImGui::SameLine();

		{
			TSoftObjectPtr<UWorld> TargetLevel = GameSave->GetTargetLevel();
			if (TargetLevel.IsValid())
			{
				ImGui::Text(TCHAR_TO_UTF8(*TargetLevel->GetName()));
				ImGui::SameLine();
				ImGui::TextColored(CogColors::Green, " (Loaded Asset)");
			}
			else if (TargetLevel.ToSoftObjectPath().IsValid())
			{
				ImGui::Text(TCHAR_TO_UTF8(*TargetLevel.GetAssetName()));
				ImGui::SameLine();
				ImGui::TextColored(CogColors::Yellow, " (Unloaded Asset)");
			}
			else
			{
				ImGui::TextDisabled("None");
			}
		
		}
	}
	{
		ImGui::Spacing();
		ImGui::TextColored(CogColors::Cyan, "Cart Data");
		const FCartGameData& Cartdata = GameSave->GetCartData();
		ImGui::Indent();

		ImGui::TextColored(CogColors::Cyan, "Max Health: ");
		ImGui::SameLine();
		ImGui::Text("%d", Cartdata.MaxHealth);

		ImGui::TextColored(CogColors::Cyan, "Current Health: ");
		ImGui::SameLine();
		ImGui::Text("%d", Cartdata.CurrentHealth);

		ImGui::Unindent();
	}
	
}


#endif