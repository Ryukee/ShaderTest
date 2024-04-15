#pragma once

#include "BluePrintTest.generated.h"

UCLASS()
class UBluePrintTest : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category="UBluePrintTest")
	static void Method1();
	
};