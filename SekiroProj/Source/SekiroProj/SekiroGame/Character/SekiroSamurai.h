// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SekiroCharacterBase.h"
#include "GameplayTagContainer.h"
#include "SekiroSamurai.generated.h"

struct FInputActionValue;

class UDataAsset_InputConfig;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroSamurai : public ASekiroCharacterBase
{
	GENERATED_BODY()

public:
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	// BP_Samurai의 Default 설정의 Input에 USekiroEnhancedInputComponent를 추가
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
private:
	void InitAbilityActorInfo();

#pragma region Inputs
	// BP_Samurai의 Default 설정의 CharacterData에 DA_InputConfig를 추가
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDataAsset_InputConfig> InputConfigDataAsset;

	void Input_AbilityInputPressed(const FGameplayTag InInputTag);
	void Input_AbilityInputReleased(const FGameplayTag InInputTag);
#pragma endregion
};
