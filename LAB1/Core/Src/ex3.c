/*
 * ex3.c
 *
 *  Created on: Dec 16, 2024
 *      Author: THANH TAM
 */

#include "ex3.h"

void display7SEG(int num, int counter){
	if (num == 1){
		switch (counter){
			case 0:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 1:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
					break;
			case 2:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 3:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 4:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 5:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 6:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 7:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
					break;
			case 8:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			case 9:
					HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
					HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
					HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
					HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
					HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
					HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
					HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
					break;
			default:
				break;
		}
	}else{
		switch (counter){
			case 0:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
					break;
			case 1:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
					break;
			case 2:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			case 3:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			case 4:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			case 5:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			case 6:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			case 7:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
					break;
			case 8:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			case 9:
					HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
					HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
					HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
					HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
					HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
					HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
					HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
					break;
			default:
				break;
			}
	}
}


void display3led(int n){
	if (n == 1){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	} else if (n == 2){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
	} else if (n == 3){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	} else if (n == 4){
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
	}
}

int counter = -1;

void ex3(){
	counter++;
	  if (counter <= 9){
		  if (counter <= 2){
			  display7SEG(1, 5 - counter);
			  display7SEG(2, 3 - counter);
			  display3led(1);
		  }else if(counter <=4){
			  display7SEG(1, 5 - counter);
			  display7SEG(2, 5 - counter);
			  display3led(2);
		  }else if(counter <=7){
			  display7SEG(1, 8 - counter);
			  display7SEG(2, 10 - counter );
			  display3led(3);
		  }else {
			  display7SEG(1, 10 - counter);
			  display7SEG(2, 10 - counter );
			  display3led(4);
		  }
	  }else{
		  counter = -1;
		  return;
	  }

	  HAL_Delay(500);
}
