﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType875112366.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_Intern1040270188.h"
#include "UnityEngine_UnityEngine_RangeInt2323401134.h"

// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C"  void TouchScreenKeyboard__ctor_m4200205334 (TouchScreenKeyboard_t601950206 * __this, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, bool ___alert5, String_t* ___textPlaceholder6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C"  void TouchScreenKeyboard_Destroy_m1110429671 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C"  void TouchScreenKeyboard_Finalize_m2608266435 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C"  void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m1440276778 (TouchScreenKeyboard_t601950206 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t1040270188 * ___arguments0, String_t* ___text1, String_t* ___textPlaceholder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern "C"  bool TouchScreenKeyboard_get_isSupported_m798827778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern "C"  TouchScreenKeyboard_t601950206 * TouchScreenKeyboard_Open_m2760130151 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern "C"  TouchScreenKeyboard_t601950206 * TouchScreenKeyboard_Open_m913506328 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C"  TouchScreenKeyboard_t601950206 * TouchScreenKeyboard_Open_m3410222954 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, bool ___alert5, String_t* ___textPlaceholder6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C"  String_t* TouchScreenKeyboard_get_text_m538529702 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C"  void TouchScreenKeyboard_set_text_m3456054179 (TouchScreenKeyboard_t601950206 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C"  void TouchScreenKeyboard_set_hideInput_m1521802033 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C"  bool TouchScreenKeyboard_get_active_m1442597648 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C"  void TouchScreenKeyboard_set_active_m3470073047 (TouchScreenKeyboard_t601950206 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C"  bool TouchScreenKeyboard_get_done_m406461410 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern "C"  bool TouchScreenKeyboard_get_wasCanceled_m1653175226 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_canGetSelection()
extern "C"  bool TouchScreenKeyboard_get_canGetSelection_m3575940784 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RangeInt UnityEngine.TouchScreenKeyboard::get_selection()
extern "C"  RangeInt_t2323401134  TouchScreenKeyboard_get_selection_m1301878240 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::GetSelectionInternal(System.Int32&,System.Int32&)
extern "C"  void TouchScreenKeyboard_GetSelectionInternal_m760950334 (TouchScreenKeyboard_t601950206 * __this, int32_t* ___start0, int32_t* ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
