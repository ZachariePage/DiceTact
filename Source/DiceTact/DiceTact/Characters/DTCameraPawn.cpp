#include "DTCameraPawn.h"

#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "DTCameraSettings.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"
#include "Engine/World.h"
#include "GameFramework/SpringArmComponent.h"

// Creates the root, attaches the spring arm to it, then attaches the camera to the spring arm.
ADTCameraPawn::ADTCameraPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootSceneComponent;
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootSceneComponent);
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->bUsePawnControlRotation = false;
}

// Sets up the spring arm and camera using CameraSettings. Without that asset, leaves the setup to Blueprint.
// Registers camera functions to run when CombatBridge announces a focus request, phase change or combat ending
// Also picks up any actor the subsystem was already focusing on before these listeners were registered.
void ADTCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	if (!CameraSettings)
	{
		return;
	}

	OverviewLocation = GetActorLocation();
	
	CameraYaw = SpringArmComponent->GetComponentRotation().Yaw;
	
	SetActorRotation(FRotator::ZeroRotator);
	
	SpringArmComponent->bUsePawnControlRotation = false;
	SpringArmComponent->bInheritPitch = false;
	SpringArmComponent->bInheritYaw = false;
	SpringArmComponent->bInheritRoll = false;
	SpringArmComponent->bDoCollisionTest = false;
	SpringArmComponent->bEnableCameraLag = false;
	SpringArmComponent->bEnableCameraRotationLag = false;
	SpringArmComponent->TargetOffset = FVector::ZeroVector;
	
	CameraComponent->SetRelativeLocationAndRotation(FVector::ZeroVector, FRotator::ZeroRotator);

	CombatBridge = GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>();
	
	if (CombatBridge.IsValid())
	{
		CombatBridge->OnNewActorFocus.AddUniqueDynamic(this, &ADTCameraPawn::OnNewActorFocus);
		CombatBridge->OnActorsFocused.AddUniqueDynamic(this, &ADTCameraPawn::OnCombatActorsFocused);
		CombatBridge->OnTurnPhaseChanged.AddUniqueDynamic(this, &ADTCameraPawn::OnCombatPhaseChanged);
		CombatBridge->OnCombatEnded.AddUniqueDynamic(this, &ADTCameraPawn::OnCombatEnded);
		
		AActor* ExistingFocus = CombatBridge->GetFocusedActor();
		
		if (IsValid(ExistingFocus))
		{
			OnNewActorFocus(ExistingFocus, EFocusActorMethod::Attach, true);
		}
	}

	const FDTCameraProfile& Profile = GetProfile();
	SpringArmComponent->TargetArmLength = Profile.Distance;
	
	SpringArmComponent->SetWorldRotation(FRotator(Profile.Pitch, CameraYaw, 0.0f));
	SpringArmComponent->SocketOffset = Profile.SocketOffset;
	CameraComponent->SetFieldOfView(Profile.FieldOfView);
	CameraComponent->SetRelativeRotation(FRotator(Profile.ViewPitchOffset, 0.0f, 0.0f));
}

// When this pawn leaves play, stops following actors and removes the listeners registered on them and CombatBridge.
// This cleans up the connections made during BeginPlay and while following targets.
void ADTCameraPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	bResolvingDice = false;
	StopFollowingDice();
	ClearTemporaryFocus();
	if (CombatBridge.IsValid())
	{
		CombatBridge->OnNewActorFocus.RemoveDynamic(this, &ADTCameraPawn::OnNewActorFocus);
		CombatBridge->OnActorsFocused.RemoveDynamic(this, &ADTCameraPawn::OnCombatActorsFocused);
		CombatBridge->OnTurnPhaseChanged.RemoveDynamic(this, &ADTCameraPawn::OnCombatPhaseChanged);
		CombatBridge->OnCombatEnded.RemoveDynamic(this, &ADTCameraPawn::OnCombatEnded);
	}
	Super::EndPlay(EndPlayReason);
}


