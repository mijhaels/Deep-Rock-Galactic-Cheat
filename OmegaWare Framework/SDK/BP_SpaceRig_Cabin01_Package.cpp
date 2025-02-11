﻿/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Cabin01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ReceiveBeginPlay");
		
		ABP_SpaceRig_Cabin01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.Steam
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Cabin01_C::Steam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.Steam");
		
		ABP_SpaceRig_Cabin01_C_Steam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ExecuteUbergraph_BP_SpaceRig_Cabin01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Cabin01_C::ExecuteUbergraph_BP_SpaceRig_Cabin01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ExecuteUbergraph_BP_SpaceRig_Cabin01");
		
		ABP_SpaceRig_Cabin01_C_ExecuteUbergraph_BP_SpaceRig_Cabin01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpaceRig_Cabin01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpaceRig_Cabin01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C");
		return ptr;
	}

}


