// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SekiroProj/SekiroGame/UI/SekiroUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSekiroUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroUserWidget();
SEKIROPROJ_API UClass* Z_Construct_UClass_USekiroUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SekiroProj();
// End Cross Module References

// Begin Class USekiroUserWidget Function SetWidgetController
struct Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics
{
	struct SekiroUserWidget_eventSetWidgetController_Parms
	{
		UObject* InWidgetController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SekiroUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::SekiroUserWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::SekiroUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USekiroUserWidget_SetWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroUserWidget_SetWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USekiroUserWidget::execSetWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_InWidgetController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetController(Z_Param_InWidgetController);
	P_NATIVE_END;
}
// End Class USekiroUserWidget Function SetWidgetController

// Begin Class USekiroUserWidget Function WidgetControllerSet
static const FName NAME_USekiroUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
void USekiroUserWidget::WidgetControllerSet()
{
	UFunction* Func = FindFunctionChecked(NAME_USekiroUserWidget_WidgetControllerSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USekiroUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USekiroUserWidget Function WidgetControllerSet

// Begin Class USekiroUserWidget
void USekiroUserWidget::StaticRegisterNativesUSekiroUserWidget()
{
	UClass* Class = USekiroUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetController", &USekiroUserWidget::execSetWidgetController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USekiroUserWidget);
UClass* Z_Construct_UClass_USekiroUserWidget_NoRegister()
{
	return USekiroUserWidget::StaticClass();
}
struct Z_Construct_UClass_USekiroUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SekiroGame/UI/SekiroUserWidget.h" },
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[] = {
		{ "Category", "SekiroUserWidget" },
		{ "ModuleRelativePath", "SekiroGame/UI/SekiroUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USekiroUserWidget_SetWidgetController, "SetWidgetController" }, // 3611881352
		{ &Z_Construct_UFunction_USekiroUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 3524741606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USekiroUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USekiroUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USekiroUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetController_MetaData), NewProp_WidgetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USekiroUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USekiroUserWidget_Statics::NewProp_WidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USekiroUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SekiroProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USekiroUserWidget_Statics::ClassParams = {
	&USekiroUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USekiroUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USekiroUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USekiroUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USekiroUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USekiroUserWidget()
{
	if (!Z_Registration_Info_UClass_USekiroUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USekiroUserWidget.OuterSingleton, Z_Construct_UClass_USekiroUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USekiroUserWidget.OuterSingleton;
}
template<> SEKIROPROJ_API UClass* StaticClass<USekiroUserWidget>()
{
	return USekiroUserWidget::StaticClass();
}
USekiroUserWidget::USekiroUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USekiroUserWidget);
USekiroUserWidget::~USekiroUserWidget() {}
// End Class USekiroUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USekiroUserWidget, USekiroUserWidget::StaticClass, TEXT("USekiroUserWidget"), &Z_Registration_Info_UClass_USekiroUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USekiroUserWidget), 1266732928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_3731131534(TEXT("/Script/SekiroProj"),
	Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
