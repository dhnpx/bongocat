#include QMK_KEYBOARD_H
#include <stdio.h>

#define BONGO_ENABLE


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_TAB, KC_B, KC_L, KC_D, KC_C, KC_V, KC_J, KC_F, KC_O, KC_U, KC_COMM, KC_MINS, OSM(MOD_LCTL), KC_N, KC_R, KC_T, KC_S, KC_G, KC_Y, KC_H, KC_A, KC_E, KC_I, QK_REP, OSM(MOD_LSFT), KC_X, KC_Q, KC_M, KC_W, KC_Z, KC_HOME, KC_END, KC_K, KC_P, KC_QUOT, KC_SCLN, KC_DOT, OSM(MOD_RSFT), KC_LALT, MO(6), KC_SPC, MO(2), MO(3), KC_BSPC, MO(5), KC_DEL),
	[1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_HOME, KC_END, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LALT, MO(6), KC_SPC, MO(2), MO(3), KC_BSPC, MO(5), KC_DEL),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_LT, KC_GT, KC_EQL, KC_NO, KC_ASTR, KC_7, KC_8, KC_9, KC_SLSH, KC_TRNS, KC_TRNS, OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), KC_NO, KC_PLUS, KC_4, KC_5, KC_6, KC_MINS, KC_TRNS, KC_TRNS, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_COMM, KC_1, KC_2, KC_3, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_0, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TILD, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_GRV, KC_TRNS, KC_TRNS, KC_EXLM, KC_PLUS, KC_MINS, KC_EQL, KC_PIPE, KC_NO, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), KC_TRNS, KC_TRNS, KC_SLSH, KC_QUES, KC_ASTR, KC_UNDS, KC_BSLS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RCS(KC_TAB), KC_WBAK, KC_WFWD, LCTL(KC_TAB), KC_NO, KC_TRNS, KC_TRNS, OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_CAPS, KC_NO, DF(0), DF(1), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_PSCR, KC_NO, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_TRNS, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_MPLY, KC_VOLD, KC_VOLU, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_TRNS, KC_TRNS, OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_TRNS, KC_TRNS, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    // If you want all combos to be tap-only, just uncomment the next line
    // return true

    // If you want *all* combos, that have Mod-Tap/Layer-Tap/Momentary keys in its chord, to be tap-only, this is for you:
    uint16_t key;
    uint8_t idx = 0;
    while ((key = pgm_read_word(&combo->keys[idx])) != COMBO_END) {
        switch (key) {
            case QK_MOD_TAP...QK_MOD_TAP_MAX:
            case QK_LAYER_TAP...QK_LAYER_TAP_MAX:
            case QK_MOMENTARY...QK_MOMENTARY_MAX:
                return true;
        }
        idx += 1;
    }
    return false;

}

//const uint16_t PROGMEM ld_semicolon[] = {KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM uo_slash[] = {KC_U, KC_O, COMBO_END};
//const uint16_t PROGMEM dw_lparens[] = {KC_D, KC_W, COMBO_END};
//const uint16_t PROGMEM of_rparens[] = {KC_O, KC_F, COMBO_END};
//const uint16_t PROGMEM lw_lcurly[] = {KC_L, KC_W, COMBO_END};
//const uint16_t PROGMEM uf_rcurly[] = {KC_U, KC_F, COMBO_END};
//const uint16_t PROGMEM rt_lcurly[] = {LALT_T(KC_R), LGUI_T(KC_T), COMBO_END};
//const uint16_t PROGMEM ea_rcurly[] = {LALT_T(KC_E), RGUI_T(KC_A), COMBO_END};
const uint16_t PROGMEM ts_esc[] = {KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM ah_ent[] = {KC_A, KC_H, COMBO_END};
const uint16_t PROGMEM rs_tab[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM eh_del[] = {KC_E, KC_H, COMBO_END};
const uint16_t PROGMEM rt_lshft[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM ea_rshft[] = {KC_E, KC_A, COMBO_END};

combo_t key_combos[] = {
  //COMBO(ld_semicolon, KC_SCLN),
  COMBO(uo_slash, KC_SLSH),
  //COMBO(lw_lcurly, KC_LCBR),
  //COMBO(uf_rcurly, KC_RCBR),
  //COMBO(dw_lparens, KC_LPRN),
  //COMBO(of_rparens, KC_RPRN),
  COMBO(rs_tab, KC_TAB),
  COMBO(ah_ent, KC_ENT),
  COMBO(ts_esc, KC_ESC),
  COMBO(eh_del, KC_DEL),
  COMBO(rt_lshft, KC_LSFT),
  COMBO(ea_rshft, KC_RSFT),
};




//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE
#ifdef BONGO_ENABLE
#include "bongo.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void render_status(void) {
  // Layer inidicator
  oled_write_P(PSTR("LAYER: "), false);
  switch (get_highest_layer(layer_state)) {
    case 6:
      oled_write_P(PSTR("MOUSE"), false);
      break;
    case 5:
      oled_write_P(PSTR("FUNCTION"), false);
      break;
    case 4:
      oled_write_P(PSTR("NAVIGATION"), false);
      break;
    case 3:
      oled_write_P(PSTR("SYMBOL"), false);
      break;
    case 2:
      oled_write_P(PSTR("NUMBER"), false);
      break;
    case 1:
      oled_write_P(PSTR("QWERTY"), false);
      break;
    default:
      oled_write_P(PSTR("GALLIUM"), false);
      break;
  }
  // Caps lock indicator
  led_t led_state = host_keyboard_led_state();
  oled_write_P(led_state.caps_lock ? PSTR("\nCAPS LOCK") : PSTR("\n             "), false);
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    //oled_write_ln(read_layer_state(), false);
    //oled_write_ln(read_keylog(), false);
    //oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);

    render_status();
  } else {
    if (is_oled_on() && last_input_activity_elapsed() > OLED_TIMEOUT) {
      oled_off();
    }
    //oled_write(read_logo(), false);
    draw_bongo(false);
  }
    return false;
}
#endif
#endif // OLED_ENABLE


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
