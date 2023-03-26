// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaoticDreams/ChaoticDreamsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoticDreamsGameModeBase() {}
// Cross Module References
	CHAOTICDREAMS_API UClass* Z_Construct_UClass_AChaoticDreamsGameModeBase();
	CHAOTICDREAMS_API UClass* Z_Construct_UClass_AChaoticDreamsGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ChaoticDreams();
// End Cross Module References
	void AChaoticDreamsGameModeBase::StaticRegisterNativesAChaoticDreamsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaoticDreamsGameModeBase);
	UClass* Z_Construct_UClass_AChaoticDreamsGameModeBase_NoRegister()
	{
		return AChaoticDreamsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaoticDreams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ChaoticDreamsGameModeBase.h" },
		{ "ModuleRelativePath", "ChaoticDreamsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaoticDreamsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::ClassParams = {
		&AChaoticDreamsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChaoticDreamsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AChaoticDreamsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaoticDreamsGameModeBase.OuterSingleton, Z_Construct_UClass_AChaoticDreamsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChaoticDreamsGameModeBase.OuterSingleton;
	}
	template<> CHAOTICDREAMS_API UClass* StaticClass<AChaoticDreamsGameModeBase>()
	{
		return AChaoticDreamsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaoticDreamsGameModeBase);
	AChaoticDreamsGameModeBase::~AChaoticDreamsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_ChaoticDreams_Source_ChaoticDreams_ChaoticDreamsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChaoticDreams_Source_ChaoticDreams_ChaoticDreamsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChaoticDreamsGameModeBase, AChaoticDreamsGameModeBase::StaticClass, TEXT("AChaoticDreamsGameModeBase"), &Z_Registration_Info_UClass_AChaoticDreamsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaoticDreamsGameModeBase), 1256428317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChaoticDreams_Source_ChaoticDreams_ChaoticDreamsGameModeBase_h_395922407(TEXT("/Script/ChaoticDreams"),
		Z_CompiledInDeferFile_FID_ChaoticDreams_Source_ChaoticDreams_ChaoticDreamsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChaoticDreams_Source_ChaoticDreams_ChaoticDreamsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
