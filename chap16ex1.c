/*
Harleigh Abel
April 13, 2017
Absolute Beginners Guide to C Programming 
Chapter 16 ex1 page 143
chap16ex1_review.c
This program will ask users to input test grades for the 25
students in the class and then compute the test grade. If fewer 
than 25 students took the test the user can enter -1 as a grade
and break the loop, and only those who entered grades will be
used to compute the average */

#include <stdio.h>

int main (void)

{
	int numTest;
	float stTest, avg, total = 0.0;

	// Asks for up to 25 tests

	for  (numTest = 0; numTest < 25; numTest++)
	{
		// Get the test scores, and check if -1 was entered

		printf("\nWhat is the next student's test score? ");
		scanf(" %f", &stTest);
		if (stTest < 0.0)
		{
			break;
		}
		total += stTest;

	}
	avg = total / numTest;
	printf("\nThe average is %.1f%%.\n", avg);

	return 0;
}