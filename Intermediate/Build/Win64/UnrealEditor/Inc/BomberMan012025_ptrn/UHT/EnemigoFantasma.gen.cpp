// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/EnemigoFantasma.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoFantasma() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigoFantasma();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigoFantasma_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AEnemigoFantasma
void AEnemigoFantasma::StaticRegisterNativesAEnemigoFantasma()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoFantasma);
UClass* Z_Construct_UClass_AEnemigoFantasma_NoRegister()
{
	return AEnemigoFantasma::StaticClass();
}
struct Z_Construct_UClass_AEnemigoFantasma_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoFantasma.h" },
		{ "ModuleRelativePath", "EnemigoFantasma.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FantasmaMesh_MetaData[] = {
		{ "Category", "EnemigoFantasma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoFantasma.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudFlotacion_MetaData[] = {
		{ "Category", "Movimiento Fantasmal" },
		{ "ModuleRelativePath", "EnemigoFantasma.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrecuenciaFlotacion_MetaData[] = {
		{ "Category", "Movimiento Fantasmal" },
		{ "ModuleRelativePath", "EnemigoFantasma.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FantasmaMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudFlotacion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrecuenciaFlotacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFantasma>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoFantasma_Statics::NewProp_FantasmaMesh = { "FantasmaMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFantasma, FantasmaMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FantasmaMesh_MetaData), NewProp_FantasmaMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoFantasma_Statics::NewProp_AmplitudFlotacion = { "AmplitudFlotacion", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFantasma, AmplitudFlotacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudFlotacion_MetaData), NewProp_AmplitudFlotacion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoFantasma_Statics::NewProp_FrecuenciaFlotacion = { "FrecuenciaFlotacion", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFantasma, FrecuenciaFlotacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrecuenciaFlotacion_MetaData), NewProp_FrecuenciaFlotacion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoFantasma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFantasma_Statics::NewProp_FantasmaMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFantasma_Statics::NewProp_AmplitudFlotacion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFantasma_Statics::NewProp_FrecuenciaFlotacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFantasma_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoFantasma_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFantasma_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoFantasma_Statics::ClassParams = {
	&AEnemigoFantasma::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoFantasma_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFantasma_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFantasma_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoFantasma_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoFantasma()
{
	if (!Z_Registration_Info_UClass_AEnemigoFantasma.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoFantasma.OuterSingleton, Z_Construct_UClass_AEnemigoFantasma_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoFantasma.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AEnemigoFantasma>()
{
	return AEnemigoFantasma::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoFantasma);
AEnemigoFantasma::~AEnemigoFantasma() {}
// End Class AEnemigoFantasma

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoFantasma_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoFantasma, AEnemigoFantasma::StaticClass, TEXT("AEnemigoFantasma"), &Z_Registration_Info_UClass_AEnemigoFantasma, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoFantasma), 607897608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoFantasma_h_2729382774(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoFantasma_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoFantasma_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