// Reads CameraMode and returns its profile from CameraSettings: Overview, Hero, ThrowAim or DiceFollow.
// Temporary focus uses the Hero profile. This function returns settings; it does not switch camera modes.
const FDTCameraProfile& ADTCameraPawn::GetProfile() const
{
	
	if (bHasTemporaryFocus)
	{
		return CameraSettings->Hero;
	}
	
	switch (CameraMode)
	{
	case EDTCameraMode::Hero:
		return CameraSettings->Hero;
	case EDTCameraMode::ThrowAim:
		return CameraSettings->ThrowAim;
	case EDTCameraMode::DiceFollow:
		return CameraSettings->DiceFollow;
	default:
		return CameraSettings->Overview;
	}
}

// Updates the camera every frame:
// 1. Handles tracked actors disappearing, updating the camera mode or temporary focus when needed.
// 2. Chooses where to look: the overview position, selected hero, followed die, or temporary target.
// 3. Gets the profile settings and applies the player's zoom, rotation and movement adjustments.
// 4. Smoothly updates the camera position, rotation, distance and field of view toward that result.
void ADTCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!CameraSettings)
	{
		return;
	}

	if (CameraMode == EDTCameraMode::DiceFollow && !FollowedDice.IsValid())
	{
		FollowedDice.Reset();
		RestorePlayerMode();
	}
	if ((CameraMode == EDTCameraMode::Hero || CameraMode == EDTCameraMode::ThrowAim) && !SelectedHero.IsValid())
	{
		RestorePlayerMode();
	}
	if (TemporaryFocus.IsStale())
	{
		ClearTemporaryFocus(bResolvingDice);
	}

	FVector FocusLocation = OverviewLocation + PanOffset;
	if (CameraMode == EDTCameraMode::DiceFollow)
	{
		FocusLocation = FollowedDice->GetActorLocation();
	}
	else if (CameraMode != EDTCameraMode::Overview)
	{
		FocusLocation = SelectedHero->GetActorLocation() + PanOffset;
	}
	if (TemporaryFocus.IsValid())
	{
		TemporaryFocusLocation = TemporaryFocus->GetActorLocation();
	}
	if (bHasTemporaryFocus)
	{
		FocusLocation = TemporaryFocusLocation;
	}

	const FDTCameraProfile& Profile = GetProfile();
	float ArmPitch = Profile.Pitch;
	float ViewPitch = Profile.ViewPitchOffset;
	float Distance = Profile.Distance;
	if (!bHasTemporaryFocus)
	{
		Distance += ZoomOffset;
		if (CameraMode == EDTCameraMode::ThrowAim)
		{
			ViewPitch += PitchOffset;
		}
		else
		{
			ArmPitch += PitchOffset;
		}
	}
	Distance = FMath::Clamp(Distance, CameraSettings->MinimumDistance, CameraSettings->MaximumDistance);
	FocusLocation.Z += Profile.FocusHeight;

	const FVector CurrentLocation = GetActorLocation();
	const FVector NewLocation = FMath::VInterpTo(CurrentLocation, FocusLocation, DeltaTime, CameraSettings->BlendSpeed);
	SetActorLocation(NewLocation);

	const FRotator CurrentArmRotation = SpringArmComponent->GetComponentRotation();
	const FRotator TargetArmRotation(ArmPitch, CameraYaw, 0.0f);
	const FRotator NewArmRotation = FMath::RInterpTo(CurrentArmRotation, TargetArmRotation, DeltaTime, CameraSettings->BlendSpeed);
	SpringArmComponent->SetWorldRotation(NewArmRotation);

	const FRotator CurrentViewRotation = CameraComponent->GetRelativeRotation();
	const FRotator TargetViewRotation(ViewPitch, 0.0f, 0.0f);
	const FRotator NewViewRotation = FMath::RInterpTo(CurrentViewRotation, TargetViewRotation, DeltaTime, CameraSettings->BlendSpeed);
	CameraComponent->SetRelativeRotation(NewViewRotation);

	const float NewArmLength = FMath::FInterpTo(SpringArmComponent->TargetArmLength, Distance, DeltaTime, CameraSettings->BlendSpeed);
	SpringArmComponent->TargetArmLength = NewArmLength;

	const FVector NewSocketOffset = FMath::VInterpTo(SpringArmComponent->SocketOffset, Profile.SocketOffset, DeltaTime, CameraSettings->BlendSpeed);
	SpringArmComponent->SocketOffset = NewSocketOffset;

	const float NewFieldOfView = FMath::FInterpTo(CameraComponent->FieldOfView, Profile.FieldOfView, DeltaTime, CameraSettings->BlendSpeed);
	CameraComponent->SetFieldOfView(NewFieldOfView);
}

