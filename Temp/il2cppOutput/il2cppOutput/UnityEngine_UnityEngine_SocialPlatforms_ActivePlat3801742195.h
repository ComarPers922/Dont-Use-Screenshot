#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t267455441;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.ActivePlatform
struct  ActivePlatform_t3801742195  : public Il2CppObject
{
public:

public:
};

struct ActivePlatform_t3801742195_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::_active
	Il2CppObject * ____active_0;

public:
	inline static int32_t get_offset_of__active_0() { return static_cast<int32_t>(offsetof(ActivePlatform_t3801742195_StaticFields, ____active_0)); }
	inline Il2CppObject * get__active_0() const { return ____active_0; }
	inline Il2CppObject ** get_address_of__active_0() { return &____active_0; }
	inline void set__active_0(Il2CppObject * value)
	{
		____active_0 = value;
		Il2CppCodeGenWriteBarrier(&____active_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
