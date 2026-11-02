#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Abilities/GameplayAbility.h"
#include "DiceTact/Interface/DTDiceAbilityCaster.h"
#include "DTPendingAbility.generated.h"
class UDTPayloadPendingAbility;
class ADTDice;

USTRUCT(BlueprintType)
struct FDTPendingAbility
{
	GENERATED_BODY()

	FDTPendingAbility()
	{
		
	}

	FDTPendingAbility(ADTDice* Dice, TScriptInterface<IDTDiceAbilityCaster> DiceCaster = nullptr)
	{
		DiceActor = Dice;
		Caster = DiceCaster;
	}
	
	UPROPERTY(BlueprintReadWrite)
	TScriptInterface<IDTDiceAbilityCaster> Caster = nullptr;
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<ADTDice> DiceActor = nullptr;

	UPROPERTY(BlueprintReadWrite)
    FGameplayAbilitySpecHandle AbilityHandle;

	UDTPayloadPendingAbility* ToDataObject(UObject* Outer) const;
};