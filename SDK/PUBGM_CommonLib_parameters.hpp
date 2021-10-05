#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_CommonLib_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile
struct URuntimeFilesDownloaderLibrary_DownloadFile_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     savePath;                                                 // (Parm, ZeroConstructor)
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader
struct URuntimeFilesDownloaderLibrary_CreateDownloader_Params
{
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonLib.ServiceManager.UnregisterService
struct UServiceManager_UnregisterService_Params
{
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
};

// Function CommonLib.ServiceManager.RegisterService
struct UServiceManager_RegisterService_Params
{
	class UObject*                                     Service;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
};

// Function CommonLib.ServiceManager.GetService
struct UServiceManager_GetService_Params
{
	class UClass*                                      ServiceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     serviceName;                                              // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

