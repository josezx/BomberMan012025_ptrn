// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/IteradorEnemigos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIteradorEnemigos() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AContenedorEnemigo_NoRegister();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AIteradorEnemigos();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AIteradorEnemigos_NoRegister();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_UIterador_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AIteradorEnemigos
void AIteradorEnemigos::StaticRegisterNativesAIteradorEnemigos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIteradorEnemigos);
UClass* Z_Construct_UClass_AIteradorEnemigos_NoRegister()
{
	return AIteradorEnemigos::StaticClass();
}
struct Z_Construct_UClass_AIteradorEnemigos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IteradorEnemigos.h" },
		{ "ModuleRelativePath", "IteradorEnemigos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_contenedor_MetaData[] = {
		{ "ModuleRelativePath", "IteradorEnemigos.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_contenedor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIteradorEnemigos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIteradorEnemigos_Statics::NewProp_contenedor = { "contenedor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIteradorEnemigos, contenedor), Z_Construct_UClass_AContenedorEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_contenedor_MetaData), NewProp_contenedor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIteradorEnemigos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIteradorEnemigos_Statics::NewProp_contenedor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIteradorEnemigos_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIteradorEnemigos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIteradorEnemigos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIteradorEnemigos_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIterador_NoRegister, (int32)VTABLE_OFFSET(AIteradorEnemigos, IIterador), false },  // 3013245271
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIteradorEnemigos_Statics::ClassParams = {
	&AIteradorEnemigos::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIteradorEnemigos_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIteradorEnemigos_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIteradorEnemigos_Statics::Class_MetaDataParams), Z_Construct_UClass_AIteradorEnemigos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIteradorEnemigos()
{
	if (!Z_Registration_Info_UClass_AIteradorEnemigos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIteradorEnemigos.OuterSingleton, Z_Construct_UClass_AIteradorEnemigos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIteradorEnemigos.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AIteradorEnemigos>()
{
	return AIteradorEnemigos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIteradorEnemigos);
AIteradorEnemigos::~AIteradorEnemigos() {}
// End Class AIteradorEnemigos

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IteradorEnemigos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIteradorEnemigos, AIteradorEnemigos::StaticClass, TEXT("AIteradorEnemigos"), &Z_Registration_Info_UClass_AIteradorEnemigos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIteradorEnemigos), 3464585388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IteradorEnemigos_h_394749755(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IteradorEnemigos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IteradorEnemigos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
