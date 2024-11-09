/* Copyright 2020 Harrison Chan (Xelus)
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

//SPI
#define WS2812_SPI_DRIVER SPID2
#define WS2812_SPI_MOSI_PAL_MODE 0
#define WS2812_SPI_SCK_PAL_MODE 0
#define WS2812_SPI_SCK_PIN B13
#define WS2812_EXTERNAL_PULLUP

// OLED driver
#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X32
  #define OLED_TIMEOUT 30000
#endif

// LED defines
#define BACKLIGHT_PWM_DRIVER    PWMD3
#define BACKLIGHT_PWM_CHANNEL   2
#define BACKLIGHT_PAL_MODE      1

#define SLEEP_LED_GPT_DRIVER GPTD1
