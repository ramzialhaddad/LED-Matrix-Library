/*
Programming Layout for this project:
	(this whole project is determined by if the RPi can handle multiple LEDs (lets hope so :s))
	- We are going to use the Green LEDs in the LED Matrix which are the odd pins on the board
	- There is a constant arrays of ints that correspond to Columns and Rows on the LED Matrix so the first LED is 0 and the 0th index in both arrays. Smart eh?
	- There are headers corresponding to the different functionalities of the program control. So, there is  one for Letters, Numbers and Base Functions which 
		is responsible for switching individual and groups of LEDs
*/
#include <stdio.h>
#include <wiringPi.h>
#include "letters.h"
//						||		1		 ||		  2		   ||			3	  ||		4	   ||		  5		 ||			6	   ||		 7		  ||	    8       || 
const int columns[40] = {25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11,};


//					  ||		1	||		  2		  ||		3	  ||		4	 ||		  5		     ||			6	     ||		 7		     ||	    8            || 
const int rows[40] = {1, 1, 1, 1, 1, 13, 13, 13, 13, 13, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 23, 23, 23, 23, 23, 15, 15, 15, 15, 15, 27, 27, 27, 27, 27, 17, 17, 17, 17, 17};


void cleanup(){	
	for(int x = 0; x < sizeof(columns)/sizeof(int)){
		digitalWrite(rows[x], 0);
		digitalWrite(columns[x], 0);
	}
}

int main(void){
	wiringPiSetupGpio();

	//Let's set up the pinMode
	for(int x = 0; x sizeof(columns)/sizeof(int)){
		pinMode(columns[x], OUTPUT);
		pinMode(rows[x], OUTPUT);
	}

	
}