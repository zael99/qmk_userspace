#ifndef OS_DETECTION_USER_H
    #define OS_DETECTION_USER_H

    #include QMK_KEYBOARD_H

    // Mac Shortcut Definitions
    #ifndef MAC_WINDOW_MOD
        #define MAC_WINDOW_MOD(a) LCAG(a)
    #endif

    #ifndef MAC_MAXIMIZE_WINDOW
        #define MAC_MAXIMIZE_WINDOW LCAG(KC_UP)
    #endif

    #ifndef MAC_VIEW_WINDOWS
        #define MAC_VIEW_WINDOWS LAG(KC_TAB)
    #endif

    #ifndef MAC_WORD_MOD
        #define MAC_WORD_MOD KC_LALT
    #endif
    // Mac Shortcut Definitions

    // Windows Shortcut Definitions
    #ifndef WIN_WINDOW_MOD
        #define WIN_WINDOW_MOD(a) LGUI(a)
    #endif

    #ifndef WIN_MAXIMIZE_WINDOW
        #define WIN_MAXIMIZE_WINDOW LGUI(KC_UP)
    #endif

    #ifndef WIN_VIEW_WINDOWS
        #define WIN_VIEW_WINDOWS LGUI(KC_TAB)
    #endif

    #ifndef WIN_WORD_MOD
        #define WIN_WORD_MOD KC_LCTL
    #endif
    // Windows Shortcut Definitions

    // Linux Shortcut Definitions
    #ifndef LINUX_WINDOW_MOD
        #define LINUX_WINDOW_MOD(a) LGUI(a)
    #endif

    #ifndef LINUX_MAXIMIZE_WINDOW
        #define LINUX_MAXIMIZE_WINDOW LGUI(KC_PGUP)
    #endif

    #ifndef LINUX_VIEW_WINDOWS
        #define LINUX_VIEW_WINDOWS LCTL(KC_F10)
    #endif

    #ifndef LINUX_WORD_MOD
        #define LINUX_WORD_MOD KC_LCTL
    #endif
    // Linux Shortcut Definitions
    
    // Keycode Definitions
    #define OS_AWARE_KEYCODES OS_AWARE_WINDOW_KEYCODES, OS_AWARE_WORD_KEYCODES, OS_AWARE_OVERRIDE_KEYCODES
    
    #define OS_AWARE_WINDOW_KEYCODES OS_WINL, OS_WINR, OS_WIN_MAX, OS_VIEW_WIN
    #define OS_AWARE_WORD_KEYCODES OS_WORDL, OS_WORDR
    #define OS_AWARE_OVERRIDE_KEYCODES OS_MAC, OS_WIN, OS_LIN, OS_UKNWN
    // Keycode Definitions

    bool process_os_aware_keycodes(uint16_t keycode, keyrecord_t *record);
#endif // OS_DETECTION_USER_H