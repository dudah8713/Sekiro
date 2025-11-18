// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroFunctionLibrary.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"

USekiroAbilitySystemComponent* USekiroFunctionLibrary::NativeGetSekiroASCFromActor(AActor* InActor)
{
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
