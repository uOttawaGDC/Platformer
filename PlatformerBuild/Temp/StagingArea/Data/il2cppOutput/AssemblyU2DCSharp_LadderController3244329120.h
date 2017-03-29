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

// LadderController
struct  LadderController_t3244329120  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LadderController::zone1
	GameObject_t1756533147 * ___zone1_2;
	// UnityEngine.GameObject LadderController::zone2
	GameObject_t1756533147 * ___zone2_3;
	// System.Single LadderController::distance
	float ___distance_4;

public:
	inline static int32_t get_offset_of_zone1_2() { return static_cast<int32_t>(offsetof(LadderController_t3244329120, ___zone1_2)); }
	inline GameObject_t1756533147 * get_zone1_2() const { return ___zone1_2; }
	inline GameObject_t1756533147 ** get_address_of_zone1_2() { return &___zone1_2; }
	inline void set_zone1_2(GameObject_t1756533147 * value)
	{
		___zone1_2 = value;
		Il2CppCodeGenWriteBarrier(&___zone1_2, value);
	}

	inline static int32_t get_offset_of_zone2_3() { return static_cast<int32_t>(offsetof(LadderController_t3244329120, ___zone2_3)); }
	inline GameObject_t1756533147 * get_zone2_3() const { return ___zone2_3; }
	inline GameObject_t1756533147 ** get_address_of_zone2_3() { return &___zone2_3; }
	inline void set_zone2_3(GameObject_t1756533147 * value)
	{
		___zone2_3 = value;
		Il2CppCodeGenWriteBarrier(&___zone2_3, value);
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(LadderController_t3244329120, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
