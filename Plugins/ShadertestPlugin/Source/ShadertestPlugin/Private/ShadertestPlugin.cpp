// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadertestPlugin.h"

#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FShadertestPluginModule"

void FShadertestPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("ShadertestPlugin"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/ShadertestPlugin"), PluginShaderDir);
}


void FShadertestPluginModule::ShutdownModule() {}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShadertestPluginModule, ShadertestPlugin)