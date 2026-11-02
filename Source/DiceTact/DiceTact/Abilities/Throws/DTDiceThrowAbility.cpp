// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceThrowAbility.h"

#include "DiceTact/Abilities/ResolveAbilities/DTResolveGameplayAbility.h"
#include "DiceTact/Abilities/Throws/DTThrowTypeData.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"
#include "DiceTact/Medaillon/DTMedaillonStatics.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "DiceTact/subsystem/DTActorFactorySubSystem.h"
#include "DiceTact/subsystem/DTTimeControllerSubsystem.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

float UDTDiceThrowAbility::GetAbilityMaxRange(const AActor* AvatarActor) const
{
	return Range;
}

TSubclassOf<UDTResolveGameplayAbility> UDTDiceThrowAbility::GetResolveAbility()
{
	return DiceItemInstance->GetResolveDefinition()->GetResolveAbility().Get();
}

bool UDTDiceThrowAbility::DoesItConsumeTurn_Implementation()
{
	return true;
}

int UDTDiceThrowAbility::ManaCost_Implementation()
{
	return ManaCost;
}

/*
bool UDTDiceThrowAbility::ShouldModifyCamera_Implementation() const
{
	return true;
}
*/

FVector UDTDiceThrowAbility::CalculateSpawnLocation(const FVector& AvatarLocation, const FVector& TargetLocation) const
{
	const FVector SpawnDirection = (TargetLocation - AvatarLocation).GetSafeNormal();
	return AvatarLocation + FVector(0.f, 0.f, SpawnHeight) + SpawnDirection * ForwardSpawnOffset;
}

void UDTDiceThrowAbility::SpawnDice()
{

	/*
	 * Target location should be calculated from the owner (Avatar)
	 */
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	ADTCombatPlayerController* DiceTactPC = Cast<ADTCombatPlayerController>(PC);
	if (!DiceTactPC || !DiceItemInstance)
	{
		OnDiceRemoved();
		return;
	}

	AActor* Avatar = GetAvatarActorFromActorInfo();
	if (!Avatar)
	{
		OnDiceRemoved();
		return;
	}
	
	ADTHeroCharacter* PossessedUnit = DiceTactPC->GetSelectedHero();
	const UDTThrowTypeData* ThrowTypeData = nullptr;
	if (PossessedUnit)
	{
		ThrowTypeData = PossessedUnit->GetThrowTypeData();
	}
	
	if (!ThrowTypeData)
	{
		OnDiceRemoved();
		return;
	}

	const FVector AvatarLocation = Avatar->K2_GetActorLocation();
	const FVector TargetLocation = DiceTactPC->GetCachedDestination();
	const FVector Direction = ThrowTypeData->CalculateThrowDirection(AvatarLocation, TargetLocation);

	const FVector SpawnLocation = CalculateSpawnLocation(AvatarLocation, TargetLocation);
	const FTransform SpawnTransform = UKismetMathLibrary::Conv_VectorToTransform(SpawnLocation);
	
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	SpawnParameters.Owner = GetOwningActorFromActorInfo();
	SpawnParameters.Instigator = Cast<APawn>(GetAvatarActorFromActorInfo());
	//ADTDice* SpawnedDice = GetWorld()->SpawnActor<ADTDice>(DiceClass, SpawnTransform, SpawnParameters);
	UDTActorFactorySubSystem* ActorFactorySubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UDTActorFactorySubSystem>();

	if (!ActorFactorySubsystem)
	{
		OnDiceRemoved();
		return;
	}

	ADTDice* SpawnedDice = ActorFactorySubsystem->SpawnDice(
		GetWorld(),
		DiceItemInstance->GetDiceObjectDefinition(),
		DiceItemInstance,
		SpawnTransform,
		SpawnParameters,
		false
	);

	if (!IsActive() || bThrowFinished)
	{
		return;
	}
	if (!IsValid(SpawnedDice) || SpawnedDice->IsDiceRemoved())
	{
		OnDiceRemoved();
		return;
	}

	SetDiceActor(SpawnedDice);
	SpawnedDice->OnDiceSettle.AddUniqueDynamic(this, &UDTDiceThrowAbility::SendPendingAbility);
	SpawnedDice->OnDiceRemoved.AddUniqueDynamic(this, &UDTDiceThrowAbility::OnDiceRemoved);
	SpawnedDice->OnDestroyed.AddUniqueDynamic(this, &UDTDiceThrowAbility::OnSpawnedDiceDestroyed);

	const float HoldTime = DiceTactPC->GetCachedStrength();
	const float AdditionalStrength = HoldTime * ThrowTypeData->AdditionalSpeedMultipliedByThrowStrength;
	const float AdditionalTorque = HoldTime * ThrowTypeData->AdditionalTorgue;
	SpawnedDice->ThrowDice(Direction, ThrowTypeData, AdditionalStrength, AdditionalTorque);
	ThrowTypeData->ModifyDiceActor(SpawnedDice, Direction, HoldTime);

	// Blueprint throw customization can settle or remove the die synchronously.
	if (!IsActive() || bThrowFinished)
	{
		return;
	}
	if (!IsValid(SpawnedDice) || SpawnedDice->IsDiceRemoved())
	{
		OnDiceRemoved();
		return;
	}
	if (SpawnedDice->HasSettled())
	{
		SendPendingAbility();
		return;
	}

	DiceTactPC->NotifyDiceThrown(SpawnedDice);

	if (UDTTimeControllerSubsystem* TimeController = Avatar->GetGameInstance()->GetSubsystem<UDTTimeControllerSubsystem>())
	{
		TimeController->StartFastForward(speedOfFastForward);
	}

	const FGameplayTag DiceThrownTag = FGameplayTag::RequestGameplayTag(FName("Dice.Thrown"));
	UDTMedaillonStatics::SendMedaillonEvent(Avatar, DiceThrownTag, SpawnedDice);

}

