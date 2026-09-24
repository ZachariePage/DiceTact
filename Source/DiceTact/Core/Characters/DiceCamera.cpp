// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceCamera.h"

#include "CameraPawn.h"
#include "DTPlayerController_Combat.h"
#include "HeadMountedDisplayTypes.h"
#include "../Projectiles/Dice.h"

// Sets default values
ADiceCamera::ADiceCamera()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;

	Cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Cam->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ADiceCamera::BeginPlay()
{
	Super::BeginPlay();

	ADTPlayerController_Combat* PC = Cast<ADTPlayerController_Combat>(GetWorld()->GetFirstPlayerController());
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
	
	if (ACameraPawn* CamPawn = Cast<ACameraPawn>(PC->GetPawn()))
	{
		FTimerHandle DeactivateTimer;
		GetWorldTimerManager().SetTimer(
			DeactivateTimer,
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
void ADiceCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Dice)
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

void ADiceCamera::ResetAndDiscardCamera()
{
	if (ADTPlayerController_Combat* PC = Cast<ADTPlayerController_Combat>(GetWorld()->GetFirstPlayerController()))
	{
		PC->ResetCamera();
	}
	//Destroy self
}

void ADiceCamera::SetDice(ADice* _dice)
{
	Dice = _dice;
	Dice->OnDiceSettle.AddUniqueDynamic(this, &ADiceCamera::ResetAndDiscardCamera);
}

