// Fill out your copyright notice in the Description page of Project Settings.


#include "DTUnitStart.h"

#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "DiceTact/Characters/DTCharetteUnit.h"
#include "DiceTact/Characters/Enemy/DTEnemyDefinition.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "DiceTact/Characters/Hero/DTHeroDefinition.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"


ADTUnitStart::ADTUnitStart()
{


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

#if WITH_EDITOR
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>("Arrow (Editor)");
#endif
}

ADTHeroCharacter* ADTUnitStart::SpawnHeroCharacter(const UDTHeroDefinition* HeroDefinition)
{
	FVector StartPos = GetActorLocation();
	FRotator StartRotation = GetActorRotation();


	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
	ADTHeroCharacter* NewHero = GetWorld()->SpawnActor<ADTHeroCharacter>(
		HeroDefinition->GetHeroUnitClass(),
		StartPos,
		StartRotation,
		SpawnParams
	);

	return NewHero;
}

ADTCharetteUnit* ADTUnitStart::SpawnCart()
{

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
	ADTCharetteUnit* NewCart = GetWorld()->SpawnActor<ADTCharetteUnit>(
		CharetteClass,
		GetActorLocation(),
		GetActorRotation(),
		SpawnParams
	);
	return NewCart;
}

ADTEnemyUnit* ADTUnitStart::SpawnEnemy(const UDTEnemyDefinition* EnemyDefinition)
{

	FVector StartPos = GetActorLocation();
	FRotator StartRotation = GetActorRotation();
	
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
	ADTEnemyUnit* NewEnemy = GetWorld()->SpawnActor<ADTEnemyUnit>(
		EnemyDefinition->GetEnemyClass(),
		StartPos,
		StartRotation,
		SpawnParams
	);

	return NewEnemy;
}

ECombatUnitType ADTUnitStart::GetStartUnitType() const
{
	return UnitStartType;
}

bool ADTUnitStart::IsHeroStart() const
{
	return UnitStartType == ECombatUnitType::Hero;
}

bool ADTUnitStart::IsEnemyStart() const
{
	return UnitStartType == ECombatUnitType::Enemy;
}

bool ADTUnitStart::IsCartStart() const
{
	return UnitStartType == ECombatUnitType::Charette;
}