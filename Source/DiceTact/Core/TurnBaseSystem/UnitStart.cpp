// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitStart.h"

#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Core/Characters/CharetteUnit.h"
#include "Core/Characters/Enemy/DTEnemyDefinition.h"
#include "Core/Characters/Hero/DTHeroDefinition.h"
#include "Core/Characters/Hero/HeroCharacter.h"


AUnitStart::AUnitStart()
{
#if WITH_EDITOR

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	CapsuleComponent->ShapeColor = FColor(255, 138, 5, 255);
	CapsuleComponent->bDrawOnlyIfSelected = true;
	CapsuleComponent->InitCapsuleSize(32.0f, 88.0f);
	CapsuleComponent->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	CapsuleComponent->bShouldCollideWhenPlacing = true;
	CapsuleComponent->SetShouldUpdatePhysicsVolume(true);
	CapsuleComponent->Mobility = EComponentMobility::Static;
	RootComponent = CapsuleComponent;
	bCollideWhenPlacing = true;
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>("Arrow (Editor)");
#endif
}

AHeroCharacter* AUnitStart::SpawnHeroCharacter(UDTHeroDefinition* HeroDefinition)
{
	FVector StartPos = GetActorLocation();
	FRotator StartRotation = GetActorRotation();


	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
	AHeroCharacter* NewHero = GetWorld()->SpawnActor<AHeroCharacter>(
		HeroDefinition->GetHeroUnitClass(),
		StartPos,
		StartRotation
	);

	return NewHero;
}

ACharetteUnit* AUnitStart::SpawnCart()
{

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
	ACharetteUnit* NewCart = GetWorld()->SpawnActor<ACharetteUnit>(
		CharetteClass,
		GetActorLocation(),
		GetActorRotation()
	);
	return NewCart;
}

AEnemyUnit* AUnitStart::SpawnEnemy(UDTEnemyDefinition* EnemyDefinition)
{

	FVector StartPos = GetActorLocation();
	FRotator StartRotation = GetActorRotation();
	
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
	AEnemyUnit* NewEnemy = GetWorld()->SpawnActor<AEnemyUnit>(
		EnemyDefinition->GetEnemyClass(),
		StartPos,
		StartRotation
	);

	return NewEnemy;
}

ECombatUnitType AUnitStart::GetStartUnitType() const
{
	return UnitStartType;
}

bool AUnitStart::IsHeroStart() const
{
	return UnitStartType == ECombatUnitType::Hero;
}

bool AUnitStart::IsEnemyStart() const
{
	return UnitStartType == ECombatUnitType::Enemy;
}

bool AUnitStart::IsCartStart() const
{
	return UnitStartType == ECombatUnitType::Charette;
}

// Called when the game starts or when spawned
void AUnitStart::BeginPlay()
{
	Super::BeginPlay();
	
}

