// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SekiroCharacterBase.h"
#include "GameplayTagContainer.h"
#include "SekiroSamurai.generated.h"

struct FInputActionValue;

class UDataAsset_InputConfig;
class UPlayerCombatComponent;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroSamurai : public ASekiroCharacterBase
{
	GENERATED_BODY()

public:
	ASekiroSamurai();
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	FORCEINLINE UPlayerCombatComponent* GetPlayerCombatComponent() const {return PlayerCombatComponent;} 
private:
	void InitAbilityActorInfo();
	
#pragma region component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPlayerCombatComponent> PlayerCombatComponent;
#pragma endregion
	
#pragma region Inputs
	// BP_Samurai의 Default 설정의 CharacterData에 DA_InputConfig를 추가
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDataAsset_InputConfig> InputConfigDataAsset;

	void Input_AbilityInputPressed(const FGameplayTag InInputTag);
	void Input_AbilityInputReleased(const FGameplayTag InInputTag);
#pragma endregion
};
