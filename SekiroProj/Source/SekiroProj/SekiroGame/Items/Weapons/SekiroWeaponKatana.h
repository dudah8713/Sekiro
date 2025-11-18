// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/SekiroWeaponBase.h"
#include "SekiroTypes/SekiroStructTypes.h"
#include "SekiroWeaponKatana.generated.h"

class UBoxComponent;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroWeaponKatana : public ASekiroWeaponBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles);

	UFUNCTION(BlueprintPure)
	TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FSekiroWeaponData SamuraiWeaponData;

private:
	TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
