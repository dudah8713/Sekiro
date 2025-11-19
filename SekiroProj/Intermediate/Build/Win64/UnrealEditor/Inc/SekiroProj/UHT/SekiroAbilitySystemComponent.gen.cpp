// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "SekiroProj/SekiroGame/SekiroTypes/SekiroStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAbilitySystemComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAbilitySystemComponent_NoRegister();
SEKIROPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroAbilitySystemComponent Function GrantSekiroWeaponAbilities
struct Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics
{
	struct SekiroAbilitySystemComponent_eventGrantSekiroWeaponAbilities_Parms
	{
		TArray<FSekiroSamuraiAbilitySet> InDefaultWeaponAbilities;
		int32 ApplyLevel;
		TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ApplyLevel", "1" },
		{ "Category", "GAS|Ability" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultWeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDefaultWeaponAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ApplyLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSekiroSamuraiAbilitySet, METADATA_PARAMS(0, nullptr) }; // 975700846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAbilitySystemComponent_eventGrantSekiroWeaponAbilities_Parms, InDefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDefaultWeaponAbilities_MetaData), NewProp_InDefaultWeaponAbilities_MetaData) }; // 975700846
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_ApplyLevel = { "ApplyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAbilitySystemComponent_eventGrantSekiroWeaponAbilities_Parms, ApplyLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAbilitySystemComponent_eventGrantSekiroWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_ApplyLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroAbilitySystemComponent, nullptr, "GrantSekiroWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::SekiroAbilitySystemComponent_eventGrantSekiroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::SekiroAbilitySystemComponent_eventGrantSekiroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroAbilitySystemComponent::execGrantSekiroWeaponAbilities)
{
	P_GET_TARRAY_REF(FSekiroSamuraiAbilitySet,Z_Param_Out_InDefaultWeaponAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_ApplyLevel);
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantSekiroWeaponAbilities(Z_Param_Out_InDefaultWeaponAbilities,Z_Param_ApplyLevel,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_NATIVE_END;
}
// End Class USekiroAbilitySystemComponent Function GrantSekiroWeaponAbilities

// Begin Class USekiroAbilitySystemComponent
void USekiroAbilitySystemComponent::StaticRegisterNativesUSekiroAbilitySystemComponent()
{
	UClass* Class = USekiroAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantSekiroWeaponAbilities", &USekiroAbilitySystemComponent::execGrantSekiroWeaponAbilities },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USekiroAbilitySystemComponent_GrantSekiroWeaponAbilities, "GrantSekiroWeaponAbilities" }, // 3461398350
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroAbilitySystemComponent, USekiroAbilitySystemComponent::StaticClass, TEXT("USekiroAbilitySystemComponent"), &Z_Registration_Info_UClass_USekiroAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroAbilitySystemComponent), 323433562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_1884489297(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
