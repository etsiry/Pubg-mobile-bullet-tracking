#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_bp_global_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x01C4 (0x04C4 - 0x0300)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BP_Global_ShadowDistanceScale_f;                          // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalConfigTempBooleanValue;                          // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x030A(0x0002) MISSED OFFSET
	float                                              BP_Global_ShadowDistanceScale_Current_f;                  // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_String_ServerTime;                                     // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Global_IsAnniversaryNeedShow;                          // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	int                                                BP_GameGender;                                            // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String1;                        // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalTips_ColorID;                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AdvertiseNeedShowtask;                          // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsChristmasNeedShow;                            // 0x0335(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0336(0x0002) MISSED OFFSET
	int                                                BP_GlobalTips_ItemCount;                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Localize_StringWithNum_NumStringIndex;                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalConfigTempIntValue;                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	struct FBP_STRUCT_GlobalTips_Pos                   BP_STRUCT_GlobalTips_Pos;                                 // 0x034C(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_HadPlayAnimation;                                      // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	int                                                BP_Platform;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String3;                        // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  // 0x036C(0x0004) (Edit, BlueprintVisible)
	struct FBP_STRUCT_GlobalTips_TimeInfo              BP_STRUCT_GlobalTips_TimeInfo;                            // 0x0370(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_GLOBAL_USE_ITEM;                                       // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_Last_Lobby_Skin_Id;                             // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Cur_Lobby_Skin_Id;                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String2;                        // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Localize_StringWithNum_id;                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShouldRequestChatPrivacy;                              // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                BP_Global_Setting_LobbySkinId;                            // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BP_GlobalConfigTempFloatValue_f;                          // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String4;                        // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_StartUpType;                                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AndroidKey_IsValid;                             // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	struct FString                                     BP_GEM_REPORT_PARA1;                                      // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	struct FString                                     BP_Global_RechargePayPos;                                 // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_Url;                                            // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalConfigOperateResult;                             // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	int                                                BP_Global_CorpsShopLevelForRedPiont;                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSceneCameraIndex;                                   // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_EUChatRestriction;                                     // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	struct FString                                     BP_Global_AdvertiseUnitID;                                // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Global_IS_Show_10Animation;                            // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                BP_GlobalConfigOperateType;                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalHelpTips_StringID;                               // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Global_TouchTitleString;                               // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_BackpackAvatarPreviewID;                        // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Share_Platform;                                        // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalTips_ItemID;                                     // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_ReturnStr;                      // 0x0440(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	struct FBP_STRUCT_GlobalHelpTips_Pos               BP_STRUCT_GlobalHelpTips_Pos;                             // 0x0450(0x0008) (Edit, BlueprintVisible)
	struct FString                                     BP_Global_TouchTipString;                                 // 0x0458(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalSwitchLobbyMeshBgIndex;                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalConfigOperateKey;                                // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_SelfUID;                                        // 0x0474(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Global_IsResidentEvilNeedShow;                         // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	struct FString                                     BP_GlobalConfigTempStringValue;                           // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Global_HasPufferID;                                    // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                BP_ChatBan;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_Shop_Animation_Open;                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	int                                                BP_GlobalTips_PatternID;                                  // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Setting_LobbyBgmId;                             // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GEM_REPORT_PARA2;                                      // 0x04A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalTips_ShowLimitIcon;                              // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	int                                                BP_played_cg;                                             // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_PreviewItemId;                                  // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_AvatarPreviewTarget;                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventOnLobbyRecoverCamera_NoFetch();
	void EventOnLobbyRecoverCamera();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetPlayedCG_NoFetch();
	void EventSetPlayedCG();
	void EventGotoItemPreviewClick_NoFetch();
	void EventGotoItemPreviewClick();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventGotoItemPreviewPress_NoFetch();
	void EventGotoItemPreviewPress();
	void EventGlobalShowItemTips_Push_NoFetch();
	void EventGlobalShowItemTips_Push();
	void EventSwitchLobbySkinCompleted_NoFetch();
	void EventSwitchLobbySkinCompleted();
	void EventChatBanInfo_NoFetch();
	void EventChatBanInfo();
	void EventSlapJumpUrl_NoFetch();
	void EventSlapJumpUrl();
	void EventShowLoadAdvertiseError_NoFetch();
	void EventShowLoadAdvertiseError();
	void EventJumpUrl_NoFetch();
	void EventJumpUrl();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventOnLobbyCoverCamera_NoFetch();
	void EventOnLobbyCoverCamera();
	void EventUpdateServerTime_NoFetch();
	void EventUpdateServerTime();
	void EventComMsgBoxSluaClickUrl_NoFetch();
	void EventComMsgBoxSluaClickUrl();
	void EventChatCheckBan_NoFetch();
	void EventChatCheckBan();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventCheckEUChatRestriction_NoFetch();
	void EventCheckEUChatRestriction();
	void UserConstructionScript();
};


}

