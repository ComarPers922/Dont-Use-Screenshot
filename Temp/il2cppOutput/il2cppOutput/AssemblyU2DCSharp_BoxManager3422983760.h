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
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoxManager
struct  BoxManager_t3422983760  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BoxManager::box
	GameObject_t1756533147 * ___box_2;
	// UnityEngine.GameObject BoxManager::ScoreBoard
	GameObject_t1756533147 * ___ScoreBoard_3;
	// UnityEngine.GameObject BoxManager::GameOverTitle
	GameObject_t1756533147 * ___GameOverTitle_4;
	// UnityEngine.AudioClip[] BoxManager::sounds
	AudioClipU5BU5D_t2203355011* ___sounds_5;
	// System.Int32 BoxManager::previousNumber
	int32_t ___previousNumber_6;
	// System.Int32 BoxManager::Difficulty
	int32_t ___Difficulty_7;
	// System.Boolean BoxManager::gameover
	bool ___gameover_8;
	// System.Int32 BoxManager::Done
	int32_t ___Done_9;
	// System.Single BoxManager::hidetime
	float ___hidetime_10;

public:
	inline static int32_t get_offset_of_box_2() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___box_2)); }
	inline GameObject_t1756533147 * get_box_2() const { return ___box_2; }
	inline GameObject_t1756533147 ** get_address_of_box_2() { return &___box_2; }
	inline void set_box_2(GameObject_t1756533147 * value)
	{
		___box_2 = value;
		Il2CppCodeGenWriteBarrier(&___box_2, value);
	}

	inline static int32_t get_offset_of_ScoreBoard_3() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___ScoreBoard_3)); }
	inline GameObject_t1756533147 * get_ScoreBoard_3() const { return ___ScoreBoard_3; }
	inline GameObject_t1756533147 ** get_address_of_ScoreBoard_3() { return &___ScoreBoard_3; }
	inline void set_ScoreBoard_3(GameObject_t1756533147 * value)
	{
		___ScoreBoard_3 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreBoard_3, value);
	}

	inline static int32_t get_offset_of_GameOverTitle_4() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___GameOverTitle_4)); }
	inline GameObject_t1756533147 * get_GameOverTitle_4() const { return ___GameOverTitle_4; }
	inline GameObject_t1756533147 ** get_address_of_GameOverTitle_4() { return &___GameOverTitle_4; }
	inline void set_GameOverTitle_4(GameObject_t1756533147 * value)
	{
		___GameOverTitle_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverTitle_4, value);
	}

	inline static int32_t get_offset_of_sounds_5() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___sounds_5)); }
	inline AudioClipU5BU5D_t2203355011* get_sounds_5() const { return ___sounds_5; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_sounds_5() { return &___sounds_5; }
	inline void set_sounds_5(AudioClipU5BU5D_t2203355011* value)
	{
		___sounds_5 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_5, value);
	}

	inline static int32_t get_offset_of_previousNumber_6() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___previousNumber_6)); }
	inline int32_t get_previousNumber_6() const { return ___previousNumber_6; }
	inline int32_t* get_address_of_previousNumber_6() { return &___previousNumber_6; }
	inline void set_previousNumber_6(int32_t value)
	{
		___previousNumber_6 = value;
	}

	inline static int32_t get_offset_of_Difficulty_7() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___Difficulty_7)); }
	inline int32_t get_Difficulty_7() const { return ___Difficulty_7; }
	inline int32_t* get_address_of_Difficulty_7() { return &___Difficulty_7; }
	inline void set_Difficulty_7(int32_t value)
	{
		___Difficulty_7 = value;
	}

	inline static int32_t get_offset_of_gameover_8() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___gameover_8)); }
	inline bool get_gameover_8() const { return ___gameover_8; }
	inline bool* get_address_of_gameover_8() { return &___gameover_8; }
	inline void set_gameover_8(bool value)
	{
		___gameover_8 = value;
	}

	inline static int32_t get_offset_of_Done_9() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___Done_9)); }
	inline int32_t get_Done_9() const { return ___Done_9; }
	inline int32_t* get_address_of_Done_9() { return &___Done_9; }
	inline void set_Done_9(int32_t value)
	{
		___Done_9 = value;
	}

	inline static int32_t get_offset_of_hidetime_10() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760, ___hidetime_10)); }
	inline float get_hidetime_10() const { return ___hidetime_10; }
	inline float* get_address_of_hidetime_10() { return &___hidetime_10; }
	inline void set_hidetime_10(float value)
	{
		___hidetime_10 = value;
	}
};

struct BoxManager_t3422983760_StaticFields
{
public:
	// System.Action`1<System.Boolean> BoxManager::<>f__am$cache0
	Action_1_t3627374100 * ___U3CU3Ef__amU24cache0_11;
	// System.Action`1<System.Boolean> BoxManager::<>f__am$cache1
	Action_1_t3627374100 * ___U3CU3Ef__amU24cache1_12;
	// System.Action`1<System.Boolean> BoxManager::<>f__am$cache2
	Action_1_t3627374100 * ___U3CU3Ef__amU24cache2_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Action_1_t3627374100 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Action_1_t3627374100 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Action_1_t3627374100 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Action_1_t3627374100 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Action_1_t3627374100 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Action_1_t3627374100 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(BoxManager_t3422983760_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Action_1_t3627374100 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Action_1_t3627374100 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Action_1_t3627374100 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
