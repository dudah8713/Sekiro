// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/UI/SekiroWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWidgetControllerParams;
#ifdef SEKIROPROJ_SekiroWidgetController_generated_h
#error "SekiroWidgetController.generated.h already included, missing '#pragma once' in SekiroWidgetController.h"
#endif
#define SEKIROPROJ_SekiroWidgetController_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics; \
	SEKIROPROJ_API static class UScriptStruct* StaticStruct();


template<> SEKIROPROJ_API UScriptStruct* StaticStruct<struct FWidgetControllerParams>();

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetControllerParams);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSekiroWidgetController(); \
	friend struct Z_Construct_UClass_USekiroWidgetController_Statics; \
public: \
	DECLARE_CLASS(USekiroWidgetController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(USekiroWidgetController)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USekiroWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USekiroWidgetController(USekiroWidgetController&&); \
	USekiroWidgetController(const USekiroWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USekiroWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USekiroWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USekiroWidgetController) \
	NO_API virtual ~USekiroWidgetController();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_42_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class USekiroWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
