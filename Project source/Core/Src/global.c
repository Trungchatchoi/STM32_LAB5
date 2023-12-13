/*
 * global.c
 *
 *  Created on: Nov 20, 2023
 *      Author: PC
 */
#include "global.h"

uint32_t ADC_value=0;

uint8_t command[MAX_BUFFER_SIZE]={0};
uint8_t index_command = 0;

uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE]={0};
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

int parser_status=INIT;
int uart_status=WAITING;
int check_RST=0;

char str[MAX_BUFFER_SIZE]={0};

void clean_command(){
	memset(command, 0, sizeof(command));
}

void check_command(){
	if(command[0]=='R' && command[1]=='S' && command[2]=='T' && command[3]==0){
		check_RST=1;
		clean_command();
	}
	else if(command[0]=='O' && command[1]=='K' && command[2]==0 && check_RST==1){
		uart_status=END;
		check_RST=0;
	}
	else if((command[0]!='R' || command[1]!='S' || command[2]!='T') && check_RST==0){
		uart_status=END;
	}
	else{
		uart_status=SEND_ADC;
	}
}
