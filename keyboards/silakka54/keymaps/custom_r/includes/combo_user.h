#ifndef COMBOS_USER_H
    #define COMBOS_USER_H
    
    #include QMK_KEYBOARD_H

    enum combos {
        TOGGLE_CAPS_WORD,
    };

    const uint16_t PROGMEM lr_shift[] = {KC_LSFT, KC_RSFT, COMBO_END};

    combo_t key_combos[] = {
        #ifdef CAPS_WORD_ENABLE
            [TOGGLE_CAPS_WORD] = COMBO(lr_shift, CW_TOGG),
        #endif
    };
#endif