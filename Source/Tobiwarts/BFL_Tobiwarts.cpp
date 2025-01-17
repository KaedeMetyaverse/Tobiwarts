// Fill out your copyright notice in the Description page of Project Settings.


#include "BFL_Tobiwarts.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CString.h"
#include "UnrealClient.h"
#include "Paths.h"

void UBFL_Tobiwarts::TakeScreenShot(const FString& Filename, bool bShowUI) {
	const FString ImageDirectory = FString::Printf(TEXT("%s/%s"), *FPaths::ProjectDir(), TEXT("Screenshots"));
	const FString ImageFilename = FString::Printf(TEXT("%s/Screenshot_%s.png"), *ImageDirectory, *Filename);
	FScreenshotRequest::RequestScreenshot(ImageFilename, bShowUI, false);
}

FString UBFL_Tobiwarts::GetFile(const FString& Filename) {
	const FString ImageDirectory = FString::Printf(TEXT("%s/%s"), *FPaths::ProjectDir(), TEXT("Screenshots"));
	const FString ImageFilename = FString::Printf(TEXT("%s/Screenshot_%s.png"), *ImageDirectory, *Filename);
	return ImageFilename;
}