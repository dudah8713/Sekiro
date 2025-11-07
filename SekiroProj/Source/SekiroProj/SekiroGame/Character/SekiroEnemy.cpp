// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/Character/SekiroEnemy.h"

#include "SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h"
#include "SekiroGame/AbilitySystem/SekiroAttributeSet.h"

ASekiroEnemy::ASekiroEnemy()
{
	AbilitySystemComponent = CreateDefaultSubobject<USekiroAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	//GameplayEffect를 클라이언트에게 어떻게 Replicate 할 것인가?
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<USekiroAttributeSet>("AttributeSet");
}

void ASekiroEnemy::BeginPlay()
{
	Super::BeginPlay();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}
