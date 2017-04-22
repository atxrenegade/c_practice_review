/*
Harleigh Abel
April 21, 2017
Absolute Beginners Guide to C Programming 
Chapter 18 ex1 page 164
chap18ex1_review.c
This program is nothing more than a simple demonstration of the 
putchar() function. */

#include <stdio.h>
#include <string.h>
 
int main (void)
{
	int i;
	char msg[] = "C is fun";

	for(i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]); //Outputs a single character
	}
	putchar('\n'); // One line break after the loop is done.

	return (0);

}