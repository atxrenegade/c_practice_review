/*
Harleigh Abel
June 9 2017
Absolute Beginners Guide to C Programming 
Chapter 30 ex1 page 290
chap30ex1_review.c

The program is a simple demonstration of the difference
between global variables and local variables. */

#include <stdio.h>
int g1 = 10;

int main(void)
{
	float l1;
	l1 = 9.0;

	printf("%d %.2f\n", g1, l1); // prints the 1st global and first
								// local variable
	prAgain()
	{
		int l2 = 5;

		// Can't print l1--it is local to main
		printf("%d %.2f %d\n", l2, g2, g1);
		return;
	}
}