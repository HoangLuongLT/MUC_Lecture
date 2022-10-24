/*
 * I_O_LED.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Admin
 */

#include "I_O_LED.h"


void ToggleLed_Red(){
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
}

void ToggleLed_Green(){
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN_Pin);
}

void ToggleLed_Yellow(){
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW_Pin);
}

void turnOnlyRed(){
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin|LED_YELLOW_Pin, GPIO_PIN_SET);
}

void turnOnlyGreen(){
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin, GPIO_PIN_SET);
}

void turnOnlyYellow(){
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin|LED_RED_Pin, GPIO_PIN_SET);
}
