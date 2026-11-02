// Fill out your copyright notice in the Description page of Project Settings.


#include "DTGameStartData.h"

#include "DiceTact/Dice/Definitions/DTDiceObjectDefinition.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "Misc/DataValidation.h"

#if WITH_EDITOR
EDataValidationResult UDTGameStartData::IsDataValid(class FDataValidationContext& Context) const
{
	for (auto ItDice = DiceData.DeckItems.CreateConstIterator(); ItDice; ++ItDice)
	{

		if (IsValid((*ItDice)->GetDiceObjectDefinition()) == false)
		{
			Context.AddError(FText::FromString("\nDice at index " + FString::FromInt(ItDice.GetIndex()) + " has invalid Object Definition!"));
		}
		
		if (IsValid((*ItDice)->GetResolveDefinition()) == false)
		{
			Context.AddError(FText::FromString("\nDice at index " + FString::FromInt(ItDice.GetIndex()) + " has invalid Resolve Definition!"));
		}
	}
	
	return Super::IsDataValid(Context);
}
#endif
