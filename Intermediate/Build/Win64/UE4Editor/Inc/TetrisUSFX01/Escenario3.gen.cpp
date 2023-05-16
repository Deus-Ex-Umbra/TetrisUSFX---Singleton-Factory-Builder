// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Escenario3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenario3() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario3_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario3();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEscenarioFactory_NoRegister();
// End Cross Module References
	void AEscenario3::StaticRegisterNativesAEscenario3()
	{
	}
	UClass* Z_Construct_UClass_AEscenario3_NoRegister()
	{
		return AEscenario3::StaticClass();
	}
	struct Z_Construct_UClass_AEscenario3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenario3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenario3_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escenario3.h" },
		{ "ModuleRelativePath", "Escenario3.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEscenario3_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEscenarioFactory_NoRegister, (int32)VTABLE_OFFSET(AEscenario3, IEscenarioFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenario3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenario3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenario3_Statics::ClassParams = {
		&AEscenario3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenario3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenario3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenario3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenario3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenario3, 3699027627);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenario3>()
	{
		return AEscenario3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenario3(Z_Construct_UClass_AEscenario3, &AEscenario3::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenario3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenario3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
