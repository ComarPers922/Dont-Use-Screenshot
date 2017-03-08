#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sliding
struct  Sliding_t3144502954  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Sliding::count
	int32_t ___count_2;
	// UnityEngine.GameObject Sliding::modeManager
	GameObject_t1756533147 * ___modeManager_3;
	// UnityEngine.Vector3 Sliding::temp
	Vector3_t2243707580  ___temp_4;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Sliding_t3144502954, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_modeManager_3() { return static_cast<int32_t>(offsetof(Sliding_t3144502954, ___modeManager_3)); }
	inline GameObject_t1756533147 * get_modeManager_3() const { return ___modeManager_3; }
	inline GameObject_t1756533147 ** get_address_of_modeManager_3() { return &___modeManager_3; }
	inline void set_modeManager_3(GameObject_t1756533147 * value)
	{
		___modeManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___modeManager_3, value);
	}

	inline static int32_t get_offset_of_temp_4() { return static_cast<int32_t>(offsetof(Sliding_t3144502954, ___temp_4)); }
	inline Vector3_t2243707580  get_temp_4() const { return ___temp_4; }
	inline Vector3_t2243707580 * get_address_of_temp_4() { return &___temp_4; }
	inline void set_temp_4(Vector3_t2243707580  value)
	{
		___temp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
