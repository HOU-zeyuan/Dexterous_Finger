#include "servo.h"

extern TIM_HandleTypeDef htim1;

void Load(int duty1, int duty2){
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, duty1);
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, duty1); //duty1 + CONST to eliminate initial angle error of servo1 and servo2
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_3, duty2);
}
