// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/DataAssets/StartUpData/DataAsset_SamuraiStartUpDataBase.h"
#include "SekiroProj/SekiroGame/SekiroTypes/SekiroStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_SamuraiStartUpDataBase() {}

// Begin Cross Module References
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
SEKIROPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class UDataAsset_SamuraiStartUpDataBase
void UDataAsset_SamuraiStartUpDataBase::StaticRegisterNativesUDataAsset_SamuraiStartUpDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_SamuraiStartUpDataBase);
UClass* Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_NoRegister()
{
	return UDataAsset_SamuraiStartUpDataBase::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/DataAssets/StartUpData/DataAsset_SamuraiStartUpDataBase.h" },
		{ "ModuleRelativePath", "SekiroGame/DataAssets/StartUpData/DataAsset_SamuraiStartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamuraiStartUpAbilitySets_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "SekiroGame/DataAssets/StartUpData/DataAsset_SamuraiStartUpDataBase.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamuraiStartUpAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamuraiStartUpAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_SamuraiStartUpDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::NewProp_SamuraiStartUpAbilitySets_Inner = { "SamuraiStartUpAbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet, METADATA_PARAMS(0, nullptr) }; // 975700846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::NewProp_SamuraiStartUpAbilitySets = { "SamuraiStartUpAbilitySets", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_SamuraiStartUpDataBase, SamuraiStartUpAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamuraiStartUpAbilitySets_MetaData), NewProp_SamuraiStartUpAbilitySets_MetaData) }; // 975700846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::NewProp_SamuraiStartUpAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::NewProp_SamuraiStartUpAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::ClassParams = {
	&UDataAsset_SamuraiStartUpDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase()
{
	if (!Z_Registration_Info_UClass_UDataAsset_SamuraiStartUpDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_SamuraiStartUpDataBase.OuterSingleton, Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_SamuraiStartUpDataBase.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<UDataAsset_SamuraiStartUpDataBase>()
{
	return UDataAsset_SamuraiStartUpDataBase::StaticClass();
}
UDataAsset_SamuraiStartUpDataBase::UDataAsset_SamuraiStartUpDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_SamuraiStartUpDataBase);
UDataAsset_SamuraiStartUpDataBase::~UDataAsset_SamuraiStartUpDataBase() {}
// End Class UDataAsset_SamuraiStartUpDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_DataAssets_StartUpData_DataAsset_SamuraiStartUpDataBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_SamuraiStartUpDataBase, UDataAsset_SamuraiStartUpDataBase::StaticClass, TEXT("UDataAsset_SamuraiStartUpDataBase"), &Z_Registration_Info_UClass_UDataAsset_SamuraiStartUpDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_SamuraiStartUpDataBase), 198519827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_DataAssets_StartUpData_DataAsset_SamuraiStartUpDataBase_h_3924861441(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_DataAssets_StartUpData_DataAsset_SamuraiStartUpDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_DataAssets_StartUpData_DataAsset_SamuraiStartUpDataBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
