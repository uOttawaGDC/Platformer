#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonkeyMovement
struct  MonkeyMovement_t2858979508  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MonkeyMovement::xSpeed
	float ___xSpeed_2;
	// System.Single MonkeyMovement::jumpPower
	float ___jumpPower_3;
	// System.Single MonkeyMovement::numberOfJumps
	float ___numberOfJumps_4;

public:
	inline static int32_t get_offset_of_xSpeed_2() { return static_cast<int32_t>(offsetof(MonkeyMovement_t2858979508, ___xSpeed_2)); }
	inline float get_xSpeed_2() const { return ___xSpeed_2; }
	inline float* get_address_of_xSpeed_2() { return &___xSpeed_2; }
	inline void set_xSpeed_2(float value)
	{
		___xSpeed_2 = value;
	}

	inline static int32_t get_offset_of_jumpPower_3() { return static_cast<int32_t>(offsetof(MonkeyMovement_t2858979508, ___jumpPower_3)); }
	inline float get_jumpPower_3() const { return ___jumpPower_3; }
	inline float* get_address_of_jumpPower_3() { return &___jumpPower_3; }
	inline void set_jumpPower_3(float value)
	{
		___jumpPower_3 = value;
	}

	inline static int32_t get_offset_of_numberOfJumps_4() { return static_cast<int32_t>(offsetof(MonkeyMovement_t2858979508, ___numberOfJumps_4)); }
	inline float get_numberOfJumps_4() const { return ___numberOfJumps_4; }
	inline float* get_address_of_numberOfJumps_4() { return &___numberOfJumps_4; }
	inline void set_numberOfJumps_4(float value)
	{
		___numberOfJumps_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