// Activates the camera component when true, or deactivates it when false.
// The PlayerController separately chooses which actor provides the player's view.
void ADTCameraPawn::SetCameraActive(bool value)
{
	CameraComponent->SetActive(value);
}

// Saves the selected hero so Tick can use that hero's position when updating the camera.
// A different selection clears manual movement and returns to Hero (or Overview with no hero), unless following a thrown die.
void ADTCameraPawn::SetSelectedHero(ADTHeroCharacter* Hero)
{
	if (SelectedHero.Get() == Hero)
	{
		return;
	}
	SelectedHero = Hero;
	PanOffset = FVector::ZeroVector;
	
	if (!IsFollowingThrownDice())
	{
		RestorePlayerMode();
	}
}

// True enters ThrowAim when a hero is selected. False leaves ThrowAim through RestorePlayerMode.
// Entering ThrowAim resets movement, zoom and tilt adjustments. A thrown-die follow blocks this change.
void ADTCameraPawn::SetThrowAimActive(bool bActive)
{
	if (IsFollowingThrownDice())
	{
		return;
	}
	if (bActive && SelectedHero.IsValid())
	{
		if (CameraMode != EDTCameraMode::ThrowAim)
		{
			CameraMode = EDTCameraMode::ThrowAim;
			PanOffset = FVector::ZeroVector;
			ZoomOffset = 0.0f;
			PitchOffset = 0.0f;
		}
	}
	else if (CameraMode == EDTCameraMode::ThrowAim)
	{
		RestorePlayerMode();
	}
}

// Stores the thrown die and enters DiceFollow so Tick follows its position while it moves.
// Registers OnFollowedDiceFinished for settling or removal, and OnFollowedDiceDestroyed for destruction.
// Those functions stop the follow and return to Hero or Overview when the die finishes or disappears.
void ADTCameraPawn::FollowThrownDice(ADTDice* Dice)
{
	StopFollowingDice();
	if (!IsValid(Dice) || Dice->IsDiceRemoved() || Dice->HasSettled())
	{
		RestorePlayerMode();
		return;
	}
	FollowedDice = Dice;
	CameraMode = EDTCameraMode::DiceFollow;
	PanOffset = FVector::ZeroVector;
	ZoomOffset = 0.0f;
	PitchOffset = 0.0f;
	Dice->OnDiceSettle.AddUniqueDynamic(this, &ADTCameraPawn::OnFollowedDiceFinished);
	Dice->OnDiceRemoved.AddUniqueDynamic(this, &ADTCameraPawn::OnFollowedDiceFinished);
	Dice->OnDestroyed.AddUniqueDynamic(this, &ADTCameraPawn::OnFollowedDiceDestroyed);
}

