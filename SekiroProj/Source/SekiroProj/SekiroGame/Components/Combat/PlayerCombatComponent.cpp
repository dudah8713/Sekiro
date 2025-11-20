#include "Components/Combat/PlayerCombatComponent.h"
#include "Items/Weapons/SekiroWeaponKatana.h"

ASekiroWeaponKatana* UPlayerCombatComponent::GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<ASekiroWeaponKatana>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

ASekiroWeaponKatana* UPlayerCombatComponent::GetPlayerCurrentEquippedWeapon() const
{
	return Cast<ASekiroWeaponKatana>(GetCharacterCurrentEquippedWeapon());
}
