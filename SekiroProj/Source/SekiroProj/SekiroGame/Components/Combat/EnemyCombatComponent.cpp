#include "Components/Combat/EnemyCombatComponent.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "SekiroFunctionLibrary.h"
#include "SekiroGameplayTags.h"
#include "Abilities/GameplayAbilityTypes.h"

void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor)) return;

	bool bIsValidBlock = false;

	// 추후 플레이어가 가드를 취했을 때, Player_Status_Blocking 태그를 별도로 부여해야함
	const bool bIsPlayerBlocking = USekiroFunctionLibrary::NativeDoesActorHaveTag(HitActor, SekiroGameplayTags::Player_Status_Blocking);
	const bool bIsMyAttackUnblockable = USekiroFunctionLibrary::NativeDoesActorHaveTag(GetOwningPawn(), SekiroGameplayTags::Enemy_Status_UnBlocking);

	if (bIsPlayerBlocking && !bIsMyAttackUnblockable)
	{
		bIsValidBlock = USekiroFunctionLibrary::IsValidBlock(GetOwningPawn(), HitActor);
	}

	FGameplayEventData EventData;
	EventData.Instigator = GetOwningPawn();
	EventData.Target = HitActor;

	if (bIsValidBlock)
	{
		// 플레이어에게 Player_Event_SuccessfulBlock 이벤트를 보냄
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(HitActor, SekiroGameplayTags::Player_Event_SuccessfulBlock,EventData);
	}
	else
	{
		// 나(적)에게 Shard_Event_MeleeHit 이벤트를 보냄
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningPawn(), SekiroGameplayTags::Shard_Event_MeleeHit, EventData);
	}
}
