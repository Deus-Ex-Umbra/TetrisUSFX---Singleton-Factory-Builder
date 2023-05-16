// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioFactory() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEscenarioFactory_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEscenarioFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UEscenarioFactory::StaticRegisterNativesUEscenarioFactory()
	{
	}
	UClass* Z_Construct_UClass_UEscenarioFactory_NoRegister()
	{
		return UEscenarioFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEscenarioFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscenarioFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscenarioFactory_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EscenarioFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscenarioFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEscenarioFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscenarioFactory_Statics::ClassParams = {
		&UEscenarioFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEscenarioFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscenarioFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscenarioFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscenarioFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscenarioFactory, 2941548607);
	template<> TETRISUSFX01_API UClass* StaticClass<UEscenarioFactory>()
	{
		return UEscenarioFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscenarioFactory(Z_Construct_UClass_UEscenarioFactory, &UEscenarioFactory::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UEscenarioFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscenarioFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
