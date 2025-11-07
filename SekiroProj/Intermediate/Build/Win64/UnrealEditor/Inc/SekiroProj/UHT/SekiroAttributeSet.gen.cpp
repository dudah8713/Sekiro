// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/SekiroAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAttributeSet();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics
{
	struct SekiroAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::SekiroAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::SekiroAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class USekiroAttributeSet Function OnRep_Health

// Begin Class USekiroAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics
{
	struct SekiroAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::SekiroAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::SekiroAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class USekiroAttributeSet Function OnRep_MaxHealth

// Begin Class USekiroAttributeSet Function OnRep_MaxPosture
struct Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics
{
	struct SekiroAttributeSet_eventOnRep_MaxPosture_Parms
	{
		FGameplayAttributeData OldMaxPosture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxPosture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxPosture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::NewProp_OldMaxPosture = { "OldMaxPosture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAttributeSet_eventOnRep_MaxPosture_Parms, OldMaxPosture), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxPosture_MetaData), NewProp_OldMaxPosture_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::NewProp_OldMaxPosture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroAttributeSet, nullptr, "OnRep_MaxPosture", nullptr, nullptr, Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::SekiroAttributeSet_eventOnRep_MaxPosture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::SekiroAttributeSet_eventOnRep_MaxPosture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroAttributeSet::execOnRep_MaxPosture)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxPosture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxPosture(Z_Param_Out_OldMaxPosture);
	P_NATIVE_END;
}
// End Class USekiroAttributeSet Function OnRep_MaxPosture

// Begin Class USekiroAttributeSet Function OnRep_Posture
struct Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics
{
	struct SekiroAttributeSet_eventOnRep_Posture_Parms
	{
		FGameplayAttributeData OldPosture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPosture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture = { "OldPosture", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroAttributeSet_eventOnRep_Posture_Parms, OldPosture), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPosture_MetaData), NewProp_OldPosture_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::NewProp_OldPosture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroAttributeSet, nullptr, "OnRep_Posture", nullptr, nullptr, Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::SekiroAttributeSet_eventOnRep_Posture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::SekiroAttributeSet_eventOnRep_Posture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroAttributeSet::execOnRep_Posture)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPosture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Posture(Z_Param_Out_OldPosture);
	P_NATIVE_END;
}
// End Class USekiroAttributeSet Function OnRep_Posture

// Begin Class USekiroAttributeSet
void USekiroAttributeSet::StaticRegisterNativesUSekiroAttributeSet()
{
	UClass* Class = USekiroAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Health", &USekiroAttributeSet::execOnRep_Health },
		{ "OnRep_MaxHealth", &USekiroAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxPosture", &USekiroAttributeSet::execOnRep_MaxPosture },
		{ "OnRep_Posture", &USekiroAttributeSet::execOnRep_Posture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroAttributeSet);
UClass* Z_Construct_UClass_USekiroAttributeSet_NoRegister()
{
	return USekiroAttributeSet::StaticClass();
}
struct Z_Construct_UClass_USekiroAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Posture_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPosture_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/SekiroAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPosture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USekiroAttributeSet_OnRep_Health, "OnRep_Health" }, // 3415608055
		{ &Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 449555164
		{ &Z_Construct_UFunction_USekiroAttributeSet_OnRep_MaxPosture, "OnRep_MaxPosture" }, // 2907739804
		{ &Z_Construct_UFunction_USekiroAttributeSet_OnRep_Posture, "OnRep_Posture" }, // 459596820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_Posture = { "Posture", "OnRep_Posture", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroAttributeSet, Posture), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Posture_MetaData), NewProp_Posture_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_MaxPosture = { "MaxPosture", "OnRep_MaxPosture", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroAttributeSet, MaxPosture), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPosture_MetaData), NewProp_MaxPosture_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USekiroAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_Posture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroAttributeSet_Statics::NewProp_MaxPosture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USekiroAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroAttributeSet_Statics::ClassParams = {
	&USekiroAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USekiroAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroAttributeSet()
{
	if (!Z_Registration_Info_UClass_USekiroAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroAttributeSet.OuterSingleton, Z_Construct_UClass_USekiroAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroAttributeSet.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroAttributeSet>()
{
	return USekiroAttributeSet::StaticClass();
}
void USekiroAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Posture(TEXT("Posture"));
	static const FName Name_MaxPosture(TEXT("MaxPosture"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Posture == ClassReps[(int32)ENetFields_Private::Posture].Property->GetFName()
		&& Name_MaxPosture == ClassReps[(int32)ENetFields_Private::MaxPosture].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USekiroAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroAttributeSet);
USekiroAttributeSet::~USekiroAttributeSet() {}
// End Class USekiroAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroAttributeSet, USekiroAttributeSet::StaticClass, TEXT("USekiroAttributeSet"), &Z_Registration_Info_UClass_USekiroAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroAttributeSet), 1356059297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_1719806831(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_SekiroAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
