/*
 * Copyright 2016-2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file    RW612_ISP_BLHost_Demo.c
 * @brief   Application entry point.
 */

#include "board.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "RW612.h"
#include "RGB.h"
#include "fsl_ctimer.h"

/*
 * @brief   Application entry point.
 */
int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    RGB_LED_Init();

    /* Force the counter to be placed into memory. */
    volatile static int i = 0 ;
    /* Enter an infinite loop of LED blinking. */
    while(1) {
    	RGB_LED_On(kRGB_BLUE);
    	for(i=0;i<10000000;i++);
    	RGB_LED_Off(kRGB_BLUE);
    	for(i=0;i<10000000;i++);
    }
    return 0 ;
}
