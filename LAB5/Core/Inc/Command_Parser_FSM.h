/*
 * Command_Parser_FSM.h
 *
 *  Created on: Dec 12, 2024
 *      Author: THANH TAM
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#define MAX_BUFFER_SIZE 40

#define IDLE 0
#define FIND_SOC 1
#define FIND_EOC 2
#define CHECK_CMD 3

extern int cmd_parser_state;

#endif /* INC_COMMAND_PARSER_FSM_H_ */
