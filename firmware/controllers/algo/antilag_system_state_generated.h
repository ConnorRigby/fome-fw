#pragma once
#include "rusefi_types.h"
struct antilag_system_state_s {
	// offset 0 bit 0
	bool isAntilagCondition : 1 {};
	// offset 0 bit 1
	bool ALSMinRPMCondition : 1 {};
	// offset 0 bit 2
	bool ALSMaxRPMCondition : 1 {};
	// offset 0 bit 3
	bool ALSMinCLTCondition : 1 {};
	// offset 0 bit 4
	bool ALSMaxCLTCondition : 1 {};
	// offset 0 bit 5
	bool ALSMaxThrottleIntentCondition : 1 {};
	// offset 0 bit 6
	bool isALSSwitchActivated : 1 {};
	// offset 0 bit 7
	bool ALSActivatePinState : 1 {};
	// offset 0 bit 8
	bool ALSSwitchCondition : 1 {};
	// offset 0 bit 9
	bool ALSTimerCondition : 1 {};
	// offset 0 bit 10
	bool unusedBit_10_10 : 1 {};
	// offset 0 bit 11
	bool unusedBit_10_11 : 1 {};
	// offset 0 bit 12
	bool unusedBit_10_12 : 1 {};
	// offset 0 bit 13
	bool unusedBit_10_13 : 1 {};
	// offset 0 bit 14
	bool unusedBit_10_14 : 1 {};
	// offset 0 bit 15
	bool unusedBit_10_15 : 1 {};
	// offset 0 bit 16
	bool unusedBit_10_16 : 1 {};
	// offset 0 bit 17
	bool unusedBit_10_17 : 1 {};
	// offset 0 bit 18
	bool unusedBit_10_18 : 1 {};
	// offset 0 bit 19
	bool unusedBit_10_19 : 1 {};
	// offset 0 bit 20
	bool unusedBit_10_20 : 1 {};
	// offset 0 bit 21
	bool unusedBit_10_21 : 1 {};
	// offset 0 bit 22
	bool unusedBit_10_22 : 1 {};
	// offset 0 bit 23
	bool unusedBit_10_23 : 1 {};
	// offset 0 bit 24
	bool unusedBit_10_24 : 1 {};
	// offset 0 bit 25
	bool unusedBit_10_25 : 1 {};
	// offset 0 bit 26
	bool unusedBit_10_26 : 1 {};
	// offset 0 bit 27
	bool unusedBit_10_27 : 1 {};
	// offset 0 bit 28
	bool unusedBit_10_28 : 1 {};
	// offset 0 bit 29
	bool unusedBit_10_29 : 1 {};
	// offset 0 bit 30
	bool unusedBit_10_30 : 1 {};
	// offset 0 bit 31
	bool unusedBit_10_31 : 1 {};
	// offset 4
	float fuelALSCorrection = (float)0;
	// deg
	// offset 8
	scaled_channel<int16_t, 100, 1> timingALSCorrection = (int16_t)0;
	// offset 10
	uint8_t alignmentFill_at_10[2];
};
static_assert(sizeof(antilag_system_state_s) == 12);

