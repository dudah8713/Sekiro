// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/SekiroTypes/SekiroStructTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroStructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroGameplayAbility_NoRegister();
SEKIROPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet();
SEKIROPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FSekiroWeaponData();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin ScriptStruct FSekiroSamuraiAbilitySet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet;
class UScriptStruct* FSekiroSamuraiAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet, (UObject*)Z_Construct_UPackage__Script_SekiroProj(), TEXT("SekiroSamuraiAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet.OuterSingleton;
}
template<> SEKIROPROJ_API UScriptStruct* StaticStruct<FSekiroSamuraiAbilitySet>()
{
	return FSekiroSamuraiAbilitySet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "SekiroSamuraiAbilitySet" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "SekiroSamuraiAbilitySet" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroStructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSekiroSamuraiAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSekiroSamuraiAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSekiroSamuraiAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_USekiroGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::NewProp_AbilityToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
	nullptr,
	&NewStructOps,
	"SekiroSamuraiAbilitySet",
	Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::PropPointers),
	sizeof(FSekiroSamuraiAbilitySet),
	alignof(FSekiroSamuraiAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet.InnerSingleton;
}
// End ScriptStruct FSekiroSamuraiAbilitySet

// Begin ScriptStruct FSekiroWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SekiroWeaponData;
class UScriptStruct* FSekiroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SekiroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SekiroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSekiroWeaponData, (UObject*)Z_Construct_UPackage__Script_SekiroProj(), TEXT("SekiroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_SekiroWeaponData.OuterSingleton;
}
template<> SEKIROPROJ_API UScriptStruct* StaticStruct<FSekiroWeaponData>()
{
	return FSekiroWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSekiroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInputMappingContext_MetaData[] = {
		{ "Category", "SekiroWeaponData" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponAbilities_MetaData[] = {
		{ "Category", "SekiroWeaponData" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroStructTypes.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInputMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSekiroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewProp_WeaponInputMappingContext = { "WeaponInputMappingContext", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSekiroWeaponData, WeaponInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInputMappingContext_MetaData), NewProp_WeaponInputMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet, METADATA_PARAMS(0, nullptr) }; // 975700846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewProp_DefaultWeaponAbilities = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSekiroWeaponData, DefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponAbilities_MetaData), NewProp_DefaultWeaponAbilities_MetaData) }; // 975700846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewProp_WeaponInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewProp_DefaultWeaponAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
	nullptr,
	&NewStructOps,
	"SekiroWeaponData",
	Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::PropPointers),
	sizeof(FSekiroWeaponData),
	alignof(FSekiroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSekiroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_SekiroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SekiroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SekiroWeaponData.InnerSingleton;
}
// End ScriptStruct FSekiroWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroStructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSekiroSamuraiAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet_Statics::NewStructOps, TEXT("SekiroSamuraiAbilitySet"), &Z_Registration_Info_UScriptStruct_SekiroSamuraiAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSekiroSamuraiAbilitySet), 975700846U) },
		{ FSekiroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FSekiroWeaponData_Statics::NewStructOps, TEXT("SekiroWeaponData"), &Z_Registration_Info_UScriptStruct_SekiroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSekiroWeaponData), 357487391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroStructTypes_h_703232467(TEXT("/Script/SekiroProj"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroStructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroStructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
