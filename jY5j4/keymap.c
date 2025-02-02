#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_DELETE,      KC_HOME,        KC_UP,          KC_END,         LCTL(KC_SCLN),                                  KC_F12,         KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_INSERT,      KC_NO,          
    KC_NO,          KC_Q,           LT(3,KC_W),     KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           LT(4,KC_O),     KC_P,           KC_NO,          
    KC_TAB,         LT(2,KC_A),     MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),LT(2,KC_SCLN),  KC_SLASH,       
    KC_NO,          MT(MOD_LGUI, KC_Z),KC_X,           MT(MOD_RALT, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RALT, KC_COMMA),KC_DOT,         KC_UNDS,        KC_NO,          
                                                    LT(1,KC_SPACE), KC_BSPC,                                        KC_ESCAPE,      MT(MOD_RALT, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, CW_TOGG,                                        KC_TAB,         KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_CAPS,                                        KC_0,           KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_ASTR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_0,           QK_LLCK
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_LABK,        KC_RABK,        KC_QUOTE,       ST_MACRO_0,                                     KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_CIRC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_MINUS,       KC_EQUAL,       KC_DQUO,        ST_MACRO_1,                                     KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_COLN,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_ASTR,        KC_PLUS,        KC_PERC,        ST_MACRO_2,                                     KC_TILD,        KC_LBRC,        KC_RBRC,        KC_HASH,        KC_GRAVE,       KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, QK_LLCK
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_DELETE,      KC_INSERT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, QK_LLCK
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_F2),    LCTL(KC_F6),    KC_F2,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_F7),    LCTL(LSFT(KC_LEFT)),LSFT(KC_F6),    LCTL(LSFT(KC_RIGHT)),LCTL(LSFT(KC_F12)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_O))),LALT(KC_9),     LALT(KC_1),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, QK_LLCK
  ),
};

const uint16_t PROGMEM combo0[] = { MT(MOD_LCTL, KC_D), MT(MOD_LCTL, KC_K), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1,KC_SPACE):
            return TAPPING_TERM + 30;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,255,255}, {3,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,255,255}, {3,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,204}, {166,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,204}, {166,218,204} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,218,204}, {43,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,218,204}, {43,218,204} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {96,206,168}, {96,206,168}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {96,206,168}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {96,206,168}, {96,206,168}, {96,206,168}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {96,206,168}, {96,206,168} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,218,204}, {215,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,218,204}, {215,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



