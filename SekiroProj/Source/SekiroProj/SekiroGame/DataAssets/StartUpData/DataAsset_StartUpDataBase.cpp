#include "DataAsset_StartUpDataBase.h"
#include "AbilitySystem/Abilities/SekiroGameplayAbility.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(USekiroAbilitySystemComponent* InASCtoGive,
	int32 ApplyLevel)
{
	check(InASCtoGive)

	GrantAbilities(ActivateOnGivenAbilities, InASCtoGive, ApplyLevel);
	
	if (!StartUpGameplayEffects.IsEmpty())
	{
		for (const TSubclassOf<UGameplayEffect>& EffectClass : StartUpGameplayEffects)
		{
			if (!EffectClass) continue;

			UGameplayEffect* EffectCDO = EffectClass->GetDefaultObject<UGameplayEffect>();
			InASCtoGive->ApplyGameplayEffectToSelf(EffectCDO, ApplyLevel, InASCtoGive->MakeEffectContext());
		}
	}
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray<TSubclassOf<USekiroGameplayAbility>>& InAbilitiesToGive,
	USekiroAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty()) return;

	for (const TSubclassOf<USekiroGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue;

		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;

		InASCToGive->GiveAbility(AbilitySpec);
	}
}
