 // Copyright 2023 oraliahdz (@oraliahdz)
// SPDX-License-Identifier: GPL-2.0-or-later

// include files only once
#pragma once
// basic library
#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6,               RA6, RA5, RA4, RA3, RA2, RA1, \
    LB1, LB2, LB3, LB4, LB5, LB6,               RB6, RB5, RB4, RB3, RB2, RB1, \
    LC1, LC2, LC3, LC4, LC5, LC6,               RC6, RC5, RC4, RC3, RC2, RC1, \
    LD1, LD2, LD3, LD4, LD5, LD6, LF7,     RF7, RD6, RD5, RD4, RD3, RD2, RD1, \
              LE3, LE4, LE5, LE6, LE7,     RE7, RE6, RE5, RE4, RE3 			  \
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6,	XXX }, \
        { LB1, LB2, LB3, LB4, LB5, LB6,	XXX }, \
        { LC1, LC2, LC3, LC4, LC5, LC6,	XXX }, \
        { LD1, LD2, LD3, LD4, LD5, LD6,	XXX }, \
        { XXX, XXX, LE3, LE4, LE5, LE6,	LE7 }, \
        { XXX, XXX, XXX, XXX, XXX, XXX,	LF7 }, \
        { RA1, RA2, RA3, RA4, RA5, RA6,	XXX }, \
        { RB1, RB2, RB3, RB4, RB5, RB6,	XXX }, \
        { RC1, RC2, RC3, RC4, RC5, RC6,	XXX }, \
        { RD1, RD2, RD3, RD4, RD5, RD6,	XXX }, \
        { XXX, XXX, RE3, RE4, RE5, RE6,	RE7 }, \
        { XXX, XXX, XXX, XXX, XXX, XXX,	RF7 } \
    }
