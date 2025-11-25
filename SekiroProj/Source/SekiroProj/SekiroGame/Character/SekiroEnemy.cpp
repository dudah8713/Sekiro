// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SekiroEnemy.h"

#include "AbilitySystem/SekiroAbilitySystemComponent.h"
#include "AbilitySystem/SekiroAttributeSet.h"
#include "Components/Combat/EnemyCombatComponent.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "Engine/AssetManager.h"
#include "SekiroProj/SekiroModeBase.h"

ASekiroEnemy::ASekiroEnemy()
{
	SekiroASC = CreateDefaultSubobject<USekiroAbilitySystemComponent>("AbilitySystemComponent");
	SekiroASC->SetIsReplicated(true);
	//GameplayEffect를 클라이언트에게 어떻게 Replicate 할 것인가?
	SekiroASC->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<USekiroAttributeSet>("AttributeSet");

	EnemyCombatComponent = CreateDefaultSubobject<UEnemyCombatComponent>("EnemyCombatComponent");
}

void ASekiroEnemy::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (!HasAuthority()) return;

	InitEnemyStartUpData();
}

void ASekiroEnemy::BeginPlay()
{
	Super::BeginPlay();

	SekiroASC->InitAbilityActorInfo(this, this);
}

void ASekiroEnemy::InitEnemyStartUpData()
{
	if (CharacterStartUpData.IsNull()) return;

	int32 AbilityApplyLevel = 1;

	//if (const ASekiroModeBase* GameMode = GetWorld()->GetAuthGameMode<ASekiroModeBase>())
	//{
	//	게임 난이도에 따른 AbilityApplyLevel 설정
	//}

	// 비동기 로딩
	UAssetManager::GetStreamableManager().RequestAsyncLoad(CharacterStartUpData.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda([this, AbilityApplyLevel]()
		{
			if (UDataAsset_StartUpDataBase* LoadedData = CharacterStartUpData.Get())
			{
				LoadedData->GiveToAbilitySystemComponent(SekiroASC, AbilityApplyLevel);
			}
		}));
}
