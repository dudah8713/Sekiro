// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "DataAsset_InputConfig.generated.h"

class UInputMappingContext;
class UInputAction;
/**
 * 
 */
USTRUCT(BlueprintType)
struct FSekiroInputActionConfig
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UInputAction> InputAction;

	bool IsValid() const
	{
		return InputTag.IsValid() && InputAction;
	}
};

UCLASS()
class SEKIROPROJ_API UDataAsset_InputConfig : public UDataAsset
{
	GENERATED_BODY()
public:
	UInputAction* FindNativeInputActionByTag(const FGameplayTag& InInputTag);
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	// EditDefaultsOnly : 클래스의 기본값 에서만 편집가능, 클래스 전체의 기본 설정을 정할 때 사용
	// BlueprintReadOnly : Blueprint 그래프에서 Get은 가능 Set은 불가능
	//  meta = (TitleProperty = "InputTag")) : 배열의 각 요소를 표시할 때 어떤 프로퍼티를 제목으로 보여줄지 지정
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FSekiroInputActionConfig> NativeInputActions;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FSekiroInputActionConfig> AbilityInputActions;
};
