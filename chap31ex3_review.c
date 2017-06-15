/*
Harleigh Abel
June 14 2017
Absolute Beginners Guide to C Programming 
Chapter 31 ex3 page 298
chap31ex3_review.c

This program demonstrates passing a variable to a fucntion by address.*/

#include <stdio.h>

int main(void)
{
	int i;

	printf("Please enter an integer...");
	scanf(" %d", &i);

	// Now call the half function, passing the address of i

	half(&i);
	// Shows that function did alter i's value
	printf("In main(), i is now %d.\n", i );

	return (0); // Ends the program
}
/******************************************/

/* Sometimes putting dividers like the one above 
is a nice break between different functions. */

half (int *i) // Receives the address of i
{
	*i = *i / 2;
	printf("Your value is halved %d.\n", *i);
	return; // returns to main
}