// Removes the listeners on the followed die and clears FollowedDice, without destroying the die.
// This only stops tracking it; the calling function chooses the next camera mode, usually through RestorePlayerMode.
void ADTCameraPawn::StopFollowingDice()
{
	if (FollowedDice.IsValid())
	{
		FollowedDice->OnDiceSettle.RemoveDynamic(this, &ADTCameraPawn::OnFollowedDiceFinished);
		FollowedDice->OnDiceRemoved.RemoveDynamic(this, &ADTCameraPawn::OnFollowedDiceFinished);
		FollowedDice->OnDestroyed.RemoveDynamic(this, &ADTCameraPawn::OnFollowedDiceDestroyed);
	}
	FollowedDice.Reset();
}

// Returns to Hero after aiming or following a thrown die. Uses Overview if there is no valid selected hero.
// Resets movement, zoom and tilt adjustments. An active temporary focus still takes priority over this view.
void ADTCameraPawn::RestorePlayerMode()
{
	if (SelectedHero.IsValid())
	{
		CameraMode = EDTCameraMode::Hero;
	}
	else
	{
		CameraMode = EDTCameraMode::Overview;
	}
	PanOffset = FVector::ZeroVector;
	ZoomOffset = 0.0f;
	PitchOffset = 0.0f;
}

// Called when the followed die announces that it has settled or been removed.
// Calls StopFollowingDice to remove its listeners, then RestorePlayerMode to return to Hero or Overview.
void ADTCameraPawn::OnFollowedDiceFinished()
{
	StopFollowingDice();
	RestorePlayerMode();
}

// Called when the followed die is destroyed. Calls OnFollowedDiceFinished to stop tracking it and restore the normal mode.
void ADTCameraPawn::OnFollowedDiceDestroyed(AActor* DestroyedActor)
{
	OnFollowedDiceFinished();
}

// Answers whether we are currently in DiceFollow with a valid die. Returns true or false without changing the camera mode.
bool ADTCameraPawn::IsFollowingThrownDice() const
{
	return CameraMode == EDTCameraMode::DiceFollow && FollowedDice.IsValid();
}

// Answers whether the player can control the camera: false while following a thrown die or using temporary focus.
// MoveCamera and ToggleOverview also check their own mode restrictions.
bool ADTCameraPawn::IsPlayerCameraInputAllowed() const
{
	return !IsFollowingThrownDice() && !bHasTemporaryFocus;
}

// Uses movement input to change PanOffset in Overview, following the camera's horizontal forward and right directions.
// Tick uses that offset to move the camera smoothly. Temporary focus blocks this input.
void ADTCameraPawn::MoveCamera(const FVector2D& Input)
{
	if (!IsPlayerCameraInputAllowed() || CameraMode != EDTCameraMode::Overview)
	{
		return;
	}
	const FRotator YawRotation(0.0f, CameraYaw, 0.0f);
	const FVector Direction = YawRotation.RotateVector(FVector(Input.Y, Input.X, 0.0f));
	PanOffset += Direction * CameraSettings->PanSpeed;
}

// Uses Input.X to turn left or right and Input.Y to tilt up or down in Overview, Hero or ThrowAim.
// Uses the profile's default tilt to keep the final angle within the settings limits. Tick applies the rotation.
// Player rotation is blocked while following a thrown die or using temporary focus.
void ADTCameraPawn::RotateCamera(const FVector2D& Input)
{
	if (!IsPlayerCameraInputAllowed())
	{
		return;
	}
	const FDTCameraProfile& Profile = GetProfile();
	const double NewYaw = CameraYaw + Input.X * CameraSettings->RotationSpeed;
	CameraYaw = FRotator::NormalizeAxis(NewYaw);

	const float BasePitch = Profile.Pitch + Profile.ViewPitchOffset;
	const float CurrentPitch = BasePitch + PitchOffset;
	float NewPitch = CurrentPitch + static_cast<float>(Input.Y) * CameraSettings->RotationSpeed;

	NewPitch = FMath::Clamp(NewPitch, CameraSettings->MinimumPitch, CameraSettings->MaximumPitch);

	PitchOffset = NewPitch - BasePitch;
}

