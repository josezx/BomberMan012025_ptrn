// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/FachadaJuego.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFachadaJuego() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AFachadaJuego();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AFachadaJuego_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AFachadaJuego
void AFachadaJuego::StaticRegisterNativesAFachadaJuego()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFachadaJuego);
UClass* Z_Construct_UClass_AFachadaJuego_NoRegister()
{
	return AFachadaJuego::StaticClass();
}
struct Z_Construct_UClass_AFachadaJuego_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FachadaJuego.h" },
		{ "ModuleRelativePath", "FachadaJuego.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFachadaJuego>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFachadaJuego_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaJuego_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFachadaJuego_Statics::ClassParams = {
	&AFachadaJuego::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaJuego_Statics::Class_MetaDataParams), Z_Construct_UClass_AFachadaJuego_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFachadaJuego()
{
	if (!Z_Registration_Info_UClass_AFachadaJuego.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFachadaJuego.OuterSingleton, Z_Construct_UClass_AFachadaJuego_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFachadaJuego.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AFachadaJuego>()
{
	return AFachadaJuego::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFachadaJuego);
AFachadaJuego::~AFachadaJuego() {}
// End Class AFachadaJuego

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FachadaJuego_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFachadaJuego, AFachadaJuego::StaticClass, TEXT("AFachadaJuego"), &Z_Registration_Info_UClass_AFachadaJuego, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFachadaJuego), 4002209565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FachadaJuego_h_217832346(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FachadaJuego_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_FachadaJuego_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
