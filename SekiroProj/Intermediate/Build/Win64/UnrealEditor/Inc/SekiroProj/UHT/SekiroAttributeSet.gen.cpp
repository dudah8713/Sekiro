// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/SekiroAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAttributeSet();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroAttributeSet
void USekiroAttributeSet::StaticRegisterNativesUSekiroAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroAttributeSet);
UClass* Z_Construct_UClass_USekiroAttributeSet_NoRegister()
{
	return USekiroAttributeSet::StaticClass();
}
struct Z_Construct_UClass_USekiroAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USekiroAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroAttributeSet_Statics::ClassParams = {
	&USekiroAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroAttributeSet()
{
	if (!Z_Registration_Info_UClass_USekiroAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroAttributeSet.OuterSingleton, Z_Construct_UClass_USekiroAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroAttributeSet.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroAttributeSet>()
{
	return USekiroAttributeSet::StaticClass();
}
USekiroAttributeSet::USekiroAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroAttributeSet);
USekiroAttributeSet::~USekiroAttributeSet() {}
// End Class USekiroAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroAttributeSet, USekiroAttributeSet::StaticClass, TEXT("USekiroAttributeSet"), &Z_Registration_Info_UClass_USekiroAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroAttributeSet), 2913681053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_2266357523(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
