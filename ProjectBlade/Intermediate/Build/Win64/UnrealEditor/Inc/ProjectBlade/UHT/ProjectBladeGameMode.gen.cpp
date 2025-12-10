// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectBlade/ProjectBladeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectBladeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTBLADE_API UClass* Z_Construct_UClass_AProjectBladeGameMode();
PROJECTBLADE_API UClass* Z_Construct_UClass_AProjectBladeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectBlade();
// End Cross Module References

// Begin Class AProjectBladeGameMode
void AProjectBladeGameMode::StaticRegisterNativesAProjectBladeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectBladeGameMode);
UClass* Z_Construct_UClass_AProjectBladeGameMode_NoRegister()
{
	return AProjectBladeGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectBladeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectBladeGameMode.h" },
		{ "ModuleRelativePath", "ProjectBladeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectBladeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectBladeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectBlade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectBladeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectBladeGameMode_Statics::ClassParams = {
	&AProjectBladeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectBladeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectBladeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectBladeGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectBladeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectBladeGameMode.OuterSingleton, Z_Construct_UClass_AProjectBladeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectBladeGameMode.OuterSingleton;
}
template<> PROJECTBLADE_API UClass* StaticClass<AProjectBladeGameMode>()
{
	return AProjectBladeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectBladeGameMode);
AProjectBladeGameMode::~AProjectBladeGameMode() {}
// End Class AProjectBladeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectBladeGameMode, AProjectBladeGameMode::StaticClass, TEXT("AProjectBladeGameMode"), &Z_Registration_Info_UClass_AProjectBladeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectBladeGameMode), 3264060735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_2384996631(TEXT("/Script/ProjectBlade"),
	Z_CompiledInDeferFile_FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBlade_Source_ProjectBlade_ProjectBladeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
