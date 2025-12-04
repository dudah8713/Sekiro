#include "Components/Combat/PlayerCombatComponent.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "SekiroGameplayTags.h"
#include "Items/Weapons/SekiroWeaponKatana.h"

ASekiroWeaponKatana* UPlayerCombatComponent::GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<ASekiroWeaponKatana>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

ASekiroWeaponKatana* UPlayerCombatComponent::GetPlayerCurrentEquippedWeapon() const
{
	return Cast<ASekiroWeaponKatana>(GetCharacterCurrentEquippedWeapon());
}

void UPlayerCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor)) return;

	OverlappedActors.AddUnique(HitActor);

	FGameplayEventData Data;
	Data.Instigator = GetOwningPawn(); // 공격주체
	Data.Target = HitActor;			   // 피격 대상

	// Hit 된 Actor의 정보를 플레이어의 ASC로 전송하고, ASC에 등록된 Ability는
	// Shard_Event_MeleeHit 태그를 트리거로 받는다.
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		GetOwningPawn(),
		SekiroGameplayTags::Shard_Event_MeleeHit,
		Data);
}

void UPlayerCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
}

float UPlayerCombatComponent::GetPlayerCurrentEquippedWeaponDamageAtLevel(float InLevel) const
{
	return GetPlayerCurrentEquippedWeapon()->SamuraiWeaponData.WeaponBaseDamage.GetValueAtLevel(InLevel);
}
