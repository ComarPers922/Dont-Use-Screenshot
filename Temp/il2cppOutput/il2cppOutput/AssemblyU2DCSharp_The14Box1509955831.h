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

// The14Box
struct  The14Box_t1509955831  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] The14Box::Sprites
	SpriteU5BU5D_t3359083662* ___Sprites_2;
	// UnityEngine.GameObject The14Box::boxmanager
	GameObject_t1756533147 * ___boxmanager_3;
	// TypeDef The14Box::type
	int32_t ___type_4;
	// System.Single The14Box::velocitychange
	float ___velocitychange_5;
	// UnityEngine.Vector3 The14Box::myvelocity
	Vector3_t2243707580  ___myvelocity_6;

public:
	inline static int32_t get_offset_of_Sprites_2() { return static_cast<int32_t>(offsetof(The14Box_t1509955831, ___Sprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_Sprites_2() const { return ___Sprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_Sprites_2() { return &___Sprites_2; }
	inline void set_Sprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___Sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___Sprites_2, value);
	}

	inline static int32_t get_offset_of_boxmanager_3() { return static_cast<int32_t>(offsetof(The14Box_t1509955831, ___boxmanager_3)); }
	inline GameObject_t1756533147 * get_boxmanager_3() const { return ___boxmanager_3; }
	inline GameObject_t1756533147 ** get_address_of_boxmanager_3() { return &___boxmanager_3; }
	inline void set_boxmanager_3(GameObject_t1756533147 * value)
	{
		___boxmanager_3 = value;
		Il2CppCodeGenWriteBarrier(&___boxmanager_3, value);
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(The14Box_t1509955831, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_velocitychange_5() { return static_cast<int32_t>(offsetof(The14Box_t1509955831, ___velocitychange_5)); }
	inline float get_velocitychange_5() const { return ___velocitychange_5; }
	inline float* get_address_of_velocitychange_5() { return &___velocitychange_5; }
	inline void set_velocitychange_5(float value)
	{
		___velocitychange_5 = value;
	}

	inline static int32_t get_offset_of_myvelocity_6() { return static_cast<int32_t>(offsetof(The14Box_t1509955831, ___myvelocity_6)); }
	inline Vector3_t2243707580  get_myvelocity_6() const { return ___myvelocity_6; }
	inline Vector3_t2243707580 * get_address_of_myvelocity_6() { return &___myvelocity_6; }
	inline void set_myvelocity_6(Vector3_t2243707580  value)
	{
		___myvelocity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
