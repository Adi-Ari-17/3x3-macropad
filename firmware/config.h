/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

/* Key Matrix Size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Key Matrix Pins */
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
