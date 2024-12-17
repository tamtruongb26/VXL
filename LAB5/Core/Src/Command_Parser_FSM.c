/*
 * Command_Parser_FSM.c
 *
 *  Created on: Dec 12, 2024
 *      Author: THANH TAM
 */

#include "Command_Parser_FSM.h"
#include <string.h>

#define CMD_RST "!RST#"
#define CMD_OK "!OK#"
#define MAX_BUFFER_SIZE 30

uint8_t temp = 0;

int cmd_parser_state = 0;

int buffer_flag = 0;

void command_parser_fsm(){
	switch (cmd_parser_state){
	case IDLE:
		if (buffer_flag){

			//change state
			cmd_parser_state = FIND_SOC;
		}
		break;
	case FIND_SOC:
		break;
	case FIND_EOC:
		break;
	case CHECK_CMD:
		break;
	default:
		break;
	}
}
