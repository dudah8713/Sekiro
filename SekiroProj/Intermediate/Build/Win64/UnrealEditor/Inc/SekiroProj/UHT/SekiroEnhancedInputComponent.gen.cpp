// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Components/Input/SekiroEnhancedInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroEnhancedInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroEnhancedInputComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroEnhancedInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroEnhancedInputComponent
void USekiroEnhancedInputComponent::StaticRegisterNativesUSekiroEnhancedInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroEnhancedInputComponent);
UClass* Z_Construct_UClass_USekiroEnhancedInputComponent_NoRegister()
{
	return USekiroEnhancedInputComponent::StaticClass();
}
struct Z_Construct_UClass_USekiroEnhancedInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "SekiroGame/Components/Input/SekiroEnhancedInputComponent.h" },
		{ "ModuleRelativePath", "SekiroGame/Components/Input/SekiroEnhancedInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroEnhancedInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USekiroEnhancedInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroEnhancedInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroEnhancedInputComponent_Statics::ClassParams = {
	&USekiroEnhancedInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroEnhancedInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroEnhancedInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroEnhancedInputComponent()
{
	if (!Z_Registration_Info_UClass_USekiroEnhancedInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroEnhancedInputComponent.OuterSingleton, Z_Construct_UClass_USekiroEnhancedInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroEnhancedInputComponent.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroEnhancedInputComponent>()
{
	return USekiroEnhancedInputComponent::StaticClass();
}
USekiroEnhancedInputComponent::USekiroEnhancedInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroEnhancedInputComponent);
USekiroEnhancedInputComponent::~USekiroEnhancedInputComponent() {}
// End Class USekiroEnhancedInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Input_SekiroEnhancedInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroEnhancedInputComponent, USekiroEnhancedInputComponent::StaticClass, TEXT("USekiroEnhancedInputComponent"), &Z_Registration_Info_UClass_USekiroEnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroEnhancedInputComponent), 2423317027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Input_SekiroEnhancedInputComponent_h_429597244(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Input_SekiroEnhancedInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Input_SekiroEnhancedInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
