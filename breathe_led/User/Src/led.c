#include "led.h"

/*
* 呼吸灯程序
* 参数value设置占空比,大小不能大于计数值ARR (htim5.Init.Period = 999;)
*/
void breathe_led(uint32_t value){

    
    uint16_t temp = BREATHE_MIN;
    while(temp < value){
        /* code */
        temp++;
        __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_2, temp);
        HAL_Delay(2);
    }
    while(temp > BREATHE_MIN){
        temp--;
        __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_2, temp);
        HAL_Delay(2);
    }
}

// 一下两行代码作用相同
// TIM5->CCR2 = value;
// __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_2, value);
