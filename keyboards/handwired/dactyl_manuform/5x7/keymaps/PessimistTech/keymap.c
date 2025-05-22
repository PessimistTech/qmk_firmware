#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _NUMPAD 1
#define _ARROWS 2

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define CCS    LCTL(LSFT(KC_LGUI))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_GRAVE,               KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   TG(_NUMPAD),
        KC_EQUAL,               KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_RPRN,
        LT(_NUMPAD, KC_ESC),    KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_LPRN,
        KC_LSFT,                KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_LCTL,
        KC_LCTL,                KC_LGUI, KC_LALT, MO(_ARROWS),    KC_LALT,
                                    KC_ENTER, LSFT_T(KC_TAB),
                                    LCTL_T(KC_ESC), KC_END,
                                    LSFT_T(KC_TAB), TASK,
        // right hand
                          CCS,    KC_6,    KC_7,    KC_8,     KC_9,    KC_0,     KC_MINUS,
                          KC_RBRC, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,     KC_BSLS,
                          KC_LBRC, KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
                          TG(_NUMPAD), KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_MINUS,
                                            KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT,  MT(MOD_LCTL, TG(_NUMPAD)),
             KC_BSPC, KC_SPACE,
             KC_DEL, LT(_NUMPAD, KC_ESC),
             KC_END, KC_LCTL
    ),

    [_NUMPAD] = LAYOUT_5x7(
        // left hand
        QK_BOOT,   KC_F1,   KC_F2,       KC_F3,     KC_F4,     KC_F5,  KC_F6,
        _______,   KC_EXLM,   KC_AT,   KC_LCBR,   KC_RCBR,   KC_PIPE,  KC_RABK,
        _______,   KC_HASH,   KC_DLR,  KC_LPRN,   KC_RPRN,   KC_GRAVE, KC_LABK,
        KC_LGUI,   KC_PERC,   KC_CIRC, KC_LBRC,   KC_RBRC,   KC_TILDE, QK_BOOT,
        _______,   KC_COMMA,  _______, _______,  _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,   _______,
                          _______,   KC_AMPR,   KC_P7,     KC_P8,     KC_P9,     KC_MINUS, _______,
                          TG(_NUMPAD),   KC_ASTR,   KC_P4,     KC_P5,     KC_P6,     KC_PPLS,  _______,
                          TG(_NUMPAD),   _______,   KC_P1,     KC_P2,     KC_P3,     KC_SLSH,  _______,
                                                    _______,   KC_P0,     KC_PDOT,   KC_EQUAL, _______,
             _______, KC_PENT,
             _______, _______,
             _______, _______
    ),

    [_ARROWS] = LAYOUT_5x7(
        // left hand
        _______,   KC_F1,     KC_F2,      KC_F3,    KC_F4,     KC_F5,    KC_F6,
        _______,   _______,   _______,    KC_UP,    _______,   _______,  _______,
        _______,   _______,   KC_LEFT,    KC_DOWN,  KC_RGHT,   _______,  QK_BOOT,
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        KC_MSTP,   KC_MPLY,   KC_MPRV,   KC_MNXT,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,   _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                                                _______,   _______,   _______,   _______,   _______,
             KC_DEL, _______,
             _______, _______,
             _______, _______
    ),
};
