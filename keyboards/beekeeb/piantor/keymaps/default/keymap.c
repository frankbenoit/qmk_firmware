// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const key_override_t dot_key_override   = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_QUES);
const key_override_t comma_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_EXLM);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &dot_key_override,
    &comma_key_override,
    NULL // Null terminate the array of overrides!
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │ B │ Y │ O │ U │ ' │       │ ; │ L │ D │ W │ V │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ C │ I │ E │ A │ , │       │ . │ H │ T │ S │ N │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ G │ X │ J │ K │ Z │       │ Q │ R │ M │ F │ P │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Bsp├───┐           ┌───┤Spc│
      *               └───┤Esc├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_NO,   KC_B,              MT(MOD_RALT,KC_Y), KC_O,              KC_U,              KC_QUOT,                 KC_SCLN,    KC_L,              KC_D,              MT(MOD_RALT,KC_W), KC_V,              KC_NO,
        KC_NO,   MT(MOD_LGUI,KC_C), MT(MOD_LALT,KC_I), MT(MOD_LCTL,KC_E), MT(MOD_LSFT,KC_A), KC_COMM,                 KC_DOT,     MT(MOD_LSFT,KC_H), MT(MOD_LCTL,KC_T), MT(MOD_LALT,KC_S), MT(MOD_LGUI,KC_N), KC_NO,
        KC_NO,   KC_G,              KC_X,              KC_J,              KC_K,              KC_Z,                    KC_Q,       KC_R,              KC_M,              KC_F,              KC_P,              KC_NO,
                                                       LT(1,KC_BSPC),     LT(3,KC_ESC),      LT(2,KC_RALT),           LT(1,KC_RALT), LT(3,KC_ENT), LT(2,KC_SPC)
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │ ~ │ % │ / │ \ │ ` │       │Tab│ ->│End│ $ │Ins│   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ # │ @ │ PD│ PU│   │       │   │<- │Hom│ ^ │RAl│   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │Del│ ↓ │ ↑ │   │       │Cap│ ( │ { │ } │ ) │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
// nav
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_TILD,    KC_PERC,   KC_PSLS,     KC_BSLS,    KC_GRV,                          KC_TAB,      KC_RGHT,   KC_END,     KC_DLR,     KC_INS,     KC_NO, 
		KC_NO,   KC_HASH,    KC_AT,     KC_PGDN,     KC_PGUP,    KC_NO,                           KC_NO,       KC_LEFT,   KC_HOME,    KC_CIRC,    KC_RALT,    KC_NO, 
		KC_NO,   KC_NO,      KC_DEL,    KC_DOWN,     KC_UP,      KC_NO,                           KC_CAPS,     KC_LPRN,   KC_LCBR,    KC_RCBR,    KC_RPRN,    KC_NO,
		                                KC_TRNS,     KC_TRNS,    KC_TRNS,                         KC_TRNS,     KC_TRNS,   KC_TRNS
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │ < │ ! │ = │ > │   │       │   │ 9 │ 0 │ _ │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ + │ - │ | │ & │   │       │   │ 5 │ 6 │ 7 │ 8 │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ / │ * │ [ │ ] │   │       │   │ 1 │ 2 │ 3 │ 4 │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
	// number
    [2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_LT,      KC_EXLM,   KC_PEQL,     KC_GT,      KC_TRNS,                         KC_TRNS,     KC_P9,     KC_P0,      KC_UNDS,    KC_NO,      KC_NO, 
		KC_NO,   KC_PPLS,    KC_PMNS,   KC_PIPE,     KC_AMPR,    KC_TRNS,                         KC_TRNS,     KC_P5,     KC_P6,      KC_P7,      KC_P8,      KC_NO, 
		KC_NO,   KC_NO,      KC_PAST,   KC_LBRC,     KC_RBRC,    KC_TRNS,                         KC_TRNS,     KC_P1,     KC_P2,      KC_P3,      KC_P4,      KC_NO, 
		                                KC_TRNS,     KC_TRNS,    KC_TRNS,                         KC_TRNS,     KC_TRNS,   KC_TRNS
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │   │Und│   │PSc│       │   │F9 │F10│   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │   │F5 │F6 │F7 │F8 │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │Cut│Cpy│Pst│   │       │   │F1 │F2 │F3 │F4 │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
	// function
    [3] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,      KC_NO,     KC_UNDO,     KC_NO,      KC_PSCR,                         KC_NO,       KC_F9,     KC_F10,     KC_F11,     KC_F12,     KC_NO,
		KC_NO,   KC_F16,     KC_F15,    KC_F14,      KC_F13,     KC_NO,                           KC_NO,       KC_F5,     KC_F6,      KC_F7,      KC_F8,      KC_NO,
		KC_NO,   KC_NO,      KC_CUT,    KC_COPY,     KC_PSTE,    KC_NO,                           KC_NO,       KC_F1,     KC_F2,      KC_F3,      KC_F4,      KC_NO, 
		                                KC_TRNS,     KC_TRNS,    KC_TRNS,                         KC_TRNS,     KC_TRNS,   KC_TRNS
    )
};

