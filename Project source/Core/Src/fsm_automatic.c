/*
 * fsm_mode.c
 *
 *  Created on: Oct 22, 2023
 *      Author: PC
 */

#include "global.h"

void fsm_automatic_run() {
	switch(led_status){
	case INIT:
		led_status = AUTO_RED_GREEN;
		setTimer1((GREEN+counter_green)*100);
		updateBuffer1(led_status_1);
		setTimer2(100);
		setTimer3(20);
		break;

	case AUTO_RED_GREEN:

		if (timer1_flag == 1) {
			led_status = AUTO_RED_YELLOW;
			setTimer1((YELLOW+counter_yellow)*100);
		}
		if (timer2_flag == 1) {
			updateBuffer1(led_status_1);
			setTimer2(100);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}
		if (isButton1Pressed()== 1) {
			change_state(CLEAR);
			led_status = MANUAL_RED;
			change_state(MANUAL_RED);
			setTimer1(25);
		}
		break;

	case AUTO_RED_YELLOW:
		if (isButton1Pressed()== 1) {
			change_state(CLEAR);
			led_status = MANUAL_RED;
			change_state(MANUAL_RED);
			setTimer1(25);
		}
		if (timer1_flag == 1) {
			led_status = AUTO_GREEN_RED;
			setTimer1((GREEN+counter_green)*100);
		}
		if (timer2_flag == 1) {
			updateBuffer1(led_status_1);
			setTimer2(100);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}

		break;

	case AUTO_GREEN_RED:
		if (isButton1Pressed()== 1) {
			change_state(CLEAR);
			led_status = MANUAL_RED;
			change_state(MANUAL_RED);
			setTimer1(25);
		}
		if (timer1_flag == 1) {
			led_status = AUTO_YELLOW_RED;
			setTimer1((YELLOW+counter_yellow)*100);
		}
		if (timer2_flag == 1) {
			updateBuffer1(led_status_1);
			setTimer2(100);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}
		break;

	case AUTO_YELLOW_RED:
		if (isButton1Pressed()== 1) {
			change_state(CLEAR);
			led_status = MANUAL_RED;
			change_state(MANUAL_RED);
			setTimer1(25);
		}
		if (timer1_flag == 1) {
			led_status = AUTO_RED_GREEN;
			setTimer1((GREEN+counter_green)*100);
		}
		if (timer2_flag == 1) {
			updateBuffer1(led_status_1);
			setTimer2(100);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}

		break;

	default:
		break;
	}
}

