/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2021 tfuxu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3299
#define PRODUCT_ID      0x4E58
#define DEVICE_VER      0x0001

#define MANUFACTURER    SPCGear
#define PRODUCT         GK630K
#define DESCRIPTION     GK630K Tournament

/* key matrix size */
#define MATRIX_ROWS     6
#define MATRIX_COLS     17

#define DIODE_DIRECTION ROW2COL

#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, B0, B1 }
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Enable NKRO by default*/
#define FORCE_NKRO

/* LED Status indicators */
#define LED_CAPS_LOCK_PIN   B14
#define LED_WIN_LOCK_PIN    B15 // One of the features in stock firmware (not implemented yet)
#define LED_PIN_ON_STATE    0

#include "config_led.h"
