// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/ContenedorEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContenedorEnemigo() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AContenedorEnemigo();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AContenedorEnemigo_NoRegister();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_UIterable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AContenedorEnemigo
void AContenedorEnemigo::StaticRegisterNativesAContenedorEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AContenedorEnemigo);
UClass* Z_Construct_UClass_AContenedorEnemigo_NoRegister()
{
	return AContenedorEnemigo::StaticClass();
}
struct Z_Construct_UClass_AContenedorEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ContenedorEnemigo.h" },
		{ "ModuleRelativePath", "ContenedorEnemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemigos_MetaData[] = {
		{ "ModuleRelativePath", "ContenedorEnemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_enemigos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_enemigos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContenedorEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContenedorEnemigo_Statics::NewProp_enemigos_Inner = { "enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AContenedorEnemigo_Statics::NewProp_enemigos = { "enemigos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContenedorEnemigo, enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemigos_MetaData), NewProp_enemigos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AContenedorEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContenedorEnemigo_Statics::NewProp_enemigos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContenedorEnemigo_Statics::NewProp_enemigos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AContenedorEnemigo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AContenedorEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AContenedorEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AContenedorEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIterable_NoRegister, (int32)VTABLE_OFFSET(AContenedorEnemigo, IIterable), false },  // 4139632088
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AContenedorEnemigo_Statics::ClassParams = {
	&AContenedorEnemigo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AContenedorEnemigo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AContenedorEnemigo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContenedorEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AContenedorEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AContenedorEnemigo()
{
	if (!Z_Registration_Info_UClass_AContenedorEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AContenedorEnemigo.OuterSingleton, Z_Construct_UClass_AContenedorEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AContenedorEnemigo.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AContenedorEnemigo>()
{
	return AContenedorEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AContenedorEnemigo);
AContenedorEnemigo::~AContenedorEnemigo() {}
// End Class AContenedorEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_ContenedorEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AContenedorEnemigo, AContenedorEnemigo::StaticClass, TEXT("AContenedorEnemigo"), &Z_Registration_Info_UClass_AContenedorEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AContenedorEnemigo), 1754325091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_ContenedorEnemigo_h_3880453772(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_ContenedorEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_ContenedorEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
