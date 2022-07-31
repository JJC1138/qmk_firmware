/* Copyright 2022 Ian Klug, Jon Colverson
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

#include "joystick.h"

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {};

enum layer_names {
    GAMEPLAY,
    MENUS,
};

/*      bemini key layout, player 2 configuration
 *      .-----------------------------------------------------------------------------------------.
 *      |                                                                                         |
 *      |    .-------.        .-------.-------.-------.-------.                                   |
 *      |    |       |        |       |       |       |       |                                   |
 *      |    |  K10  |        |       |       |       |       |                                   |
 *      |    |       |        |  K08  |  K06  |  K04  |  K02  |                                   |
 *      |    +-------+        |       |       |       |       |               .-------.           |
 *      |    |       |        |       |       |       |       |               |       |           |
 *      |    |  K11  |    .---+---+---+---+---+---+---+---+---+---.           |K13/ENC|           |
 *      |    |       |    |       |       |       |       |       |           |       |           |
 *      |    +-------+    |       |       |       |       |       |           '-------'           |
 *      |    |       |    |  K09  |  K07  |  K05  |  K03  |  K01  |                               |
 *      |    |  K12  |    |       |       |       |       |       |                               |
 *      |    |       |    |       |       |       |       |       |                               |
 *      |    '-------'    '-------'-------'-------'-------'-------'                               |
 *      |                                                                                         |
 *      '-----------------------------------------------------------------------------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*      K01           K02           K03           K04           K05           K06           K07           K08           K09           K10           K11           K12           K13         */
    [GAMEPLAY] = LAYOUT(
        JS_BUTTON8,   JS_BUTTON7,   JS_BUTTON6,   JS_BUTTON5,   JS_BUTTON4,   JS_BUTTON3,   JS_BUTTON2,   JS_BUTTON1,   JS_BUTTON0,   KC_ESCAPE,    KC_F1,        MO(MENUS),    KC_NO
    ),
    [MENUS] = LAYOUT(
        KC_KP_4,      KC_KP_8,      KC_KP_3,      KC_KP_7,      KC_KP_2,      KC_KP_6,      KC_KP_1,      KC_KP_5,      KC_KP_0,      KC_BACKSPACE, KC_KP_9,      _______,      KC_NO
    ),
};
