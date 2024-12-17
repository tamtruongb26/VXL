/*
 * UART_Communication_FSM.c
 *
 *  Created on: Dec 12, 2024
 *      Author: THANH TAM
 */

#include "UART_Communication_FSM.h"
#include <string.h>

int uart_communication_state = 0;

int cmd_flag = 0;

char cmd[255];

int count = 0;

void uart_communication_fsm(void){
	switch (uart_communication_state){
	case IDLE:
		if (cmd_flag){

			//change state
			uart_communication_state = CHECK_CMD;
		}
		break;
	case CHECK_CMD:

		if (cmd == "RTS"){

			//change state
			uart_communication_state = SEND_CMD;
		}
		break;
	case SEND_CMD:


		//change state
		uart_communication_state = WAIT;
		break;
	case WAIT:
		if (count < 3){
			count++;

			//change state
			uart_communication_state = SEND_CMD;
		}else{
			count = 0;

			//change state
			uart_communication_state = IDLE;
		}
		break;
	default:
		break;
	}
}
