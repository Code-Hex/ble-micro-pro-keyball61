/*
Copyright 2021 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifndef __ASSEMBLER__
#include "config_common.h"
#include "apidef.h"

// unimplemented
#define waitInputPinDelay()

// USB Device descriptor parameters
#define VENDOR_ID           0x5957     // "YW" = Yowkees
#define PRODUCT_ID          0x0100

#define BMP_BOOTPIN_AS_RESET

#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define PREVENT_STUCK_MODIFIERS
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define COMBO_COUNT 32

/* key matrix size */
#define MATRIX_ROWS_DEFAULT 1
#define MATRIX_COLS_DEFAULT 19
#define THIS_DEVICE_ROWS 1
#define THIS_DEVICE_COLS 19
#define IS_LEFT_HAND  true
#define BMP_DEFAULT_MODE SINGLE

/*
 * Enable mass storage when the switch connected following pins is pushed on boot.
 * No warranty
*/
// #define ALLOW_MSC_ROW_PIN 7
// #define ALLOW_MSC_COL_PIN 20

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
// #define MATRIX_ROW_PINS {7, 8, 9, 10, 11} // ["D4","C6","D7","E6","B4"]
// #define MATRIX_COL_PINS {20, 19, 18, 17}  // ["F4","F5","F6","F7"]
#define MATRIX_LAYOUT {1, 2, 3, 5, 6, 7, 47, 46, 45, 43, 42, 41, 0, 9, 10, 11, 13, 14, 15, 55, 54, 53, 51, 50, 49, 0, 17, 18, 19, 21, 22, 23, 63, 62, 61, 59, 58, 57, 0, 25, 26, 27, 29, 30, 31, 32, 72, 71, 70, 69, 67, 66, 65, 0, 33, 34, 35, 37, 38, 39, 40, 80, 79, 74, 73}

#define KEYMAP_PRIOR_LOCALE 0
#define KEYMAP_ASCII 0

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define G00 1 // Dummy for bin/qmk config generation
#define RGB_DI_PIN          G00
#ifdef RGBLIGHT_ENABLE
#  define RGBLED_NUM_DEFAULT 128
#endif

/* Temporary solution for matrix delay */
#define IGNORE_ATOMIC_BLOCK

#endif /*__ASSEMBLER__*/