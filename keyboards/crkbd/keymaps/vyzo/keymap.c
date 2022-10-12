/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2022 Zhenyu Zhao <@Ausbxuse>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#include "keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P, KC_BSLS,
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                               KC_LALT,   MT(MOD_LGUI, KC_BSPC),  LOWER,  RAISE,  KC_SPC, KC_RALT
  ),

  [_LEAGUE] = LAYOUT_split_3x6_3(
      KC_ESC ,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_PLUS,
      KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P, KC_BSLS,
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
                               KC_LALT,   KC_SPC,  LOWER,  RAISE,  KC_SPC, KC_RCTL
  ),
  [_FPS] = LAYOUT_split_3x6_3(
      KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P, KC_BSLS,
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                               KC_LALT,   KC_SPC,  LOWER,  RAISE,  KC_SPC, KC_RCTL
  ),

  [_LOWER] = LAYOUT_split_3x6_3(
      KC_GRV , KC_1   ,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_PLUS,
      KC_LCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LT, KC_GT,                          KC_COMM,  KC_DOT, KC_SLSH, KC_LPRN, KC_RPRN, KC_MINS,
      KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_UNDS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_EQL,
                                          KC_LGUI, _______,  LOWER,     RAISE,   _______, KC_RALT
  ),

  [_RAISE] = LAYOUT_split_3x6_3(
       KC_TAB, DM_REC1, KC_VOLD, KC_MUTE, KC_VOLU, KC_PERC,                      KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_RPRN, KC_BSPC,
      KC_LCTL, DM_PLY1, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
      KC_LSFT, DM_RSTP, KC_BRID, XXXXXXX, KC_BRIU, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                                          KC_LGUI, _______,  LOWER,     RAISE, _______, KC_RALT
  ),

  [_ADJUST] = LAYOUT_split_3x6_3(
    KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,                   TG(_FPS), TG(_MOUSE), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,                   TG(_LEAGUE), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                        GUIEI,   QK_BOOT,   LOWER,  RAISE,  EEP_RST,   ALTKN
  ),

  [_MOUSE] = LAYOUT_split_3x6_3(
    KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6, KC_BTN1, KC_BTN2, KC_F9, KC_F10, KC_ACL0,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,                   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, KC_ACL1,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,                   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, KC_ACL2, 
                                        GUIEI,   QK_BOOT,   LOWER,  RAISE,  EEP_RST,   ALTKN
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
  return state;
}


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master()) {
    return OLED_ROTATION_270;
  } else {
    return rotation;
  }
}

void oled_render_led_state(void) {
    // oled_advance_page(false) instead of oled_write_ln_P to not break OLED_TIMEOUT
    oled_write_P(PSTR("NUM"), host_keyboard_led_state().num_lock);
    oled_advance_page(false);
    oled_write_P(PSTR("CAP"), host_keyboard_led_state().caps_lock);
    oled_advance_page(false);
    oled_write_P(PSTR("SCL"), host_keyboard_led_state().scroll_lock);
    oled_advance_page(false);
}

static void render_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("#"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("___"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("SYM"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("MED"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("FUN"), false);
            break;
        case _LEAGUE:
            oled_write_P(PSTR("LOL"), false);
            break;
        case _FPS:
            oled_write_P(PSTR("FPS"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined"), false);
    }

}

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 96, 16, 48, 96,192,  0,  0,  0,  0,  0,  0,  0,224, 32, 16, 24,120,192,  0,  0,  0,  0,  0,  0,  0,192, 96, 48, 96,192,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24,126,193,128,  0,  0,128,225, 51, 30,  0,  0,  0, 12, 28,115,192,  0,128,224, 57, 15,  6,  0,  0,  0,192, 60, 35, 32, 32, 32, 32, 33, 34, 46,120,192,  0,  0,  0,224,  0,  0,  0,  0,128,224,  0,  0,  0,128,192, 96,  0,  0,  0,255, 96, 32, 32, 32,224, 64,192,128,  0,128,192, 32,  0,  0,  0,192, 32,  0,  0,  0,  0,  0,192,224,  0,  0,  0,  0,128,240, 24,  0,  0,  0,  0,128, 96,156,134,131,129,128,129,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2, 18, 41,104,132,134,  2,  2,  2,132,132,136,145,116,  3,  0,  0,  0,  0,  0,  0, 63,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0,  0,  0, 31, 16, 24, 12,  2,  3, 14,  8,  0,  8,  8,  9, 14,  0,  0,  6,  3,  4,  4,  6,  3,  1, 24, 12,  6,  3,  3, 12, 24,  0,112, 78, 65, 64, 64, 32, 48, 24, 14,  1, 31, 16, 16,  0,  0,  0, 67, 34, 44, 56,  0, 30, 99,128,128,  0,  0,  0,  0,  0,128,128,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


bool oled_task_user(void) {
    if (is_keyboard_master()) {
        //render_skull();
        render_status();
        oled_set_cursor(0,2);
        oled_write_P(PSTR("WPM: "), false);
        oled_write(get_u8_str(get_current_wpm(), ' '), false);
     // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        // oled_set_cursor(0,6);
        render_logo();
        // sprintf(wpm_str, "       WPM: %03d", get_current_wpm());
    }
  return false;
}

#endif
