// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SekiroEnemy.h"

#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "AbilitySystem/SekiroAttributeSet.h"

ASekiroEnemy::ASekiroEnemy()
{
	SekiroASC = CreateDefaultSubobject<USekiroAbilitySystemComponent>("AbilitySystemComponent");
	SekiroASC->SetIsReplicated(true);
	//GameplayEffect를 클라이언트에게 어떻게 Replicate 할 것인가?
	SekiroASC->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<USekiroAttributeSet>("AttributeSet");
}

void ASekiroEnemy::BeginPlay()
{
	Super::BeginPlay();

	SekiroASC->InitAbilityActorInfo(this, this);
}
