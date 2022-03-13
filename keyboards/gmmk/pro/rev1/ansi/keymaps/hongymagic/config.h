/* Copyright 2021 zvuc <https://github.com/zvuc>
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

#pragma once

#define RGB_DISABLE_TIMEOUT 1200000     // 20 minutes (20 * 60 * 1000ms)

// #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

// Below added per: https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgb_matrix#suspended-state-id-suspended-state
#define RGB_DISABLE_WHEN_USB_SUSPENDED

// Effects
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS  // Heatmap, Rain
#define RGB_MATRIX_KEYPRESSES           // REACTIVE, SPLASH modes

/* High debounce time is required to avoid key chattering because of the debouncing algorithm sym_eager_pk */
#undef DEBOUNCE
#define DEBOUNCE 40
