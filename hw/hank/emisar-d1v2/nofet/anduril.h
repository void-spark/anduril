// Emisar D1v2 (linear only, no DDFET) config options for Anduril
// (2022 re-issue / update of old D1)
// Copyright (C) 2022-2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// similar to a Noctigon KR4, sort of
#include "hank/noctigon-kr4/nofet/anduril.h"

// some models use a simple button LED, others use RGB...
// ... so include support for both
#define USE_BUTTON_LED
// the aux LEDs are in the button, so use them while main LEDs are on
#define USE_AUX_RGB_LEDS
#define USE_AUX_RGB_LEDS_WHILE_ON  25
#define USE_INDICATOR_LED_WHILE_RAMPING

// safe limit: same as regular ramp
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_CEIL RAMP_SMOOTH_CEIL


// My customizations for my d1v2 with RGB button

// I don't need the simple ui
#undef USE_SIMPLE_UI

// Always go to lockout after 5 minutes
#define DEFAULT_AUTOLOCK_TIME 5

// Use 'white' for off, shows off all the RGB leds.
#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x26 

// Low blue for lockout
#define RGB_LED_LOCKOUT_DEFAULT 0x14

#define DEFAULT_MANUAL_MEMORY 78
#define DEFAULT_MANUAL_MEMORY_TIMER 5
