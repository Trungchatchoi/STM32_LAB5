/*
 * led_controller.h
 *
 *  Created on: Nov 1, 2023
 *      Author: PC
 */

#ifndef INC_LED_CONTROLLER_H_
#define INC_LED_CONTROLLER_H_

int update_index(int index_led);
int update_status(int led_status);
void update_led_status();
void change_state(int mode);
void traffic_light(int led_status);
void display7SEG(int num);
void update7SEG(int index_led);
void led_blinky(int led_status);
void clear_all_led();
void clear_led(int led_status);
void set_manual(int led_status);
void updateBuffer1(int status);
void updateBuffer2(int duration,int mode);

#endif /* INC_LED_CONTROLLER_H_ */
