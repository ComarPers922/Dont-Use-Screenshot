#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TypeDef2649367545.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Box
struct  Box_t774521019  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Box::Sprites
	SpriteU5BU5D_t3359083662* ___Sprites_2;
	// TypeDef Box::type
	int32_t ___type_3;
	// UnityEngine.GameObject Box::boxmanager
	GameObject_t1756533147 * ___boxmanager_4;
	// System.Boolean Box::hide
	bool ___hide_5;
	// System.Boolean Box::hided
	bool ___hided_6;
	// System.Single Box::Blink
	float ___Blink_7;
	// System.Boolean Box::Blinking
	bool ___Blinking_8;
	// System.Single Box::time
	float ___time_9;
	// System.Single Box::velocitychange
	float ___velocitychange_10;
	// UnityEngine.Vector3 Box::myvelocity
	Vector3_t2243707580  ___myvelocity_11;

public:
	inline static int32_t get_offset_of_Sprites_2() { return static_cast<int32_t>(offsetof(Box_t774521019, ___Sprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_Sprites_2() const { return ___Sprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_Sprites_2() { return &___Sprites_2; }
	inline void set_Sprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___Sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___Sprites_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(Box_t774521019, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_boxmanager_4() { return static_cast<int32_t>(offsetof(Box_t774521019, ___boxmanager_4)); }
	inline GameObject_t1756533147 * get_boxmanager_4() const { return ___boxmanager_4; }
	inline GameObject_t1756533147 ** get_address_of_boxmanager_4() { return &___boxmanager_4; }
	inline void set_boxmanager_4(GameObject_t1756533147 * value)
	{
		___boxmanager_4 = value;
		Il2CppCodeGenWriteBarrier(&___boxmanager_4, value);
	}

	inline static int32_t get_offset_of_hide_5() { return static_cast<int32_t>(offsetof(Box_t774521019, ___hide_5)); }
	inline bool get_hide_5() const { return ___hide_5; }
	inline bool* get_address_of_hide_5() { return &___hide_5; }
	inline void set_hide_5(bool value)
	{
		___hide_5 = value;
	}

	inline static int32_t get_offset_of_hided_6() { return static_cast<int32_t>(offsetof(Box_t774521019, ___hided_6)); }
	inline bool get_hided_6() const { return ___hided_6; }
	inline bool* get_address_of_hided_6() { return &___hided_6; }
	inline void set_hided_6(bool value)
	{
		___hided_6 = value;
	}

	inline static int32_t get_offset_of_Blink_7() { return static_cast<int32_t>(offsetof(Box_t774521019, ___Blink_7)); }
	inline float get_Blink_7() const { return ___Blink_7; }
	inline float* get_address_of_Blink_7() { return &___Blink_7; }
	inline void set_Blink_7(float value)
	{
		___Blink_7 = value;
	}

	inline static int32_t get_offset_of_Blinking_8() { return static_cast<int32_t>(offsetof(Box_t774521019, ___Blinking_8)); }
	inline bool get_Blinking_8() const { return ___Blinking_8; }
	inline bool* get_address_of_Blinking_8() { return &___Blinking_8; }
	inline void set_Blinking_8(bool value)
	{
		___Blinking_8 = value;
	}

	inline static int32_t get_offset_of_time_9() { return static_cast<int32_t>(offsetof(Box_t774521019, ___time_9)); }
	inline float get_time_9() const { return ___time_9; }
	inline float* get_address_of_time_9() { return &___time_9; }
	inline void set_time_9(float value)
	{
		___time_9 = value;
	}

	inline static int32_t get_offset_of_velocitychange_10() { return static_cast<int32_t>(offsetof(Box_t774521019, ___velocitychange_10)); }
	inline float get_velocitychange_10() const { return ___velocitychange_10; }
	inline float* get_address_of_velocitychange_10() { return &___velocitychange_10; }
	inline void set_velocitychange_10(float value)
	{
		___velocitychange_10 = value;
	}

	inline static int32_t get_offset_of_myvelocity_11() { return static_cast<int32_t>(offsetof(Box_t774521019, ___myvelocity_11)); }
	inline Vector3_t2243707580  get_myvelocity_11() const { return ___myvelocity_11; }
	inline Vector3_t2243707580 * get_address_of_myvelocity_11() { return &___myvelocity_11; }
	inline void set_myvelocity_11(Vector3_t2243707580  value)
	{
		___myvelocity_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