void UDTDiceThrowAbility::SetDiceItemInstance(UDTDiceItemInstance* _ItemInstance)
{
	DiceItemInstance = _ItemInstance;
}

void UDTDiceThrowAbility::SendPendingAbility()
{
	if (!IsActive() || bThrowFinished)
	{
		return;
	}


	/*
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();

	if (!ASC)
	{
		return;
	}

	FGameplayAbilitySpec* Spec = ASC->FindAbilitySpecFromClass(GetResolveAbility());

	if (!Spec)
	{
		return;
	}

	FDTPendingAbility Pending;

	Pending.Caster = GetAvatarActorFromActorInfo();
	Pending.AbilityHandle = Spec->Handle;
	Pending.DiceActor = SpawnedDiceActor;

	*/
	// if (ADiceTactGameState* GameState = GetWorld()->GetGameState<ADiceTactGameState>())
	// {
	// 	GameState->AddDiceToResolve(SpawnedDiceActor);
	// }

	bThrowFinished = true;
	K2_EndAbility();
}

void UDTDiceThrowAbility::OnDiceRemoved()
{
	if (IsActive() && !bThrowFinished)
	{
		bThrowFinished = true;
		EndAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true, true);
	}
}

void UDTDiceThrowAbility::OnSpawnedDiceDestroyed(AActor* DestroyedActor)
{
	OnDiceRemoved();
}

void UDTDiceThrowAbility::SetDiceActor(ADTDice* dice)
{
	SpawnedDiceActor = dice;
}

void UDTDiceThrowAbility::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	bThrowFinished = false;
	Super::ActivateAbility(
		Handle,
		ActorInfo,
		ActivationInfo,
		TriggerEventData
	);

	if (IsActive() && !bThrowFinished)
	{
		SpawnDice();
	}
}

void UDTDiceThrowAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	bThrowFinished = true;
	if (SpawnedDiceActor)
	{
		SpawnedDiceActor->OnDiceSettle.RemoveDynamic(this, &UDTDiceThrowAbility::SendPendingAbility);
		SpawnedDiceActor->OnDiceRemoved.RemoveDynamic(this, &UDTDiceThrowAbility::OnDiceRemoved);
		SpawnedDiceActor->OnDestroyed.RemoveDynamic(this, &UDTDiceThrowAbility::OnSpawnedDiceDestroyed);
		SpawnedDiceActor = nullptr;
	}
	AActor* Player = nullptr;
	if (ActorInfo)
	{
		Player = ActorInfo->AvatarActor.Get();
	}
	if (Player)
	{
		if (UGameInstance* GameInstance = Player->GetGameInstance())
		{
			if (UDTTimeControllerSubsystem* sub = GameInstance->GetSubsystem<UDTTimeControllerSubsystem>())
			{
				sub->StopFastForward();
			}
		}
	}
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
