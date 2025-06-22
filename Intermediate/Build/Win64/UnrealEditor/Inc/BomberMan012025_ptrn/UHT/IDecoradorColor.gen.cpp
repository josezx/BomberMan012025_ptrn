// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025_ptrn/IDecoradorColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDecoradorColor() {}

// Begin Cross Module References
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_UIDecoradorColor();
BOMBERMAN012025_PTRN_API UClass* Z_Construct_UClass_UIDecoradorColor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan012025_ptrn();
// End Cross Module References

// Begin Interface UIDecoradorColor
void UIDecoradorColor::StaticRegisterNativesUIDecoradorColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIDecoradorColor);
UClass* Z_Construct_UClass_UIDecoradorColor_NoRegister()
{
	return UIDecoradorColor::StaticClass();
}
struct Z_Construct_UClass_UIDecoradorColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IDecoradorColor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIDecoradorColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIDecoradorColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025_ptrn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDecoradorColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDecoradorColor_Statics::ClassParams = {
	&UIDecoradorColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDecoradorColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDecoradorColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDecoradorColor()
{
	if (!Z_Registration_Info_UClass_UIDecoradorColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDecoradorColor.OuterSingleton, Z_Construct_UClass_UIDecoradorColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDecoradorColor.OuterSingleton;
}
template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<UIDecoradorColor>()
{
	return UIDecoradorColor::StaticClass();
}
UIDecoradorColor::UIDecoradorColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDecoradorColor);
UIDecoradorColor::~UIDecoradorColor() {}
// End Interface UIDecoradorColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IDecoradorColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDecoradorColor, UIDecoradorColor::StaticClass, TEXT("UIDecoradorColor"), &Z_Registration_Info_UClass_UIDecoradorColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDecoradorColor), 1441953575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IDecoradorColor_h_956913510(TEXT("/Script/BomberMan012025_ptrn"),
	Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IDecoradorColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_IDecoradorColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
