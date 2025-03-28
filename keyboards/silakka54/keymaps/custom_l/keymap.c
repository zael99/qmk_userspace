#include <string.h>
#include "config.h"
#include QMK_KEYBOARD_H

#ifdef OS_DETECTION_ENABLE
    #include "includes/os_detection_user.h"
#endif

#ifdef CAPS_WORD_ENABLE
    #include "includes/caps_word_user.h"
#endif

#ifdef COMBO_ENABLE
    #include "includes/combo_user.h"
#endif

#include "includes/layers_user.h"
#include "includes/custom_keycodes_user.h"

void keyboard_post_init_user(void) {
    #ifdef AUTO_SHIFT_OFF
        autoshift_disable();
    #endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return process_custom_keycodes(keycode, record);
}