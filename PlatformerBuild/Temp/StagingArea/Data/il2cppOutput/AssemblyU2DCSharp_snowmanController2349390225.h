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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// snowmanController
struct  snowmanController_t2349390225  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject snowmanController::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.GameObject snowmanController::snowball
	GameObject_t1756533147 * ___snowball_3;
	// System.Single snowmanController::resetTime
	float ___resetTime_4;
	// System.Single snowmanController::throwSpeed
	float ___throwSpeed_5;
	// System.Boolean snowmanController::inRange
	bool ___inRange_6;
	// System.Single snowmanController::coolDown
	float ___coolDown_7;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(snowmanController_t2349390225, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_snowball_3() { return static_cast<int32_t>(offsetof(snowmanController_t2349390225, ___snowball_3)); }
	inline GameObject_t1756533147 * get_snowball_3() const { return ___snowball_3; }
	inline GameObject_t1756533147 ** get_address_of_snowball_3() { return &___snowball_3; }
	inline void set_snowball_3(GameObject_t1756533147 * value)
	{
		___snowball_3 = value;
		Il2CppCodeGenWriteBarrier(&___snowball_3, value);
	}

	inline static int32_t get_offset_of_resetTime_4() { return static_cast<int32_t>(offsetof(snowmanController_t2349390225, ___resetTime_4)); }
	inline float get_resetTime_4() const { return ___resetTime_4; }
	inline float* get_address_of_resetTime_4() { return &___resetTime_4; }
	inline void set_resetTime_4(float value)
	{
		___resetTime_4 = value;
	}

	inline static int32_t get_offset_of_throwSpeed_5() { return static_cast<int32_t>(offsetof(snowmanController_t2349390225, ___throwSpeed_5)); }
	inline float get_throwSpeed_5() const { return ___throwSpeed_5; }
	inline float* get_address_of_throwSpeed_5() { return &___throwSpeed_5; }
	inline void set_throwSpeed_5(float value)
	{
		___throwSpeed_5 = value;
	}

	inline static int32_t get_offset_of_inRange_6() { return static_cast<int32_t>(offsetof(snowmanController_t2349390225, ___inRange_6)); }
	inline bool get_inRange_6() const { return ___inRange_6; }
	inline bool* get_address_of_inRange_6() { return &___inRange_6; }
	inline void set_inRange_6(bool value)
	{
		___inRange_6 = value;
	}

	inline static int32_t get_offset_of_coolDown_7() { return static_cast<int32_t>(offsetof(snowmanController_t2349390225, ___coolDown_7)); }
	inline float get_coolDown_7() const { return ___coolDown_7; }
	inline float* get_address_of_coolDown_7() { return &___coolDown_7; }
	inline void set_coolDown_7(float value)
	{
		___coolDown_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