// Changes the requested distance by Amount * ZoomStep, clamps it to the distance limits, and saves the adjustment in ZoomOffset.
// Tick applies that zoom. Input is blocked while following a thrown die or using temporary focus.
// During throw preparation, the controller uses this input for throw strength instead of calling this function.
void ADTCameraPawn::ZoomCamera(float Amount)
{
	if (!IsPlayerCameraInputAllowed())
	{
		return;
	}
	const FDTCameraProfile& Profile = GetProfile();
	
	const float CurrentDistance = Profile.Distance + ZoomOffset;
	float NewDistance = CurrentDistance - Amount * CameraSettings->ZoomStep;

	NewDistance = FMath::Clamp(NewDistance, CameraSettings->MinimumDistance, CameraSettings->MaximumDistance);

	ZoomOffset = NewDistance - Profile.Distance;
}

// Switches Hero to Overview near the hero, or Overview back to Hero when a valid hero is selected.
// Resets movement, zoom and tilt adjustments. Switching is blocked during ThrowAim, thrown-die following or temporary focus.
void ADTCameraPawn::ToggleOverview()
{
	if (!IsPlayerCameraInputAllowed() || CameraMode == EDTCameraMode::ThrowAim)
	{
		return;
	}
	if (CameraMode == EDTCameraMode::Overview)
	{
		RestorePlayerMode();
	}
	else
	{
		if (SelectedHero.IsValid())
		{
			OverviewLocation = SelectedHero->GetActorLocation();
		}
		else
		{
			OverviewLocation = GetActorLocation();
		}
		CameraMode = EDTCameraMode::Overview;
		PanOffset = FVector::ZeroVector;
		ZoomOffset = 0.0f;
		PitchOffset = 0.0f;
	}
}

// Stops watching the one actor stored in TemporaryFocus. Reset clears the reference; it does not destroy the actor.
// Saves its last position when available, removes its destruction listener and, if it is a die, its removal listener too.
// Dice removal can happen before the actor is destroyed, so the camera listens for both events.
// With bKeepLastLocation true, keeps the view at that position while waiting for the next focus request during Resolve.
// With false, releases temporary focus so Tick uses the normal camera mode again.
void ADTCameraPawn::ClearTemporaryFocus(bool bKeepLastLocation)
{
	if (TemporaryFocus.IsValid())
	{
		TemporaryFocusLocation = TemporaryFocus->GetActorLocation();
		TemporaryFocus->OnDestroyed.RemoveDynamic(this, &ADTCameraPawn::OnTemporaryActorDestroyed);
		
		ADTDice* Dice = Cast<ADTDice>(TemporaryFocus.Get());
		if (Dice)
		{
			Dice->OnDiceRemoved.RemoveDynamic(this, &ADTCameraPawn::OnTemporaryDiceRemoved);
		}
	}
	TemporaryFocus.Reset();
	if (!bKeepLastLocation)
	{
		bHasTemporaryFocus = false;
	}
}

