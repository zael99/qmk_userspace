#ifndef CUSTOM_KEYCODE_USER_H
    #define CUSTOM_KEYCODE_USER_H

    #include QMK_KEYBOARD_H

    #ifdef OS_DETECTION_ENABLE
        #include "includes/os_detection_user.h"
    #endif

    #define KC_UNDO C(KC_Z)
    #define KC_CUT C(KC_X)
    #define KC_COPY C(KC_C)
    #define KC_PASTE C(KC_V)

    // Custom Keycodes
    enum custom_keycodes {
        GIT_R = SAFE_RANGE,
        GIT_CP,
        GIT_C,
        GIT_P,
        KC_SPCENT,

        #ifdef OS_DETECTION_ENABLE
            OS_AWARE_KEYCODES,
        #endif
    };
    
    // Git Macros
    void send_git_reset(uint16_t keycode);
    void send_git_cherry_pick(uint16_t keycode);
    void send_git_commit(uint16_t keycode);
    void send_git_pull(uint16_t keycode);

    bool process_custom_keycodes(uint16_t keycode, keyrecord_t *record);
#endif