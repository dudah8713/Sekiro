#include "Items/Weapons/SekiroWeaponBase.h"

#include "SekiroFunctionLibrary.h"
#include "Components/BoxComponent.h"

ASekiroWeaponBase::ASekiroWeaponBase()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);

	WeaponCollisionBox = CreateDefaultSubobject<UBoxComponent>("WeaponCollisionBox");
	WeaponCollisionBox->SetupAttachment(GetRootComponent());
	WeaponCollisionBox->SetBoxExtent(FVector(20.f));
	WeaponCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponCollisionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxBeginOverlap);
	WeaponCollisionBox->OnComponentEndOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxEndOverlap);
}

void ASekiroWeaponBase::OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APawn* WeaponOwingPawn = GetInstigator<APawn>();
	checkf(WeaponOwingPawn, TEXT("Forget to assign an instigator as the owning pawn for the weapon : %s"), *GetName());

	if (const APawn* HitPawn = Cast<APawn>(OtherActor))
	{
		if (USekiroFunctionLibrary::IsTargetPawnHostile(WeaponOwingPawn, HitPawn))
		{
			// 델리게이트가 하나 이상의 함수에 "바인딩" 되어 있는지 확인 후, 그 함수들을 호출한다.
			OnWeaponHitTarget.ExecuteIfBound(OtherActor);
		}
	}
}

void ASekiroWeaponBase::OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APawn* WeaponOwingPawn = GetInstigator<APawn>();
	checkf(WeaponOwingPawn, TEXT("Forget to assign an instigator as the owning pawn for the weapon : %s"), *GetName());

	if (const APawn* HitPawn = Cast<APawn>(OtherActor))
	{
		if (USekiroFunctionLibrary::IsTargetPawnHostile(WeaponOwingPawn, HitPawn))
		{
			OnWeaponPulledFromTarget.ExecuteIfBound(OtherActor);
		}
	}
}


