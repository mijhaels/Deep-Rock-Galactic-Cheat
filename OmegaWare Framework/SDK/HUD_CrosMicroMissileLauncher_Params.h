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
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.SetData
	 */
	struct UHUD_CrosMicroMissileLauncher_C_SetData_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.Construct
	 */
	struct UHUD_CrosMicroMissileLauncher_C_Construct_Params
	{	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.OnSpreadChanged
	 */
	struct UHUD_CrosMicroMissileLauncher_C_OnSpreadChanged_Params
	{
	public:
		float                                                      HorizontalSpread;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalSpread;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAtRest;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.PreConstruct
	 */
	struct UHUD_CrosMicroMissileLauncher_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.OnDamagedEnemy_Event
	 */
	struct UHUD_CrosMicroMissileLauncher_C_OnDamagedEnemy_Event_Params
	{
	public:
		unsigned char                                              UnknownData_IU7L[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.StartCharging
	 */
	struct UHUD_CrosMicroMissileLauncher_C_StartCharging_Params
	{	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.EndCharge
	 */
	struct UHUD_CrosMicroMissileLauncher_C_EndCharge_Params
	{	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.ToggleBuckShotCrosshair
	 */
	struct UHUD_CrosMicroMissileLauncher_C_ToggleBuckShotCrosshair_Params
	{
	public:
		float                                                      Spread;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.CheckBuckShot
	 */
	struct UHUD_CrosMicroMissileLauncher_C_CheckBuckShot_Params
	{	};

	/**
	 * Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.ExecuteUbergraph_HUD_CrosMicroMissileLauncher
	 */
	struct UHUD_CrosMicroMissileLauncher_C_ExecuteUbergraph_HUD_CrosMicroMissileLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
