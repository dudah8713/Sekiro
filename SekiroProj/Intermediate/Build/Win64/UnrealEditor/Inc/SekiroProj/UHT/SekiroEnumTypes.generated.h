// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SekiroGame/SekiroTypes/SekiroEnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEKIROPROJ_SekiroEnumTypes_generated_h
#error "SekiroEnumTypes.generated.h already included, missing '#pragma once' in SekiroEnumTypes.h"
#endif
#define SEKIROPROJ_SekiroEnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sekiro_SekiroProj_Source_SekiroProj_SekiroGame_SekiroTypes_SekiroEnumTypes_h


#define FOREACH_ENUM_ESEKIROCONFIRMTYPE(op) \
	op(ESekiroConfirmType::Yes) \
	op(ESekiroConfirmType::No) 

enum class ESekiroConfirmType : uint8;
template<> struct TIsUEnumClass<ESekiroConfirmType> { enum { Value = true }; };
template<> SEKIROPROJ_API UEnum* StaticEnum<ESekiroConfirmType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
