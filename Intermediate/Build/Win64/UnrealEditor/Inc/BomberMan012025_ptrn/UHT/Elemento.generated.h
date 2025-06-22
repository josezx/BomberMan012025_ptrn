// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elemento.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN012025_PTRN_Elemento_generated_h
#error "Elemento.generated.h already included, missing '#pragma once' in Elemento.h"
#endif
#define BOMBERMAN012025_PTRN_Elemento_generated_h

#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN012025_PTRN_API UElemento(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UElemento(UElemento&&); \
	UElemento(const UElemento&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN012025_PTRN_API, UElemento); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElemento); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElemento) \
	BOMBERMAN012025_PTRN_API virtual ~UElemento();


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUElemento(); \
	friend struct Z_Construct_UClass_UElemento_Statics; \
public: \
	DECLARE_CLASS(UElemento, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan012025_ptrn"), BOMBERMAN012025_PTRN_API) \
	DECLARE_SERIALIZER(UElemento)


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_GENERATED_UINTERFACE_BODY() \
	FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IElemento() {} \
public: \
	typedef UElemento UClassType; \
	typedef IElemento ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_10_PROLOG
#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<class UElemento>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Elemento_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
