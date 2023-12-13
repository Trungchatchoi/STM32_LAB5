/*
 * command_parser.c
 *
 *  Created on: Nov 20, 2023
 *      Author: PC
 */
#include "global.h"

void command_parser_fsm(){
	switch(parser_status){
	case INIT:
		if(temp == '!'){
			parser_status=PARSER;
			index_command=0;
		}
		break;
	case PARSER:
		if(temp == '#'){
			check_command();
			parser_status=INIT;
		}
		else if(temp != '#'){
			command[index_command++]=temp;
			if(index_command==MAX_BUFFER_SIZE){
				index_command=0;
			}
		}
		break;
	default:
		break;
	}
}

