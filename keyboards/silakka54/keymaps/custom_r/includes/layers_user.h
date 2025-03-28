#ifndef LAYERS_USER_H
    #define LAYERS_USER_H

    #include QMK_KEYBOARD_H
    #include "custom_keycodes_user.h"

    #define BASE_LAYER LAYOUT_split_4x6_3 ( \
            KC_ESC,      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                           KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       LT(MACRO, KC_GRAVE), \
            KC_TAB,      KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                           KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS, \
            KC_LSFT,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                           KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOTE, \
            KC_LCTL,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                           KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RCTL, \
                                                 KC_LALT,    LT(NUM, KC_BSPC),    LT(NAV, KC_SPC),        LT(SYMBOL, KC_ENT),    LT(NUM, KC_DEL),     KC_LGUI \
    )
    
    #define HOME_LAYER LAYOUT_split_4x6_3 ( \
            KC_ESC,      KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                          KC_6,       KC_7,         KC_8,         KC_9,         KC_0,            LT(MACRO, KC_GRAVE), \
            KC_TAB,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                          KC_Y,       KC_U,         KC_I,         KC_O,         KC_P,            KC_BSLS, \
            KC_LSFT,     LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,                          KC_H,       LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN), KC_RSFT, \
            KC_LCTL,     KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                          KC_N,       KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_RCTL, \
                                                     KC_LALT,      LT(NUM, KC_BSPC),    LT(NAV, KC_SPC),        LT(SYMBOL, KC_ENT),    LT(NUM, KC_DEL),     KC_LGUI \
    )

    #define GAMING_LAYER LAYOUT_split_4x6_3 ( \
            KC_ESC,      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                          KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       LT(MACRO, KC_GRAVE), \
            KC_TAB,      KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                          KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS, \
            KC_LSFT,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                          KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOTE, \
            KC_LCTL,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                          KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RCTL, \
                                                 KC_LALT,    KC_BSPC,    KC_SPC,                        KC_ENT,     KC_DEL,     KC_LGUI \
    )

    #define NAV_LAYER LAYOUT_split_4x6_3 ( \
        _______,    _______,    _______,    _______,    _______,    _______,                        _______,    _______,     _______,     _______,    _______,  _______, \
        _______,    _______,    OS_WORDL,     KC_UP,   OS_WORDR,    _______,                        _______,    _______,     _______,     _______,    _______,  _______, \
        _______,    KC_HOME,    KC_LEFT,    KC_DOWN,   KC_RIGHT,    KC_END,                         _______,    _______,     _______,     _______,    _______,  _______, \
        _______,    KC_UNDO,    KC_CUT,     KC_COPY,   KC_PASTE,    OS_VIEW_WIN,                    _______,    _______,     _______,     _______,    _______,  _______, \
                                            _______,    _______,    _______,                        _______,    _______,     _______ \
    )

    #define SYMBOL_LAYER LAYOUT_split_4x6_3 ( \
        _______,    _______,     _______,     _______,    _______,    _______,                         _______,    _______,      _______,     _______,      _______,     _______, \
        _______,    S(KC_COMM),  S(KC_DOT),   S(KC_LBRC), S(KC_RBRC), _______,                         _______,  S(KC_MINS),     KC_MINS,     KC_EQUAL,     S(KC_EQUAL), _______, \
        _______,    KC_LBRC,     KC_RBRC,     S(KC_9),    S(KC_0),    _______,                         _______,     KC_BSLS,     KC_SLSH,     S(KC_QUOTE),  KC_QUOTE,    _______, \
        _______,    _______,     _______,     _______,    _______,    _______,                         _______,    _______,      _______,     _______,      _______,     _______, \
                                              _______,    _______,    _______,                         _______,    _______,      _______ \
    )

    #define NUM_LAYER LAYOUT_split_4x6_3 ( \
        _______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6, \
        _______,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,                        KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12, \
        _______,    _______,    _______,    _______,    _______,    _______,                     _______,    _______,    _______,    _______,    _______,    _______, \
        _______,    _______,    _______,    _______,    _______,    _______,                     _______,    _______,    _______,    _______,    _______,    _______, \
                                            _______,    _______,    _______,                     _______,    _______,    _______ \
    )

    #define MACRO_LAYER LAYOUT_split_4x6_3 ( \
        PDF(HOME), PDF(BASE),  DF(GAMING), _______,    _______,    _______,                        _______,    _______,   _______,   _______,   _______,   _______, \
        _______,   _______,    _______,    _______,    _______,    _______,                        _______,    GIT_R,     GIT_P,     GIT_C,     GIT_CP,    _______, \
        KC_CAPS,   _______,    _______,    _______,    _______,    _______,                        _______,    _______,   _______,   _______,   DT_UP,     KC_CAPS, \
        _______,   _______,    _______,    _______,    _______,    _______,                        _______,    _______,   _______,   DT_PRNT,   DT_DOWN,   _______, \
                                           OS_LIN,     OS_WIN,     OS_MAC,                         _______,    _______,   _______ \
    )

    enum layer_indexes {
        BASE = 0,
        HOME = 1,
        GAMING = 2,
        NAV = 3,
        SYMBOL = 4,
        NUM = 5,
        MACRO = 6
    };

    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [BASE] =    BASE_LAYER,
        [HOME] =    HOME_LAYER,
        [GAMING] =  GAMING_LAYER,
        [NAV] =     NAV_LAYER,
        [SYMBOL] =  SYMBOL_LAYER,
        [NUM] =     NUM_LAYER,
        [MACRO] =   MACRO_LAYER
    };

#endif
