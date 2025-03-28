#include "includes/custom_keycodes_user.h"

void send_git_reset(uint16_t keycode) {
    SEND_STRING("git reset --hard HEAD");
    tap_code16(KC_ENT);
    SEND_STRING("git clean -fd");
    tap_code16(KC_ENT);
}

void send_git_cherry_pick(uint16_t keycode) {
    SEND_STRING("git cherry-pick ");
}

void send_git_commit(uint16_t keycode) {
    SEND_STRING("git commit -m \"\"");
    tap_code16(KC_LEFT);
}

void send_git_pull(uint16_t keycode) {
    SEND_STRING("git pull");
    tap_code16(KC_ENT);
}

bool process_custom_keycodes(uint16_t keycode, keyrecord_t *record) {
    #ifdef OS_DETECTION_ENABLE
        if (!process_os_aware_keycodes(keycode, record)) {
            return false;
        }
    #endif
    
    switch (keycode) {
        case GIT_R:
            if (record->event.pressed) {
                send_git_reset(keycode);
            }
            return false;

        case GIT_CP:
            if (record->event.pressed) {
                send_git_cherry_pick(keycode);
            }
            return false;
        case GIT_C:
            if (record->event.pressed) {
                send_git_commit(keycode);
            }
            return false;
        case GIT_P:
            if (record->event.pressed) {
                send_git_pull(keycode);
            }
            return false;
    }

    return true;
}