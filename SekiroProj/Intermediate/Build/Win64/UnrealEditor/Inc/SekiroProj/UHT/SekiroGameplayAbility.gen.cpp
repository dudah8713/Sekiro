// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroSamurai_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroGameplayAbility();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroGameplayAbility_NoRegister();
SEKIROPROJ_API UEnum* Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Enum ESekiroAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy;
static UEnum* ESekiroAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_SekiroProj(), TEXT("ESekiroAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy.OuterSingleton;
}
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroAbilityActivationPolicy>()
{
	return ESekiroAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h" },
		{ "OnGiven.Name", "ESekiroAbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "ESekiroAbilityActivationPolicy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESekiroAbilityActivationPolicy::OnTriggered", (int64)ESekiroAbilityActivationPolicy::OnTriggered },
		{ "ESekiroAbilityActivationPolicy::OnGiven", (int64)ESekiroAbilityActivationPolicy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SekiroProj,
	nullptr,
	"ESekiroAbilityActivationPolicy",
	"ESekiroAbilityActivationPolicy",
	Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy.InnerSingleton;
}
// End Enum ESekiroAbilityActivationPolicy

// Begin Class USekiroGameplayAbility Function GetSamuraiCharacterFromActorInfo
struct Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics
{
	struct SekiroGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms
	{
		ASekiroSamurai* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS|Ability" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ASekiroSamurai_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroGameplayAbility, nullptr, "GetSamuraiCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::SekiroGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::SekiroGameplayAbility_eventGetSamuraiCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroGameplayAbility::execGetSamuraiCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASekiroSamurai**)Z_Param__Result=P_THIS->GetSamuraiCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class USekiroGameplayAbility Function GetSamuraiCharacterFromActorInfo

// Begin Class USekiroGameplayAbility
void USekiroGameplayAbility::StaticRegisterNativesUSekiroGameplayAbility()
{
	UClass* Class = USekiroGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSamuraiCharacterFromActorInfo", &USekiroGameplayAbility::execGetSamuraiCharacterFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroGameplayAbility);
UClass* Z_Construct_UClass_USekiroGameplayAbility_NoRegister()
{
	return USekiroGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_USekiroGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "SekiroAbility" },
		{ "ModuleRelativePath", "SekiroGame/AbilitySystem/Abilities/SekiroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USekiroGameplayAbility_GetSamuraiCharacterFromActorInfo, "GetSamuraiCharacterFromActorInfo" }, // 70511020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USekiroGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USekiroGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_SekiroProj_ESekiroAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationPolicy_MetaData), NewProp_AbilityActivationPolicy_MetaData) }; // 2271476337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USekiroGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USekiroGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroGameplayAbility_Statics::ClassParams = {
	&USekiroGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USekiroGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USekiroGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroGameplayAbility()
{
	if (!Z_Registration_Info_UClass_USekiroGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroGameplayAbility.OuterSingleton, Z_Construct_UClass_USekiroGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroGameplayAbility.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroGameplayAbility>()
{
	return USekiroGameplayAbility::StaticClass();
}
USekiroGameplayAbility::USekiroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroGameplayAbility);
USekiroGameplayAbility::~USekiroGameplayAbility() {}
// End Class USekiroGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESekiroAbilityActivationPolicy_StaticEnum, TEXT("ESekiroAbilityActivationPolicy"), &Z_Registration_Info_UEnum_ESekiroAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2271476337U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroGameplayAbility, USekiroGameplayAbility::StaticClass, TEXT("USekiroGameplayAbility"), &Z_Registration_Info_UClass_USekiroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroGameplayAbility), 29194055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_2187141925(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_AbilitySystem_Abilities_SekiroGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
