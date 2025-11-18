// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Items/Weapons/SekiroWeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroWeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroWeaponBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroWeaponBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroWeaponBase
void ASekiroWeaponBase::StaticRegisterNativesASekiroWeaponBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroWeaponBase);
UClass* Z_Construct_UClass_ASekiroWeaponBase_NoRegister()
{
	return ASekiroWeaponBase::StaticClass();
}
struct Z_Construct_UClass_ASekiroWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SekiroGame/Items/Weapons/SekiroWeaponBase.h" },
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCollisionBox_MetaData[] = {
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponCollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroWeaponBase, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroWeaponBase_Statics::NewProp_WeaponCollisionBox = { "WeaponCollisionBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroWeaponBase, WeaponCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCollisionBox_MetaData), NewProp_WeaponCollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASekiroWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroWeaponBase_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroWeaponBase_Statics::NewProp_WeaponCollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASekiroWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroWeaponBase_Statics::ClassParams = {
	&ASekiroWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASekiroWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroWeaponBase()
{
	if (!Z_Registration_Info_UClass_ASekiroWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroWeaponBase.OuterSingleton, Z_Construct_UClass_ASekiroWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroWeaponBase.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroWeaponBase>()
{
	return ASekiroWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroWeaponBase);
ASekiroWeaponBase::~ASekiroWeaponBase() {}
// End Class ASekiroWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroWeaponBase, ASekiroWeaponBase::StaticClass, TEXT("ASekiroWeaponBase"), &Z_Registration_Info_UClass_ASekiroWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroWeaponBase), 4215378655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_2694637787(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
