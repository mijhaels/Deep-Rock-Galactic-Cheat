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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ImgMediaEngine.ImgMediaPlaybackComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UImgMediaPlaybackComponent : public UActorComponent
	{
	public:
		float                                                      Width;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODBias;                                                 // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T986[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
