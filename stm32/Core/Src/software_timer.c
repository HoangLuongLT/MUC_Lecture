/*
 * software_timer.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Admin
 */

#include "software_timer.h"

int timer0_flag=0;
int timer0_counter=0;

int timer1_flag=0;
int timer1_counter=0;

int timer2_flag=0;
int timer2_counter=0;

int TIME_CYCLE=10;

void setTimer0(int duration){
	timer0_counter=duration/TIME_CYCLE;
	timer0_flag=0;
}

void setTimer1(int duration){
	timer1_counter=duration/TIME_CYCLE;
	timer1_flag=0;
}

void setTimer2(int duration){
	timer2_counter=duration/TIME_CYCLE;
	timer2_flag=0;
}


void runTimer(){
	if(timer0_counter>0){
		timer0_counter--;
		if(timer0_counter==0){
			timer0_flag=1;
		}
	}
	if(timer1_counter>0){
			timer1_counter--;
			if(timer1_counter==0){
				timer1_flag=1;
			}
		}
	if(timer2_counter>0){
			timer2_counter--;
			if(timer2_counter==0){
				timer2_flag=1;
			}
		}
}
