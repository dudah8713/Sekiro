// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroModeBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroModeBase
void ASekiroModeBase::StaticRegisterNativesASekiroModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroModeBase);
UClass* Z_Construct_UClass_ASekiroModeBase_NoRegister()
{
	return ASekiroModeBase::StaticClass();
}
struct Z_Construct_UClass_ASekiroModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SekiroModeBase.h" },
		{ "ModuleRelativePath", "SekiroModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASekiroModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroModeBase_Statics::ClassParams = {
	&ASekiroModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroModeBase()
{
	if (!Z_Registration_Info_UClass_ASekiroModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroModeBase.OuterSingleton, Z_Construct_UClass_ASekiroModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroModeBase.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroModeBase>()
{
	return ASekiroModeBase::StaticClass();
}
ASekiroModeBase::ASekiroModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroModeBase);
ASekiroModeBase::~ASekiroModeBase() {}
// End Class ASekiroModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroModeBase, ASekiroModeBase::StaticClass, TEXT("ASekiroModeBase"), &Z_Registration_Info_UClass_ASekiroModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroModeBase), 3684915480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_4031656741(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
