// Fill out your copyright notice in the Description page of Project Settings.


#include "GA_ThrowDice.h"

#include "Core/Abilities/Throws/ThrowType.h"
#include "Core/Characters/DTPlayerController_Combat.h"
#include "Core/Inventory/DTDiceItemInstance.h"
#include "Core/Dice/Definitions/DTDiceObjectDefinition.h"
#include "Core/Dice/Definitions/DTDiceResolveDefinition.h"
#include "Core/subsystem/ActorFactorySubSystem.h"
#include "Core/subsystem/TimeControllerSubsystem.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

float UGA_ThrowDice::GetAbilityMaxRange(const AActor* AvatarActor) const
{
	return Range;
}

TSubclassOf<UResolveGameplayAbility> UGA_ThrowDice::GetResolveAbility()
{
	return DiceItemInstance->GetResolveDefinition()->GetResolveAbility();
}

bool UGA_ThrowDice::DoesItConsumeTurn_Implementation()
{
	return true;
}

int UGA_ThrowDice::ManaCost_Implementation()
{
	return ManaCost;
}

bool UGA_ThrowDice::ShouldModifyCamera_Implementation() const
{
	return true;
}

void UGA_ThrowDice::SpawnDice()
{

	/*
	 * Target location should be calculated from the owner (Avatar)
	 */
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	ADTPlayerController_Combat* DiceTactPC = Cast<ADTPlayerController_Combat>(PC);
	if (!DiceTactPC)
	{
		return;
	}

	AActor* Avatar = GetAvatarActorFromActorInfo();
	if (!Avatar)
	{
		return;
	}
	
	AHeroCharacter* PossessedUnit = DiceTactPC->GetPossessedUnit();
	const UThrowType* ThrowTypeData = PossessedUnit->GetThrowTypeData();
	
	if (!ThrowTypeData)
	{
		return;
	}

	const FVector AvatarLocation = Avatar->K2_GetActorLocation();
	const FVector TargetLocation = DiceTactPC->GetCachedDestination();
	const FVector spawnDirection = UKismetMathLibrary::GetDirectionUnitVector(AvatarLocation,DiceTactPC->GetCachedDestination());
	const FVector Direction = ThrowTypeData->CalculateThrowDirection(AvatarLocation, TargetLocation);

	const FVector SpawnLocation = AvatarLocation + (spawnDirection * OffsetSpawnLocation);
	const FTransform SpawnTransform = UKismetMathLibrary::Conv_VectorToTransform(SpawnLocation);
	
	TSubclassOf<ADice> DiceClass = DiceItemInstance->GetDiceObjectDefinition()->GetDiceClass();
	
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	SpawnParameters.Owner = GetOwningActorFromActorInfo();
	SpawnParameters.Instigator = Cast<APawn>(GetAvatarActorFromActorInfo());
	//ADice* SpawnedDice = GetWorld()->SpawnActor<ADice>(DiceClass, SpawnTransform, SpawnParameters);
	UActorFactorySubSystem* ActorFactorySubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UActorFactorySubSystem>();

	ADice* SpawnedDice = ActorFactorySubsystem->SpawnDice(
		GetWorld(),
		DiceItemInstance->GetDiceObjectDefinition(),
		DiceItemInstance,
		SpawnTransform,
		SpawnParameters,
		true
	);

	SetDiceActor(SpawnedDice);

	if (SpawnedDiceActor)
	{
		//SpawnedDice->InitializeDice(DiceItemInstance->GetDiceElementDefinition(), DiceItemInstance->GetResolveDefinition());
		float additionalStrength = DiceTactPC->cachedStrength * ThrowTypeData->AdditionalSpeedMultipliedByThrowStrength;
		SpawnedDiceActor->ThrowDice(Direction, ThrowTypeData, additionalStrength);
		ThrowTypeData->ModifyDiceActor(SpawnedDiceActor, Direction, ThrowTypeData->Speed);

		//Bind Dice's settle to the ability's end
		SpawnedDice->OnDiceSettle.AddUniqueDynamic(this, &UGA_ThrowDice::SendPendingAbility);

		if (UGameInstance* GameInstance = Avatar->GetGameInstance())
		{
			if (UTimeControllerSubsystem* sub = GameInstance->GetSubsystem<UTimeControllerSubsystem>())
			{
				sub->StartFastForward(speedOfFastForward);
			}
		}
	}
}

void UGA_ThrowDice::SetDiceItemInstance(UDTDiceItemInstance* _ItemInstance)
{
	DiceItemInstance = _ItemInstance;
}

void UGA_ThrowDice::SendPendingAbility()
{

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

	FPendingAbility Pending;

	Pending.Caster = GetAvatarActorFromActorInfo();
	Pending.AbilityHandle = Spec->Handle;
	Pending.DiceActor = SpawnedDiceActor;

	*/
	// if (ADiceTactGameState* GameState = GetWorld()->GetGameState<ADiceTactGameState>())
	// {
	// 	GameState->AddDiceToResolve(SpawnedDiceActor);
	// }

	K2_EndAbility();
}

void UGA_ThrowDice::SetDiceActor(ADice* dice)
{
	SpawnedDiceActor = dice;
}

void UGA_ThrowDice::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(
		Handle,
		ActorInfo,
		ActivationInfo,
		TriggerEventData
	);

	SpawnDice();
}

void UGA_ThrowDice::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (AActor* player = GetCurrentActorInfo()->AvatarActor.Get())
	{
		if (UGameInstance* GameInstance = player->GetGameInstance())
		{
			if (UTimeControllerSubsystem* sub = GameInstance->GetSubsystem<UTimeControllerSubsystem>())
			{
				sub->StopFastForward();
			}
		}
	}
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
