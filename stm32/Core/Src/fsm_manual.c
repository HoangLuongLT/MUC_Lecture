/*
 * fsm_manual.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Luong
 */
#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status) {
		case MAN_RED:
			turnOnlyRed();
			if(isButton1Press()==1){
				status=MAN_GREEN;
				setTimer0(5000);
			}
			if(timer0_flag==1){
				status=AUTO_RED;
				setTimer0(1000);
			}
			break;
		case MAN_GREEN:
			turnOnlyGreen();
			if(isButton1Press()==1){
				status=MAN_YELLOW;
				setTimer0(5000);
			}
			if(timer0_flag==1){
				status=AUTO_GREEN;
				setTimer0(1000);
			}
			break;
		case MAN_YELLOW:
			turnOnlyYellow();
			if(isButton1Press()==1){
				status=MAN_RED;
				setTimer0(5000);
			}
			if(timer0_flag==1){
				status=AUTO_YELLOW;
				setTimer0(1000);
			}
			break;
		default:
			break;
	}
}
