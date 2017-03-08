#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInterface
struct  UserInterface_t2997471354  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UserInterface::score
	int32_t ___score_2;
	// UnityEngine.GUIStyle UserInterface::font
	GUIStyle_t1799908754 * ___font_3;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_font_3() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___font_3)); }
	inline GUIStyle_t1799908754 * get_font_3() const { return ___font_3; }
	inline GUIStyle_t1799908754 ** get_address_of_font_3() { return &___font_3; }
	inline void set_font_3(GUIStyle_t1799908754 * value)
	{
		___font_3 = value;
		Il2CppCodeGenWriteBarrier(&___font_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
