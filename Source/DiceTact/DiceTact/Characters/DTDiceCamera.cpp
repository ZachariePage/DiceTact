// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceCamera.h"

#include "DTCameraPawn.h"
#include "DTCombatPlayerController.h"
#include "../Projectiles/DTDice.h"

// Sets default values
ADTDiceCamera::ADTDiceCamera()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Cam->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ADTDiceCamera::BeginPlay()
{
	Super::BeginPlay();

	ADTCombatPlayerController* PC = Cast<ADTCombatPlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PC)
	{
		return;
	}

	constexpr float BlendTime = 0.75f;
	
	PC->SetViewTargetWithBlend(
		this,
		BlendTime,
		VTBlend_Cubic,
		0.f,
		false 
	);
	
	if (ADTCameraPawn* CamPawn = Cast<ADTCameraPawn>(PC->GetPawn()))
	{
		CachedCamPawn = CamPawn;

		GetWorldTimerManager().SetTimer(
			DeactivateTimerHandle,
			[CamPawn]()
			{
				if (IsValid(CamPawn))
				{
					CamPawn->SetCameraActive(false);
				}
			},
			BlendTime,
			false
		);
	}
}

// Called every frame
void ADTDiceCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsValid(Dice))
	{
		return;
	}

	FVector newLocation = Dice->GetActorLocation();
	newLocation.Z += distanceZFromDice;
	SetActorLocation(newLocation);

	/*
	if (Dice->IsImmobile() && !bDiceSettled && Dice->GetDicePhysicalComponent()->IsSimulatingPhysics())
	{
		bDiceSettled = true;
		Dice->CameraNoLongerNeeded();
	}*/

	
}

void ADTDiceCamera::ResetAndDiscardCamera()
{
	if (bIsResetting)
	{
		return;
	}
	bIsResetting = true;

	GetWorldTimerManager().ClearTimer(DeactivateTimerHandle);

	if (Dice)
	{
		Dice->OnDiceSettle.RemoveDynamic(this, &ADTDiceCamera::ResetAndDiscardCamera);
	}

	constexpr float ReturnBlendTime = 0.75f;

	if (ADTCombatPlayerController* PC = Cast<ADTCombatPlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (IsValid(CachedCamPawn))
		{
			CachedCamPawn->SetCameraActive(true);
		}

		PC->SetViewTargetWithBlend(
			CachedCamPawn,
			ReturnBlendTime,
			VTBlend_Cubic,
			0.f,
			false
		);
	}


		GetWorldTimerManager().SetTimer(
		SelfDestructTimerHandle,
		[this]()
		{
			if (IsValid(this))
			{
				Destroy();
			}
		},
		ReturnBlendTime,
		false
	);
}

void ADTDiceCamera::SetDice(ADTDice* _dice)
{
	Dice = _dice;
	Dice->OnDiceSettle.AddUniqueDynamic(this, &ADTDiceCamera::ResetAndDiscardCamera);
}

