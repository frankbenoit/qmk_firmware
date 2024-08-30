
#include <stdint.h>
#include QMK_KEYBOARD_H
#include "ansi.h"

enum layer_index {
    L_ENG = 0,
    L_EFN,
    L_QWE,
    L_QFN,
    L_SYS,
    L_EXT,
    L_NUM,
    L_MSE,
};

enum custom2_keycodes {
    EGR_SQT = RGB_TEST + 1,
    EGR_DQT,
    EGR_COMMA,
    EGR_DOT,
    EGR_QUEST,
    MACRO_0,
    MACRO_1,
    ALT_TAB,
    EXTEND,
    NUMBER,
    EXT_RALT,
    HOLD,

    EGR_GRV,
    EGR_1,
    EGR_2,
    EGR_3,
    EGR_4,
    EGR_5,
    EGR_6,
    EGR_7,
    EGR_8,
    EGR_9,
    EGR_0,
    EGR_MINS,
    EGR_EQL,
    EGR_RBRC,
    EGR_BSLS,
};

#define MSK_L_ENGNUM (1 << L_ENG)
const key_override_t sqt1_key_override = ko_make_with_layers_and_negmods(0, EGR_SQT, KC_QUOTE, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t sqt2_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_SQT, KC_PLUS, MSK_L_ENGNUM);
const key_override_t dqt1_key_override = ko_make_with_layers_and_negmods(0, EGR_DQT, KC_DQUO, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t dqt2_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_DQT, KC_EQL, MSK_L_ENGNUM);
const key_override_t com1_key_override = ko_make_with_layers_and_negmods(0, EGR_COMMA, KC_COMMA, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t com2_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_COMMA, KC_SCLN, MSK_L_ENGNUM);
const key_override_t dot1_key_override = ko_make_with_layers_and_negmods(0, EGR_DOT, KC_DOT, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t dot2_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_DOT, KC_COLN, MSK_L_ENGNUM);
const key_override_t qst1_key_override = ko_make_with_layers_and_negmods(0, EGR_QUEST, KC_QUES, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t qst2_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_QUEST, KC_EXLM, MSK_L_ENGNUM);

const key_override_t nu11_key_override = ko_make_with_layers_and_negmods(0, EGR_1, KC_GRV, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu12_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_1, KC_TILDE, MSK_L_ENGNUM);

const key_override_t nu21_key_override = ko_make_with_layers_and_negmods(0, EGR_2, KC_BSLS, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu22_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_2, KC_AT, MSK_L_ENGNUM);

const key_override_t nu31_key_override = ko_make_with_layers_and_negmods(0, EGR_3, KC_LCBR, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu32_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_3, KC_LBRC, MSK_L_ENGNUM);

const key_override_t nu41_key_override = ko_make_with_layers_and_negmods(0, EGR_4, KC_RCBR, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu42_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_4, KC_RBRC, MSK_L_ENGNUM);

const key_override_t nu51_key_override = ko_make_with_layers_and_negmods(0, EGR_5, KC_CIRC, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu52_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_5, KC_PERC, MSK_L_ENGNUM);

const key_override_t nu61_key_override = ko_make_with_layers_and_negmods(0, EGR_6, KC_DLR, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu62_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_6, KC_HASH, MSK_L_ENGNUM);

const key_override_t nu71_key_override = ko_make_with_layers_and_negmods(0, EGR_7, KC_LPRN, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu72_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_7, KC_LT, MSK_L_ENGNUM);

const key_override_t nu81_key_override = ko_make_with_layers_and_negmods(0, EGR_8, KC_RPRN, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu82_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_8, KC_GT, MSK_L_ENGNUM);

const key_override_t nu91_key_override = ko_make_with_layers_and_negmods(0, EGR_9, KC_SLSH, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu92_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_9, KC_PIPE, MSK_L_ENGNUM);

