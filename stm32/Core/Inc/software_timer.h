/*
 * software_timer.h
 *
 *  Created on: Oct 11, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;

void setTimer0(int duration);

extern int timer1_flag;

void setTimer1(int duration);

extern int timer2_flag;

void setTimer2(int duration);

void runTimer();

#endif /* INC_SOFTWARE_TIMER_H_ */
