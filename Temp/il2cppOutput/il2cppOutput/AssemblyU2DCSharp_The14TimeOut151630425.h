#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// The14BoxManager
struct The14BoxManager_t683065138;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// The14TimeOut
struct  The14TimeOut_t151630425  : public MonoBehaviour_t1158329972
{
public:
	// The14BoxManager The14TimeOut::boxmanager
	The14BoxManager_t683065138 * ___boxmanager_2;
	// UnityEngine.GameObject The14TimeOut::timepoint
	GameObject_t1756533147 * ___timepoint_3;
	// System.Int32 The14TimeOut::count
	int32_t ___count_4;
	// System.Single The14TimeOut::time
	float ___time_5;

public:
	inline static int32_t get_offset_of_boxmanager_2() { return static_cast<int32_t>(offsetof(The14TimeOut_t151630425, ___boxmanager_2)); }
	inline The14BoxManager_t683065138 * get_boxmanager_2() const { return ___boxmanager_2; }
	inline The14BoxManager_t683065138 ** get_address_of_boxmanager_2() { return &___boxmanager_2; }
	inline void set_boxmanager_2(The14BoxManager_t683065138 * value)
	{
		___boxmanager_2 = value;
		Il2CppCodeGenWriteBarrier(&___boxmanager_2, value);
	}

	inline static int32_t get_offset_of_timepoint_3() { return static_cast<int32_t>(offsetof(The14TimeOut_t151630425, ___timepoint_3)); }
	inline GameObject_t1756533147 * get_timepoint_3() const { return ___timepoint_3; }
	inline GameObject_t1756533147 ** get_address_of_timepoint_3() { return &___timepoint_3; }
	inline void set_timepoint_3(GameObject_t1756533147 * value)
	{
		___timepoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___timepoint_3, value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(The14TimeOut_t151630425, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(The14TimeOut_t151630425, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
