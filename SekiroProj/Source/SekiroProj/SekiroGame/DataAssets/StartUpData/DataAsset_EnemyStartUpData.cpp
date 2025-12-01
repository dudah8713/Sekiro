#include "DataAssets/StartUpData/DataAsset_EnemyStartUpData.h"

#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/EnemyGameplayAbility.h"

void UDataAsset_EnemyStartUpData::GiveToAbilitySystemComponent(USekiroAbilitySystemComponent* InASCtoGive,
	int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCtoGive, ApplyLevel);

	if (!EnemyCombatAbilities.IsEmpty())
	{
		for (const TSubclassOf<UEnemyGameplayAbility>& AbilityClass : EnemyCombatAbilities)
		{
			if (!AbilityClass) continue;

			FGameplayAbilitySpec AbilitySpec(AbilityClass);
			AbilitySpec.SourceObject = InASCtoGive->GetAvatarActor();
			AbilitySpec.Level = ApplyLevel;

			InASCtoGive->GiveAbility(AbilitySpec);
		}
	}
}
