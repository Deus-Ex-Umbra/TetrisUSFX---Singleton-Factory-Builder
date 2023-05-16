// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BuildPieza_ExplosivaAmarilla.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildPieza_ExplosivaAmarilla() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderPiece_NoRegister();
// End Cross Module References
	void ABuildPieza_ExplosivaAmarilla::StaticRegisterNativesABuildPieza_ExplosivaAmarilla()
	{
	}
	UClass* Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_NoRegister()
	{
		return ABuildPieza_ExplosivaAmarilla::StaticClass();
	}
	struct Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildPieza_ExplosivaAmarilla.h" },
		{ "ModuleRelativePath", "BuildPieza_ExplosivaAmarilla.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BuildPieza_ExplosivaAmarilla.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildPieza_ExplosivaAmarilla, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::NewProp_SceneComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPiece_NoRegister, (int32)VTABLE_OFFSET(ABuildPieza_ExplosivaAmarilla, IBuilderPiece), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildPieza_ExplosivaAmarilla>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::ClassParams = {
		&ABuildPieza_ExplosivaAmarilla::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildPieza_ExplosivaAmarilla, 2560931118);
	template<> TETRISUSFX01_API UClass* StaticClass<ABuildPieza_ExplosivaAmarilla>()
	{
		return ABuildPieza_ExplosivaAmarilla::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildPieza_ExplosivaAmarilla(Z_Construct_UClass_ABuildPieza_ExplosivaAmarilla, &ABuildPieza_ExplosivaAmarilla::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABuildPieza_ExplosivaAmarilla"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildPieza_ExplosivaAmarilla);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
