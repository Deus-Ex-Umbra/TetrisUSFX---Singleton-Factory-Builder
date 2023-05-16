// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiece_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_I_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_Z_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_L_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_T_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_O_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_S_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_J_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuildPiece_Ingeniero_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADirectorPiece_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPiece;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceJ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceJ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceIngeniero_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceIngeniero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_director_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_director;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData[] = {
		{ "Comment", "//Aqu? se crea el ABoard y sus punteros\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "Aqu? se crea el ABoard y sus punteros" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece = { "CurrentPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, CurrentPiece), Z_Construct_UClass_APiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceI_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceI = { "pieceI", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceI), Z_Construct_UClass_ABuildPiece_I_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceZ_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceZ = { "pieceZ", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceZ), Z_Construct_UClass_ABuildPiece_Z_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceL_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceL = { "pieceL", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceL), Z_Construct_UClass_ABuildPiece_L_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceT_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceT = { "pieceT", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceT), Z_Construct_UClass_ABuildPiece_T_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceO_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceO = { "pieceO", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceO), Z_Construct_UClass_ABuildPiece_O_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceS_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceS = { "pieceS", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceS), Z_Construct_UClass_ABuildPiece_S_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceJ_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceJ = { "pieceJ", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceJ), Z_Construct_UClass_ABuildPiece_J_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceJ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceJ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_pieceIngeniero_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_pieceIngeniero = { "pieceIngeniero", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, pieceIngeniero), Z_Construct_UClass_ABuildPiece_Ingeniero_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_pieceIngeniero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_pieceIngeniero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_director_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_director = { "director", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, director), Z_Construct_UClass_ADirectorPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_director_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_director_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceJ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_pieceIngeniero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_director,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 461519897);
	template<> TETRISUSFX01_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
