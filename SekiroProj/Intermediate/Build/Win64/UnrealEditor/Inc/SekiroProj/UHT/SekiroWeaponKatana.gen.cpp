// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Items/Weapons/SekiroWeaponKatana.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "SekiroProj/SekiroGame/SekiroTypes/SekiroStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroWeaponKatana() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroWeaponBase();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroWeaponKatana();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroWeaponKatana_NoRegister();
SEKIROPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FSekiroWeaponData();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroWeaponKatana Function AssignGrantedAbilitySpecHandles
struct Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics
{
	struct SekiroWeaponKatana_eventAssignGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponKatana.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner = { "InSpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles = { "InSpecHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroWeaponKatana_eventAssignGrantedAbilitySpecHandles_Parms, InSpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandles_MetaData), NewProp_InSpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASekiroWeaponKatana, nullptr, "AssignGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::SekiroWeaponKatana_eventAssignGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::SekiroWeaponKatana_eventAssignGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASekiroWeaponKatana::execAssignGrantedAbilitySpecHandles)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignGrantedAbilitySpecHandles(Z_Param_Out_InSpecHandles);
	P_NATIVE_END;
}
// End Class ASekiroWeaponKatana Function AssignGrantedAbilitySpecHandles

// Begin Class ASekiroWeaponKatana Function GetGrantedAbilitySpecHandles
struct Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics
{
	struct SekiroWeaponKatana_eventGetGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponKatana.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroWeaponKatana_eventGetGrantedAbilitySpecHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASekiroWeaponKatana, nullptr, "GetGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::SekiroWeaponKatana_eventGetGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::SekiroWeaponKatana_eventGetGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASekiroWeaponKatana::execGetGrantedAbilitySpecHandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GetGrantedAbilitySpecHandles();
	P_NATIVE_END;
}
// End Class ASekiroWeaponKatana Function GetGrantedAbilitySpecHandles

// Begin Class ASekiroWeaponKatana
void ASekiroWeaponKatana::StaticRegisterNativesASekiroWeaponKatana()
{
	UClass* Class = ASekiroWeaponKatana::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignGrantedAbilitySpecHandles", &ASekiroWeaponKatana::execAssignGrantedAbilitySpecHandles },
		{ "GetGrantedAbilitySpecHandles", &ASekiroWeaponKatana::execGetGrantedAbilitySpecHandles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroWeaponKatana);
UClass* Z_Construct_UClass_ASekiroWeaponKatana_NoRegister()
{
	return ASekiroWeaponKatana::StaticClass();
}
struct Z_Construct_UClass_ASekiroWeaponKatana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/Items/Weapons/SekiroWeaponKatana.h" },
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponKatana.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamuraiWeaponData_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "SekiroGame/Items/Weapons/SekiroWeaponKatana.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamuraiWeaponData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASekiroWeaponKatana_AssignGrantedAbilitySpecHandles, "AssignGrantedAbilitySpecHandles" }, // 4068177776
		{ &Z_Construct_UFunction_ASekiroWeaponKatana_GetGrantedAbilitySpecHandles, "GetGrantedAbilitySpecHandles" }, // 1726207094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroWeaponKatana>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASekiroWeaponKatana_Statics::NewProp_SamuraiWeaponData = { "SamuraiWeaponData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroWeaponKatana, SamuraiWeaponData), Z_Construct_UScriptStruct_FSekiroWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamuraiWeaponData_MetaData), NewProp_SamuraiWeaponData_MetaData) }; // 1686841929
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASekiroWeaponKatana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroWeaponKatana_Statics::NewProp_SamuraiWeaponData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponKatana_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASekiroWeaponKatana_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASekiroWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponKatana_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroWeaponKatana_Statics::ClassParams = {
	&ASekiroWeaponKatana::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASekiroWeaponKatana_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponKatana_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroWeaponKatana_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroWeaponKatana_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroWeaponKatana()
{
	if (!Z_Registration_Info_UClass_ASekiroWeaponKatana.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroWeaponKatana.OuterSingleton, Z_Construct_UClass_ASekiroWeaponKatana_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroWeaponKatana.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroWeaponKatana>()
{
	return ASekiroWeaponKatana::StaticClass();
}
ASekiroWeaponKatana::ASekiroWeaponKatana() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroWeaponKatana);
ASekiroWeaponKatana::~ASekiroWeaponKatana() {}
// End Class ASekiroWeaponKatana

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroWeaponKatana, ASekiroWeaponKatana::StaticClass, TEXT("ASekiroWeaponKatana"), &Z_Registration_Info_UClass_ASekiroWeaponKatana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroWeaponKatana), 3084666927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_574068604(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Items_Weapons_SekiroWeaponKatana_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