const key_override_t nu01_key_override = ko_make_with_layers_and_negmods(0, EGR_0, KC_ASTR, MSK_L_ENGNUM, MOD_MASK_SHIFT);
const key_override_t nu02_key_override = ko_make_with_layers(MOD_MASK_SHIFT, EGR_0, KC_AMPR, MSK_L_ENGNUM);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &sqt2_key_override,
    &sqt1_key_override,
    &dqt2_key_override,
    &dqt1_key_override,
    &com2_key_override,
    &com1_key_override,
    &dot2_key_override,
    &dot1_key_override,
    &qst2_key_override,
    &qst1_key_override,
    &nu11_key_override,
    &nu12_key_override,
    &nu21_key_override,
    &nu22_key_override,
    &nu31_key_override,
    &nu32_key_override,
    &nu41_key_override,
    &nu42_key_override,
    &nu51_key_override,
    &nu52_key_override,
    &nu61_key_override,
    &nu62_key_override,
    &nu71_key_override,
    &nu72_key_override,
    &nu81_key_override,
    &nu82_key_override,
    &nu91_key_override,
    &nu92_key_override,
    &nu01_key_override,
    &nu02_key_override,
    NULL // Null terminate the array of overrides!
};

#define WIN_LCK G(KC_L)
#define WIN_MIC G(A(KC_K))



