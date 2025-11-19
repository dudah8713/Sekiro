#include "Components/Combat/PawnCombatComponent.h"
#include "Items/Weapons/SekiroWeaponKatana.h"

void UPawnCombatComponent::RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister,
	ASekiroWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon)
{
}

ASekiroWeaponBase* UPawnCombatComponent::GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const
{
}

ASekiroWeaponBase* UPawnCombatComponent::GetCharacterCurrentEquippedWeapon() const
{
}

void UPawnCombatComponent::OnHitTargetActor(AActor* HitActor)
{
}

void UPawnCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
}
