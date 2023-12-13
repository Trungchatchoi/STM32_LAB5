/*
 * global.h
 *
 *  Created on: Nov 20, 2023
 *      Author: PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "string.h"
#include "scheduler.h"
#include "software_timer.h"
#include "fsm_uart.h"
#include "command_parser.h"

#define INIT 1
#define PARSER 2

#define WAITING 4
#define SEND_ADC 5
#define END 6


#define MAX_BUFFER_SIZE 30

extern UART_HandleTypeDef huart2;
extern ADC_HandleTypeDef hadc1;

extern uint32_t ADC_value;

extern int TIME_CYCLE;	// Time cycle

extern uint8_t command[MAX_BUFFER_SIZE];
extern uint8_t index_command;

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern int parser_status;
extern int uart_status;
extern int check_RST;

extern char str[MAX_BUFFER_SIZE];

void check_command();
void clean_command();

#endif /* INC_GLOBAL_H_ */
