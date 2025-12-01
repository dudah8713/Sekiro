// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/Interface/PawnCombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_PawnCombatInterface_generated_h
#error "PawnCombatInterface.generated.h already included, missing '#pragma once' in PawnCombatInterface.h"
#endif
#define SEKIROPROJ_PawnCombatInterface_generated_h

#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEKIROPROJ_API UPawnCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnCombatInterface(UPawnCombatInterface&&); \
	UPawnCombatInterface(const UPawnCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEKIROPROJ_API, UPawnCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatInterface) \
	SEKIROPROJ_API virtual ~UPawnCombatInterface();


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnCombatInterface(); \
	friend struct Z_Construct_UClass_UPawnCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UPawnCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SekiroProj"), SEKIROPROJ_API) \
	DECLARE_SERIALIZER(UPawnCombatInterface)


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnCombatInterface() {} \
public: \
	typedef UPawnCombatInterface UClassType; \
	typedef IPawnCombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_11_PROLOG
#define FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEKIROPROJ_API UClass* StaticClass<class UPawnCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_Interface_PawnCombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
