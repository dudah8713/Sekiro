// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAbilitySystemComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroAbilitySystemComponent
void USekiroAbilitySystemComponent::StaticRegisterNativesUSekiroAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroAbilitySystemComponent);
UClass* Z_Construct_UClass_USekiroAbilitySystemComponent_NoRegister()
{
	return USekiroAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_USekiroAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USekiroAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroAbilitySystemComponent_Statics::ClassParams = {
	&USekiroAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_USekiroAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_USekiroAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroAbilitySystemComponent.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroAbilitySystemComponent>()
{
	return USekiroAbilitySystemComponent::StaticClass();
}
USekiroAbilitySystemComponent::USekiroAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroAbilitySystemComponent);
USekiroAbilitySystemComponent::~USekiroAbilitySystemComponent() {}
// End Class USekiroAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroAbilitySystemComponent, USekiroAbilitySystemComponent::StaticClass, TEXT("USekiroAbilitySystemComponent"), &Z_Registration_Info_UClass_USekiroAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroAbilitySystemComponent), 1230788876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_3197451325(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
