#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Character3726027591.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bird
struct  Bird_t1163357383  : public Character_t3726027591
{
public:
	// System.Single Bird::flyPower
	float ___flyPower_7;
	// System.Single Bird::gravityPower
	float ___gravityPower_8;

public:
	inline static int32_t get_offset_of_flyPower_7() { return static_cast<int32_t>(offsetof(Bird_t1163357383, ___flyPower_7)); }
	inline float get_flyPower_7() const { return ___flyPower_7; }
	inline float* get_address_of_flyPower_7() { return &___flyPower_7; }
	inline void set_flyPower_7(float value)
	{
		___flyPower_7 = value;
	}

	inline static int32_t get_offset_of_gravityPower_8() { return static_cast<int32_t>(offsetof(Bird_t1163357383, ___gravityPower_8)); }
	inline float get_gravityPower_8() const { return ___gravityPower_8; }
	inline float* get_address_of_gravityPower_8() { return &___gravityPower_8; }
	inline void set_gravityPower_8(float value)
	{
		___gravityPower_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
