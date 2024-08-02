/*
 * Copyright 2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef RGB_H_
#define RGB_H_



typedef enum{
	kRGB_RED,
	kRGB_GREEN,
	kRGB_BLUE
}RGB_COLOR;



/*
 * Protoypes
 */

void RGB_LED_Init(void);
void RGB_RED_LED_Init(void);
void RGB_GREEN_LED_Init(void);
void RGB_BLUE_LED_Init(void);
void RGB_LED_On(RGB_COLOR color);
void RGB_LED_Off(RGB_COLOR color);



#endif /* RGB_H_ */
