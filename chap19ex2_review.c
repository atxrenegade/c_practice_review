/*
Harleigh Abel
April 23, 2017
Absolute Beginners Guide to C Programming 
Chapter 19 ex2 page 177
chap19ex2_review.c
This program asks a user for their hometown and the two
letter abbreviation of their home state. It then uses string
concatenation to build s new string with both town and state 
and prints it using puts. */

#include <stdio.h> // is needed for puts() and gets()
#include <string.h> // is needed for  strcat()
 
int main (void)
{
	char city[15];
	// two chars for the state  abrev, and one for the
	// null zero char
	char st[3];
	char fullLocation[18] = "";

	puts("What town do you live in? ");
	gets(city);
	puts("What state do you live in?");
	gets(st);

	/* Concatenate the strings */
	strcat(fullLocation, city);
	// Adds a comma and space between the city and state
	strcat(fullLocation, ", "); 
	strcat(fullLocation, st);

	puts("\nYou live in ");
	puts(fullLocation);
	return(0);
}	
