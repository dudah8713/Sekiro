#include "Items/Weapons/SekiroWeaponKatana.h"
#include "Components/BoxComponent.h"

void ASekiroWeaponKatana::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles)
{
	GrantedAbilitySpecHandles = InSpecHandles;
}

TArray<FGameplayAbilitySpecHandle> ASekiroWeaponKatana::GetGrantedAbilitySpecHandles() const
{
	return GrantedAbilitySpecHandles;
}
