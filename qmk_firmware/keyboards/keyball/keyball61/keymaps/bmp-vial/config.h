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

#define VIAL_KEYBOARD_UID {0x05, 0xE4, 0xA1, 0x7F, 0xDC, 0x87, 0xCB, 0x2A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* Temporary solution for matrix delay */
#define IGNORE_ATOMIC_BLOCK

/* key matrix size */
#define MATRIX_ROWS_DEFAULT 1
#define MATRIX_COLS_DEFAULT 19
#define THIS_DEVICE_ROWS 1
#define THIS_DEVICE_COLS 19
#define IS_LEFT_HAND  true
#define BMP_DEFAULT_MODE SINGLE

// #define MATRIX_ROW_PINS {7, 8, 9, 10, 11} // ["D4","C6","D7","E6","B4"]
// #define MATRIX_COL_PINS {20, 19, 18, 17}  // ["F4","F5","F6","F7"]
#define WS2812_DI_PIN       D3
#define DIODE_DIRECTION     COL2ROW
#define ENCODERS_PAD_A {}
#define ENCODERS_PAD_B {}

#define TAP_CODE_DELAY 5

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 2
