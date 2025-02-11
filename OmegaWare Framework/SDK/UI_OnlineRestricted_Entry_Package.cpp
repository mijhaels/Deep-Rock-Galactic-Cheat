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
	 * 		Name   -> Function UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inFontSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OnlineRestricted_Entry_C::SetFontSize(int32_t inFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C.SetFontSize");
		
		UUI_OnlineRestricted_Entry_C_SetFontSize_Params params {};
		params.inFontSize = inFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OnlineRestricted_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C.PreConstruct");
		
		UUI_OnlineRestricted_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C.ExecuteUbergraph_UI_OnlineRestricted_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OnlineRestricted_Entry_C::ExecuteUbergraph_UI_OnlineRestricted_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C.ExecuteUbergraph_UI_OnlineRestricted_Entry");
		
		UUI_OnlineRestricted_Entry_C_ExecuteUbergraph_UI_OnlineRestricted_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OnlineRestricted_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OnlineRestricted_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C");
		return ptr;
	}

}


