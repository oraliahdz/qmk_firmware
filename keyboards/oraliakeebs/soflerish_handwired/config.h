// Copyright 2023 oraliahdz (@oraliahdz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Key Matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS {F6, F7, B1, B3, B2, B6}
#define MATRIX_COL_PINS {D3, D4, C6, D7, E6, B4, B5}
#define MATRIX_ROW_PINS_RIGHT {F6, F7, B1, B3, B2, B6}
#define MATRIX_COL_PINS_RIGHT {B5, B4, E6, D7, C6, D4, D3}

/* COL2ROW: COL = Anode (+), ROW = Cathode (-, marked on Diode)*/
#define DIODE_DIRECTION COL2ROW

/* Debounce (ms) reduces chatter (unintended double-presses) */
#define DEBOUNCE 5

/* For easily jumping into the bootloader */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Split Keyboard config  - Detect which half*/
#define SPLIT_HAND_PIN B7

// Communication between sides
#define SOFT_SERIAL_PIN D2

