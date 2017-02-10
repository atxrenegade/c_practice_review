/**
Harleigh Abel
Feb 9, 2017
C Programming Absolute Beginner's Guide
pg 38 Exercise 4.2
**/

#include <stdio.h>

int main(void)
{
	/* Here are some more exercise to help you with printf(), Escape Sequences, and Conversion Characters */
	printf("Quantity\tCost\tTotal\n");
	printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
	printf("Too many spaces		\b\b\b\b can be fixed with the ");
	printf("\\%c Escape character \n",  'b');
	printf("\n\a\n\a\n\aSkip a few lines, and beep ");
	printf("a few beeps. \n\n\n");
	printf("%s, %c.", "You are kicking butt learning ", 'C');
	printf("You just finished chapter %d. \nYou have finished ", 4);
	printf(" %.1f%c of the book. \n", 12.5000, '%');
	printf("\n\nOne third equals %.2f or ", 0.333333);
	printf("%.3f or %.4f or ", 0.33333, 0.333333);

	return 0;
}


