/* Copyright 2022 Sinan Okman (@simchee)
 *
 *  This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// Layouts
enum layers {
	QWERTZ,
	LOWER,
	RAISE,
	NUMPAD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[QWERTZ] = LAYOUT_planck_mit
	(
	 KC_TAB,		KC_Q,				KC_W,				KC_E,				KC_R,				KC_T,				KC_Z,				KC_U,				KC_I,				KC_O,				KC_P,				KC_SLSH,
	 MO(NUMPAD),KC_A,				KC_S,				KC_D,				KC_F,				KC_G,				KC_H,				KC_J,				KC_K,				KC_L,				KC_SCLN,		KC_QUOT,
	 KC_LSFT,		KC_Y,				KC_X,				KC_C,				KC_V,				KC_B,				KC_N,				KC_M,				KC_COMM,		KC_DOT,			KC_UP,			KC_EQL,
	 KC_ESC,		KC_LGUI,		KC_LCTL,		KC_LALT,		LT(LOWER,KC_ENTER),		KC_SPC,				KC_BSPC,		MO(RAISE),	KC_LEFT,		KC_DOWN,		KC_RIGHT
	 ),

	[LOWER] = LAYOUT_planck_mit
	(
	 KC_TAB,		KC_MUTE,		KC_VOLU,		KC_MPLY,		_______,		_______,		_______,		_______,		_______,		_______,		KC_CAPS,		KC_BSPC,
	 MO(NUMPAD),KC_MPRV,		KC_VOLD,		KC_MNXT,		KC_ESC,			_______,		KC_LEFT,		KC_DOWN,		KC_UP,			KC_RIGHT,		_______,		KC_SCRL,
	 _______,		KC_LGUI,		KC_LALT,		KC_LSFT,		KC_LCTL,		_______,		KC_HOME,		KC_PGDN,		KC_PGUP,		KC_END,			_______,		KC_APP,
	 QK_BOOT,		RGB_TOG,		_______,		_______,		MO(LOWER),				KC_SPC,						KC_DEL,			_______,		KC_NUM,			KC_PSCR,		KC_INS
	 ),
	
	[RAISE] = LAYOUT_planck_mit
	(
	 KC_CIRC,		KC_EXLM,		KC_AT,			KC_DLR,			_______,		_______,		_______,		KC_AMPR,		KC_LPRN,		KC_RPRN,		KC_GRV,			KC_BSLS,
	 _______,		_______,		_______,		_______,		_______,		_______,		_______,		KC_ASTR,		KC_LBRC,		KC_RBRC,		_______,		KC_HASH,
	 KC_LSFT,		_______,		_______,		_______,		_______,		_______,		_______,		KC_MINS,		KC_LABK,		KC_RABK,		KC_PERC,		_______,
	 _______,		_______,		_______,		_______,		_______,					KC_SPC,	 					KC_BSPC,		MO(RAISE),	_______,		_______,		_______
	 ),
	
	[NUMPAD] = LAYOUT_planck_mit
	(
	 KC_TAB,		KC_F7,			KC_F8,			KC_F9,			_______,		_______,		_______,		KC_7,				KC_8,				KC_9,				KC_PSLS,		KC_BSPC,
	 MO(NUMPAD),KC_F4,			KC_F5,			KC_F6,			_______,		_______,		_______,		KC_4,				KC_5,				KC_6,				KC_PAST,		KC_PEQL,
	 KC_LSFT,		KC_F1,			KC_F2,			KC_F3,			_______,		_______,		_______,		KC_1,				KC_2,				KC_3,				KC_PPLS,		KC_ENTER,
	 KC_ESC,		KC_F10,			KC_F11,			KC_F12,			TG(LOWER),				KC_SPC,						KC_COMM,		KC_0,				KC_DOT,			KC_PMNS,		KC_DEL
	 )


	
};

