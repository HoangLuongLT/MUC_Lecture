/*
 * fsm_auto_run.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Admin
 */

#include "fsm_auto_run.h"

void fsm3Led(){
	switch(status){
	case INIT:
		if(timer0_flag==1){
			setTimer0(1000);
			turnOnlyRed();
			status=AUTO_RED;
		}
		break;
	case AUTO_RED:
		if(timer0_flag==1){
			setTimer0(1000);
			turnOnlyGreen();
			status=AUTO_GREEN;
		}
		break;
	case AUTO_GREEN:
		if(timer0_flag==1){
			setTimer0(1000);
			turnOnlyYellow();
			status=AUTO_YELLOW;
		}
		break;
	case AUTO_YELLOW:
		if(timer0_flag==1){
			setTimer0(1000);
			turnOnlyRed();
			status=AUTO_RED;
		}
		break;
	default:
		break;

	}
}

