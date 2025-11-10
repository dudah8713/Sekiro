// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Player/SekiroPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroPlayerController();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroPlayerController
void ASekiroPlayerController::StaticRegisterNativesASekiroPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroPlayerController);
UClass* Z_Construct_UClass_ASekiroPlayerController_NoRegister()
{
	return ASekiroPlayerController::StaticClass();
}
struct Z_Construct_UClass_ASekiroPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SekiroGame/Player/SekiroPlayerController.h" },
		{ "ModuleRelativePath", "SekiroGame/Player/SekiroPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASekiroPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroPlayerController_Statics::ClassParams = {
	&ASekiroPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroPlayerController()
{
	if (!Z_Registration_Info_UClass_ASekiroPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroPlayerController.OuterSingleton, Z_Construct_UClass_ASekiroPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroPlayerController.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroPlayerController>()
{
	return ASekiroPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroPlayerController);
ASekiroPlayerController::~ASekiroPlayerController() {}
// End Class ASekiroPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroPlayerController, ASekiroPlayerController::StaticClass, TEXT("ASekiroPlayerController"), &Z_Registration_Info_UClass_ASekiroPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroPlayerController), 862662637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerController_h_3926391555(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_SekiroPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
