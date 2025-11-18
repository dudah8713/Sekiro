// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAsset_SamuraiStartUpDataBase.h"
#include "GameplayAbilitySpec.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"

void UDataAsset_SamuraiStartUpDataBase::GiveToAbilitySystemComponent(USekiroAbilitySystemComponent* InASCtoGive,
                                                                     int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCtoGive, ApplyLevel);

	for (const FSekiroSamuraiAbilitySet& AbilitySet : SamuraiStartUpAbilitySets)
	{
		if (!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = InASCtoGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.GetDynamicSpecSourceTags().AddTag(AbilitySet.InputTag);

		InASCtoGive->GiveAbility(AbilitySpec);
	}
}
