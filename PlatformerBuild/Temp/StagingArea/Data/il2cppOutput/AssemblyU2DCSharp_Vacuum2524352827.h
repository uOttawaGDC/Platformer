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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vacuum
struct  Vacuum_t2524352827  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Vacuum::gravityScale
	float ___gravityScale_2;
	// UnityEngine.GameObject Vacuum::character
	GameObject_t1756533147 * ___character_3;
	// UnityEngine.Rigidbody2D Vacuum::rb
	Rigidbody2D_t502193897 * ___rb_4;
	// System.Boolean Vacuum::activated
	bool ___activated_5;

public:
	inline static int32_t get_offset_of_gravityScale_2() { return static_cast<int32_t>(offsetof(Vacuum_t2524352827, ___gravityScale_2)); }
	inline float get_gravityScale_2() const { return ___gravityScale_2; }
	inline float* get_address_of_gravityScale_2() { return &___gravityScale_2; }
	inline void set_gravityScale_2(float value)
	{
		___gravityScale_2 = value;
	}

	inline static int32_t get_offset_of_character_3() { return static_cast<int32_t>(offsetof(Vacuum_t2524352827, ___character_3)); }
	inline GameObject_t1756533147 * get_character_3() const { return ___character_3; }
	inline GameObject_t1756533147 ** get_address_of_character_3() { return &___character_3; }
	inline void set_character_3(GameObject_t1756533147 * value)
	{
		___character_3 = value;
		Il2CppCodeGenWriteBarrier(&___character_3, value);
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Vacuum_t2524352827, ___rb_4)); }
	inline Rigidbody2D_t502193897 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_t502193897 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}

	inline static int32_t get_offset_of_activated_5() { return static_cast<int32_t>(offsetof(Vacuum_t2524352827, ___activated_5)); }
	inline bool get_activated_5() const { return ___activated_5; }
	inline bool* get_address_of_activated_5() { return &___activated_5; }
	inline void set_activated_5(bool value)
	{
		___activated_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
