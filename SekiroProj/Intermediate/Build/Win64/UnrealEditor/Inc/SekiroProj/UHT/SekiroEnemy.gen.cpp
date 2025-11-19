// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Character/SekiroEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroEnemy() {}

// Begin Cross Module References
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroCharacterBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroEnemy();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroEnemy
void ASekiroEnemy::StaticRegisterNativesASekiroEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroEnemy);
UClass* Z_Construct_UClass_ASekiroEnemy_NoRegister()
{
	return ASekiroEnemy::StaticClass();
}
struct Z_Construct_UClass_ASekiroEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SekiroGame/Character/SekiroEnemy.h" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASekiroEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASekiroCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroEnemy_Statics::ClassParams = {
	&ASekiroEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroEnemy()
{
	if (!Z_Registration_Info_UClass_ASekiroEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroEnemy.OuterSingleton, Z_Construct_UClass_ASekiroEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroEnemy.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroEnemy>()
{
	return ASekiroEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroEnemy);
ASekiroEnemy::~ASekiroEnemy() {}
// End Class ASekiroEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroEnemy, ASekiroEnemy::StaticClass, TEXT("ASekiroEnemy"), &Z_Registration_Info_UClass_ASekiroEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroEnemy), 1591216746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroEnemy_h_1958093149(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
