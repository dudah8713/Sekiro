// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Character/SekiroCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroCharacterBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroCharacterBase_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroCharacterBase
void ASekiroCharacterBase::StaticRegisterNativesASekiroCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroCharacterBase);
UClass* Z_Construct_UClass_ASekiroCharacterBase_NoRegister()
{
	return ASekiroCharacterBase::StaticClass();
}
struct Z_Construct_UClass_ASekiroCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SekiroGame/Character/SekiroCharacterBase.h" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SekiroASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStartUpData_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "SekiroGame/Character/SekiroCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SekiroASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterStartUpData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_SekiroASC = { "SekiroASC", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroCharacterBase, SekiroASC), Z_Construct_UClass_USekiroAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SekiroASC_MetaData), NewProp_SekiroASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroCharacterBase, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_CharacterStartUpData = { "CharacterStartUpData", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroCharacterBase, CharacterStartUpData), Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStartUpData_MetaData), NewProp_CharacterStartUpData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASekiroCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_SekiroASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroCharacterBase_Statics::NewProp_CharacterStartUpData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASekiroCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASekiroCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASekiroCharacterBase, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UPawnCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ASekiroCharacterBase, IPawnCombatInterface), false },  // 4176699264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroCharacterBase_Statics::ClassParams = {
	&ASekiroCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASekiroCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroCharacterBase()
{
	if (!Z_Registration_Info_UClass_ASekiroCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroCharacterBase.OuterSingleton, Z_Construct_UClass_ASekiroCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroCharacterBase.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroCharacterBase>()
{
	return ASekiroCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroCharacterBase);
ASekiroCharacterBase::~ASekiroCharacterBase() {}
// End Class ASekiroCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroCharacterBase, ASekiroCharacterBase::StaticClass, TEXT("ASekiroCharacterBase"), &Z_Registration_Info_UClass_ASekiroCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroCharacterBase), 2320347294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_1859389992(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Character_SekiroCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
