/*
 * Tic_Tac_Toe.c
 *
 * Created: 2023-04-27 12:37:58
 * Author : an8615ka-s
 */ 
// CPU klockad till 8MHz
#define F_CPU 8000000
#include <util/delay.h>
#include <avr/io.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

extern void bluebaby();
extern void greenbaby();
extern void nollbaby();
extern void redbaby();
extern void ret();
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
extern WinConditionP1(int board[]);
extern WinConditionP2(int board[]);
extern sendColors(int board[]);
extern initBoard();

// LED 0 0b01000000
// Led 1 0b00100000
// Led 2 0b00010000
// Led 3 0b01000000
// Led 4 0b00000100
// Led 5 0b00000010
// Led 6 0b00000001
// Led 7 0b10000000
// Led 8 0b01000000
// Led 9 0b00100000

void neo_init_2(){
 	PORTB |= 0b00000000;
	PORTD |= 0b00000000;
	DDRD |= 0b11111111;
	DDRB |= 0b11111111;
	redbaby();
	_delay_ms(50);
	DDRD = 0b01000000;
	DDRB = 0b00000000;
	
	bluebaby();
	_delay_ms(50);
	DDRD = 0b00000000;
	DDRB = 0b11000000;
	greenbaby();
	
	_delay_ms(100);
	//	PORTD &= 0x00;
}



int main(void)
{
	PORTB |= 0b00000000;
	PORTD |= 0b00000000;
	int gameboard[] = {0,0,0,0,0,0,0,0,0}; // Ett eleent är = 1 för spelare 1, och = 3 för spelare 2. 
	sendColors(gameboard);					// rand() % 9 ger dig 0-8
	int tur = 1; // Anger vems tur det är. 1 betyder röd, 3 betyder blå.
	srand(time(0));
    while (1) 
    {
		sendColors(gameboard);	
		Led0(tur);
		WinConditionP1(gameboard);
		WinConditionP2(gameboard);
		int choice = 0;
		
		do {
			choice = rand() % 9;
		} while (gameboard[choice] > 0);
		
		gameboard[choice] = tur;
		if (tur == 1) {
			tur = 3;
		} else if (tur == 3) {
			tur = 1;
		}
	}
}

