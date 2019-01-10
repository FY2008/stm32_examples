#ifndef __LED_H
#define __LED_H
#define BREATHE_MIN         (50)
#include "stm32f4xx_hal.h"

extern TIM_HandleTypeDef htim5;
void breathe_led(uint32_t value);
#endif
