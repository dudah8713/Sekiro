// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/UI/OverlayWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}

// Begin Cross Module References
SEKIROPROJ_API UClass* Z_Construct_UClass_UOverlayWidgetController();
SEKIROPROJ_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroWidgetController();
SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature();
SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature();
SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature();
SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Delegate FOnHealthChangedSignature
struct Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_SekiroProj_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SekiroProj_eventOnHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SekiroProj, nullptr, "OnHealthChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth)
{
	struct _Script_SekiroProj_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
	};
	_Script_SekiroProj_eventOnHealthChangedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChangedSignature

// Begin Delegate FOnMaxHealthChangedSignature
struct Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_SekiroProj_eventOnMaxHealthChangedSignature_Parms
	{
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SekiroProj_eventOnMaxHealthChangedSignature_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SekiroProj, nullptr, "OnMaxHealthChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnMaxHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnMaxHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth)
{
	struct _Script_SekiroProj_eventOnMaxHealthChangedSignature_Parms
	{
		float NewMaxHealth;
	};
	_Script_SekiroProj_eventOnMaxHealthChangedSignature_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnMaxHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMaxHealthChangedSignature

// Begin Delegate FOnStaminaChangedSignature
struct Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics
{
	struct _Script_SekiroProj_eventOnStaminaChangedSignature_Parms
	{
		float NewStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::NewProp_NewStamina = { "NewStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SekiroProj_eventOnStaminaChangedSignature_Parms, NewStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::NewProp_NewStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SekiroProj, nullptr, "OnStaminaChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnStaminaChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnStaminaChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChangedSignature, float NewStamina)
{
	struct _Script_SekiroProj_eventOnStaminaChangedSignature_Parms
	{
		float NewStamina;
	};
	_Script_SekiroProj_eventOnStaminaChangedSignature_Parms Parms;
	Parms.NewStamina=NewStamina;
	OnStaminaChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStaminaChangedSignature

// Begin Delegate FOnMaxStaminaChangedSignature
struct Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics
{
	struct _Script_SekiroProj_eventOnMaxStaminaChangedSignature_Parms
	{
		float NewMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::NewProp_NewMaxStamina = { "NewMaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SekiroProj_eventOnMaxStaminaChangedSignature_Parms, NewMaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::NewProp_NewMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SekiroProj, nullptr, "OnMaxStaminaChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnMaxStaminaChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::_Script_SekiroProj_eventOnMaxStaminaChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaxStaminaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxStaminaChangedSignature, float NewMaxStamina)
{
	struct _Script_SekiroProj_eventOnMaxStaminaChangedSignature_Parms
	{
		float NewMaxStamina;
	};
	_Script_SekiroProj_eventOnMaxStaminaChangedSignature_Parms Parms;
	Parms.NewMaxStamina=NewMaxStamina;
	OnMaxStaminaChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMaxStaminaChangedSignature

// Begin Class UOverlayWidgetController
void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidgetController);
UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
{
	return UOverlayWidgetController::StaticClass();
}
struct Z_Construct_UClass_UOverlayWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/UI/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxStaminaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "SekiroGame/UI/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxStaminaChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1570312161
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 2700135089
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnStaminaChanged = { "OnStaminaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnStaminaChanged), Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaChanged_MetaData), NewProp_OnStaminaChanged_MetaData) }; // 1330760695
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxStaminaChanged = { "OnMaxStaminaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxStaminaChanged), Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxStaminaChanged_MetaData), NewProp_OnMaxStaminaChanged_MetaData) }; // 3919546866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnStaminaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxStaminaChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USekiroWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
	&UOverlayWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverlayWidgetController()
{
	if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<UOverlayWidgetController>()
{
	return UOverlayWidgetController::StaticClass();
}
UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
UOverlayWidgetController::~UOverlayWidgetController() {}
// End Class UOverlayWidgetController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 239337809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_3291211191(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
