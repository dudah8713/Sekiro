// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/SekiroEffectActor.h"
#include "Components/SphereComponent.h"
#include "AbilitySystemInterface.h"
#include "../AbilitySystem/SekiroAttributeSet.h"

ASekiroEffectActor::ASekiroEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	Sphere->SetupAttachment(GetRootComponent());
}

void ASekiroEffectActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IAbilitySystemInterface* ASCInterface = Cast<IAbilitySystemInterface>(OtherActor))
	{
		const USekiroAttributeSet* SekiroAttributeSet = Cast<USekiroAttributeSet>(ASCInterface->GetAbilitySystemComponent()->GetAttributeSet(USekiroAttributeSet::StaticClass()));
		USekiroAttributeSet* MutableSekiroAttributeSet = const_cast<USekiroAttributeSet*>(SekiroAttributeSet);
		MutableSekiroAttributeSet->SetHealth(MutableSekiroAttributeSet->GetHealth() + 25.0f);
		Destroy();
	}
}

void ASekiroEffectActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void ASekiroEffectActor::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ASekiroEffectActor::OnOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &ASekiroEffectActor::EndOverlap);
}