const uint16_t PROGMEM test_combo1[] = {EGR_1, EGR_3, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {EGR_2, EGR_4, COMBO_END};
combo_t key_combos[] = {
    COMBO(test_combo1, MACRO_0),
    COMBO(test_combo2, MACRO_1),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer 0 - Engram
[L_ENG] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     MO(L_EFN),  XXXXXXX,    KC_DEL,
    MO(L_MSE),  EGR_1,      EGR_2,      EGR_3,      EGR_4,      EGR_5,      EGR_6,      EGR_7,      EGR_8,      EGR_9,      EGR_0,      XXXXXXX,    XXXXXXX,    /******/    KC_BSPC,    KC_PGUP,
    ALT_TAB,    KC_B,       KC_Y,       LT(0, KC_O),LT(0, KC_U),EGR_SQT,    EGR_DQT,    KC_L,       KC_D,       KC_W,       KC_V,       KC_Z,       XXXXXXX,    /******/    C(KC_BSPC), KC_PGDN,
    EXTEND,     KC_C,       KC_I,       KC_E,       LT(0, KC_A),EGR_COMMA,  EGR_DOT,    KC_H,       KC_T,       LT(0, KC_S),KC_N,       KC_Q,       /******/    /******/    KC_ENT,     KC_HOME,
    KC_LSFT,    KC_G,       KC_X,       KC_J,       KC_K,       KC_MINS,    EGR_QUEST,  KC_R,       KC_M,       KC_F,       KC_P,       /******/    /******/    KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LGUI,    KC_LALT,    /******/    /******/    /******/    KC_SPC,     /******/    /******/    KC_RALT,    KC_LALT,    KC_RCTL,    /******/    KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer 1 - Engram Fn
[L_EFN] = LAYOUT_75_ansi(
    _______,    KC_BRID,    KC_BRIU,    _______,    _______,    _______,    _______,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MUTE,    KC_VOLD,    KC_VOLU,    MO(L_EFN),  KC_PSCR,    WIN_MIC,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,   LNK_RF,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    KC_BSPC,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    DEV_RESET,  SLEEP_MODE, /******/    BAT_SHOW,   _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    /******/    _______,    _______,
    _______,    _______,    _______,    RGB_TEST,   _______,    BAT_NUM,    _______,    MO(4),      RGB_SPD,    RGB_SPI,    _______,    /******/    /******/    _______,    RGB_VAI,    _______,
    _______,    _______,    _______,    /******/    /******/    /******/    _______,    /******/    /******/    _______,    _______,    _______,    /******/    RGB_MOD,    RGB_VAD,    RGB_HUI),

// layer 2 - Qwerty
[L_QWE] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     MO(L_QFN),  XXXXXXX,    KC_DEL,
    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     /******/    KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    /******/    KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    /******/    /******/    KC_ENT,     KC_HOME,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    /******/    /******/    KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LGUI,    KC_LALT,    /******/    /******/    /******/    KC_SPC,     /******/    /******/    KC_LALT,    MO(L_QFN),  KC_RCTL,    /******/    KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer 3 - Qwerty Fn
[L_QFN] = LAYOUT_75_ansi(
    _______,    KC_BRID,    KC_BRIU,    _______,    _______,    _______,    _______,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MUTE,    KC_VOLD,    KC_VOLU,    MO(L_QFN),  KC_PSCR,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,   LNK_RF,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    DEV_RESET,  SLEEP_MODE, /******/    BAT_SHOW,   _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    /******/    _______,    _______,
    _______,    _______,    _______,    RGB_TEST,   _______,    BAT_NUM,    _______,    MO(4),      RGB_SPD,    RGB_SPI,    _______,    /******/    /******/    _______,    RGB_VAI,    _______,
    _______,    _______,    _______,    /******/    /******/    /******/    _______,    /******/    /******/    _______,    MO(L_QFN),  _______,    /******/    RGB_MOD,    RGB_VAD,    RGB_HUI),

// layer 4 - System
[L_SYS] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    /******/    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    SIDE_SPD,   SIDE_SPI,   _______,    /******/    /******/    _______,    SIDE_VAI,   _______,
    _______,    _______,    _______,    /******/    /******/    /******/    _______,    /******/    /******/    _______,    MO(L_SYS),  _______,    /******/    SIDE_MOD,   SIDE_VAD,   SIDE_HUI),

// layer 5 - Extend
[L_EXT] = LAYOUT_75_ansi(
    HOLD,       KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_F18,     KC_F19,     KC_F20,     KC_F21,     KC_F22,     KC_F23,     KC_F24,     _______,    _______,    _______,
    WIN_LCK,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,    _______,    /******/    C(KC_BSPC), _______,
    _______,    XXXXXXX,    KC_SPC,     XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_TAB,     KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    KC_CAPS,    XXXXXXX,    /******/    XXXXXXX,    _______,
    _______,    KC_LALT,    KC_LCTL,    KC_LSFT,    C(KC_A),    XXXXXXX,    KC_ESC,     KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,    KC_RALT,    /******/    /******/    KC_ENT,     _______,
    _______,    C(KC_Z),    C(KC_X),    C(KC_C),    C(KC_V),    XXXXXXX,    XXXXXXX,    KC_BSPC,    KC_INS,     KC_DEL,     KC_CAPS,    /******/    /******/    _______,    _______,    _______,
    _______,    KC_LGUI,    KC_LGUI,    /******/    /******/    /******/    _______,    /******/    /******/    _______,    _______,    _______,    /******/    _______,    _______,    _______),


// layer 6 - Numbers
[L_NUM] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    /******/    _______,    _______,
    _______,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,    XXXXXXX,    KC_TAB,     KC_7,       KC_8,       KC_9,       XXXXXXX,    XXXXXXX,    XXXXXXX,    /******/    _______,    _______,
    _______,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,    XXXXXXX,    KC_ESC,     KC_4,       KC_5,       KC_6,       KC_0,       XXXXXXX,    /******/    /******/    _______,    _______,
    _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_1,       KC_2,       KC_3,       XXXXXXX,    /******/    /******/    KC_RSFT,    _______,    _______,
    _______,    KC_LGUI,    KC_LGUI,    /******/    /******/    /******/    KC_SPC,     /******/    /******/    _______,    _______,    _______,    /******/    _______,    _______,    _______),

// layer 7 - Extend Mouse
[L_MSE] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,    _______,    _______,
    _______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,    _______,    /******/    _______,    _______,
    _______,    C(KC_A),    XXXXXXX,    KC_BTN1,    XXXXXXX,    XXXXXXX,    KC_TAB,     KC_WH_L,    KC_MS_U,    KC_WH_R,    KC_WH_U,    XXXXXXX,    XXXXXXX,    /******/    _______,    _______,
    _______,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,    XXXXXXX,    KC_ESC,     KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_WH_D,    XXXXXXX,    /******/    /******/    _______,    _______,
    _______,    C(KC_Z),    C(KC_X),    C(KC_C),    C(KC_V),    XXXXXXX,    XXXXXXX,    KC_BTN1,    KC_BTN2,    KC_BTN3,    XXXXXXX,    /******/    /******/    KC_RSFT,    _______,    _______,
    _______,    KC_LGUI,    KC_LGUI,    /******/    /******/    /******/    KC_BTN1,    /******/    /******/    _______,    _______,    _______,    /******/    _______,    _______,    _______),


};

