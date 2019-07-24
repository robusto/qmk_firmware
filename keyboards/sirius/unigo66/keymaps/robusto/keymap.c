#include QMK_KEYBOARD_H

enum layer_number {
    _MAC = 0,
    _WINDOWS,
    _FN,
    _ADJ
};

enum custom_keycodes {
  MAC = SAFE_RANGE,
  WINDOWS,
  FN,
  ADJ
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
/* Mac
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Esc    |   1  |   2  |   3  |   4  |   5  |  -   |           |  =   |   6  |   7  |   8  |   9  |   0  |  Bsp   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  [   |           |  ]   |   Y  |   U  |   I  |   O  |   P  |  Enter |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  FN    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  `   |           |  \   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   | RShift |
 * `--------+------+------+---------------------------'           `---------------------------+------+------+--------'
 *   | Ctrl |  Alt |  Gui |                                                                   |  Gui |  Alt | Ctrl |
 *   `--------------------'                                                                   `--------------------'
 *                                        ,-------------.       ,--------------.
 *                                        |      |      |       |      |       |  
 *                                        | Bspc |  SPC |       |  SPC | ADJ   |
 *                                        |      |      |       |      |       | 
 *                                        `-------------'       `--------------'
 */
    [_MAC] = LAYOUT(
	KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_MINS,       KC_EQL,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_BSPC,
	KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_LBRC,       KC_RBRC, KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_QUOT,
	FN, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                       KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_ENT, 
	KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_GRV,        KC_BSLS, KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT,
	KC_LCTL, KC_LALT,KC_LGUI,                                                                        KC_RGUI,KC_RALT, KC_RCTL,
                                           ADJ,KC_SPC,            KC_SPC,KC_BSPC,
                                           ADJ,KC_SPC,            KC_SPC,KC_BSPC
    ),
/* Windows
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Esc    |   1  |   2  |   3  |   4  |   5  |  -   |           |  =   |   6  |   7  |   8  |   9  |   0  |  Bsp   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  [   |           |  ]   |   Y  |   U  |   I  |   O  |   P  |  Enter |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  `   |           |  \   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   | RShift |
 * `--------+------+------+---------------------------'           `---------------------------+------+------+--------'
 *   | Gui  |  Alt | Ctrl |                                                                   | Ctrl |  Alt |  Gui |
 *   `--------------------'                                                                   `--------------------'
 *                                        ,-------------.       ,--------------.
 *                                        |      |      |       |      |       |  
 *                                        | Bspc |  FN  |       |  ADJ | Space | 
 *                                        |      |      |       |      |       | 
 *                                        `-------------'       `--------------'
 */
    [_WINDOWS] = LAYOUT(
  KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_MINS,       KC_EQL,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_DEL,
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_LBRC,       KC_RBRC, KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_ENT,
  KC_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, 
  KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_GRV,        KC_BSLS, KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT,
  KC_LGUI, KC_LALT,KC_LCTL,                                                                        KC_RCTL,KC_RALT, KC_RGUI,
                                           KC_BSPC,FN,            ADJ, KC_SPC,
                                           KC_BSPC,FN,            ADJ, KC_SPC
    ),
/* FN
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | RESET  |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | MAC    |      |      |      |      |      |      |           |      |      | PgDn |  Up  | PgUp | Print|  Home  |
 * |--------+------+------+------+------+------|      |           | PgUp |------+------+------+------+------+--------|
 * | WINDOWS|      |      |      |      |      |------|           |------|      | Left | Down | Right|Insert|  End   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Shift  |      |      |      |      |      |      |           | PgDn | Play | Mute | Vol- | Vol+ | Last |  Next  |
 * `--------+------+------+---------------------------'           `---------------------------+------+------+--------'
 *   |      |      |GuiCtl|                                                                   |GuiCtl|      |      |
 *   `--------------------'                                                                   `--------------------'
 *                                        ,-------------.       ,--------------.
 *                                        |      |      |       |      |       |  
 *                                        |      |      |       |      |       | 
 *                                        |      |      |       |      |       | 
 *                                        `-------------'       `--------------'
 */
    [_FN] = LAYOUT(
  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  MAC,     KC_MRWD,KC_MPLY, KC_MFFD, XXXXXXX, XXXXXXX, XXXXXXX,     KC_PGUP, XXXXXXX, KC_PGDN, XXXXXXX, KC_PGUP, KC_PSCR, KC_HOME,
  XXXXXXX, XXXXXXX,KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,                       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX,  KC_END, 
  _______, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_PGDN, XXXXXXX, KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU, KC_MRWD, KC_MFFD,
  XXXXXXX, XXXXXXX,_______,                                                                             _______, XXXXXXX, XXXXXXX,
                                                XXXXXXX,   _______, XXXXXXX, XXXXXXX,
                                                XXXXXXX,   _______, XXXXXXX, XXXXXXX
    ),

/* ADJ
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1   |  F2  |  F3  |  F4  |  F5  |     |           |  |  F6   |  F7   |  F8   |  F9   |  F10 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | NUMLOCK |     |      |      |      |      |      |           |      |  7   |  8   |  9   |  +   |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|  4   |  5   |  6   | Enter|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |  1   |  2   |  3   | Space|      |        |
 * `--------+------+------+---------------------------'           `---------------------------+------+------+--------'
 *   |      |      |      |                                                                   |  0   |  .   |      |
 *   `--------------------'                                                                   `--------------------'
 *                                        ,-------------.       ,--------------.
 *                                        |      |      |       |      |       |  
 *                                        |      |      |       |      |       | 
 *                                        |      |      |       |      |       | 
 *                                        `-------------'       `--------------'
 */
    [_ADJ] = LAYOUT(
  XXXXXXX, KC_F1,   KC_F2,  KC_F3,   KC_F4,   KC_F5,  XXXXXXX,   XXXXXXX, KC_F6,  KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX, 
  KC_NLCK, KC_PEQL, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_P4,   KC_P5,   KC_P6,   KC_PENT, XXXXXXX, XXXXXXX, 
  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_SPC,  XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX,XXXXXXX,                                                                         KC_P0,   KC_PDOT, XXXXXXX,
                                              XXXXXXX, XXXXXXX, _______, XXXXXXX,
                                              XXXXXXX, XXXXXXX, _______, XXXXXXX
    )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
    case MAC:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MAC);
      }
      return false;
      break;
    case WINDOWS:
      if(record->event.pressed) {
        set_single_persistent_default_layer(_WINDOWS);
      }
      return false;
      break;
    case FN:
      if (record->event.pressed) {
        layer_on(_FN);
      } else {
        layer_off(_FN);
      }
      return false;
      break;
    case ADJ:
      if (record->event.pressed) {
        layer_on(_ADJ);
      } else {
        layer_off(_ADJ);
      }
      return false;
      break;
  }
  return true;
}

void led_set_user(uint8_t usb_led) {

}
