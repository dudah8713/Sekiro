#include "AbilitySystem/Abilities/SamuriGameplayAbility.h"
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
