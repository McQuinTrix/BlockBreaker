#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// LevelManager
struct LevelManager_t3355282079;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// brickScript
struct  brickScript_t3740699742  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 brickScript::maxHits
	int32_t ___maxHits_2;
	// LevelManager brickScript::lvl
	LevelManager_t3355282079 * ___lvl_3;
	// UnityEngine.Sprite[] brickScript::hitSprite
	SpriteU5BU5D_t3359083662* ___hitSprite_4;
	// System.Int32 brickScript::timesHit
	int32_t ___timesHit_5;
	// System.Boolean brickScript::breakable
	bool ___breakable_6;

public:
	inline static int32_t get_offset_of_maxHits_2() { return static_cast<int32_t>(offsetof(brickScript_t3740699742, ___maxHits_2)); }
	inline int32_t get_maxHits_2() const { return ___maxHits_2; }
	inline int32_t* get_address_of_maxHits_2() { return &___maxHits_2; }
	inline void set_maxHits_2(int32_t value)
	{
		___maxHits_2 = value;
	}

	inline static int32_t get_offset_of_lvl_3() { return static_cast<int32_t>(offsetof(brickScript_t3740699742, ___lvl_3)); }
	inline LevelManager_t3355282079 * get_lvl_3() const { return ___lvl_3; }
	inline LevelManager_t3355282079 ** get_address_of_lvl_3() { return &___lvl_3; }
	inline void set_lvl_3(LevelManager_t3355282079 * value)
	{
		___lvl_3 = value;
		Il2CppCodeGenWriteBarrier(&___lvl_3, value);
	}

	inline static int32_t get_offset_of_hitSprite_4() { return static_cast<int32_t>(offsetof(brickScript_t3740699742, ___hitSprite_4)); }
	inline SpriteU5BU5D_t3359083662* get_hitSprite_4() const { return ___hitSprite_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_hitSprite_4() { return &___hitSprite_4; }
	inline void set_hitSprite_4(SpriteU5BU5D_t3359083662* value)
	{
		___hitSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprite_4, value);
	}

	inline static int32_t get_offset_of_timesHit_5() { return static_cast<int32_t>(offsetof(brickScript_t3740699742, ___timesHit_5)); }
	inline int32_t get_timesHit_5() const { return ___timesHit_5; }
	inline int32_t* get_address_of_timesHit_5() { return &___timesHit_5; }
	inline void set_timesHit_5(int32_t value)
	{
		___timesHit_5 = value;
	}

	inline static int32_t get_offset_of_breakable_6() { return static_cast<int32_t>(offsetof(brickScript_t3740699742, ___breakable_6)); }
	inline bool get_breakable_6() const { return ___breakable_6; }
	inline bool* get_address_of_breakable_6() { return &___breakable_6; }
	inline void set_breakable_6(bool value)
	{
		___breakable_6 = value;
	}
};

struct brickScript_t3740699742_StaticFields
{
public:
	// System.Int32 brickScript::brickCount
	int32_t ___brickCount_7;

public:
	inline static int32_t get_offset_of_brickCount_7() { return static_cast<int32_t>(offsetof(brickScript_t3740699742_StaticFields, ___brickCount_7)); }
	inline int32_t get_brickCount_7() const { return ___brickCount_7; }
	inline int32_t* get_address_of_brickCount_7() { return &___brickCount_7; }
	inline void set_brickCount_7(int32_t value)
	{
		___brickCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
