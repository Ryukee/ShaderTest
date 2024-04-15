#include "BluePrintTest.h"

UBluePrintTest::UBluePrintTest(const FObjectInitializer& ObjectInitializer)  
	: Super(ObjectInitializer)  
{  
 
}

void UBluePrintTest::Method1()
{
	FString DebugMsg = FString::Printf(TEXT("Move forward: %s"), *FString::SanitizeFloat(1.0f)); 
	int32 key = 1;
	GEngine->AddOnScreenDebugMessage(key, 1, FColor::Green, DebugMsg);
	
	UE_LOG(LogBlueprint, Display, TEXT("hgy - log"));
}
