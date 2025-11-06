// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/Character/SekiroEnemy.h"

#include "SekiroGame/AbilitySystem/SekiroAbilitySystem.h"
#include "SekiroGame/AbilitySystem/SekiroAttributeSet.h"

ASekiroEnemy::ASekiroEnemy()
{
	AbilitySystemComponent = CreateDefaultSubobject<USekiroAbilitySystem>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<USekiroAttributeSet>("AttributeSet");
}
