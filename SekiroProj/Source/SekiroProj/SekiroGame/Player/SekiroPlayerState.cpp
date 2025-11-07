// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/Player/SekiroPlayerState.h"
#include "SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h"
#include "SekiroGame/AbilitySystem/SekiroAttributeSet.h"

ASekiroPlayerState::ASekiroPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<USekiroAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<USekiroAttributeSet>("AttributeSet");
	
	// 얼마나 자주 서버가 클라이언트를 업데이트할지에 대한 값
	SetNetUpdateFrequency(100.0f);
}

UAbilitySystemComponent* ASekiroPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
