/*
 * button.h
 *
 *  Created on: Oct 24, 2022
 *      Author: Luong
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag;

void getKeyInput();

void isButtonPress();

#endif /* INC_BUTTON_H_ */
