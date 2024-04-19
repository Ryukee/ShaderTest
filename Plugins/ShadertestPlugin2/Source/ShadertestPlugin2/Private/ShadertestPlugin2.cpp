// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadertestPlugin2.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FShadertestPlugin2Module"

void FShadertestPlugin2Module::StartupModule()
{
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("ShadertestPlugin2"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/hgy"), PluginShaderDir);
}

void FShadertestPlugin2Module::ShutdownModule() {}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShadertestPlugin2Module, ShadertestPlugin2)