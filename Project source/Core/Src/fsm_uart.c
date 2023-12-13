/*
 * fsm_uart.c
 *
 *  Created on: Nov 20, 2023
 *      Author: PC
 */
#include "global.h"

void uart_communication_fsm(){
	switch(uart_status){
	case WAITING:
		if(check_RST==1){
			uart_status=SEND_ADC;
			setTimer2(100);
		}
		break;
	case SEND_ADC:
		if (timer2_flag == 1) {
			ADC_value= HAL_ADC_GetValue(&hadc1);
			HAL_UART_Transmit(&huart2, (uint8_t*)str, sprintf(str, "!ADC=%lu#\r\n", ADC_value), 100);
			setTimer2(100);
		}
		break;
	case END:
		clean_command();
		uart_status=WAITING;
		break;
	default:
		break;
	}
}


