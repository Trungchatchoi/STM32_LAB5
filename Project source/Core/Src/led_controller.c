/*
 * led_controller.c
 *
 *  Created on: Nov 1, 2023
 *      Author: PC
 */
#include"global.h"

#define ZERO 0
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4

void traffic_light(int led_status){
	switch(led_status){
	case INIT:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	case AUTO_RED_GREEN:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6	, GPIO_PIN_RESET);
		break;
	case AUTO_RED_YELLOW:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
		break;
	case AUTO_GREEN_RED:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
		break;
	case AUTO_YELLOW_RED:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}

void display7SEG(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, a_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, b_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, c_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, d_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, e_Pin, 1);
			HAL_GPIO_WritePin(GPIOA, f_Pin, 0);
			HAL_GPIO_WritePin(GPIOA, g_Pin, 0);
			break;
		default:
			break;
	}
}

int update_status(int led_status){
	if(led_status==4){
		led_status=1;
		return led_status;
	}
	led_status++;
	return led_status;
}

int update_index(int index_led){
	if(index_led==3){
		index_led=0;
		return index_led;
	}
	index_led++;
	return index_led;
}

void update7SEG(int index_led){
	switch (index_led){
	case 0:
	// Display the first 7 SEG with led_buffer [0]
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		  display7SEG(led_buffer[0]);
		  break ;
	case 1:
	// Display the second 7 SEG with led_buffer [1]
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		  display7SEG(led_buffer[1]);
		break ;
	case 2:
	// Display the third 7 SEG with led_buffer [2]
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		  display7SEG(led_buffer[2]);
		  break ;
	case 3:
	// Display the forth 7 SEG with led_buffer [3]
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		  display7SEG(led_buffer[3]);
		  break ;
	default :
		break ;
	}
}



void clear_all_led(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
}

void clear_led(int led_status){
	switch(led_status){
	case MANUAL_RED:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
		break;
	case MANUAL_YELLOW:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
		break;
	case MANUAL_GREEN:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
		break;
	}
}

void set_manual(int led_status){
	switch(led_status){
	case MANUAL_RED:
		clear_all_led();
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
		break;
	case MANUAL_YELLOW:
		clear_all_led();
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
		break;
	case MANUAL_GREEN:
		clear_all_led();
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
		break;
	}
}

void change_state(int mode){
	switch(mode){
	case CLEAR:
		clear_all_led();
		break;
	case MANUAL_RED:
		led_blinky(MANUAL_RED);
		break;
	case MANUAL_YELLOW:
		led_blinky(MANUAL_YELLOW);
		break;
	case MANUAL_GREEN:
		led_blinky(MANUAL_GREEN);
		break;
	}
}

void led_blinky(int led_status){
	switch(led_status){
	case MANUAL_RED:
		clear_led(MANUAL_RED);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
		break;
	case MANUAL_YELLOW:
		clear_led(MANUAL_YELLOW);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_7);
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
		break;
	case MANUAL_GREEN:
		clear_led(MANUAL_GREEN);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_6);
		break;
	}
}

void update_led_status(){
	if(led_status_1==0){
		led_status_1=1;
	}
	else{
		if((GREEN+counter_green-ontime)==1 && led_status_1==1){
			led_status_1=2;
			ontime=0;
		}
		else if((YELLOW+counter_yellow-ontime)==1 && led_status_1==2){
			led_status_1=3;
			ontime=0;
		}
		else if((GREEN+counter_green-ontime)==1 && led_status_1==3){
			led_status_1=4;
			ontime=0;
		}
		else if((YELLOW+counter_yellow-ontime)==1 && led_status_1==4){
			led_status_1=1;
			ontime=0;
		}
		else ontime++;
	}
}

void updateBuffer1(int status){
	switch(status){
	case ZERO:
		led_buffer[0]=(RED+counter_red-ontime)/10;
		led_buffer[1]=(RED+counter_red-ontime)%10;
		led_buffer[2]=(GREEN+counter_green-ontime)/10;
		led_buffer[3]=(GREEN+counter_green-ontime)%10;\
		update_led_status();
	case ONE:
		led_buffer[0]=(RED+counter_red-ontime)/10;
		led_buffer[1]=(RED+counter_red-ontime)%10;
		led_buffer[2]=(GREEN+counter_green-ontime)/10;
		led_buffer[3]=(GREEN+counter_green-ontime)%10;\
		update_led_status();
		break;
	case TWO:
		led_buffer[0]=(YELLOW+counter_yellow-ontime)/10;
		led_buffer[1]=(YELLOW+counter_yellow-ontime)%10;
		led_buffer[2]=(YELLOW+counter_yellow-ontime)/10;
		led_buffer[3]=(YELLOW+counter_yellow-ontime)%10;
		update_led_status();
		break;
	case THREE:
		led_buffer[0]=(GREEN+counter_green-ontime)/10;
		led_buffer[1]=(GREEN+counter_green-ontime)%10;
		led_buffer[2]=(RED+counter_red-ontime)/10;
		led_buffer[3]=(RED+counter_red-ontime)%10;
		update_led_status();
		break;
	case FOUR:
		led_buffer[0]=(YELLOW+counter_yellow-ontime)/10;
		led_buffer[1]=(YELLOW+counter_yellow-ontime)%10;
		led_buffer[2]=(YELLOW+counter_yellow-ontime)/10;
		led_buffer[3]=(YELLOW+counter_yellow-ontime)%10;
		update_led_status();
		break;
	default:
		break;
	}
}
void updateBuffer2(int duration,int mode){
	led_buffer[0]=duration/10;
	led_buffer[1]=duration%10;
	led_buffer[2]=0;
	switch(mode){
	case MANUAL_RED:
		led_buffer[3]=2;
		break;
	case MANUAL_YELLOW:
		led_buffer[3]=3;
		break;
	case MANUAL_GREEN:
		led_buffer[3]=4;
		break;
	default:
		break;
	}
}
