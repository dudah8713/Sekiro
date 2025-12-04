// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamuriGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroPlayerController_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroSamurai_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USamuriGameplayAbility();
SEKIROPROJ_API UClass* Z_Construct_UClass_USamuriGameplayAbility_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USamuriGameplayAbility Function GetPlayerCombatComponentFromActorInfo
struct Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics
{
	struct SamuriGameplayAbility_eventGetPlayerCombatComponentFromActorInfo_Parms
	{
		UPlayerCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|Ability" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventGetPlayerCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPlayerCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USamuriGameplayAbility, nullptr, "GetPlayerCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::SamuriGameplayAbility_eventGetPlayerCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::SamuriGameplayAbility_eventGetPlayerCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USamuriGameplayAbility::execGetPlayerCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerCombatComponent**)Z_Param__Result=P_THIS->GetPlayerCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class USamuriGameplayAbility Function GetPlayerCombatComponentFromActorInfo

// Begin Class USamuriGameplayAbility Function GetPlayerControllerFromActorInfo
struct Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics
{
	struct SamuriGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms
	{
		ASekiroPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|Ability" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ASekiroPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USamuriGameplayAbility, nullptr, "GetPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::SamuriGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::SamuriGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USamuriGameplayAbility::execGetPlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASekiroPlayerController**)Z_Param__Result=P_THIS->GetPlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class USamuriGameplayAbility Function GetPlayerControllerFromActorInfo

// Begin Class USamuriGameplayAbility Function GetSamuraiCharacterFromActorInfo
struct Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics
{
	struct SamuriGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms
	{
		ASekiroSamurai* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|Ability" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ASekiroSamurai_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USamuriGameplayAbility, nullptr, "GetSamuraiCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::SamuriGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::SamuriGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USamuriGameplayAbility::execGetSamuraiCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASekiroSamurai**)Z_Param__Result=P_THIS->GetSamuraiCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class USamuriGameplayAbility Function GetSamuraiCharacterFromActorInfo

// Begin Class USamuriGameplayAbility Function MakeSamuraiDamageEffectSpedHandle
struct Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics
{
	struct SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms
	{
		TSubclassOf<UGameplayEffect> EffectClass;
		float InWeaponBaseDamage;
		FGameplayTag InCurrentAttackTypeTag;
		int32 InUsedComboCount;
		FGameplayEffectSpecHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return GameplayEffectSpecHand\n" },
#endif
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return GameplayEffectSpecHand" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeaponBaseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurrentAttackTypeTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InUsedComboCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_InWeaponBaseDamage = { "InWeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms, InWeaponBaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_InCurrentAttackTypeTag = { "InCurrentAttackTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms, InCurrentAttackTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_InUsedComboCount = { "InUsedComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms, InUsedComboCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_InWeaponBaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_InCurrentAttackTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_InUsedComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USamuriGameplayAbility, nullptr, "MakeSamuraiDamageEffectSpedHandle", nullptr, nullptr, Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::SamuriGameplayAbility_eventMakeSamuraiDamageEffectSpedHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USamuriGameplayAbility::execMakeSamuraiDamageEffectSpedHandle)
{
	P_GET_OBJECT(UClass,Z_Param_EffectClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeaponBaseDamage);
	P_GET_STRUCT(FGameplayTag,Z_Param_InCurrentAttackTypeTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_InUsedComboCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeSamuraiDamageEffectSpedHandle(Z_Param_EffectClass,Z_Param_InWeaponBaseDamage,Z_Param_InCurrentAttackTypeTag,Z_Param_InUsedComboCount);
	P_NATIVE_END;
}
// End Class USamuriGameplayAbility Function MakeSamuraiDamageEffectSpedHandle

// Begin Class USamuriGameplayAbility
void USamuriGameplayAbility::StaticRegisterNativesUSamuriGameplayAbility()
{
	UClass* Class = USamuriGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerCombatComponentFromActorInfo", &USamuriGameplayAbility::execGetPlayerCombatComponentFromActorInfo },
		{ "GetPlayerControllerFromActorInfo", &USamuriGameplayAbility::execGetPlayerControllerFromActorInfo },
		{ "GetSamuraiCharacterFromActorInfo", &USamuriGameplayAbility::execGetSamuraiCharacterFromActorInfo },
		{ "MakeSamuraiDamageEffectSpedHandle", &USamuriGameplayAbility::execMakeSamuraiDamageEffectSpedHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USamuriGameplayAbility);
UClass* Z_Construct_UClass_USamuriGameplayAbility_NoRegister()
{
	return USamuriGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_USamuriGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SamuriGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerCombatComponentFromActorInfo, "GetPlayerCombatComponentFromActorInfo" }, // 2957704497
		{ &Z_Construct_UFunction_USamuriGameplayAbility_GetPlayerControllerFromActorInfo, "GetPlayerControllerFromActorInfo" }, // 2277008366
		{ &Z_Construct_UFunction_USamuriGameplayAbility_GetSamuraiCharacterFromActorInfo, "GetSamuraiCharacterFromActorInfo" }, // 4008216747
		{ &Z_Construct_UFunction_USamuriGameplayAbility_MakeSamuraiDamageEffectSpedHandle, "MakeSamuraiDamageEffectSpedHandle" }, // 4092940613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USamuriGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USamuriGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USekiroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USamuriGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USamuriGameplayAbility_Statics::ClassParams = {
	&USamuriGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USamuriGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USamuriGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USamuriGameplayAbility()
{
	if (!Z_Registration_Info_UClass_USamuriGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USamuriGameplayAbility.OuterSingleton, Z_Construct_UClass_USamuriGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USamuriGameplayAbility.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USamuriGameplayAbility>()
{
	return USamuriGameplayAbility::StaticClass();
}
USamuriGameplayAbility::USamuriGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USamuriGameplayAbility);
USamuriGameplayAbility::~USamuriGameplayAbility() {}
// End Class USamuriGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USamuriGameplayAbility, USamuriGameplayAbility::StaticClass, TEXT("USamuriGameplayAbility"), &Z_Registration_Info_UClass_USamuriGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USamuriGameplayAbility), 3573434440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_2445968462(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SamuriGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
