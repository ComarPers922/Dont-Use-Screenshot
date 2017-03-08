#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t267455441;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2210666073;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C"  Il2CppObject * Social_get_Active_m3949892079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C"  Il2CppObject * Social_get_localUser_m814265103 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void Social_ReportScore_m2234194629 (Il2CppObject * __this /* static, unused */, int64_t ___score0, String_t* ___board1, Action_1_t3627374100 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
