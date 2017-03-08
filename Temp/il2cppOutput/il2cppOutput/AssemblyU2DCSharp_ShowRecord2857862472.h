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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_RecordPosition2994849690.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowRecord
struct  ShowRecord_t2857862472  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] ShowRecord::numbers
	SpriteU5BU5D_t3359083662* ___numbers_2;
	// UnityEngine.GameObject[] ShowRecord::imageboxes
	GameObjectU5BU5D_t3057952154* ___imageboxes_3;
	// System.Single ShowRecord::Duration
	float ___Duration_4;
	// System.Single ShowRecord::offsetX
	float ___offsetX_5;
	// RecordPosition ShowRecord::recordposition
	int32_t ___recordposition_6;
	// System.Int32[] ShowRecord::temp
	Int32U5BU5D_t3030399641* ___temp_7;

public:
	inline static int32_t get_offset_of_numbers_2() { return static_cast<int32_t>(offsetof(ShowRecord_t2857862472, ___numbers_2)); }
	inline SpriteU5BU5D_t3359083662* get_numbers_2() const { return ___numbers_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_numbers_2() { return &___numbers_2; }
	inline void set_numbers_2(SpriteU5BU5D_t3359083662* value)
	{
		___numbers_2 = value;
		Il2CppCodeGenWriteBarrier(&___numbers_2, value);
	}

	inline static int32_t get_offset_of_imageboxes_3() { return static_cast<int32_t>(offsetof(ShowRecord_t2857862472, ___imageboxes_3)); }
	inline GameObjectU5BU5D_t3057952154* get_imageboxes_3() const { return ___imageboxes_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_imageboxes_3() { return &___imageboxes_3; }
	inline void set_imageboxes_3(GameObjectU5BU5D_t3057952154* value)
	{
		___imageboxes_3 = value;
		Il2CppCodeGenWriteBarrier(&___imageboxes_3, value);
	}

	inline static int32_t get_offset_of_Duration_4() { return static_cast<int32_t>(offsetof(ShowRecord_t2857862472, ___Duration_4)); }
	inline float get_Duration_4() const { return ___Duration_4; }
	inline float* get_address_of_Duration_4() { return &___Duration_4; }
	inline void set_Duration_4(float value)
	{
		___Duration_4 = value;
	}

	inline static int32_t get_offset_of_offsetX_5() { return static_cast<int32_t>(offsetof(ShowRecord_t2857862472, ___offsetX_5)); }
	inline float get_offsetX_5() const { return ___offsetX_5; }
	inline float* get_address_of_offsetX_5() { return &___offsetX_5; }
	inline void set_offsetX_5(float value)
	{
		___offsetX_5 = value;
	}

	inline static int32_t get_offset_of_recordposition_6() { return static_cast<int32_t>(offsetof(ShowRecord_t2857862472, ___recordposition_6)); }
	inline int32_t get_recordposition_6() const { return ___recordposition_6; }
	inline int32_t* get_address_of_recordposition_6() { return &___recordposition_6; }
	inline void set_recordposition_6(int32_t value)
	{
		___recordposition_6 = value;
	}

	inline static int32_t get_offset_of_temp_7() { return static_cast<int32_t>(offsetof(ShowRecord_t2857862472, ___temp_7)); }
	inline Int32U5BU5D_t3030399641* get_temp_7() const { return ___temp_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_temp_7() { return &___temp_7; }
	inline void set_temp_7(Int32U5BU5D_t3030399641* value)
	{
		___temp_7 = value;
		Il2CppCodeGenWriteBarrier(&___temp_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
