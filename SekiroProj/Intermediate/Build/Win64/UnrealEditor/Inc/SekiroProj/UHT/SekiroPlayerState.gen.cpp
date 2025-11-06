// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Player/SekiroPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroPlayerState();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroPlayerState
void ASekiroPlayerState::StaticRegisterNativesASekiroPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroPlayerState);
UClass* Z_Construct_UClass_ASekiroPlayerState_NoRegister()
{
	return ASekiroPlayerState::StaticClass();
}
struct Z_Construct_UClass_ASekiroPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SekiroGame/Player/SekiroPlayerState.h" },
		{ "ModuleRelativePath", "SekiroGame/Player/SekiroPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASekiroPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroPlayerState_Statics::ClassParams = {
	&ASekiroPlayerState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroPlayerState()
{
	if (!Z_Registration_Info_UClass_ASekiroPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroPlayerState.OuterSingleton, Z_Construct_UClass_ASekiroPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroPlayerState.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroPlayerState>()
{
	return ASekiroPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroPlayerState);
ASekiroPlayerState::~ASekiroPlayerState() {}
// End Class ASekiroPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroPlayerState, ASekiroPlayerState::StaticClass, TEXT("ASekiroPlayerState"), &Z_Registration_Info_UClass_ASekiroPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroPlayerState), 808424392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_2056074073(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
