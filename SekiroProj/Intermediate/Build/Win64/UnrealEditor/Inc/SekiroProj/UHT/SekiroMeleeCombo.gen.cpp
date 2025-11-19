// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/Abilities/SekiroMeleeCombo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroMeleeCombo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroMeleeCombo();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroMeleeCombo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroMeleeCombo
void USekiroMeleeCombo::StaticRegisterNativesUSekiroMeleeCombo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroMeleeCombo);
UClass* Z_Construct_UClass_USekiroMeleeCombo_NoRegister()
{
	return USekiroMeleeCombo::StaticClass();
}
struct Z_Construct_UClass_USekiroMeleeCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/AbilitySystem/Abilities/SekiroMeleeCombo.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroMeleeCombo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboIndex_MetaData[] = {
		{ "Category", "GAS|Melee Combo" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroMeleeCombo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCost_MetaData[] = {
		{ "Category", "GAS|Stamina" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroMeleeCombo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboAnimations_MetaData[] = {
		{ "Category", "GAS|Melee Combo Anim" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroMeleeCombo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboAnimations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroMeleeCombo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USekiroMeleeCombo_Statics::NewProp_ComboIndex = { "ComboIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroMeleeCombo, ComboIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboIndex_MetaData), NewProp_ComboIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USekiroMeleeCombo_Statics::NewProp_StaminaCost = { "StaminaCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroMeleeCombo, StaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCost_MetaData), NewProp_StaminaCost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USekiroMeleeCombo_Statics::NewProp_ComboAnimations = { "ComboAnimations", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ComboAnimations, USekiroMeleeCombo), STRUCT_OFFSET(USekiroMeleeCombo, ComboAnimations), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboAnimations_MetaData), NewProp_ComboAnimations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USekiroMeleeCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroMeleeCombo_Statics::NewProp_ComboIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroMeleeCombo_Statics::NewProp_StaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroMeleeCombo_Statics::NewProp_ComboAnimations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroMeleeCombo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USekiroMeleeCombo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroMeleeCombo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroMeleeCombo_Statics::ClassParams = {
	&USekiroMeleeCombo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USekiroMeleeCombo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USekiroMeleeCombo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroMeleeCombo_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroMeleeCombo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroMeleeCombo()
{
	if (!Z_Registration_Info_UClass_USekiroMeleeCombo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroMeleeCombo.OuterSingleton, Z_Construct_UClass_USekiroMeleeCombo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroMeleeCombo.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroMeleeCombo>()
{
	return USekiroMeleeCombo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroMeleeCombo);
USekiroMeleeCombo::~USekiroMeleeCombo() {}
// End Class USekiroMeleeCombo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroMeleeCombo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroMeleeCombo, USekiroMeleeCombo::StaticClass, TEXT("USekiroMeleeCombo"), &Z_Registration_Info_UClass_USekiroMeleeCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroMeleeCombo), 3921999768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroMeleeCombo_h_4018787271(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroMeleeCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroMeleeCombo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
