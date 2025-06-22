// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/VisitadorRotador.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisitadorRotador() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AVisitadorRotador();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_AVisitadorRotador_NoRegister();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_UVisitante_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Class AVisitadorRotador
void AVisitadorRotador::StaticRegisterNativesAVisitadorRotador()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisitadorRotador);
UClass* Z_Construct_UClass_AVisitadorRotador_NoRegister()
{
	return AVisitadorRotador::StaticClass();
}
struct Z_Construct_UClass_AVisitadorRotador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VisitadorRotador.h" },
		{ "ModuleRelativePath", "VisitadorRotador.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisitadorRotador>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVisitadorRotador_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVisitadorRotador_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVisitadorRotador_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVisitante_NoRegister, (int32)VTABLE_OFFSET(AVisitadorRotador, IVisitante), false },  // 3630307614
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisitadorRotador_Statics::ClassParams = {
	&AVisitadorRotador::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVisitadorRotador_Statics::Class_MetaDataParams), Z_Construct_UClass_AVisitadorRotador_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVisitadorRotador()
{
	if (!Z_Registration_Info_UClass_AVisitadorRotador.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisitadorRotador.OuterSingleton, Z_Construct_UClass_AVisitadorRotador_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVisitadorRotador.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<AVisitadorRotador>()
{
	return AVisitadorRotador::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVisitadorRotador);
AVisitadorRotador::~AVisitadorRotador() {}
// End Class AVisitadorRotador

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_VisitadorRotador_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVisitadorRotador, AVisitadorRotador::StaticClass, TEXT("AVisitadorRotador"), &Z_Registration_Info_UClass_AVisitadorRotador, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisitadorRotador), 801509415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_VisitadorRotador_h_1292471615(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_VisitadorRotador_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_VisitadorRotador_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
