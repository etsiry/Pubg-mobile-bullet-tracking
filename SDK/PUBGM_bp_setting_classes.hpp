#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_bp_setting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting.bp_setting_C
// 0x0218 (0x0518 - 0x0300)
class Abp_setting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SHOW_XGPUSH_OFF_GLOBAL;                                // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingLobbyIsShowChristmas;                           // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	int                                                BP_BindRetCode;                                           // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingFresherType;                                    // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_IMSDKTipMsgBtnOKEvent;                         // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_JK;                                   // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_UI;                                 // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexVehicle;                                   // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindThirdRetCode;                                      // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_Unbind_Channel;                                // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Unbind_Days;                                   // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexPicture;                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Unbind_IsShow;                                 // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	int                                                showRoleInSending;                                        // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Is_In_Debug_Mode;                                      // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                BP_BindChannel;                                           // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_GLOBAL;                               // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInGame;                                              // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	int                                                BP_BindExtType;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_krjp_del_account_left_time;                            // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingCurrentOpenPage;                                // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowEscapeNotice;                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BasicSettingForbidFollowJump;                          // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	int                                                BP_LoginChannel;                                          // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_KRJPDelAccountSwitch;                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowHistory;                                 // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	struct FString                                     BP_SettingPlayerUID;                                      // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingBattleWatchingDetailFlag;                       // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingShowWatchingFlag;                               // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPickup;                                    // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingPlayerLevel;                                    // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexEffect;                                    // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingSelectedPage;                                   // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexMirrativ;                                  // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanModify_QualityFPS;                           // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	struct FString                                     BP_UrlStr3;                                               // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HelpshiftRequestCD;                                       // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_IMSDKNotifyEvent;                              // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsWatchingOpen;                                 // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexSound;                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingSecondLoginStrChannel;                          // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingLobbyBgmID;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShapedScreenCurrentSelectType;                         // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_UnbindPlatformName;                            // 0x03C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GradeSeparation_UrlStr;                                // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Unknow_Pass_Switch_Battle_Show;                        // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_New_SDK_Switch;                                // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
	int                                                BP_ProfiledScreenValue;                                   // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Record_Show;                        // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInLobby;                                             // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_SettingLoginTypeOrderList;                       // 0x03EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_UrlStr2;                                               // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SHOW_XGPUSH_OFF_JK;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsSensitivitySavedInCloud;                             // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                BP_XGPUSH_OFF_TIP_CODE;                                   // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SettingSensitivity               BP_STRUCT_SettingSensitivity;                             // 0x0410(0x0090) (Edit, BlueprintVisible)
	bool                                               BP_Setting_Social_Friend_Switch;                          // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexOperate;                                   // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSettingPage;                                        // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Set_Time;                               // 0x04AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexAimingMirrior;                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelpshiftLastRequestTime;                                 // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingMaxLoginTypeNum;                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_DiyLimitLevel;                                         // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingLobbySkinID;                                    // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Name;                                   // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexLanguage;                                  // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShapedScreenType;                                      // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOther;                                     // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Stranger_Switch;                        // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowRole;                                    // 0x04E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingBattleWatchingDetailOpen;                       // 0x04E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x04E7(0x0001) MISSED OFFSET
	int                                                BP_SettingIndexDownload;                                  // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_JP_Mirrativ_Show;                                      // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexSensibility;                               // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingFirstLoginStrChannel;                           // 0x04F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexOBS;                                       // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexBasic;                                     // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ProfiledScreenCurrentSelectValue;                      // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexInfoBinding;                               // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CanShowOtherTab;                                       // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0514(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting.bp_setting_C");
		return pStaticClass;
	}


	void EventShowXGPushOpenTip_NoFetch();
	void EventShowXGPushOpenTip();
	void EventBasicSettingAutoFollowJumpSwitch_NoFetch();
	void EventBasicSettingAutoFollowJumpSwitch();
	void EventSettingShowCurrentTicket_NoFetch();
	void EventSettingShowCurrentTicket();
	void EventSettingSetLobbySkinIDToNotify_NoFetch();
	void EventSettingSetLobbySkinIDToNotify();
	void EventSettingNotSupportHDR_NoFetch();
	void EventSettingNotSupportHDR();
	void EventSettingPanelAskAlreadyBindFB_NoFetch();
	void EventSettingPanelAskAlreadyBindFB();
	void EventSendLanguageSettingToServer_NoFetch();
	void EventSendLanguageSettingToServer();
	void EventSettingPanelHideConnectingUI_NoFetch();
	void EventSettingPanelHideConnectingUI();
	void EventClickSwitchButton_NoFetch();
	void EventClickSwitchButton();
	void EventShowNotInstallWechatMsg_NoFetch();
	void EventShowNotInstallWechatMsg();
	void EventHelpshiftShowConversation_NoFetch();
	void EventHelpshiftShowConversation();
	void EventHelpshiftSetRedPoints_NoFetch();
	void EventHelpshiftSetRedPoints();
	void EventRefreshSettingRedPoint_NoFetch();
	void EventRefreshSettingRedPoint();
	void EventChangeShapedScreenConfirm_NoFetch();
	void EventChangeShapedScreenConfirm();
	void EventShowNoticeFromObserveToLobby_NoFetch();
	void EventShowNoticeFromObserveToLobby();
	void EventShowBackToLobbyNotice_NoFetch();
	void EventShowBackToLobbyNotice();
	void EventGCLoginTimeOut_NoFetch();
	void EventGCLoginTimeOut();
	void EventHideAllNoticeFromObserveToLobby_NoFetch();
	void EventHideAllNoticeFromObserveToLobby();
	void EventShowNoticeFromWatchingBackToLobby_NoFetch();
	void EventShowNoticeFromWatchingBackToLobby();
	void EventShowLogOutNoticce_NoFetch();
	void EventShowLogOutNoticce();
	void EventChatRequestPrivacyInSetting_NoFetch();
	void EventChatRequestPrivacyInSetting();
	void EventSettingConfirmModifyArtQuality_Push_NoFetch();
	void EventSettingConfirmModifyArtQuality_Push();
	void EventSettingCannotSetHigherQuality_Push_NoFetch();
	void EventSettingCannotSetHigherQuality_Push();
	void EventSettingCannotSetHigherFps_Push_NoFetch();
	void EventSettingCannotSetHigherFps_Push();
	void EventSettingCannotSetGyroscope_Push_NoFetch();
	void EventSettingCannotSetGyroscope_Push();
	void EventUploadSettingConfigToCloud_NoFetch();
	void EventUploadSettingConfigToCloud();
	void EventInformPickUpNumZero_NoFetch();
	void EventInformPickUpNumZero();
	void EventSettingShowUIElemUIVehicle_NoFetch();
	void EventSettingShowUIElemUIVehicle();
	void EventSettingSensibilityRedPointChanged_NoFetch();
	void EventSettingSensibilityRedPointChanged();
	void EventSettingSwitchToSuperHighSoundEffect_NoFetch();
	void EventSettingSwitchToSuperHighSoundEffect();
	void EventRequestSensitivitySetting_NoFetch();
	void EventRequestSensitivitySetting();
	void EventSettingShowConfirmModifyHDR_NoFetch();
	void EventSettingShowConfirmModifyHDR();
	void EventConfirmPickUpResetMsg_NoFetch();
	void EventConfirmPickUpResetMsg();
	void EventShowMyRecordVideos_NoFetch();
	void EventShowMyRecordVideos();
	void EventShowDiyLimitLevelNotice_Push_NoFetch();
	void EventShowDiyLimitLevelNotice_Push();
	void EventSettingCurPicSettingNotSupportThisFps_NoFetch();
	void EventSettingCurPicSettingNotSupportThisFps();
	void EventHideLastOpennedPage_NoFetch();
	void EventHideLastOpennedPage();
	void EventShowLogOutNoticceForSettingLanguage_NoFetch();
	void EventShowLogOutNoticceForSettingLanguage();
	void EventTurnonMomentRecord_NoFetch();
	void EventTurnonMomentRecord();
	void EventHelpshiftClearRedPoints_NoFetch();
	void EventHelpshiftClearRedPoints();
	void EventShowUserAgreement_NoFetch();
	void EventShowUserAgreement();
	void EventSettingPanelShowTipMsgBindFail_NoFetch();
	void EventSettingPanelShowTipMsgBindFail();
	void EventSetBindFB_Push_NoFetch();
	void EventSetBindFB_Push();
	void EventLogOutForSettingLanguage_NoFetch();
	void EventLogOutForSettingLanguage();
	void EventShowInturrptGameNotice_NoFetch();
	void EventShowInturrptGameNotice();
	void EventSettingPanelDelectAccount_NoFetch();
	void EventSettingPanelDelectAccount();
	void EventHideWaitingUI_NoFetch();
	void EventHideWaitingUI();
	void EventSettingSendUnknowPassSwitch_NoFetch();
	void EventSettingSendUnknowPassSwitch();
	void EventSettingGetLoginTypeList_NoFetch();
	void EventSettingGetLoginTypeList();
	void EventSettingPanelAskBindAccountMsgBox_NoFetch();
	void EventSettingPanelAskBindAccountMsgBox();
	void EventShowNotInstallVkMsg_NoFetch();
	void EventShowNotInstallVkMsg();
	void EventShow3dTouchNotSupportQuickThrow_NoFetch();
	void EventShow3dTouchNotSupportQuickThrow();
	void EventShowSettingBindMore1_NoFetch();
	void EventShowSettingBindMore1();
	void EventSettingSwitchToHighSoundEffect_NoFetch();
	void EventSettingSwitchToHighSoundEffect();
	void EventSettingPanelParentAllow_NoFetch();
	void EventSettingPanelParentAllow();
	void EventHideSettingBindMore1_NoFetch();
	void EventHideSettingBindMore1();
	void EventSettingWarningLvSixFps_NoFetch();
	void EventSettingWarningLvSixFps();
	void EventUpdateLayoutName_NoFetch();
	void EventUpdateLayoutName();
	void EventHideAllSettingPanel_NoFetch();
	void EventHideAllSettingPanel();
	void EventSettingSendCanShowWatching_NoFetch();
	void EventSettingSendCanShowWatching();
	void EventShowOBBackToLobbyNotice_NoFetch();
	void EventShowOBBackToLobbyNotice();
	void EventShowSetRegion_NoFetch();
	void EventShowSetRegion();
	void EventSettingSendCanShowRole_NoFetch();
	void EventSettingSendCanShowRole();
	void EventShowMobileShakeNoSupport_NoFetch();
	void EventShowMobileShakeNoSupport();
	void EventSettingPanelShowConnectingUI_NoFetch();
	void EventSettingPanelShowConnectingUI();
	void EventChangeQualityAndFpsConfirm_NoFetch();
	void EventChangeQualityAndFpsConfirm();
	void EventShowBackToLobbyFromTrainingNotice_NoFetch();
	void EventShowBackToLobbyFromTrainingNotice();
	void EventOpenVlinkSDK_NoFetch();
	void EventOpenVlinkSDK();
	void EventShowSelectedPage_NoFetch();
	void EventShowSelectedPage();
	void EventResetShapedScreen_NoFetch();
	void EventResetShapedScreen();
	void EventSettingBasicRedPointChanged_NoFetch();
	void EventSettingBasicRedPointChanged();
	void EventClickSocialStrangerSwitch_NoFetch();
	void EventClickSocialStrangerSwitch();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOnClickUnbind_NoFetch();
	void EventOnClickUnbind();
	void EventOnClickUnbindError_NoFetch();
	void EventOnClickUnbindError();
	void EventSettingCheckInputCloudName_NoFetch();
	void EventSettingCheckInputCloudName();
	void EventSettingSendCanShowHistory_NoFetch();
	void EventSettingSendCanShowHistory();
	void EventShowConfirmUsingCloud_NoFetch();
	void EventShowConfirmUsingCloud();
	void EventRequestSaveSensitivitySettingToCloud_Push_NoFetch();
	void EventRequestSaveSensitivitySettingToCloud_Push();
	void EventSettingPanelPrivicy_NoFetch();
	void EventSettingPanelPrivicy();
	void EventGetVLinkOpenStatus_NoFetch();
	void EventGetVLinkOpenStatus();
	void EventInformAutoPickUpClosed_NoFetch();
	void EventInformAutoPickUpClosed();
	void EventSettingShowUnbind_NoFetch();
	void EventSettingShowUnbind();
	void EventSettingPanelEUGDPR_NoFetch();
	void EventSettingPanelEUGDPR();
	void EventClickSocialFriendSwitch_NoFetch();
	void EventClickSocialFriendSwitch();
	void EventOpenKefuUrl_NoFetch();
	void EventOpenKefuUrl();
	void EventTurnonManualRecord_NoFetch();
	void EventTurnonManualRecord();
	void EventSettingSwitchToLowSoundEffect_NoFetch();
	void EventSettingSwitchToLowSoundEffect();
	void EventSettingShowConfirmModifyFps_NoFetch();
	void EventSettingShowConfirmModifyFps();
	void EventSettingMirrorRedPointChanged_NoFetch();
	void EventSettingMirrorRedPointChanged();
	void EventSettingVehicleRedPointChanged_NoFetch();
	void EventSettingVehicleRedPointChanged();
	void EventSettingPanelRegistIMSDKEvents_NoFetch();
	void EventSettingPanelRegistIMSDKEvents();
	void Event_SprHghQlty_NotInLobby_NoFetch();
	void Event_SprHghQlty_NotInLobby();
	void EventSettingShowUIElemUI_NoFetch();
	void EventSettingShowUIElemUI();
	void EventStartIMSDKBindTimer_NoFetch();
	void EventStartIMSDKBindTimer();
	void EventSaveShapedScreenToLoacl_NoFetch();
	void EventSaveShapedScreenToLoacl();
	void EventRefreshSettingParameter_Push_NoFetch();
	void EventRefreshSettingParameter_Push();
	void EventSettingNoticeHighestArtClosed_NoFetch();
	void EventSettingNoticeHighestArtClosed();
	void EventSettingPanelUnRegistIMSDKEvents_NoFetch();
	void EventSettingPanelUnRegistIMSDKEvents();
	void EventSettingPanelShowTipMsgBindSuccess_NoFetch();
	void EventSettingPanelShowTipMsgBindSuccess();
	void EventShowWaitingUI_NoFetch();
	void EventShowWaitingUI();
	void EventSettingSendCanShowBattleWatchingDetail_NoFetch();
	void EventSettingSendCanShowBattleWatchingDetail();
	void UserConstructionScript();
};


}

