// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Components/Combat/PlayerCombatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCombatComponent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroWeaponKatana_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UPawnCombatComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_UPlayerCombatComponent();
SEKIROPROJ_API UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class UPlayerCombatComponent Function GetPlayerCarriedWeaponByTag
struct Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics
{
	struct PlayerCombatComponent_eventGetPlayerCarriedWeaponByTag_Parms
	{
		FGameplayTag InWeaponTag;
		ASekiroWeaponKatana* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "SekiroGame/Components/Combat/PlayerCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::NewProp_InWeaponTag = { "InWeaponTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCombatComponent_eventGetPlayerCarriedWeaponByTag_Parms, InWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCombatComponent_eventGetPlayerCarriedWeaponByTag_Parms, ReturnValue), Z_Construct_UClass_ASekiroWeaponKatana_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::NewProp_InWeaponTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "GetPlayerCarriedWeaponByTag", nullptr, nullptr, Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::PlayerCombatComponent_eventGetPlayerCarriedWeaponByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::PlayerCombatComponent_eventGetPlayerCarriedWeaponByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerCombatComponent::execGetPlayerCarriedWeaponByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASekiroWeaponKatana**)Z_Param__Result=P_THIS->GetPlayerCarriedWeaponByTag(Z_Param_InWeaponTag);
	P_NATIVE_END;
}
// End Class UPlayerCombatComponent Function GetPlayerCarriedWeaponByTag

// Begin Class UPlayerCombatComponent Function GetPlayerCurrentEquippedWeapon
struct Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics
{
	struct PlayerCombatComponent_eventGetPlayerCurrentEquippedWeapon_Parms
	{
		ASekiroWeaponKatana* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "SekiroGame/Components/Combat/PlayerCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCombatComponent_eventGetPlayerCurrentEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_ASekiroWeaponKatana_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "GetPlayerCurrentEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::PlayerCombatComponent_eventGetPlayerCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::PlayerCombatComponent_eventGetPlayerCurrentEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerCombatComponent::execGetPlayerCurrentEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASekiroWeaponKatana**)Z_Param__Result=P_THIS->GetPlayerCurrentEquippedWeapon();
	P_NATIVE_END;
}
// End Class UPlayerCombatComponent Function GetPlayerCurrentEquippedWeapon

// Begin Class UPlayerCombatComponent Function GetPlayerCurrentEquippedWeaponDamageAtLevel
struct Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics
{
	struct PlayerCombatComponent_eventGetPlayerCurrentEquippedWeaponDamageAtLevel_Parms
	{
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "SekiroGame/Components/Combat/PlayerCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCombatComponent_eventGetPlayerCurrentEquippedWeaponDamageAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCombatComponent_eventGetPlayerCurrentEquippedWeaponDamageAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "GetPlayerCurrentEquippedWeaponDamageAtLevel", nullptr, nullptr, Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::PlayerCombatComponent_eventGetPlayerCurrentEquippedWeaponDamageAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::PlayerCombatComponent_eventGetPlayerCurrentEquippedWeaponDamageAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerCombatComponent::execGetPlayerCurrentEquippedWeaponDamageAtLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerCurrentEquippedWeaponDamageAtLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UPlayerCombatComponent Function GetPlayerCurrentEquippedWeaponDamageAtLevel

// Begin Class UPlayerCombatComponent
void UPlayerCombatComponent::StaticRegisterNativesUPlayerCombatComponent()
{
	UClass* Class = UPlayerCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerCarriedWeaponByTag", &UPlayerCombatComponent::execGetPlayerCarriedWeaponByTag },
		{ "GetPlayerCurrentEquippedWeapon", &UPlayerCombatComponent::execGetPlayerCurrentEquippedWeapon },
		{ "GetPlayerCurrentEquippedWeaponDamageAtLevel", &UPlayerCombatComponent::execGetPlayerCurrentEquippedWeaponDamageAtLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCombatComponent);
UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister()
{
	return UPlayerCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/Components/Combat/PlayerCombatComponent.h" },
		{ "ModuleRelativePath", "SekiroGame/Components/Combat/PlayerCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCarriedWeaponByTag, "GetPlayerCarriedWeaponByTag" }, // 89634587
		{ &Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeapon, "GetPlayerCurrentEquippedWeapon" }, // 2020701364
		{ &Z_Construct_UFunction_UPlayerCombatComponent_GetPlayerCurrentEquippedWeaponDamageAtLevel, "GetPlayerCurrentEquippedWeaponDamageAtLevel" }, // 2072041545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCombatComponent_Statics::ClassParams = {
	&UPlayerCombatComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerCombatComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCombatComponent.OuterSingleton, Z_Construct_UClass_UPlayerCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerCombatComponent.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<UPlayerCombatComponent>()
{
	return UPlayerCombatComponent::StaticClass();
}
UPlayerCombatComponent::UPlayerCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCombatComponent);
UPlayerCombatComponent::~UPlayerCombatComponent() {}
// End Class UPlayerCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCombatComponent, UPlayerCombatComponent::StaticClass, TEXT("UPlayerCombatComponent"), &Z_Registration_Info_UClass_UPlayerCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatComponent), 2125339168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_4166716416(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Components_Combat_PlayerCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
