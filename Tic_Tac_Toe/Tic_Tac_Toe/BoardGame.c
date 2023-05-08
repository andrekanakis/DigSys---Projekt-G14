/*
 * BoardGame.c
 *
 * Created: 2023-05-02 14:59:09
 *  Author: an8615ka-s
 */ 
// CPU klockad till 8MHz
#define F_CPU 8000000
#include <util/delay.h>
#include <avr/io.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

extern void Led0(int n);
extern void Led1(int n);
extern void Led2(int n);
extern void Led3(int n);
extern void Led4(int n);
extern void Led5(int n);
extern void Led6(int n);
extern void Led7(int n);
extern void Led8(int n);
extern void Led9(int n);


	// Horisontella, 1+2+3,  4+5+6,   7+8+9
	// Vertikala,    1+4+7,  2+5+8,   3+6+9
	// Diagonala,	 1+5+9,  3+5+7
void WinConditionP1(int board[]){
	bool win = false;
	if (board[0] == 1 && board[1] == 1 && board[2] == 1) {			// Rad 1
		win = true;
	} else if (board[3] == 1 && board[4] == 1 && board[5] == 1) {	// Rad 2
		win = true;
	} else if (board[6] == 1 && board[7] == 1 && board[8] == 1) {	// Rad 3
		win = true;
	} else if (board[0] == 1 && board[3] == 1 && board[6] == 1) {	// Kolonn 1
		win = true;
	} else if (board[1] == 1 && board[4] == 1 && board[7] == 1) {	// Kolonn 2
		win = true; 
	} else if (board[2] == 1 && board[5] == 1 && board[8] == 1) {	// Kolonn 3
		win = true;
	} else if (board[0] == 1 && board[4] == 1 && board[8] == 1) {	// Diag 1
		win = true;
	} else if (board[2] == 1 && board[4] == 1 && board[6] == 1) {	// Diag 2
		win = true;
	}
	if (win) {
		Led0(2);		// Ändra Led0 när spelare 1 har vunnit
	}
}
	
void WinConditionP2(int board[]){
	bool win = false;
	if (board[0] == 3 && board[1] == 3 && board[2] == 3) {			// Rad 1
		win = true;
		} else if (board[3] == 3 && board[4] == 3 && board[5] == 3) {	// Rad 2
		win = true;
		} else if (board[6] == 3 && board[7] == 3 && board[8] == 3) {	// Rad 3
		win = true;
		} else if (board[0] == 3 && board[3] == 3 && board[6] == 3) {	// Kolonn 1
		win = true;
		} else if (board[1] == 3 && board[4] == 3 && board[7] == 3) {	// Kolonn 2
		win = true;
		} else if (board[2] == 3 && board[5] == 3 && board[8] == 3) {	// Kolonn 3
		win = true;
		} else if (board[0] == 3 && board[4] == 3 && board[8] == 3) {	// Diag 1
		win = true;
		} else if (board[2] == 3 && board[4] == 3 && board[6] == 3) {	// Diag 2
		win = true;
	}
	if (win) {
		Led0(2);		// Ändra Led0 när Spelare2 vunnit
	}
}

void sendColors(int board[]) {
	Led1(board[0]);
	Led2(board[1]);
	Led3(board[2]);
	Led4(board[3]);
	Led5(board[4]);
	Led6(board[5]);
	Led7(board[6]);
	Led8(board[7]);
	Led9(board[8]);
	_delay_ms(50);
}

void initBoard() {
		Led1(0);
		Led2(0);
		Led3(0);
		Led4(0);
		Led5(0);
		Led6(0);
		Led7(0);
		Led8(0);
		Led9(0);
		_delay_ms(50);
}