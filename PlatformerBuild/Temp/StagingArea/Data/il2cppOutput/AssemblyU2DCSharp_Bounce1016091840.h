#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bounce
struct  Bounce_t1016091840  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 Bounce::fallingPosition
	Vector2_t2243707579  ___fallingPosition_2;

public:
	inline static int32_t get_offset_of_fallingPosition_2() { return static_cast<int32_t>(offsetof(Bounce_t1016091840, ___fallingPosition_2)); }
	inline Vector2_t2243707579  get_fallingPosition_2() const { return ___fallingPosition_2; }
	inline Vector2_t2243707579 * get_address_of_fallingPosition_2() { return &___fallingPosition_2; }
	inline void set_fallingPosition_2(Vector2_t2243707579  value)
	{
		___fallingPosition_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
