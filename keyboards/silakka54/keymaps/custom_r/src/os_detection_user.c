#include "includes/os_detection_user.h"
#include "includes/custom_keycodes_user.h"
#include "keycodes.h"

os_variant_t detected_os = OS_UNSURE;

void os_aware_window(uint16_t keycode) {
    if (detected_os == OS_UNSURE) {
        detected_os = detected_host_os();
    }

    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            tap_code16(MAC_WINDOW_MOD(keycode));
            break;
        case OS_LINUX:
            tap_code16(LINUX_WINDOW_MOD(keycode));
        case OS_WINDOWS:
        case OS_UNSURE:
            tap_code16(WIN_WINDOW_MOD(keycode));
            break;
    }
}

void os_aware_maximize_window(uint16_t keycode) {
    if (detected_os == OS_UNSURE) {
        detected_os = detected_host_os();
    }

    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            tap_code16(MAC_MAXIMIZE_WINDOW);
            break;
        case OS_LINUX:
            tap_code16(LINUX_MAXIMIZE_WINDOW);
        case OS_WINDOWS:
        case OS_UNSURE:
            tap_code16(WIN_MAXIMIZE_WINDOW);
            break;
    }
}

void os_aware_word_down(uint16_t keycode) {
    if (detected_os == OS_UNSURE) {
        detected_os = detected_host_os();
    }

    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            if (get_mods() != MOD_BIT(MAC_WORD_MOD)) {
                register_code(MAC_WORD_MOD);
            }
            break;
        case OS_LINUX:
            if (get_mods() != MOD_BIT(LINUX_WORD_MOD)) {
                register_code(LINUX_WORD_MOD);
            }
            break;
        case OS_WINDOWS:
        case OS_UNSURE:
            if (get_mods() != MOD_BIT(WIN_WORD_MOD)) {
                register_code(WIN_WORD_MOD);
            }
            break;
    }

    register_code(keycode);
}

void os_aware_word_up(uint16_t keycode) {
    if (detected_os == OS_UNSURE) {
        detected_os = detected_host_os();
    }

    unregister_code(keycode);

    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            unregister_code(KC_LALT);
            break;
        case OS_WINDOWS:
        case OS_LINUX:
        case OS_UNSURE:
            unregister_code(KC_LCTL);
            break;
    }
}

void os_aware_view_windows(uint16_t keycode) {
    if (detected_os == OS_UNSURE) {
        detected_os = detected_host_os();
    }

    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            tap_code16(MAC_VIEW_WINDOWS);
            break;
        case OS_LINUX:
            tap_code16(LINUX_VIEW_WINDOWS);
        case OS_WINDOWS:
        case OS_UNSURE:
            tap_code16(WIN_VIEW_WINDOWS);
            break;
    }
}

void override_detected_os(uint16_t keycode) {
    switch (keycode) {
        case OS_MAC:
            detected_os = OS_MACOS;
            break;
        case OS_WIN:
            detected_os = OS_WINDOWS;
            break;
        case OS_LIN:
            detected_os = OS_LINUX;
            break;
        case OS_UKNWN:
            detected_os = OS_UNSURE;
            break;
    }
}


bool process_detected_host_os_kb(os_variant_t detected_os) {
    if (!process_detected_host_os_user(detected_os)) {
        return false;
    }
    
    return true;
}


bool process_os_aware_keycodes(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OS_WINL:
            if (record->event.pressed) {
                os_aware_window(KC_LEFT);
            }
            return false;
        case OS_WINR:
            if (record->event.pressed) {
                os_aware_window(KC_RIGHT);
            }
            return false;
        case OS_WIN_MAX:
            if (record->event.pressed) {
                os_aware_maximize_window(keycode);
            }
            return false;
        case OS_WORDL:
            if (record->event.pressed) {
                os_aware_word_down(KC_LEFT);
            } else{
                os_aware_word_up(KC_LEFT);
            }
            return false;
        case OS_WORDR:
            if (record->event.pressed) {
                os_aware_word_down(KC_RIGHT);
            } else{
                os_aware_word_up(KC_RIGHT);
            }
            return false;
        case  OS_VIEW_WIN:
            if (record->event.pressed) {
                os_aware_view_windows(keycode);
            }

            return false;
        case OS_MAC:
        case OS_WIN:
        case OS_LIN:
        case OS_UKNWN:
            if (record->event.pressed) {
                override_detected_os(keycode);
            }
            return false;
    }

    return true;
}