#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Abilities/GameplayAbility.h"
#include "Core/Interface/DiceAbilityCaster.h"
#include "PendingAbility.generated.h"
class UPendingAbilityPayload;
class ADice;

USTRUCT(BlueprintType)
struct FPendingAbility
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite)
	TScriptInterface<IDiceAbilityCaster> Caster;
	
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<ADice> DiceActor = nullptr;

	UPROPERTY(BlueprintReadWrite)
    FGameplayAbilitySpecHandle AbilityHandle;

	UPendingAbilityPayload* ToDataObject(UObject* Outer) const;
};