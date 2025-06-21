// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/EnemigoGelato.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoGelato() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigoGelato();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigoGelato_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AEnemigoGelato
void AEnemigoGelato::StaticRegisterNativesAEnemigoGelato()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoGelato);
UClass* Z_Construct_UClass_AEnemigoGelato_NoRegister()
{
	return AEnemigoGelato::StaticClass();
}
struct Z_Construct_UClass_AEnemigoGelato_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoGelato.h" },
		{ "ModuleRelativePath", "EnemigoGelato.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GelatoMesh_MetaData[] = {
		{ "Category", "EnemigoGelato" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoGelato.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoGelato.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudOnda_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoGelato.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrecuenciaOnda_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoGelato.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GelatoMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudOnda;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrecuenciaOnda;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoGelato>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_GelatoMesh = { "GelatoMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoGelato, GelatoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GelatoMesh_MetaData), NewProp_GelatoMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoGelato, Velocidad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocidad_MetaData), NewProp_Velocidad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_AmplitudOnda = { "AmplitudOnda", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoGelato, AmplitudOnda), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudOnda_MetaData), NewProp_AmplitudOnda_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_FrecuenciaOnda = { "FrecuenciaOnda", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoGelato, FrecuenciaOnda), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrecuenciaOnda_MetaData), NewProp_FrecuenciaOnda_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoGelato_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_GelatoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_Velocidad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_AmplitudOnda,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoGelato_Statics::NewProp_FrecuenciaOnda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGelato_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoGelato_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGelato_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoGelato_Statics::ClassParams = {
	&AEnemigoGelato::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoGelato_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGelato_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGelato_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoGelato_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoGelato()
{
	if (!Z_Registration_Info_UClass_AEnemigoGelato.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoGelato.OuterSingleton, Z_Construct_UClass_AEnemigoGelato_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoGelato.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AEnemigoGelato>()
{
	return AEnemigoGelato::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoGelato);
AEnemigoGelato::~AEnemigoGelato() {}
// End Class AEnemigoGelato

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoGelato_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoGelato, AEnemigoGelato::StaticClass, TEXT("AEnemigoGelato"), &Z_Registration_Info_UClass_AEnemigoGelato, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoGelato), 142223359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoGelato_h_3952821274(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoGelato_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoGelato_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
