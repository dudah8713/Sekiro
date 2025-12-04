// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/GEExeCalc/GEExecCalc_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEExecCalc_Damage() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
SEKIROPROJ_API UClass* Z_Construct_UClass_UGEExecCalc_Damage();
SEKIROPROJ_API UClass* Z_Construct_UClass_UGEExecCalc_Damage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class UGEExecCalc_Damage
void UGEExecCalc_Damage::StaticRegisterNativesUGEExecCalc_Damage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGEExecCalc_Damage);
UClass* Z_Construct_UClass_UGEExecCalc_Damage_NoRegister()
{
	return UGEExecCalc_Damage::StaticClass();
}
struct Z_Construct_UClass_UGEExecCalc_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/AbilitySystem/GEExeCalc/GEExecCalc_Damage.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/GEExeCalc/GEExecCalc_Damage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGEExecCalc_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGEExecCalc_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGEExecCalc_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGEExecCalc_Damage_Statics::ClassParams = {
	&UGEExecCalc_Damage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGEExecCalc_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGEExecCalc_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGEExecCalc_Damage()
{
	if (!Z_Registration_Info_UClass_UGEExecCalc_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGEExecCalc_Damage.OuterSingleton, Z_Construct_UClass_UGEExecCalc_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGEExecCalc_Damage.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<UGEExecCalc_Damage>()
{
	return UGEExecCalc_Damage::StaticClass();
}
UGEExecCalc_Damage::UGEExecCalc_Damage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGEExecCalc_Damage);
UGEExecCalc_Damage::~UGEExecCalc_Damage() {}
// End Class UGEExecCalc_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_GEExeCalc_GEExecCalc_Damage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGEExecCalc_Damage, UGEExecCalc_Damage::StaticClass, TEXT("UGEExecCalc_Damage"), &Z_Registration_Info_UClass_UGEExecCalc_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGEExecCalc_Damage), 4086919398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_GEExeCalc_GEExecCalc_Damage_h_1532389569(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_GEExeCalc_GEExecCalc_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_GEExeCalc_GEExecCalc_Damage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
