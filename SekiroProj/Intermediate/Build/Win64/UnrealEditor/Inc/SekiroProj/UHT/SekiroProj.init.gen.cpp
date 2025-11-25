// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroProj_init() {}
	SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature();
	SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature();
	SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature();
	SEKIROPROJ_API UFunction* Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SekiroProj;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SekiroProj()
	{
		if (!Z_Registration_Info_UPackage__Script_SekiroProj.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SekiroProj_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SekiroProj_OnMaxHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SekiroProj_OnMaxStaminaChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SekiroProj_OnStaminaChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SekiroProj",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x38187E19,
				0x743D727C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SekiroProj.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SekiroProj.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SekiroProj(Z_Construct_UPackage__Script_SekiroProj, TEXT("/Script/SekiroProj"), Z_Registration_Info_UPackage__Script_SekiroProj, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x38187E19, 0x743D727C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
