// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectBladeGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTBLADE_ProjectBladeGameMode_generated_h
#error "ProjectBladeGameMode.generated.h already included, missing '#pragma once' in ProjectBladeGameMode.h"
#endif
#define PROJECTBLADE_ProjectBladeGameMode_generated_h

#define FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectBladeGameMode(); \
	friend struct Z_Construct_UClass_AProjectBladeGameMode_Statics; \
public: \
	DECLARE_CLASS(AProjectBladeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectBlade"), PROJECTBLADE_API) \
	DECLARE_SERIALIZER(AProjectBladeGameMode)


#define FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectBladeGameMode(AProjectBladeGameMode&&); \
	AProjectBladeGameMode(const AProjectBladeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTBLADE_API, AProjectBladeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectBladeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectBladeGameMode) \
	PROJECTBLADE_API virtual ~AProjectBladeGameMode();


#define FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_9_PROLOG
#define FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTBLADE_API UClass* StaticClass<class AProjectBladeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
