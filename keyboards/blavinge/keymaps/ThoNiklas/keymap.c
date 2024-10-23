// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │tab│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ R │ S │ T │ G │       │ M │ N │ E │ I │ O │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ D │ V │       │ K │ H │L1 │L2 │ ; │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *         ┌───┬───┬───┐       ┌───┬───┬───┐
      *         │Tab│Spc│Ent│       │Sft│Bsp│Esc│
      *         └───┴───┴───┘       └───┴───┴───┘ 
      *      
      * For layout: Thumb keys are the sixth column, Outer key is top row, middle key is middle row and inner key is bottom row
      *             The right hand sight is mirrored on the vertical axis and wired as row 3,4,5                
      */
    // Base
    [0] = LAYOUT_ortho_staggered(
        KC_Q,     KC_W,       KC_F,       KC_P,       KC_B,      LCTL_T(KC_TAB),  
        KC_A,     KC_R,       KC_S,       KC_T,       KC_G,      LT(3, KC_SPC),
        KC_Z,     KC_X,       KC_C,       KC_D,       KC_V,      MT(MOD_MEH,KC_ENT),
        KC_TAB,   KC_Y,       KC_U,       KC_L,       KC_J,      LGUI_T(KC_ESCAPE), 
        KC_O,     KC_I,       KC_E,       KC_N,       KC_M,      LT(4, KC_BSPC),
        KC_SCLN,  MO(2),      MO(1),      KC_H,       KC_K,      KC_LSFT                          
    ),
    // Sym
    [1] = LAYOUT_ortho_staggered(
        KC_GT,    KC_RCBR,    KC_RBRC,    KC_RPRN,    KC_BSLS,   KC_UNDS,                 
        KC_LT,    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_SLSH,   KC_QUOT,                
        KC_HASH,  KC_DLR,     KC_QUES,    KC_EXLM,    KC_PIPE,   KC_DQUO,                 
        KC_AT,    KC_NO,      KC_NO,      KC_CIRC,    KC_TILD,   KC_MINS,               
        KC_SCLN,  KC_COLN,    KC_NO,      KC_ASTR,    KC_PERC,   KC_COMM,               
        KC_GRV,   KC_PLUS,    MO(1),      KC_PEQL,    KC_AMPR,   KC_DOT                                                          
    ),
    // misc
    [2] = LAYOUT_ortho_staggered(
        KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,     KC_NO,                         
        KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,     KC_NO,                        
        KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,     KC_NO,                         
        KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,     KC_NO,
        KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,     KC_NO, 
        KC_NO,    MO(2),      KC_NO,      KC_NO,      KC_NO,     KC_NO
    ),
    // Nav
    [3] = LAYOUT_ortho_staggered(
        KC_MUTE,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLU, KC_NO,               
        KC_LGUI,    KC_LALT,    KC_LSFT,    KC_LCTL,    KC_VOLD, MO(3),               
        C(KC_Z),    C(KC_X),    C(KC_C),    C(KC_D),    C(KC_V), KC_NO,               
        KC_INS,     KC_Y,       KC_PGUP,    KC_SPC,     KC_L,    KC_ESCAPE,
        KC_TAB,     KC_RIGHT,   KC_UP,      KC_LEFT,    KC_PGDN, KC_BSPC,         
        KC_ENT,     KC_H,       KC_DOWN,    KC_TAB,     KC_HOME, KC_DEL                                                     
    ),
    // Num
    [4] = LAYOUT_ortho_staggered(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,   KC_TAB,                                      
        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_SPC,                                    
        KC_F11,   KC_F12,   KC_F13,   KC_PSCR,  KC_PAUS, KC_ENT,                                  
        KC_BSPC,  KC_P9,    KC_P8,    KC_P7,    KC_PMNS, KC_NO,
        KC_DOT,   KC_P6,    KC_P5,    KC_P4,    KC_P0,   MO(4),
        KC_PCMM,  KC_P3,    KC_P2,    KC_P1,    KC_PPLS, KC_NO       
    )
};
