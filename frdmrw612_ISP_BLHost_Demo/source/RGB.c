/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "RGB.h"
#include "fsl_gpio.h"
#include "fsl_io_mux.h"


#define RGB_GPIO_PORT 		0U

#define RGB_LED_RED_PIN 	1U
#define RGB_LED_GREEN_PIN 	12U
#define RGB_LED_BLUE_PIN 	0U


/*
 * Init Red, Green ad Blue LEDs
 */

void RGB_LED_Init(void){
	gpio_pin_config_t RGB_LED_config = {
	        kGPIO_DigitalOutput,
	        1,
	    };
	IO_MUX_SetPinMux(IO_MUX_GPIO1);
	IO_MUX_SetPinMux(IO_MUX_GPIO12);
	IO_MUX_SetPinMux(IO_MUX_GPIO0);

	GPIO_PortInit(GPIO, RGB_GPIO_PORT);

	GPIO_PinInit(GPIO, RGB_GPIO_PORT, RGB_LED_RED_PIN, &RGB_LED_config);
	GPIO_PinInit(GPIO, RGB_GPIO_PORT, RGB_LED_GREEN_PIN, &RGB_LED_config);
	GPIO_PinInit(GPIO, RGB_GPIO_PORT, RGB_LED_BLUE_PIN, &RGB_LED_config);

}

/*
 * Init Red LED of RGB on GPIO1
 */
void RGB_RED_LED_Init(void){
	gpio_pin_config_t RGB_LED_config = {
	        kGPIO_DigitalOutput,
	        1,
	    };
	IO_MUX_SetPinMux(IO_MUX_GPIO1);

	GPIO_PortInit(GPIO, RGB_GPIO_PORT);

	GPIO_PinInit(GPIO, RGB_GPIO_PORT, RGB_LED_RED_PIN, &RGB_LED_config);

}

/*
 * Init Green LED of RGB on GPIO12
 */
void RGB_GREEN_LED_Init(void){
	gpio_pin_config_t RGB_LED_config = {
	        kGPIO_DigitalOutput,
	        1,
	    };
	IO_MUX_SetPinMux(IO_MUX_GPIO12);

	GPIO_PortInit(GPIO, RGB_GPIO_PORT);

	GPIO_PinInit(GPIO, RGB_GPIO_PORT, RGB_LED_GREEN_PIN, &RGB_LED_config);

}

/*
 * Init Blue LED of RGB on GPIO0
 */
void RGB_BLUE_LED_Init(void){
	gpio_pin_config_t RGB_LED_config = {
	        kGPIO_DigitalOutput,
	        1,
	    };
	IO_MUX_SetPinMux(IO_MUX_GPIO0);

	GPIO_PortInit(GPIO, RGB_GPIO_PORT);

	GPIO_PinInit(GPIO, RGB_GPIO_PORT, RGB_LED_BLUE_PIN, &RGB_LED_config);

}


void RGB_LED_On(RGB_COLOR color){
	switch(color)
	{
		case kRGB_RED:
			GPIO_PinWrite(GPIO, RGB_GPIO_PORT, RGB_LED_RED_PIN, 0U);
		break;
		case kRGB_GREEN:
			GPIO_PinWrite(GPIO, RGB_GPIO_PORT, RGB_LED_GREEN_PIN, 0U);
		break;
		case kRGB_BLUE:
			GPIO_PinWrite(GPIO, RGB_GPIO_PORT, RGB_LED_BLUE_PIN, 0U);
		break;
		default:
	};

};

void RGB_LED_Off(RGB_COLOR color){
	switch(color)
	{
		case kRGB_RED:
			GPIO_PinWrite(GPIO, RGB_GPIO_PORT, RGB_LED_RED_PIN, 1U);
		break;
		case kRGB_GREEN:
			GPIO_PinWrite(GPIO, RGB_GPIO_PORT, RGB_LED_GREEN_PIN, 1U);
		break;
		case kRGB_BLUE:
			GPIO_PinWrite(GPIO, RGB_GPIO_PORT, RGB_LED_BLUE_PIN, 1U);
		break;
		default:
	};

};
