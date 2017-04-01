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
// System.String
struct String_t;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;

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
	// UnityEngine.Rigidbody2D PlayerController::rb2d
	Rigidbody2D_t502193897 * ___rb2d_4;
	// System.Boolean PlayerController::canJump
	bool ___canJump_5;
	// System.Int32 PlayerController::animalNumber
	int32_t ___animalNumber_6;
	// System.String PlayerController::animalName
	String_t* ___animalName_7;
	// UnityEngine.SpriteRenderer[] PlayerController::animalSprites
	SpriteRendererU5BU5D_t1098056643* ___animalSprites_8;

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

	inline static int32_t get_offset_of_rb2d_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb2d_4)); }
	inline Rigidbody2D_t502193897 * get_rb2d_4() const { return ___rb2d_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_4() { return &___rb2d_4; }
	inline void set_rb2d_4(Rigidbody2D_t502193897 * value)
	{
		___rb2d_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_4, value);
	}

	inline static int32_t get_offset_of_canJump_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___canJump_5)); }
	inline bool get_canJump_5() const { return ___canJump_5; }
	inline bool* get_address_of_canJump_5() { return &___canJump_5; }
	inline void set_canJump_5(bool value)
	{
		___canJump_5 = value;
	}

	inline static int32_t get_offset_of_animalNumber_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___animalNumber_6)); }
	inline int32_t get_animalNumber_6() const { return ___animalNumber_6; }
	inline int32_t* get_address_of_animalNumber_6() { return &___animalNumber_6; }
	inline void set_animalNumber_6(int32_t value)
	{
		___animalNumber_6 = value;
	}

	inline static int32_t get_offset_of_animalName_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___animalName_7)); }
	inline String_t* get_animalName_7() const { return ___animalName_7; }
	inline String_t** get_address_of_animalName_7() { return &___animalName_7; }
	inline void set_animalName_7(String_t* value)
	{
		___animalName_7 = value;
		Il2CppCodeGenWriteBarrier(&___animalName_7, value);
	}

	inline static int32_t get_offset_of_animalSprites_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___animalSprites_8)); }
	inline SpriteRendererU5BU5D_t1098056643* get_animalSprites_8() const { return ___animalSprites_8; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of_animalSprites_8() { return &___animalSprites_8; }
	inline void set_animalSprites_8(SpriteRendererU5BU5D_t1098056643* value)
	{
		___animalSprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___animalSprites_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
