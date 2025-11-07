// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/AbilitySystem/SekiroAttributeSet.h"
#include "Net/UnrealNetwork.h"

USekiroAttributeSet::USekiroAttributeSet()
{
	InitHealth(100.f);
}

void USekiroAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, Health, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, Posture, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, MaxPosture, COND_None, REPNOTIFY_Always)
}

void USekiroAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, Health, OldHealth)
}

void USekiroAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, MaxHealth, OldMaxHealth)
}

void USekiroAttributeSet::OnRep_Posture(const FGameplayAttributeData& OldPosture) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, Posture, OldPosture)
}

void USekiroAttributeSet::OnRep_MaxPosture(const FGameplayAttributeData& OldMaxPosture) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, MaxPosture, OldMaxPosture)
}
