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
	 * 		Name   -> PredefinedFunction APRW_PickAxe_Driller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRW_PickAxe_Driller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRW_PickAxe_Driller.PRW_PickAxe_Driller_C");
		return ptr;
	}

}


