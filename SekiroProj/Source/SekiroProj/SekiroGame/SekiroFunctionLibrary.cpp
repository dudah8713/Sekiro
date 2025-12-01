// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroFunctionLibrary.h"
#include "GenericTeamAgentInterface.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "Interface/PawnCombatInterface.h"

USekiroAbilitySystemComponent* USekiroFunctionLibrary::NativeGetSekiroASCFromActor(AActor* InActor)
{
	check(InActor);
	check(InActor);

	return CastChecked<USekiroAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

//
// void USekiroFunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck,
// 	ESekiroConfirmType& OutConfirmType)
// {
// 	OutConfirmType = Na
// }
void USekiroFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
	USekiroAbilitySystemComponent* SekiroASC = NativeGetSekiroASCFromActor(InActor);

	if (!SekiroASC->HasMatchingGameplayTag(TagToAdd))
	{
		// 임시 태그, 스택 방식이기 때문에 중복 검사 한번 거침
		SekiroASC->AddLooseGameplayTag(TagToAdd);
	}
}

bool USekiroFunctionLibrary::IsValidBlock(const AActor* InAttacker, const AActor* InDefener)
{
	check(InAttacker && InDefener)

	const float DotResult = FVector::DotProduct(InAttacker->GetActorForwardVector(), InDefener->GetActorForwardVector());

	return DotResult < -0.1f;
}

bool USekiroFunctionLibrary::NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck)
{
	USekiroAbilitySystemComponent* ASC = NativeGetSekiroASCFromActor(InActor);
	return ASC->HasMatchingGameplayTag(TagToCheck);
}

// Hostile 적대
bool USekiroFunctionLibrary::IsTargetPawnHostile(const APawn* QueryPawn, const APawn* TargetPawn)
{
	check(QueryPawn && TargetPawn)

	const IGenericTeamAgentInterface* QueryTeamAgent = Cast<IGenericTeamAgentInterface>(QueryPawn->GetController());
	const IGenericTeamAgentInterface* TargetTeamAgent = Cast<IGenericTeamAgentInterface>(TargetPawn->GetController());

	if (QueryTeamAgent && TargetTeamAgent)
	{
		return QueryTeamAgent->GetGenericTeamId() != TargetTeamAgent->GetGenericTeamId();
	}
	return false;
}

UPawnCombatComponent* USekiroFunctionLibrary::NativeGetPawnCombatComponentFromActor(AActor* InActor)
{
	check(InActor)

	if (const IPawnCombatInterface* PawnCombatInterface = Cast<IPawnCombatInterface>(InActor))
	{
		return PawnCombatInterface->GetPawnCombatComponent();
	}
	return nullptr;
}

UPawnCombatComponent* USekiroFunctionLibrary::BP_GetPawnCombatComponentFromActor(AActor* InActor, ESekiroValidType& OutValidType)
{
	UPawnCombatComponent* CombatComponent = NativeGetPawnCombatComponentFromActor(InActor);
	OutValidType = CombatComponent ? ESekiroValidType::Valid : ESekiroValidType::Invalid;

	return CombatComponent;
}
