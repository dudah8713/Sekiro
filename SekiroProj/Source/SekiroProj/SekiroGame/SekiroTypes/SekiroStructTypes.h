#pragma once

#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "AbilitySystem/Abilities/SekiroGameplayAbility.h"
#include "SekiroStructTypes.generated.h"

class USekiroGameplayAbility;
class UInputMappingContext;
class UAnimInstance;

USTRUCT(BlueprintType)
struct FSekiroSamuraiAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<USekiroGameplayAbility> AbilityToGrant;

	bool IsValid() const;
};

USTRUCT(BlueprintType)
struct FSekiroWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UAnimInstance> WeaponAnimLayerToLink;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UInputMappingContext> WeaponInputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FSekiroSamuraiAbilitySet> DefaultWeaponAbilities;
};
