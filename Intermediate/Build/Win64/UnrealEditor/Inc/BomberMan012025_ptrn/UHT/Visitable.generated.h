// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visitable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN012025_PTRN_Visitable_generated_h
#error "Visitable.generated.h already included, missing '#pragma once' in Visitable.h"
#endif
#define BOMBERMAN012025_PTRN_Visitable_generated_h

#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN012025_PTRN_API UVisitable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisitable(UVisitable&&); \
	UVisitable(const UVisitable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN012025_PTRN_API, UVisitable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisitable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisitable) \
	BOMBERMAN012025_PTRN_API virtual ~UVisitable();


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVisitable(); \
	friend struct Z_Construct_UClass_UVisitable_Statics; \
public: \
	DECLARE_CLASS(UVisitable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan012025_ptrn"), BOMBERMAN012025_PTRN_API) \
	DECLARE_SERIALIZER(UVisitable)


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_GENERATED_UINTERFACE_BODY() \
	FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVisitable() {} \
public: \
	typedef UVisitable UClassType; \
	typedef IVisitable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_11_PROLOG
#define FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN012025_PTRN_API UClass* StaticClass<class UVisitable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan012025_ptrn_Source_BomberMan012025_ptrn_Visitable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
