// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/SekiroMeleeCombo.h"

#include "AbilitySystem/SekiroAttributeSet.h"

USekiroMeleeCombo::USekiroMeleeCombo()
{
	ComboIndex = 0;
	bInputBuffered = false;
	StaminaCost = 10.f;
}

void USekiroMeleeCombo::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	APawn* Pawn = GetPawn();
	if (!Pawn) return;

	// 스테미너 체크
	const USekiroAttributeSet* SekiroAttributeSet = ActorInfo->AbilitySystemComponent->GetSet<USekiroAttributeSet>();
	if (!SekiroAttributeSet || SekiroAttributeSet->GetStamina() < StaminaCost)
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
		return;
	}
}

void USekiroMeleeCombo::OnAnimationEnded()
{
}

void USekiroMeleeCombo::OnInputPressed()
{
}

APawn* USekiroMeleeCombo::GetPawn() const
{
	return nullptr;
}
