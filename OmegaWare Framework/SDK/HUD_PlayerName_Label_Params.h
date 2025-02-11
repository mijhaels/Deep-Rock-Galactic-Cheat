﻿#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.UpdateCharacterName
	 */
	struct UHUD_PlayerName_Label_C_UpdateCharacterName_Params
	{	};

	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.Construct
	 */
	struct UHUD_PlayerName_Label_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.OnPlayerNameChanged
	 */
	struct UHUD_PlayerName_Label_C_OnPlayerNameChanged_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.PreConstruct
	 */
	struct UHUD_PlayerName_Label_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.SetupSpeakIcon
	 */
	struct UHUD_PlayerName_Label_C_SetupSpeakIcon_Params
	{	};

	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.RefreshIconVisibility
	 */
	struct UHUD_PlayerName_Label_C_RefreshIconVisibility_Params
	{	};

	/**
	 * Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.ExecuteUbergraph_HUD_PlayerName_Label
	 */
	struct UHUD_PlayerName_Label_C_ExecuteUbergraph_HUD_PlayerName_Label_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
