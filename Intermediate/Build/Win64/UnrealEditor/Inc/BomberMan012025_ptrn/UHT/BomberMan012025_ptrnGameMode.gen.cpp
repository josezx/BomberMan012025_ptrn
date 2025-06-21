// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/BomberMan012025_ptrnGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan012025_ptrnGameMode() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_ABomberMan012025_ptrnGameMode();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_ABomberMan012025_ptrnGameMode_NoRegister();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AFabricaEnemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class ABomberMan012025_ptrnGameMode
void ABomberMan012025_ptrnGameMode::StaticRegisterNativesABomberMan012025_ptrnGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan012025_ptrnGameMode);
UClass* Z_Construct_UClass_ABomberMan012025_ptrnGameMode_NoRegister()
{
	return ABomberMan012025_ptrnGameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan012025_ptrnGameMode.h" },
		{ "ModuleRelativePath", "BomberMan012025_ptrnGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fabrica_enemigo_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan012025_ptrnGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fabrica_enemigo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan012025_ptrnGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::NewProp_fabrica_enemigo = { "fabrica_enemigo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan012025_ptrnGameMode, fabrica_enemigo), Z_Construct_UClass_AFabricaEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fabrica_enemigo_MetaData), NewProp_fabrica_enemigo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::NewProp_fabrica_enemigo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::ClassParams = {
	&ABomberMan012025_ptrnGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan012025_ptrnGameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan012025_ptrnGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan012025_ptrnGameMode.OuterSingleton, Z_Construct_UClass_ABomberMan012025_ptrnGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan012025_ptrnGameMode.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<ABomberMan012025_ptrnGameMode>()
{
	return ABomberMan012025_ptrnGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan012025_ptrnGameMode);
ABomberMan012025_ptrnGameMode::~ABomberMan012025_ptrnGameMode() {}
// End Class ABomberMan012025_ptrnGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_BomberMan012025_ptrnGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan012025_ptrnGameMode, ABomberMan012025_ptrnGameMode::StaticClass, TEXT("ABomberMan012025_ptrnGameMode"), &Z_Registration_Info_UClass_ABomberMan012025_ptrnGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan012025_ptrnGameMode), 4098458569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_BomberMan012025_ptrnGameMode_h_914264794(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_BomberMan012025_ptrnGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_BomberMan012025_ptrnGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
