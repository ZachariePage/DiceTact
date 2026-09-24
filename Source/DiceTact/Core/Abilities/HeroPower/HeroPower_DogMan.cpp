// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPower_DogMan.h"

#include "Core/Abilities/Definitions/DTDogManPowerData.h"
#include "Core/Characters/DTPlayerController_Combat.h"
#include "Core/Dice/DiceCollision.h"
#include "Core/Projectiles/Dice.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UHeroPower_DogMan::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                        const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	ADTPlayerController_Combat* PC = Cast<ADTPlayerController_Combat>(GetWorld()->GetFirstPlayerController());
	if (PC == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no paac", this);
		K2_EndAbility();
		return;
	}

	FHitResult CursorHit;
	PC->GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);

	AActor* HoveredActor = CursorHit.GetActor();
	if (HoveredActor == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no hovered actaaor", this);
		K2_EndAbility();
		return;
	}

	ADice* dice = Cast<ADice>(HoveredActor);
	if (dice == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no dice", this);
		K2_EndAbility();
		return;
	}

	dice->GetStaticMeshComponent()->AddImpulse(FVector::UpVector * PowerData->strength, NAME_None, true);

	FVector SelfTorque(
	dice->GetDiceCollision()->RandomSignedRange(dice->GetDiceCollision()->MinimumRandomTorqueX, dice->GetDiceCollision()->RandomTorqueX),
	dice->GetDiceCollision()->RandomSignedRange(dice->GetDiceCollision()->MinimumRandomTorqueY, dice->GetDiceCollision()->RandomTorqueY),
	dice->GetDiceCollision()->RandomSignedRange(dice->GetDiceCollision()->MinimumRandomTorqueZ, dice->GetDiceCollision()->RandomTorqueZ)
	);
	dice->GetStaticMeshComponent()->AddTorqueInRadians(SelfTorque * dice->GetDiceCollision()->Torque, NAME_None, true);

	K2_EndAbility();
}
