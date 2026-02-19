/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

/* Key Matrix Size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Key Matrix Pins */
// Mapped from your KiCad schematic PAxx labels to RP2040 GP# pins:
// Column0 (PA02) -> GP6
// Column1 (PA4)  -> GP7
// Column2 (PA10) -> GP8
// Row0    (PA11) -> GP27
// Row1    (PA8)  -> GP26
// Row2    (PA9)  -> GP25
#define MATRIX_ROW_PINS { GP27, GP26, GP25 }
#define MATRIX_COL_PINS { GP6, GP7, GP8 }

/* Debouncing */
#define DEBOUNCE 5

/* USB Device Settings */
#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0001
#define MANUFACTURER    "YourName"
#define PRODUCT         "3x3 Macropad"
#define SERIAL_NUMBER   "001"

/* No extra features for minimal firmware size */
#define NO_ACTION_ONESHOT
