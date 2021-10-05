#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_bp_chat_voice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00A8 (0x03A8 - 0x0300)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x0325(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0326(0x0002) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x0344(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x0374(0x0030) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return pStaticClass;
	}


	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void EventChatVoiceSetInfo_Push_NoFetch();
	void EventChatVoiceSetInfo_Push();
	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventChatVoiceFetchInfo_NoFetch();
	void EventChatVoiceFetchInfo();
	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventCheckOpenMicSuc_NoFetch();
	void EventCheckOpenMicSuc();
	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventChatRequestPrivacyPre_NoFetch();
	void EventChatRequestPrivacyPre();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void EventCheckOpenMicFail_NoFetch();
	void EventCheckOpenMicFail();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventMicClickCD_NoFetch();
	void EventMicClickCD();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventChatRequestPrivacy_NoFetch();
	void EventChatRequestPrivacy();
	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void UserConstructionScript();
};


}

