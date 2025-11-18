// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "Character/SekiroSamurai.h"

ASekiroSamurai* USekiroGameplayAbility::GetSamuraiCharacterFromActorInfo()
{
	if (!CachedSamuraiCharacter.IsValid())
	{
		CachedSamuraiCharacter = Cast<ASekiroSamurai>(CurrentActorInfo->AvatarActor);
	}
	return CachedSamuraiCharacter.IsValid() ? CachedSamuraiCharacter.Get() : nullptr;
}

void USekiroGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if (AbilityActivationPolicy == ESekiroAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}
}

void USekiroGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (AbilityActivationPolicy == ESekiroAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo)
		{
			ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
		}
	}
}
