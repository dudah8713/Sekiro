// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/UI/SekiroUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SEKIROPROJ_SekiroUserWidget_generated_h
#error "SekiroUserWidget.generated.h already included, missing '#pragma once' in SekiroUserWidget.h"
#endif
#define SEKIROPROJ_SekiroUserWidget_generated_h

#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetController);


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_CALLBACK_WRAPPERS
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSekiroUserWidget(); \
	friend struct Z_Construct_UClass_USekiroUserWidget_Statics; \
public: \
	DECLARE_CLASS(USekiroUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(USekiroUserWidget)


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USekiroUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USekiroUserWidget(USekiroUserWidget&&); \
	USekiroUserWidget(const USekiroUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USekiroUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USekiroUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USekiroUserWidget) \
	NO_API virtual ~USekiroUserWidget();


#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_12_PROLOG
#define FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_CALLBACK_WRAPPERS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class USekiroUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_SekiroUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
