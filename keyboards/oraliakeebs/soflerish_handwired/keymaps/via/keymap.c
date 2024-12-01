// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

 // qmk compile -kb oraliakeebs/soflerish_handwired -km via

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * 0
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  | J(3) |   K  |   L  |   ;  |  ''  |
 * |------+------+------+------+------+------|   [   |    |   ]   |------+------+------+------+------+------|
 * |LCTRt |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  -   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Vol- | LGUI | LCTR |Spc(2)| / MO(3) /       \ Enter\  | MO(1)| RAlt |  Del | Play |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[0] = LAYOUT(
  KC_ESC,          KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,       KC_8,    KC_9,    KC_0,     KC_BSPC,
  KC_TAB,          KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                              KC_Y,    KC_U,       KC_I,    KC_O,    KC_P,     KC_EQL,
  SFT_T(KC_VOLU),  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                              KC_H,    LT(3,KC_J), KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
  CTL_T(KC_VOLD),  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,         KC_LBRC,   KC_RBRC,  KC_N,    KC_M,       KC_COMM, KC_DOT,  KC_SLSH,  KC_MINS,
                           KC_VOLD, KC_LGUI, KC_LCTL, LT(2,KC_SPC), MO(3),     KC_ENT ,  MO(1),   KC_RALT,    KC_DEL,  KC_MPLY
),
/* 1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   \  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Caps |      |      |      |      |      |                    | Home |Mouse1|  Up  |Mouse2|MacPrt| F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   `  |   |  |   (  |   {  | " "  |-------.    ,-------| End  | Left | Down | Right|PrintS|Insert|
 * |------+------+------+------+------+------|   <   |    |  Mute |------+------+------+------+------+------|
 * |TOGGLE|      |      |      |      |      |-------|    |-------|  F5  | PLAY | Next | Prev |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |Mouse1| /Mouse2 /       \ F12  \  |      |MouseD|MouseU|      |
 *            | Vol- | Vol+ |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
 
[1] = LAYOUT(
    KC_NUBS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_F11,
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_HOME, KC_BTN1, KC_UP,   KC_BTN2, RCS(KC_4),KC_F12,
    KC_LSFT, KC_GRV,  KC_PIPE, KC_LPRN, KC_LCBR, KC_DQUO,                   KC_END,  KC_LEFT, KC_DOWN, KC_RIGHT,KC_PSCR,   KC_INS,
    AS_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LABK, KC_MUTE, KC_F5,   KC_MPLY, KC_MNXT, KC_MPRV, XXXXXXX,   XXXXXXX,
                      KC_VOLD, KC_VOLU, _______, KC_BTN1, KC_BTN2, KC_F12,  _______, KC_WH_D, KC_WH_U, XXXXXXX
),
/* 2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |   7  |  8   |  9   |   -  | Bscp |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  Up  |      |      |      |                    |   *  |   4  |  5   |  6   |   +  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Left | Down | Right|      |      |-------.    ,-------|   /  |   1  |  2   |  3   | ENTER|      |
 * |------+------+------+------+------+------|       |    | Space|------+------+------+------+------+------|
 * | BOOT |      |      |      |      |      |-------|    |-------|   =  |   0  |   .  | ENTER|      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \ ENTER\  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |   .  |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[2] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_P7  , KC_P8  , KC_P9,  KC_PMNS, KC_BSPC,
    XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PAST, KC_P4  , KC_P5  , KC_P6,  KC_PPLS, XXXXXXX,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT,XXXXXXX, XXXXXXX,                   KC_PSLS, KC_P1  , KC_P2  , KC_P3,  KC_PENT, XXXXXXX,
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  KC_PEQL, KC_P0  , KC_PDOT, KC_PENT,XXXXXXX, XXXXXXX,
                      _______, _______, _______, _______, _______, KC_PENT, KC_PDOT, XXXXXXX, _______,  _______
),
/* 3
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |MouseU|      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |Mouse1|MouseD|Mouse2|      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[3] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_BTN1, KC_WH_D, KC_BTN2, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______,  _______
)

};