// Receives an actor from CombatBridge and uses the SnapOnce or Attach method chosen in the RegisterNewFocus call.
// SnapOnce moves Overview to the actor's position once. Attach stores the actor in TemporaryFocus so Tick follows it.
// If the subsystem asks us to stop watching that actor, clears its temporary focus.
void ADTCameraPawn::OnNewActorFocus(AActor* FocusedActor, EFocusActorMethod FocusMethod, bool bIsFocused)
{
	if (!bIsFocused)
	{
		if (TemporaryFocus.Get() == FocusedActor)
		{
			ClearTemporaryFocus(bResolvingDice);
		}
		return;
	}
	ClearTemporaryFocus();
	if (!IsValid(FocusedActor))
	{
		return;
	}

	if (FocusedActor == FollowedDice.Get() && !FollowedDice->HasSettled())
	{
		return;
	}
	if (FocusMethod == EFocusActorMethod::SnapOnce)
	{
		StopFollowingDice();
		OverviewLocation = FocusedActor->GetActorLocation();
		CameraMode = EDTCameraMode::Overview;
		PanOffset = FVector::ZeroVector;
		ZoomOffset = 0.0f;
		PitchOffset = 0.0f;
		SetActorLocation(OverviewLocation + FVector(0.0f, 0.0f, CameraSettings->Overview.FocusHeight));
		return;
	}
	if (FocusMethod == EFocusActorMethod::Attach)
	{
		bHasTemporaryFocus = true;
		TemporaryFocus = FocusedActor;
		TemporaryFocusLocation = FocusedActor->GetActorLocation();
		FocusedActor->OnDestroyed.AddUniqueDynamic(this, &ADTCameraPawn::OnTemporaryActorDestroyed);
		ADTDice* Dice = Cast<ADTDice>(FocusedActor);
		if (Dice)
		{
			Dice->OnDiceRemoved.AddUniqueDynamic(this, &ADTCameraPawn::OnTemporaryDiceRemoved);
		}
	}
}

// Receives a list of actors from CombatBridge, calculates their average position, and places Overview there.
// Stops any previous tracking and takes the group's positions once, without continuing to follow the group.
void ADTCameraPawn::OnCombatActorsFocused(const TArray<AActor*>& FocusedActors)
{
	ClearTemporaryFocus();
	FVector Center = FVector::ZeroVector;
	int ActorCount = 0;
	for (AActor* Actor : FocusedActors)
	{
		if (IsValid(Actor))
		{
			Center += Actor->GetActorLocation();
			++ActorCount;
		}
	}
	if (ActorCount > 0)
	{
		StopFollowingDice();
		OverviewLocation = Center / ActorCount;
		CameraMode = EDTCameraMode::Overview;
		PanOffset = FVector::ZeroVector;
		ZoomOffset = 0.0f;
		PitchOffset = 0.0f;
		SetActorLocation(OverviewLocation + FVector(0.0f, 0.0f, CameraSettings->Overview.FocusHeight));
	}
}

// Called when an ordinary die we were temporarily watching announces its removal. This function does not remove the die itself.
// Clears that focus, keeping its last position during Resolve so the camera does not jump back to the hero between dice.
void ADTCameraPawn::OnTemporaryDiceRemoved()
{
	ClearTemporaryFocus(bResolvingDice);
}

// Called when the actor we were temporarily watching is destroyed, whether it was a hero, enemy or die.
// Clears that focus, keeping the saved position during Resolve or letting the normal camera mode take over otherwise.
void ADTCameraPawn::OnTemporaryActorDestroyed(AActor* DestroyedActor)
{
	ClearTemporaryFocus(bResolvingDice);
}

// Records when Resolve starts or ends. During Resolve, clearing a target can keep the camera at its last position between dice.
// The combat system sends the requests to focus on each actor; this function does not choose or loop through the dice.
// When Resolve ends, clears temporary focus and any held position so the normal camera mode takes over.
void ADTCameraPawn::OnCombatPhaseChanged(FName PhaseName, bool bEntering)
{
	static const FName ResolvePhaseName(TEXT("Resolve"));
	if (PhaseName != ResolvePhaseName)
	{
		return;
	}
	bResolvingDice = bEntering;
	if (!bResolvingDice)
	{
		ClearTemporaryFocus();
	}
}

// When combat ends, stops following the die, clears temporary focus and forgets the selected hero.
// Uses the current camera pawn position for Overview, then calls RestorePlayerMode, which chooses Overview because no hero is selected.
void ADTCameraPawn::OnCombatEnded(bool bWon)
{
	bResolvingDice = false;
	StopFollowingDice();
	ClearTemporaryFocus();
	SelectedHero.Reset();
	OverviewLocation = GetActorLocation();
	RestorePlayerMode();
}
