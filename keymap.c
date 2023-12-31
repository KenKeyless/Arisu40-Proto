#include QMK_KEYBOARD_H

// Layer definitions
#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base layer */
  [_BASE] = LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,
