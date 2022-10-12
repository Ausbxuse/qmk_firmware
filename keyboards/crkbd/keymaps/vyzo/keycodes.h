#pragma once

enum crkbd_layers {
  _QWERTY,
  _LEAGUE,
  _FPS,
  _LOWER,
  _RAISE,
  _ADJUST,
  _MOUSE
};


#define RAISE LT(_RAISE, KC_ENT)
#define LOWER LT(_LOWER, KC_ESC)
#define CTLTB CTL_T(KC_TAB)
#define GUIEI GUI_T(KC_LANG2)
#define ALTKN ALT_T(KC_LANG1)