#define C_XXX    {false,   0,   0,   0}
#define C_BKG    {true,   20,  20,  50}
#define C_BLACK  {true,    0,   0,   0}
#define C_RED    {true,  200,   0,   0}
#define C_GREY   {true,  120, 120,  50}
#define C_BLUE   {true,   30,  30, 200}
#define C_GREEN  {true,    0, 255,   0}
#define C_ORANGE {true,  255,  95,   0}
extern rgb_config_t rgb_matrix_config;
#define LAYOUT_matrix_84(
	 k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0O, k0P, k0Q, \
	 k1O, k1N, k1M, k1L, k1K, k1J, k1I, k1H, k1G, k1F, k1E, k1D, k1C, k1B, k1A, \
	 k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, k2O, \
	 k3O, k3N, k3L, k3K, k3J, k3I, k3H, k3G, k3F, k3E, k3D, k3C, k3B, k3A, \
     k4A, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, k4N, k4O, k4P, \
	 k5Q, k5P, k5O, k5N, k5K, k5J, k5G, k5C, k5B, k5A \
}
enum color_layers {
	C_ENG,
	C_EXT,
	C_NUM,
	C_MSE
};
	 // k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k1P, k1Q,
const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][4] = {
[C_ENG] = LAYOUT_matrix_84(
	C_GREEN,    C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_GREY,     C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_GREY,
	C_BKG,      C_ORANGE,   C_ORANGE,   C_ORANGE,   C_ORANGE,   C_GREY,     C_GREY,     C_ORANGE,   C_ORANGE,   C_ORANGE,   C_ORANGE,   C_BKG,      C_BKG,      /******/    C_BKG,      C_BKG,
	C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      /******/    C_BKG,      C_BKG,
	C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      /******/    /******/    C_BKG,      C_BKG,
	C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      /******/    /******/    C_BKG,      C_GREY,     C_BKG,
	C_BKG,      C_BKG,      C_BKG,      /******/    /******/    /******/    C_BKG,      /******/    /******/    C_BKG,      C_BKG,      C_BKG,      /******/    C_GREY,     C_GREY,     C_GREY),

[C_EXT] = LAYOUT_matrix_84(
	C_GREEN,    C_GREY,     C_GREY,     C_GREY,     C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_GREY,     C_GREY,     C_BKG,      C_BKG,      C_BKG,
	C_BKG,      C_GREEN,    C_GREEN,    C_GREEN,    C_GREEN,    C_ORANGE,   C_ORANGE,   C_GREEN,    C_GREEN,    C_GREEN,    C_GREEN,    C_BKG,      C_BKG,      /******/    C_RED,      C_BKG,
	C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      /******/    C_BKG,      C_BKG,
	C_GREY,     C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_GREY,     C_GREY,     C_GREY,     C_BKG,      C_BKG,      /******/    /******/    C_BKG,      C_BKG,
	C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      C_BKG,      /******/    /******/    C_BKG,      C_BKG,      C_BKG,
	C_BKG,      C_BKG,      C_BKG,      /******/    /******/    /******/    C_BKG,      /******/    /******/    C_BKG,      C_BKG,      C_BKG,      /******/    C_BKG,      C_BKG,      C_BKG),

[C_NUM] = LAYOUT_matrix_84(
	C_GREEN,    C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_GREY,     C_GREY,     C_GREY,     C_GREY,     C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      /******/    C_XXX,      C_XXX,
	C_GREEN,    C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_ORANGE,   C_ORANGE,   C_ORANGE,   C_XXX,      C_XXX,      C_XXX,      /******/    C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_ORANGE,   C_ORANGE,   C_ORANGE,   C_ORANGE,   C_XXX,      /******/    /******/    C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_ORANGE,   C_ORANGE,   C_ORANGE,   C_XXX,      /******/    /******/    C_XXX,      C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      /******/    /******/    /******/    C_XXX,      /******/    /******/    C_XXX,      C_XXX,      C_XXX,      /******/    C_XXX,      C_XXX,      C_XXX),

[C_MSE] = LAYOUT_matrix_84(
	C_GREEN,    C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_GREY,     C_GREY,     C_GREY,     C_GREY,     C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,
	C_RED,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      /******/    C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_RED,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      /******/    C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_RED,      C_RED,      C_RED,      C_XXX,      C_XXX,      /******/    /******/    C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      C_XXX,      /******/    /******/    C_XXX,      C_XXX,      C_XXX,
	C_XXX,      C_XXX,      C_XXX,      /******/    /******/    /******/    C_XXX,      /******/    /******/    C_XXX,      C_XXX,      C_XXX,      /******/    C_XXX,      C_XXX,      C_XXX)


};

