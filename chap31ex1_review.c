/*
Harleigh Abel
June 11 2017
Absolute Beginners Guide to C Programming 
Chapter 31 ex1 page 295
chap31ex1_review.c

This program demonstrates passing a variable to a function by value.*/

#include <stdio.h>

int main(void)
{
	int i;

	printf("Please eneter an integer...");
	scanf(" %d", &i);

	// Now call the half function, passing the value of i
	half(i);

	// Shows that the function did not alter i's value
	printf("In main(), i is still %d.\n", i);

	return(0); // Ends the program
}

/**********************************************************************/

/* Sometimes putting dividers like the one above is a nice break 
between different functions. */

half(int i) // Recieves the value of i
{
	i = i / 2;
	printf("Your value halved is %d. \n", i);
	return; // Returns to main
}
