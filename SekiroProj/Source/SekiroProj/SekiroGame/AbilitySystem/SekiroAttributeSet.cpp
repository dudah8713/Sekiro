// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/SekiroAttributeSet.h"

#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

USekiroAttributeSet::USekiroAttributeSet()
{
	//InitHealth(100.f);
	//InitMaxHealth(200.f);
	//InitStamina(50.0f);
	//InitMaxStamina(50.0f);
}

void USekiroAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, Health, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, Stamina, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, Posture, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, MaxPosture, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, AttackPower, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(USekiroAttributeSet, DamageTaken, COND_None, REPNOTIFY_Always)
}

void USekiroAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, Health, OldHealth)
}

void USekiroAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, MaxHealth, OldMaxHealth)
}

void USekiroAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, Stamina, OldStamina)
}

void USekiroAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, MaxStamina, OldMaxStamina)
}

void USekiroAttributeSet::OnRep_Posture(const FGameplayAttributeData& OldPosture) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, Posture, OldPosture)
}

void USekiroAttributeSet::OnRep_MaxPosture(const FGameplayAttributeData& OldMaxPosture) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, MaxPosture, OldMaxPosture)
}

void USekiroAttributeSet::OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, AttackPower, OldAttackPower)
}

void USekiroAttributeSet::OnRep_DamageTaken(const FGameplayAttributeData& OldDamageTaken) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USekiroAttributeSet, DamageTaken, OldDamageTaken)
}

// void USekiroAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
// {
// 	Super::PostGameplayEffectExecute(Data);
//
// 	if (Data.EvaluatedData.Attribute == GetInComingDamageAttribute())
// 	{
// 		const float LocalIncomingDamage = GetInComingDamage();
// 		SetInComingDamage(0.f);
//
// 		if (LocalIncomingDamage > 0.f)
// 		{
// 			const float NewHealth = GetHealth() - LocalIncomingDamage;
// 			SetHealth(FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));
//
// 			const bool bFatal = NewHealth < 0.f;
// 		}
// 	}
// }
