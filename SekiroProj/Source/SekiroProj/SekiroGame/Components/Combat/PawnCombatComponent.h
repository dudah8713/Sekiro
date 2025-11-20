// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PawnExtensionComponentBase.h"
#include "PawnCombatComponent.generated.h"

class ASekiroWeaponBase;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category ="Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, ASekiroWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	ASekiroWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	ASekiroWeaponBase* GetCharacterCurrentEquippedWeapon() const;

	//virtual void OnHitTargetActor(AActor* HitActor);
	//virtual void OnWeaponPulledFromTargetActor(AActor* InteractedActor);

private:
	UPROPERTY()
	TMap<FGameplayTag, ASekiroWeaponBase*> CharacterCarriedWeaponMap;
};
