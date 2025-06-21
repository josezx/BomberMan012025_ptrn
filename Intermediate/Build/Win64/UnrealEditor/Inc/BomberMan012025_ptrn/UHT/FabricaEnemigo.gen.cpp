// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/FabricaEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEnemigo() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AFabricaEnemigo();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AFabricaEnemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AFabricaEnemigo
void AFabricaEnemigo::StaticRegisterNativesAFabricaEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaEnemigo);
UClass* Z_Construct_UClass_AFabricaEnemigo_NoRegister()
{
	return AFabricaEnemigo::StaticClass();
}
struct Z_Construct_UClass_AFabricaEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaEnemigo.h" },
		{ "ModuleRelativePath", "FabricaEnemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEnemigo_Statics::ClassParams = {
	&AFabricaEnemigo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaEnemigo()
{
	if (!Z_Registration_Info_UClass_AFabricaEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaEnemigo.OuterSingleton, Z_Construct_UClass_AFabricaEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaEnemigo.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AFabricaEnemigo>()
{
	return AFabricaEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEnemigo);
AFabricaEnemigo::~AFabricaEnemigo() {}
// End Class AFabricaEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FabricaEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaEnemigo, AFabricaEnemigo::StaticClass, TEXT("AFabricaEnemigo"), &Z_Registration_Info_UClass_AFabricaEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaEnemigo), 1774573772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FabricaEnemigo_h_3011760741(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FabricaEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FabricaEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
