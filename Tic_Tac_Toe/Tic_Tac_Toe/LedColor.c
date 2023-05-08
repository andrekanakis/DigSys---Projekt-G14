/*
 * LedColor.c
 *
 * Created: 2023-05-02 14:16:25
 *  Author: an8615ka-s
 */ 
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


void Led0(int n) {
	DDRB = 0b00000000;
	DDRD = 0b01000000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led1(int n) {
	DDRB = 0b00000000;
	DDRD = 0b00100000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led2(int n) {
	DDRB = 0b00000000;
	DDRD = 0b00010000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led3(int n) {
	DDRB = 0b00000000;
	DDRD = 0b00001000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led4(int n) {
	DDRB = 0b00000000;
	DDRD = 0b00000100;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led5(int n) {
	DDRB = 0b00000000;
	DDRD = 0b00000010;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led6(int n) {
	DDRB = 0b00000000;
	DDRD = 0b00000001;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led7(int n) {
	DDRB = 0b10000000;
	DDRD = 0b00000000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led8(int n) {
	DDRB = 0b01000000;
	DDRD = 0b00000000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}

void Led9(int n) {
	DDRB = 0b00100000;
	DDRD = 0b00000000;
	switch (n)
	{
		case 0: //Ingen färg
		nollbaby();
		break;
		case 1: //Röd
		redbaby();
		break;
		case 2: //Grön
		greenbaby();
		break;
		case 3: //Blå
		bluebaby();
		break;
	}
	_delay_ms(500);
}