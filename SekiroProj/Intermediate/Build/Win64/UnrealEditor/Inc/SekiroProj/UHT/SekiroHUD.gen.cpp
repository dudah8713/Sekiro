// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/UI/SekiroHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroHUD();
SEKIROPROJ_API UClass* Z_Construct_UClass_ASekiroHUD_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class ASekiroHUD
void ASekiroHUD::StaticRegisterNativesASekiroHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASekiroHUD);
UClass* Z_Construct_UClass_ASekiroHUD_NoRegister()
{
	return ASekiroHUD::StaticClass();
}
struct Z_Construct_UClass_ASekiroHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SekiroGame/UI/SekiroHUD.h" },
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "SekiroHUD" },
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "SekiroHUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0 \xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac\xec\x9d\x98 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xed\x83\x80\xec\x9e\x85\xec\x9d\x84 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\xa7\x80\xec\xa0\x95\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x9d\xec\x84\xb1\xed\x95\xa0 \xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac\xec\x9d\x98 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xed\x83\x80\xec\x9e\x85\xec\x9d\x84 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\xa7\x80\xec\xa0\x95\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayWidgetController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASekiroHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroHUD, OverlayWidget), Z_Construct_UClass_USekiroUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidget_MetaData), NewProp_OverlayWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USekiroUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetClass_MetaData), NewProp_OverlayWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroHUD, OverlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetController_MetaData), NewProp_OverlayWidgetController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASekiroHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayWidgetControllerClass_MetaData), NewProp_OverlayWidgetControllerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASekiroHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidgetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASekiroHUD_Statics::NewProp_OverlayWidgetControllerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASekiroHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASekiroHUD_Statics::ClassParams = {
	&ASekiroHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASekiroHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASekiroHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASekiroHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASekiroHUD()
{
	if (!Z_Registration_Info_UClass_ASekiroHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASekiroHUD.OuterSingleton, Z_Construct_UClass_ASekiroHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASekiroHUD.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<ASekiroHUD>()
{
	return ASekiroHUD::StaticClass();
}
ASekiroHUD::ASekiroHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASekiroHUD);
ASekiroHUD::~ASekiroHUD() {}
// End Class ASekiroHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASekiroHUD, ASekiroHUD::StaticClass, TEXT("ASekiroHUD"), &Z_Registration_Info_UClass_ASekiroHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASekiroHUD), 4173960276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_1113076345(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
