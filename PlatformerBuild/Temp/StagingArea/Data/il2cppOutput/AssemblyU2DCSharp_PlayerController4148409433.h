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

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::jumpForce
	float ___jumpForce_2;
	// System.Single PlayerController::moveForce
	float ___moveForce_3;
	// System.Boolean PlayerController::canJump
	bool ___canJump_4;
	// UnityEngine.Rigidbody2D PlayerController::rb2d
	Rigidbody2D_t502193897 * ___rb2d_5;

public:
	inline static int32_t get_offset_of_jumpForce_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpForce_2)); }
	inline float get_jumpForce_2() const { return ___jumpForce_2; }
	inline float* get_address_of_jumpForce_2() { return &___jumpForce_2; }
	inline void set_jumpForce_2(float value)
	{
		___jumpForce_2 = value;
	}

	inline static int32_t get_offset_of_moveForce_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___moveForce_3)); }
	inline float get_moveForce_3() const { return ___moveForce_3; }
	inline float* get_address_of_moveForce_3() { return &___moveForce_3; }
	inline void set_moveForce_3(float value)
	{
		___moveForce_3 = value;
	}

	inline static int32_t get_offset_of_canJump_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___canJump_4)); }
	inline bool get_canJump_4() const { return ___canJump_4; }
	inline bool* get_address_of_canJump_4() { return &___canJump_4; }
	inline void set_canJump_4(bool value)
	{
		___canJump_4 = value;
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb2d_5)); }
	inline Rigidbody2D_t502193897 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t502193897 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
