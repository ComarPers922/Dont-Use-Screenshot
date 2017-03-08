#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModeChange
struct  ModeChange_t403188687  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ModeChange::count
	int32_t ___count_2;
	// System.Boolean ModeChange::IsMouseDown
	bool ___IsMouseDown_3;
	// System.Single ModeChange::previousX
	float ___previousX_4;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ModeChange_t403188687, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_IsMouseDown_3() { return static_cast<int32_t>(offsetof(ModeChange_t403188687, ___IsMouseDown_3)); }
	inline bool get_IsMouseDown_3() const { return ___IsMouseDown_3; }
	inline bool* get_address_of_IsMouseDown_3() { return &___IsMouseDown_3; }
	inline void set_IsMouseDown_3(bool value)
	{
		___IsMouseDown_3 = value;
	}

	inline static int32_t get_offset_of_previousX_4() { return static_cast<int32_t>(offsetof(ModeChange_t403188687, ___previousX_4)); }
	inline float get_previousX_4() const { return ___previousX_4; }
	inline float* get_address_of_previousX_4() { return &___previousX_4; }
	inline void set_previousX_4(float value)
	{
		___previousX_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
