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
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroSamurai.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BP_Samurai\xec\x9d\x98 Default \xec\x84\xa4\xec\xa0\x95\xec\x9d\x98 CharacterData\xec\x97\x90 DA_InputConfig\xeb\xa5\xbc \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroSamurai.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP_Samurai\xec\x9d\x98 Default \xec\x84\xa4\xec\xa0\x95\xec\x9d\x98 CharacterData\xec\x97\x90 DA_InputConfig\xeb\xa5\xbc \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfigDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroSamurai>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroSamurai_Statics::NewProp_PlayerCombatComponent = { "PlayerCombatComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroSamurai, PlayerCombatComponent), Z_Construct_UClass_UPlayerCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCombatComponent_MetaData), NewProp_PlayerCombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroSamurai_Statics::NewProp_InputConfigDataAsset = { "InputConfigDataAsset", nullptr, (EPropertyFlags)0x0144000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroSamurai, InputConfigDataAsset), Z_Construct_UClass_UDataAsset_InputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigDataAsset_MetaData), NewProp_InputConfigDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASekiroSamurai_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroSamurai_Statics::NewProp_PlayerCombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroSamurai_Statics::NewProp_InputConfigDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroSamurai_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ASekiroSamurai_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroSamurai_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroSamurai);
ASekiroSamurai::~ASekiroSamurai() {}
// End Class ASekiroSamurai

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroSamurai, ASekiroSamurai::StaticClass, TEXT("ASekiroSamurai"), &Z_Registration_Info_UClass_ASekiroSamurai, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroSamurai), 1856376039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_1027494682(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroSamurai_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
