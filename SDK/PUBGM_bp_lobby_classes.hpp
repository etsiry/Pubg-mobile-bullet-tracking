#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_bp_lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x01A4 (0x04A4 - 0x0300)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_PlayerLevel;                                           // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerTicket;                                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraBlendTime;                            // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_PlayerDiamondShow;                                     // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	int                                                BP_PlayerAliasID;                                         // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerQQVip;                                           // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerIconUrl;                                         // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x0328(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_LobbyLogic_ClassPath;                                  // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerDiamond;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DataMgrInit;                                              // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x0348(0x0084) (Edit, BlueprintVisible)
	bool                                               BP_Lobby_BgResidentEvilThemeSwitch;                       // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgAnniversaryThemeSwitch;                        // 0x03CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	struct FString                                     BP_LobbyBubble_CurCdn;                                    // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyBubble_CurItemID;                                 // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                G_Index_In_Login;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerUid;                                             // 0x03E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x03F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ClickTimeNotBind;                                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraIndex;                                // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_UserHideLobbyAutoAdaptBox;                             // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_RankChange;                                      // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	int                                                BP_PlayerGold;                                            // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SystemTargetCameraSysName;                             // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerAliasNation;                                     // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerName;                                            // 0x0430(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SystemTargetCameraBlendTime;                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyPlayerNum;                                        // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SystemTargetCameraIndex;                               // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LOBBY_AdjustURL;                                       // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x0454(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x0460(0x0008) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerAliasTitle;                                      // 0x0474(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerExp;                                             // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgIceThemeSwitch;                                // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	int                                                BP_PlayerFpToken;                                         // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ClickTimeBind;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGender;                                          // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	int                                                G_Index_In_Collect;                                       // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_CurSkinId;                                       // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSwitchLobbyCameraByIndex_NoFetch();
	void EventSwitchLobbyCameraByIndex();
	void EventLobbyAndroidBack_NoFetch();
	void EventLobbyAndroidBack();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventEnterRoleInfo_NoFetch();
	void EventEnterRoleInfo();
	void EventSimulateTestReConnect_NoFetch();
	void EventSimulateTestReConnect();
	void EventShowLobbyGM_NoFetch();
	void EventShowLobbyGM();
	void EventOpenPDDSystem_NoFetch();
	void EventOpenPDDSystem();
	void UserConstructionScript();
};


}

