/* Copyright 2022 @Ausbxuse
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */


#include QMK_KEYBOARD_H
#include "keycodes.h"

static const char gaming_leds[] = {18, 22, 19, 16, 34};
static const char gaming2_leds[] = {23, 18, 17, 10, 9, 22, 19, 16, 11, 8, 35};
static const char nav_leds[] = {38, 43, 44, 46};
static const char fun_leds[] = {45, 44, 37, 46, 43, 38, 47, 42, 39, 40};
static const char adjust_leds[] = {24, 23, 18, 17, 10, 9, 36, 37, 44, 45, 50, 51};

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(26, RGB_RED);
    }
    switch(get_highest_layer(layer_state|default_layer_state)) {
        case _LEAGUE:
            if (is_keyboard_master()) {
                for (uint8_t i = 0; i < 5; i++) {
                    rgb_matrix_set_color(gaming_leds[i], RGB_RED);
                }
            }
            break;
        case _FPS:
            if (is_keyboard_master()) {
                for (uint8_t i = 0; i < 11; i++) {
                    rgb_matrix_set_color(gaming2_leds[i], RGB_GREEN);
                }
            }
            break;
        case _LOWER:
            for (uint8_t i = 0; i < 4; i++) {
                rgb_matrix_set_color(nav_leds[i], RGB_BLUE);
            }
            break;
        case _RAISE:
            for (uint8_t i = 0; i < 10; i++) {
                rgb_matrix_set_color(fun_leds[i], RGB_GREEN);
            }
            break;
        case _ADJUST:
            for (uint8_t i = 0; i < 12; i++) {
                rgb_matrix_set_color(adjust_leds[i], RGB_RED);
            }
            break;

    }
}
