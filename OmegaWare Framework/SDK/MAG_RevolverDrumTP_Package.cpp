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
	 * 		Name   -> PredefinedFunction AMAG_RevolverDrumTP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_RevolverDrumTP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_RevolverDrumTP.MAG_RevolverDrumTP_C");
		return ptr;
	}

}


