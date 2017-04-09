/*
Harleigh Abel
April 2, 2017
Absolute Beginners Guide to C Programming 
Chapter 14 ex1 page 124
chap14ex1_review.c
This program increases a counter from 1 to 5, printing
updates and then counts back it back down to 1. However, 
it uses while loops and the increment and decrement operators.
*/

#include <stdio.h>

int main(void)
{
	int ctr = 0;

	while (ctr < 5)
    {
		printf("Counter is at %d.\n", ++ctr);
	}

	while (ctr > 1)
	{
		printf("Counter is a t %d. \n", --ctr);
	}
	return 0;
}