#include "AbilitySystem/Abilities/SamuriGameplayAbility.h"

#include "SekiroGameplayTags.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "Character/SekiroSamurai.h"
#include "Player/SekiroPlayerController.h"

ASekiroSamurai* USamuriGameplayAbility::GetSamuraiCharacterFromActorInfo()
{
	if (!CachedSamuraiCharacter.IsValid())
	{
		CachedSamuraiCharacter = Cast<ASekiroSamurai>(CurrentActorInfo->AvatarActor);
	}
	return CachedSamuraiCharacter.IsValid() ? CachedSamuraiCharacter.Get() : nullptr;
}

ASekiroPlayerController* USamuriGameplayAbility::GetPlayerControllerFromActorInfo()
{
	if (!CachedSamuraiController.IsValid())
	{
		CachedSamuraiController = Cast<ASekiroPlayerController>(CurrentActorInfo->PlayerController);
	}
	return CachedSamuraiController.IsValid() ? CachedSamuraiController.Get() : nullptr;
}

UPlayerCombatComponent* USamuriGameplayAbility::GetPlayerCombatComponentFromActorInfo()
{
	return GetSamuraiCharacterFromActorInfo()->GetPlayerCombatComponent();
}

FGameplayEffectSpecHandle USamuriGameplayAbility::MakeSamuraiDamageEffectSpedHandle(
	TSubclassOf<UGameplayEffect> EffectClass, float InWeaponBaseDamage, FGameplayTag InCurrentAttackTypeTag,
	int32 InUsedComboCount)
{
	check(EffectClass)

	// Make Context : 누가 ,어디서, 어떻게 Effect를 발동했는지에 대한 정보를 담는 컨테이너
	FGameplayEffectContextHandle ContextHandle = GetSekiroASCFromActorInfo()->MakeEffectContext();
	ContextHandle.SetAbility(this); // 이 Effect를 발동시킨 Ability
	ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo()); // Effect의 소스 오브젝트 설정
	ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo()); // Effect를 시작한 주체와 실제 행동 주체 설정

	// Make Spec : 실제 적용될 Effect의 인스턴스를 생성
	FGameplayEffectSpecHandle EffectSpecHandle = GetSekiroASCFromActorInfo()->MakeOutgoingSpec(
		EffectClass,
		GetAbilityLevel(),
		ContextHandle);
	
	// SetSetByCallerMagnitude : Shard_SetByCaller_Base_Damage 해당하는 Effect의 수정자에 InWeaponBaseDamage이 값을 설정
	EffectSpecHandle.Data ->SetSetByCallerMagnitude(SekiroGameplayTags::Shard_SetByCaller_Base_Damage,
		InWeaponBaseDamage);

	if (InCurrentAttackTypeTag.IsValid())
	{
		// SetSetByCallerMagnitude : InCurrentAttackTypeTag에 따른 Effect의 수정자에 InUsedComboCount 값을 설정
		EffectSpecHandle.Data->SetSetByCallerMagnitude(InCurrentAttackTypeTag, InUsedComboCount);
	}

	return EffectSpecHandle;
}
