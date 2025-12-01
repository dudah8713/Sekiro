#include "AbilitySystem/Abilities/EnemyGameplayAbility.h"
#include "Character/SekiroEnemy.h"
#include "Components/Combat/EnemyCombatComponent.h"

ASekiroEnemy* UEnemyGameplayAbility::GetEnemyFromActorInfo()
{
	if (!CachedEnemy.IsValid())
	{
		CachedEnemy = Cast<ASekiroEnemy>(CurrentActorInfo->AvatarActor);
	}
	return CachedEnemy.IsValid() ? CachedEnemy.Get() : nullptr;
}

UEnemyCombatComponent* UEnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
	return GetEnemyFromActorInfo()->GetEnemyCombatComponent();
}

FGameplayEffectSpecHandle UEnemyGameplayAbility::MakeEnemyDamageEffectSpecHandle(
	TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageScalableFloat) const
{
	check(EffectClass)

	FGameplayEffectSpecHandle EffectSpecHandle;
	
	return EffectSpecHandle;
}
