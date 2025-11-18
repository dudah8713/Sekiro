// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SekiroPlayerState.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "AbilitySystem/SekiroAttributeSet.h"

ASekiroPlayerState::ASekiroPlayerState()
{
	SekiroASC = CreateDefaultSubobject<USekiroAbilitySystemComponent>("AbilitySystemComponent");
	SekiroASC->SetIsReplicated(true);
	SekiroASC->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<USekiroAttributeSet>("AttributeSet");
	
	// 얼마나 자주 서버가 클라이언트를 업데이트할지에 대한 값
	SetNetUpdateFrequency(100.0f);
}

UAbilitySystemComponent* ASekiroPlayerState::GetAbilitySystemComponent() const
{
	return GetSekiroAbilitySystemComponent();
}