void set_layer_color(int layer) {
	float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;

    for (int i = 0; i < RGB_MATRIX_LED_COUNT - 1; i++) {
        const uint8_t *entry = ledmap[layer][i];
        if (entry[0]) {
            rgb_matrix_set_color(i, f * entry[1], f * entry[2], f * entry[3]);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
	uint8_t layer = biton32(layer_state);
	switch(layer){
	case L_ENG:
	    set_layer_color(C_ENG);
		return false;
	case L_EXT:
	    set_layer_color(C_EXT);
		return false;
	case L_MSE:
	    set_layer_color(C_MSE);
		return false;
	case L_NUM:
	    set_layer_color(C_NUM);
		return false;
	}
    return true;
}
void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	static bool ext_hold = false;

	if( keycode == ALT_TAB ) {
		if (record->event.pressed) {
			if( get_mods() & MOD_MASK_CAG) {
				register_code(KC_TAB);
			}
			else {
				layer_on(L_NUM);
			}
		} else {
			layer_off(L_NUM);
			unregister_code(KC_TAB);
		}
		return false;
	}
	if( keycode == EXTEND ) {
		if (record->event.pressed) {
			layer_on(L_EXT);
		} else if( !ext_hold ) {
			layer_off(L_EXT);
			layer_off(L_NUM);
			layer_off(L_MSE);
		}
		ext_hold = false;
		return false;
	}
	if (!record->event.pressed) {
		return true;
	}
	if (!record->tap.count) {
		if(keycode == LT(0,KC_A)){
            SEND_STRING(SS_TAP(X_RALT) SS_LSFT(SS_TAP(X_QUOTE)) SS_TAP(X_A));
			return false;
		}
		if(keycode == LT(0,KC_U)){
            SEND_STRING(SS_TAP(X_RALT) SS_LSFT(SS_TAP(X_QUOTE)) SS_TAP(X_U));
			return false;
		}
		if(keycode == LT(0,KC_O)){
            SEND_STRING(SS_TAP(X_RALT) SS_LSFT(SS_TAP(X_QUOTE)) SS_TAP(X_O));
			return false;
		}
		if(keycode == LT(0,KC_S)){
            SEND_STRING(SS_TAP(X_RALT) SS_TAP(X_S) SS_TAP(X_Z));
			return false;
		}
	}

	if( keycode == HOLD ) {
		ext_hold = true;
		return false;
	}
	if( keycode == EXT_RALT) {
		tap_code(KC_RALT);
		layer_off(L_EXT);
		return false;
	}
#if __has_include("C:\\Work\\keyboard-macros.inc")
# include "C:\\Work\\keyboard-macros.inc"
#else
    if( keycode == MACRO_0 || keycode == MACRO_1 ) {
		SEND_STRING("keyboard-macros.inc missing");
		return false;
	}
#endif
	return true;
}

