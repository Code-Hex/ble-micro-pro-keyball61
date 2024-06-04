/*
This is the c configuration file for the keymap

Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)
Copyright 2024 Kei Kamikawa (aka @codehex)

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

// Align the BLE Micro Pro pin locations with the Pro Micro pin numbers.
//
// BLE Pro Micro: https://github.com/sekigon-gonnoc/BLE-Micro-Pro/blob/master/pin%20assign.jpg
// Pro Micro ("P" prefix): https://camo.githubusercontent.com/6bc0edb851f17ee8c8b6dd9f2c86d93951c78f745f2e5be31f91e7824dd1e379/68747470733a2f2f692e696d6775722e636f6d2f51744c6a5830312e706e67
#define D3 1
#define D2 2
#define D1 5
#define D0 6
#define D4 7
#define C6 8
#define D7 9
#define E6 10
#define B4 11
#define B5 12
#define F4 20
#define F5 19
#define F6 18
#define F7 17
#define B1 16
#define B3 15
#define B2 14
#define B6 13

#define VIAL_KEYBOARD_UID {0x05, 0xCB, 0x3A, 0xF5, 0xB7, 0xA4, 0x05, 0x42}
// R01: [5, 1], R00: [5, 0]
#define VIAL_UNLOCK_COMBO_ROWS { 5, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 0 }

/* Temporary solution for matrix delay */
#define IGNORE_ATOMIC_BLOCK

/* key matrix size */
#define MATRIX_ROWS_DEFAULT 10
#define MATRIX_COLS_DEFAULT 8

#define BMP_DEFAULT_MODE SINGLE
#define THIS_DEVICE_ROWS MATRIX_ROWS_DEFAULT
#define THIS_DEVICE_COLS MATRIX_COLS_DEFAULT
#define BMP_USE_DEFAULT_VIAL_CONFIG

/* TAP DANCE */
#define TAPPING_TERM 200

// #define MATRIX_ROW_PINS {7, 8, 9, 10, 11} // ["D4","C6","D7","E6","B4"]
// #define MATRIX_COL_PINS {20, 19, 18, 17}  // ["F4","F5","F6","F7"]
#define WS2812_DI_PIN       D3
#define DIODE_DIRECTION     COL2ROW
// #define ACTION_DEBUG
#define ENCODERS_PAD_A {}
#define ENCODERS_PAD_B {}

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 2

#endif
