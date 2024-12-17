/*
 * UART_Communication_FSM.h
 *
 *  Created on: Dec 12, 2024
 *      Author: THANH TAM
 */

#ifndef INC_UART_COMMUNICATION_FSM_H_
#define INC_UART_COMMUNICATION_FSM_H_

#define IDLE 0
#define CHECK_CMD 1
#define SEND_CMD 2
#define WAIT 3

extern int uart_communication_state;

void uart_communication_fsm();

#endif /* INC_UART_COMMUNICATION_FSM_H_ */
