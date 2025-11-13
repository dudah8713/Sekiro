// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/UI/OverlayWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_OverlayWidgetController_generated_h
#error "OverlayWidgetController.generated.h already included, missing '#pragma once' in OverlayWidgetController.h"
#endif
#define SEKIROPROJ_OverlayWidgetController_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_9_DELEGATE \
SEKIROPROJ_API void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_10_DELEGATE \
SEKIROPROJ_API void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_11_DELEGATE \
SEKIROPROJ_API void FOnStaminaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChangedSignature, float NewStamina);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_12_DELEGATE \
SEKIROPROJ_API void FOnMaxStaminaChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxStaminaChangedSignature, float NewMaxStamina);


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlayWidgetController(); \
	friend struct Z_Construct_UClass_UOverlayWidgetController_Statics; \
public: \
	DECLARE_CLASS(UOverlayWidgetController, USekiroWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SekiroProj"), NO_API) \
	DECLARE_SERIALIZER(UOverlayWidgetController)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlayWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOverlayWidgetController(UOverlayWidgetController&&); \
	UOverlayWidgetController(const UOverlayWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlayWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlayWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlayWidgetController) \
	NO_API virtual ~UOverlayWidgetController();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_16_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class UOverlayWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_UI_OverlayWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
