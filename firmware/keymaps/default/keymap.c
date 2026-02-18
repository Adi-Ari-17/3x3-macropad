#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        KC_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6,
        KC_7,   KC_8,   KC_9
    ),
    [1] = LAYOUT_ortho_3x3(
        KC_F1,  KC_F2,  KC_F3,
        KC_F4,  KC_F5,  KC_F6,
        KC_F7,  KC_F8,  KC_F9
    )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    return 200;
}
