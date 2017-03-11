/*
Harleigh Abel
March 10, 2017
Absolute Beginners Guide to C Programming 
Chapter 11 ex2 page 97

chap11ex2_review.c
This program calculates the users age based 
on the current year.
*/

#include <stdio.h>
#define CURRENTYEAR 2017

int main(void)
{
  // initiates variables for birth year and age
  int yearBorn, age;

  // asks user for birth year and stores variable
	printf("What year were you born?\n");
	scanf("  %d", &yearBorn);

  // validates user input
	if (yearBorn > CURRENTYEAR)
	{
		printf("Really? You haven't been born yet?!\n");
		printf("Where is your time machine!\n");
	}
	
	// calculates and returns users age
	else
	{
		age = CURRENTYEAR - yearBorn;
		printf("So this year you will turn %d on your brithday!\n", age);
	}

  // calculates whether users birth year is a leap year
	if ((yearBorn % 4) == 0)
	{
		printf("You were born on a leap year! Cool!\n");
	}

  return 0;
}
