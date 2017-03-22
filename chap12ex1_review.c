/*
Harleigh Abel
March 21, 2017
Absolute Beginners Guide to C Programming 
Chapter 12 ex1 page 106

chap12ex1_review.c
This program defines a series of variables and 
expressions and then uses both relational and
logical operators to test them against each other
*/

#include <stdio.h>

int main(void)
{
	// set up some common intefers for the process
	int planets = 8;
	int friends = 6;
	int potterBooks = 7;
	int starWars = 6;
	int months = 12;
	int beatles = 4;
	int avengers = 6;
	int baseball = 9;
	int basketball = 5;
	int football = 11;

	if ((friends + beatles >= baseball) && 
		(friends + avengers >= football))
		{
				printf("The cast of Friends and the Beatles ");
				printf("Could make a baseball team, \n");
				printf("AND the cast of friends plus the Avengers ");
				printf("could make a football team.\n");
		}
		else
		{   
		    printf("Either the Friends cannot make a ");
		    printf("baseball team with the Fab Four, \n");
		    printf("OR the can't make a Gridiron Gang with the ");
		    printf("Avengers (or both!)\n");
		}
		
		if ((starWars <= months) || (potterBooks <= months))
		{
		    printf("\nYou could read one Harry Potter book a month,\n");
		    printf("and finish them all in a year, \n");
		    printf("OR you could see one Star Wars movie a month,\n");
		    printf("And finish them all in less than a year.\n");
		}    
		else
		{
		      printf("Neither can happen--too many books or movies,\n");
		      printf("Not enough time!\n\n");
		}
		
		if (!(baseball + basketball > football))	
		{
		    printf("\nThere are fewer baseball and basketball players\n");
		    printf("combined than football players.");
		}
		
		return 0;
}		
	
