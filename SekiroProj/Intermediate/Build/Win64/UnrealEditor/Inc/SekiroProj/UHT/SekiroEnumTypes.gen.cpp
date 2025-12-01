// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/SekiroTypes/SekiroEnumTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroEnumTypes() {}

// Begin Cross Module References
SEKIROPROJ_API UEnum* Z_Construct_UEnum_SekiroProj_ESekiroConfirmType();
SEKIROPROJ_API UEnum* Z_Construct_UEnum_SekiroProj_ESekiroValidType();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Enum ESekiroConfirmType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESekiroConfirmType;
static UEnum* ESekiroConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESekiroConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESekiroConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SekiroProj_ESekiroConfirmType, (UObject*)Z_Construct_UPackage__Script_SekiroProj(), TEXT("ESekiroConfirmType"));
	}
	return Z_Registration_Info_UEnum_ESekiroConfirmType.OuterSingleton;
}
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroConfirmType>()
{
	return ESekiroConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroEnumTypes.h" },
		{ "No.Name", "ESekiroConfirmType::No" },
		{ "Yes.Name", "ESekiroConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESekiroConfirmType::Yes", (int64)ESekiroConfirmType::Yes },
		{ "ESekiroConfirmType::No", (int64)ESekiroConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SekiroProj,
	nullptr,
	"ESekiroConfirmType",
	"ESekiroConfirmType",
	Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SekiroProj_ESekiroConfirmType()
{
	if (!Z_Registration_Info_UEnum_ESekiroConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESekiroConfirmType.InnerSingleton, Z_Construct_UEnum_SekiroProj_ESekiroConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESekiroConfirmType.InnerSingleton;
}
// End Enum ESekiroConfirmType

// Begin Enum ESekiroValidType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESekiroValidType;
static UEnum* ESekiroValidType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESekiroValidType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESekiroValidType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SekiroProj_ESekiroValidType, (UObject*)Z_Construct_UPackage__Script_SekiroProj(), TEXT("ESekiroValidType"));
	}
	return Z_Registration_Info_UEnum_ESekiroValidType.OuterSingleton;
}
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroValidType>()
{
	return ESekiroValidType_StaticEnum();
}
struct Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "ESekiroValidType::Invalid" },
		{ "ModuleRelativePath", "SekiroGame/SekiroTypes/SekiroEnumTypes.h" },
		{ "Valid.Name", "ESekiroValidType::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESekiroValidType::Valid", (int64)ESekiroValidType::Valid },
		{ "ESekiroValidType::Invalid", (int64)ESekiroValidType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SekiroProj,
	nullptr,
	"ESekiroValidType",
	"ESekiroValidType",
	Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SekiroProj_ESekiroValidType()
{
	if (!Z_Registration_Info_UEnum_ESekiroValidType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESekiroValidType.InnerSingleton, Z_Construct_UEnum_SekiroProj_ESekiroValidType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESekiroValidType.InnerSingleton;
}
// End Enum ESekiroValidType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroEnumTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESekiroConfirmType_StaticEnum, TEXT("ESekiroConfirmType"), &Z_Registration_Info_UEnum_ESekiroConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4263493916U) },
		{ ESekiroValidType_StaticEnum, TEXT("ESekiroValidType"), &Z_Registration_Info_UEnum_ESekiroValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1226647659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroEnumTypes_h_2953094479(TEXT("/Script/SekiroProj"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroEnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroEnumTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
