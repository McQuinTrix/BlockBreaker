#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallScript
struct  BallScript_t652658930  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BallScript::p
	GameObject_t1756533147 * ___p_2;
	// UnityEngine.Vector3 BallScript::paddleToBallVector
	Vector3_t2243707580  ___paddleToBallVector_3;
	// System.Boolean BallScript::launched
	bool ___launched_4;
	// UnityEngine.Rigidbody2D BallScript::rigi
	Rigidbody2D_t502193897 * ___rigi_5;
	// UnityEngine.AudioSource BallScript::steel
	AudioSource_t1135106623 * ___steel_6;
	// UnityEngine.AudioSource BallScript::brick
	AudioSource_t1135106623 * ___brick_7;
	// UnityEngine.AudioSource BallScript::paddle
	AudioSource_t1135106623 * ___paddle_8;

public:
	inline static int32_t get_offset_of_p_2() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___p_2)); }
	inline GameObject_t1756533147 * get_p_2() const { return ___p_2; }
	inline GameObject_t1756533147 ** get_address_of_p_2() { return &___p_2; }
	inline void set_p_2(GameObject_t1756533147 * value)
	{
		___p_2 = value;
		Il2CppCodeGenWriteBarrier(&___p_2, value);
	}

	inline static int32_t get_offset_of_paddleToBallVector_3() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___paddleToBallVector_3)); }
	inline Vector3_t2243707580  get_paddleToBallVector_3() const { return ___paddleToBallVector_3; }
	inline Vector3_t2243707580 * get_address_of_paddleToBallVector_3() { return &___paddleToBallVector_3; }
	inline void set_paddleToBallVector_3(Vector3_t2243707580  value)
	{
		___paddleToBallVector_3 = value;
	}

	inline static int32_t get_offset_of_launched_4() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___launched_4)); }
	inline bool get_launched_4() const { return ___launched_4; }
	inline bool* get_address_of_launched_4() { return &___launched_4; }
	inline void set_launched_4(bool value)
	{
		___launched_4 = value;
	}

	inline static int32_t get_offset_of_rigi_5() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___rigi_5)); }
	inline Rigidbody2D_t502193897 * get_rigi_5() const { return ___rigi_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigi_5() { return &___rigi_5; }
	inline void set_rigi_5(Rigidbody2D_t502193897 * value)
	{
		___rigi_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigi_5, value);
	}

	inline static int32_t get_offset_of_steel_6() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___steel_6)); }
	inline AudioSource_t1135106623 * get_steel_6() const { return ___steel_6; }
	inline AudioSource_t1135106623 ** get_address_of_steel_6() { return &___steel_6; }
	inline void set_steel_6(AudioSource_t1135106623 * value)
	{
		___steel_6 = value;
		Il2CppCodeGenWriteBarrier(&___steel_6, value);
	}

	inline static int32_t get_offset_of_brick_7() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___brick_7)); }
	inline AudioSource_t1135106623 * get_brick_7() const { return ___brick_7; }
	inline AudioSource_t1135106623 ** get_address_of_brick_7() { return &___brick_7; }
	inline void set_brick_7(AudioSource_t1135106623 * value)
	{
		___brick_7 = value;
		Il2CppCodeGenWriteBarrier(&___brick_7, value);
	}

	inline static int32_t get_offset_of_paddle_8() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___paddle_8)); }
	inline AudioSource_t1135106623 * get_paddle_8() const { return ___paddle_8; }
	inline AudioSource_t1135106623 ** get_address_of_paddle_8() { return &___paddle_8; }
	inline void set_paddle_8(AudioSource_t1135106623 * value)
	{
		___paddle_8 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
