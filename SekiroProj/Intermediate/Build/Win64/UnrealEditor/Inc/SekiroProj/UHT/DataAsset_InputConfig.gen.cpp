// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/Player/DataAsset_InputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_InputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_InputConfig();
SEKIROPROJ_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
SEKIROPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FSekiroInputActionConfig();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin ScriptStruct FSekiroInputActionConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SekiroInputActionConfig;
class UScriptStruct* FSekiroInputActionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SekiroInputActionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SekiroInputActionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSekiroInputActionConfig, (UObject*)Z_Construct_UPackage__Script_SekiroProj(), TEXT("SekiroInputActionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SekiroInputActionConfig.OuterSingleton;
}
template<> SEKIROPROJ_API UScriptStruct* StaticStruct<FSekiroInputActionConfig>()
{
	return FSekiroInputActionConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "SekiroInputActionConfig" },
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "SekiroInputActionConfig" },
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSekiroInputActionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSekiroInputActionConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSekiroInputActionConfig, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
	nullptr,
	&NewStructOps,
	"SekiroInputActionConfig",
	Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::PropPointers),
	sizeof(FSekiroInputActionConfig),
	alignof(FSekiroInputActionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSekiroInputActionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SekiroInputActionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SekiroInputActionConfig.InnerSingleton, Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SekiroInputActionConfig.InnerSingleton;
}
// End ScriptStruct FSekiroInputActionConfig

// Begin Class UDataAsset_InputConfig
void UDataAsset_InputConfig::StaticRegisterNativesUDataAsset_InputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_InputConfig);
UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister()
{
	return UDataAsset_InputConfig::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_InputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// EditDefaultsOnly : \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x9d\x98 \xea\xb8\xb0\xeb\xb3\xb8\xea\xb0\x92 \xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x8e\xb8\xec\xa7\x91\xea\xb0\x80\xeb\x8a\xa5, \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\xa0\x84\xec\xb2\xb4\xec\x9d\x98 \xea\xb8\xb0\xeb\xb3\xb8 \xec\x84\xa4\xec\xa0\x95\xec\x9d\x84 \xec\xa0\x95\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\n// BlueprintReadOnly : Blueprint \xea\xb7\xb8\xeb\x9e\x98\xed\x94\x84\xec\x97\x90\xec\x84\x9c Get\xec\x9d\x80 \xea\xb0\x80\xeb\x8a\xa5 Set\xec\x9d\x80 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\n//  meta = (TitleProperty = \"InputTag\")) : \xeb\xb0\xb0\xec\x97\xb4\xec\x9d\x98 \xea\xb0\x81 \xec\x9a\x94\xec\x86\x8c\xeb\xa5\xbc \xed\x91\x9c\xec\x8b\x9c\xed\x95\xa0 \xeb\x95\x8c \xec\x96\xb4\xeb\x96\xa4 \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0\xeb\xa5\xbc \xec\xa0\x9c\xeb\xaa\xa9\xec\x9c\xbc\xeb\xa1\x9c \xeb\xb3\xb4\xec\x97\xac\xec\xa4\x84\xec\xa7\x80 \xec\xa7\x80\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
		{ "TitleProperty", "InputTag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EditDefaultsOnly : \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x9d\x98 \xea\xb8\xb0\xeb\xb3\xb8\xea\xb0\x92 \xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x8e\xb8\xec\xa7\x91\xea\xb0\x80\xeb\x8a\xa5, \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\xa0\x84\xec\xb2\xb4\xec\x9d\x98 \xea\xb8\xb0\xeb\xb3\xb8 \xec\x84\xa4\xec\xa0\x95\xec\x9d\x84 \xec\xa0\x95\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\nBlueprintReadOnly : Blueprint \xea\xb7\xb8\xeb\x9e\x98\xed\x94\x84\xec\x97\x90\xec\x84\x9c Get\xec\x9d\x80 \xea\xb0\x80\xeb\x8a\xa5 Set\xec\x9d\x80 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\n meta = (TitleProperty = \"InputTag\")) : \xeb\xb0\xb0\xec\x97\xb4\xec\x9d\x98 \xea\xb0\x81 \xec\x9a\x94\xec\x86\x8c\xeb\xa5\xbc \xed\x91\x9c\xec\x8b\x9c\xed\x95\xa0 \xeb\x95\x8c \xec\x96\xb4\xeb\x96\xa4 \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0\xeb\xa5\xbc \xec\xa0\x9c\xeb\xaa\xa9\xec\x9c\xbc\xeb\xa1\x9c \xeb\xb3\xb4\xec\x97\xac\xec\xa4\x84\xec\xa7\x80 \xec\xa7\x80\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "SekiroGame/Player/DataAsset_InputConfig.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_InputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSekiroInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 3465965458
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 3465965458
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSekiroInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 3465965458
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 3465965458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams = {
	&UDataAsset_InputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_InputConfig()
{
	if (!Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton, Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<UDataAsset_InputConfig>()
{
	return UDataAsset_InputConfig::StaticClass();
}
UDataAsset_InputConfig::UDataAsset_InputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_InputConfig);
UDataAsset_InputConfig::~UDataAsset_InputConfig() {}
// End Class UDataAsset_InputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_DataAsset_InputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSekiroInputActionConfig::StaticStruct, Z_Construct_UScriptStruct_FSekiroInputActionConfig_Statics::NewStructOps, TEXT("SekiroInputActionConfig"), &Z_Registration_Info_UScriptStruct_SekiroInputActionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSekiroInputActionConfig), 3465965458U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_InputConfig, UDataAsset_InputConfig::StaticClass, TEXT("UDataAsset_InputConfig"), &Z_Registration_Info_UClass_UDataAsset_InputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_InputConfig), 2718242988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_DataAsset_InputConfig_h_1495371866(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_DataAsset_InputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_DataAsset_InputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_DataAsset_InputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Player_DataAsset_InputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
