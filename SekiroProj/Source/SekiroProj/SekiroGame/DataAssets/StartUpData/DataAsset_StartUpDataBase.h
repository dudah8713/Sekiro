// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class USekiroAbilitySystemComponent;
class USekiroGameplayAbility;
class UGameplayEffect;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()
public:
	virtual void GiveToAbilitySystemComponent(USekiroAbilitySystemComponent* InASCtoGive, int32 ApplyLevel = 1);

protected:
	static void GrantAbilities(const TArray<TSubclassOf<USekiroGameplayAbility>>& InAbilitiesToGive, USekiroAbilitySystemComponent* InASCToGive, int32 ApplyLevel);
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "StartUp Data")
	TArray<TSubclassOf<USekiroGameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "StartUp Data")
	TArray<TSubclassOf<UGameplayEffect>> StartUpGameplayEffects;
};