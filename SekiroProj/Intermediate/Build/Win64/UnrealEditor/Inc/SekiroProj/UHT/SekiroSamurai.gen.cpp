// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Character/SekiroSamurai.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroSamurai() {}

// Begin Cross Module References
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroCharacterBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroSamurai();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroSamurai_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroSamurai
void ASekiroSamurai::StaticRegisterNativesASekiroSamurai()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroSamurai);
UClass* Z_Construct_UClass_ASekiroSamurai_NoRegister()
{
	return ASekiroSamurai::StaticClass();
}
struct Z_Construct_UClass_ASekiroSamurai_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SekiroGame/Character/SekiroSamurai.h" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroSamurai.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroSamurai>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASekiroSamurai_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASekiroCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroSamurai_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroSamurai_Statics::ClassParams = {
	&ASekiroSamurai::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroSamurai_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroSamurai_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroSamurai()
{
	if (!Z_Registration_Info_UClass_ASekiroSamurai.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroSamurai.OuterSingleton, Z_Construct_UClass_ASekiroSamurai_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroSamurai.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroSamurai>()
{
	return ASekiroSamurai::StaticClass();
}
ASekiroSamurai::ASekiroSamurai() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroSamurai);
ASekiroSamurai::~ASekiroSamurai() {}
// End Class ASekiroSamurai

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroSamurai, ASekiroSamurai::StaticClass, TEXT("ASekiroSamurai"), &Z_Registration_Info_UClass_ASekiroSamurai, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroSamurai), 13002410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_2245678197(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
