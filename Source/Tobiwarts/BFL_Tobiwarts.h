// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CString.h"
#include "BFL_Tobiwarts.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class UBFL_Tobiwarts : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "TakeScreenShot")
		void TakeScreenShot(const FString& Filename, bool bShowUI);

	UFUNCTION(BlueprintCallable, Category = "GetFile")
		FString GetFile(const FString& Filename);
};
