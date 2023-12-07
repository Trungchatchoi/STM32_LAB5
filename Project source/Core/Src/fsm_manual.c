/*
 * fsm_manual.c
 *
 *  Created on: Oct 23, 2023
 *      Author: PC
 */

#include "global.h"

void fsm_manual_run(){
	switch(led_status){
	case MANUAL_RED:
		if(timer1_flag==1){
			change_state(MANUAL_RED);
			setTimer1(25);
		}
		if (timer2_flag == 1) {
			updateBuffer2(counter_red+temp+RED,MANUAL_RED);
			setTimer2(5);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}
		if(isButton1Pressed()==1){
			led_status=MANUAL_YELLOW;
			temp=0;
			setTimer1(25);
		}
		if(isButton2Pressed()==1){
			if(counter_red+temp+RED<99){
				temp++;
			}
		}
		if(isButton3Pressed()==1){
			counter_red+=temp;
			temp=0;
			counter_green=RED+counter_red-GREEN-YELLOW-counter_yellow;
		}
		break;
	case MANUAL_YELLOW:
		if(timer1_flag==1){
			change_state(MANUAL_YELLOW);
			setTimer1(25);
		}
		if (timer2_flag == 1) {
			updateBuffer2(counter_yellow+temp+YELLOW,MANUAL_YELLOW);
			setTimer2(5);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}
		if(isButton1Pressed()==1){
			led_status=MANUAL_GREEN;
			temp=0;
			setTimer1(25);
		}
		if(isButton2Pressed()==1){
			if(counter_yellow+temp+YELLOW<99){
				temp++;
			}
		}
		if(isButton3Pressed()==1){
			counter_yellow+=temp;
			counter_red=YELLOW+GREEN+counter_yellow+counter_green-RED;
			temp=0;
		}
		break;
	case MANUAL_GREEN:
		if(timer1_flag==1){
			change_state(MANUAL_GREEN);
			setTimer1(25);
		}
		if (timer2_flag == 1) {
			updateBuffer2(counter_green+temp+GREEN,MANUAL_GREEN);
			setTimer2(5);
		}
		if (timer3_flag == 1) {
			index_led=update_index(index_led);
			setTimer3(20);
		}
		if(isButton1Pressed()==1){
			temp=0;
			led_status_1=INIT;
			ontime=0;
			change_state(CLEAR);
			led_status = AUTO_RED_GREEN;
			setTimer1((GREEN+counter_green)*100);
			updateBuffer1(led_status_1);
			setTimer2(100);
			setTimer3(20);
		}
		if(isButton2Pressed()==1){
			if(counter_green+temp+GREEN<99){
				temp++;
			}
		}
		if(isButton3Pressed()==1){
			counter_green+=temp;
			counter_red=YELLOW+GREEN+counter_yellow+counter_green-RED;
			temp=0;
		}
		break;
	default:
		break;
	}
}
