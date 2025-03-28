/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define MASTER_RIGHT

// Tap hold settings
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define TAPPING_TOGGLE 2

#ifdef AUTO_SHIFT_ENABLE
    #define AUTO_SHIFT_TIMEOUT 150
    #define AUTO_SHIFT_OFF
    #define AUTO_SHIFT_REPEAT
#endif

#ifdef OS_DETECTION_ENABLE
    #define OS_DETECTION_DEBOUNCE 1000
    #define OS_DETECTION_KEYBOARD_RESET
#endif

#ifdef CAPS_WORD_ENABLE
    #define CAPS_WORD_INVERT_ON_SHIFT
#endif