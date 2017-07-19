#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaddleScript
struct  PaddleScript_t3839513181  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource PaddleScript::sound
	AudioSource_t1135106623 * ___sound_2;
	// System.Boolean PaddleScript::autoPlay
	bool ___autoPlay_3;
	// UnityEngine.GameObject PaddleScript::Ball
	GameObject_t1756533147 * ___Ball_4;

public:
	inline static int32_t get_offset_of_sound_2() { return static_cast<int32_t>(offsetof(PaddleScript_t3839513181, ___sound_2)); }
	inline AudioSource_t1135106623 * get_sound_2() const { return ___sound_2; }
	inline AudioSource_t1135106623 ** get_address_of_sound_2() { return &___sound_2; }
	inline void set_sound_2(AudioSource_t1135106623 * value)
	{
		___sound_2 = value;
		Il2CppCodeGenWriteBarrier(&___sound_2, value);
	}

	inline static int32_t get_offset_of_autoPlay_3() { return static_cast<int32_t>(offsetof(PaddleScript_t3839513181, ___autoPlay_3)); }
	inline bool get_autoPlay_3() const { return ___autoPlay_3; }
	inline bool* get_address_of_autoPlay_3() { return &___autoPlay_3; }
	inline void set_autoPlay_3(bool value)
	{
		___autoPlay_3 = value;
	}

	inline static int32_t get_offset_of_Ball_4() { return static_cast<int32_t>(offsetof(PaddleScript_t3839513181, ___Ball_4)); }
	inline GameObject_t1756533147 * get_Ball_4() const { return ___Ball_4; }
	inline GameObject_t1756533147 ** get_address_of_Ball_4() { return &___Ball_4; }
	inline void set_Ball_4(GameObject_t1756533147 * value)
	{
		___Ball_4 = value;
		Il2CppCodeGenWriteBarrier(&___Ball_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
