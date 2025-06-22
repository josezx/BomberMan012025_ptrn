// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/EnemigoShark.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoShark() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigoShark();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigoShark_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AEnemigoShark
void AEnemigoShark::StaticRegisterNativesAEnemigoShark()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoShark);
UClass* Z_Construct_UClass_AEnemigoShark_NoRegister()
{
	return AEnemigoShark::StaticClass();
}
struct Z_Construct_UClass_AEnemigoShark_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoShark.h" },
		{ "ModuleRelativePath", "EnemigoShark.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharkMesh_MetaData[] = {
		{ "Category", "EnemigoShark" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoShark.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoShark.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitud_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoShark.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frecuencia_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoShark.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharkMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitud;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frecuencia;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoShark>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoShark_Statics::NewProp_SharkMesh = { "SharkMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoShark, SharkMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharkMesh_MetaData), NewProp_SharkMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoShark_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoShark, Velocidad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocidad_MetaData), NewProp_Velocidad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoShark_Statics::NewProp_Amplitud = { "Amplitud", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoShark, Amplitud), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitud_MetaData), NewProp_Amplitud_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoShark_Statics::NewProp_Frecuencia = { "Frecuencia", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoShark, Frecuencia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frecuencia_MetaData), NewProp_Frecuencia_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoShark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoShark_Statics::NewProp_SharkMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoShark_Statics::NewProp_Velocidad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoShark_Statics::NewProp_Amplitud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoShark_Statics::NewProp_Frecuencia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoShark_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoShark_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoShark_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoShark_Statics::ClassParams = {
	&AEnemigoShark::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoShark_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoShark_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoShark_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoShark_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoShark()
{
	if (!Z_Registration_Info_UClass_AEnemigoShark.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoShark.OuterSingleton, Z_Construct_UClass_AEnemigoShark_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoShark.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AEnemigoShark>()
{
	return AEnemigoShark::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoShark);
AEnemigoShark::~AEnemigoShark() {}
// End Class AEnemigoShark

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoShark_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoShark, AEnemigoShark::StaticClass, TEXT("AEnemigoShark"), &Z_Registration_Info_UClass_AEnemigoShark, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoShark), 1524589403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoShark_h_520430047(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoShark_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_EnemigoShark_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
