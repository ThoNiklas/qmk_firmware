// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │Bsp├───┐   ┌───┤Ent│
      *               └───┤Tab│   │Spc├───┘
      *                   └───┘   └───┘
      */
    // Base
    [0] = LAYOUT_ortho_staggered(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_TAB,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_0,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    MO(1),   MO(2),   KC_SCLN,
        LCTL_T(KC_TAB),  LT(3, KC_SPC),  MT(MOD_MEH,KC_ENT),                    KC_LSFT, LT(4, KC_BSPC),  LGUI_T(KC_ESCAPE)
    ),
    // Sym
    [1] = LAYOUT_ortho_staggered(
        KC_GT,    KC_RCBR,    KC_RBRC,    KC_RPRN,    KC_BSLS,                  KC_TILD,    KC_CIRC,    KC_NO,    KC_NO,    KC_AT,
        KC_LT,    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_SLSH,                  KC_PERC,    KC_ASTR,    KC_NO,    KC_COLN,    KC_SCLN,
        KC_HASH,  KC_DLR,     KC_QUES,    KC_EXLM,    KC_PIPE,                  KC_AMPR,    KC_PEQL,    MO(1),    KC_PLUS,  KC_GRV,
                              KC_UNDS,    KC_QUOT,    KC_DQUO,                  KC_DOT,     KC_COMM, KC_MINS
    ),
    // misc
    [2] = LAYOUT_ortho_staggered(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                          KC_NO,    KC_NO,    KC_NO,    MO(2),    KC_NO,
                                KC_NO,  KC_NO,  KC_NO,                          KC_NO,    KC_NO,   KC_NO
    ),
    // Nav
    [3] = LAYOUT_ortho_staggered(
        KC_MUTE,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLU,                KC_PGUP,    KC_L,    KC_SPC,    KC_Y,    KC_INS,
        KC_LGUI,    KC_LALT,    KC_LSFT,    KC_LCTL,    KC_VOLD,                KC_PGDN,    KC_LEFT, KC_UP,     KC_RIGHT,KC_TAB,
        C(KC_Z),    C(KC_X),    C(KC_C),    C(KC_D),    C(KC_V),                KC_HOME,    KC_H,    KC_DOWN,   KC_TAB,  KC_ENT,
                                KC_NO,      MO(3),      KC_NO,                  KC_DEL,     KC_BSPC, KC_ESCAPE
    ),
    // Num
    [4] = LAYOUT_ortho_staggered(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                          KC_PMNS,  KC_P7,    KC_P8,    KC_P9,    KC_BSPC,
        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,                         KC_P0,    KC_P4,    KC_P5,    KC_P6,    KC_DOT,
        KC_F11,   KC_F12,   KC_F13,   KC_PSCR,  KC_PAUS,                        KC_PPLS,  KC_P1,    KC_P2,    KC_P3,    KC_PCMM,
        KC_TAB,   KC_SPC,   KC_ENT,                                             KC_NO,    MO(4),    KC_NO
    )
};
