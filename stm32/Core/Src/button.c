/*
 * button.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Luong
 */
#include "button.h"
#include "main.h"
#include "I_O_LED.h"

int keyReg0 = NORMAL_STATE;
int keyReg1 = NORMAL_STATE;
int keyReg2 = NORMAL_STATE;

int keyReg3 = NORMAL_STATE;

int timerForKey = 200;

int button1_flag=0;

void subKeyProcess(){
	button1_flag=1;
}

int isButton1Press(){
	if(button1_flag==1){
		button1_flag=0;
		return 1;
	}
	return 0;
}

void getKeyInput(){
	keyReg0 = keyReg1;
	keyReg1 = keyReg2;
	keyReg2 = HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin);

	if((keyReg0==keyReg1)&&(keyReg1==keyReg2)){
		if(keyReg2!=keyReg3){
			keyReg3=keyReg2;
			if(keyReg2==PRESSED_STATE){
				timerForKey=200;
				//TODO
				subKeyProcess();
			}
		}
		else{
			timerForKey--;
			if(timerForKey==0){
				keyReg3=NORMAL_STATE;
			}
		}
	}

}

