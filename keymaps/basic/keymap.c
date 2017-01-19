#include "numpad.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,---------------------------.
 * |  ESC |   =  |   /  |   *  |
 * |------+------+------+------+
 * |   7  |   8  |   9  |   -  |
 * |------+------+------+------+
 * |   4  |   5  |   6  |   +  |
 * |------+------+------+------+
 * |   1  |   2  |   3  |      |
 * |------+------+------+ENTER +
 * |      0      |   ,  |      |
 * `---------------------------*
 */
[0] = {
  {KC_ESC, KC_PSLS, KC_PAST, KC_PMNS },
  {KC_7,  KC_8,  KC_9,      KC_PPLS },
  {KC_4,  KC_5,  KC_6               },
  {KC_1,  KC_2,  KC_3,      KC_PENT },
  {KC_0,  KC_0,  KC_DOT                    }
},

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    case 1:
      if (record->event.pressed) {
        layer_on(1);
      } else {
        layer_off(1);
      }
      break;
    case 2:
      if (record->event.pressed) {
        layer_on(2);
      } else {
        layer_off(2);
      }
      break;
  }
  return MACRO_NONE;
};
