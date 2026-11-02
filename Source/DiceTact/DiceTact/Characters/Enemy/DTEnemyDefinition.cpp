// Fill out your copyright notice in the Description page of Project Settings.


#include "DTEnemyDefinition.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"

const FText& UDTEnemyDefinition::GetEnemyName() const
{
	return EnemyName;
}

const FText& UDTEnemyDefinition::GetEnemyDescription() const
{
	return EnemyDescription;
}

const FSlateBrush& UDTEnemyDefinition::GetEnemyIcon() const
{
	return EnemyIcon;
}

TSubclassOf<ADTEnemyUnit> UDTEnemyDefinition::GetEnemyClass() const
{
	return EnemyClass.LoadSynchronous();
}

const FEnemyCombatData& UDTEnemyDefinition::GetEnemyCombatData() const
{
	return CombatData;
}
