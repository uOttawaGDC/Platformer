#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Character
struct  Character_t3726027591  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D Character::rb
	Rigidbody2D_t502193897 * ___rb_2;
	// System.Single Character::moveSpeed
	float ___moveSpeed_3;
	// System.Single Character::jumpPower
	float ___jumpPower_4;
	// System.Single Character::jumpCount
	float ___jumpCount_5;
	// System.Single Character::remainingJumps
	float ___remainingJumps_6;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(Character_t3726027591, ___rb_2)); }
	inline Rigidbody2D_t502193897 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody2D_t502193897 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(Character_t3726027591, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_jumpPower_4() { return static_cast<int32_t>(offsetof(Character_t3726027591, ___jumpPower_4)); }
	inline float get_jumpPower_4() const { return ___jumpPower_4; }
	inline float* get_address_of_jumpPower_4() { return &___jumpPower_4; }
	inline void set_jumpPower_4(float value)
	{
		___jumpPower_4 = value;
	}

	inline static int32_t get_offset_of_jumpCount_5() { return static_cast<int32_t>(offsetof(Character_t3726027591, ___jumpCount_5)); }
	inline float get_jumpCount_5() const { return ___jumpCount_5; }
	inline float* get_address_of_jumpCount_5() { return &___jumpCount_5; }
	inline void set_jumpCount_5(float value)
	{
		___jumpCount_5 = value;
	}

	inline static int32_t get_offset_of_remainingJumps_6() { return static_cast<int32_t>(offsetof(Character_t3726027591, ___remainingJumps_6)); }
	inline float get_remainingJumps_6() const { return ___remainingJumps_6; }
	inline float* get_address_of_remainingJumps_6() { return &___remainingJumps_6; }
	inline void set_remainingJumps_6(float value)
	{
		___remainingJumps_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
