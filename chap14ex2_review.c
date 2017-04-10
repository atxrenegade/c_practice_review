/*
Harleigh Abel
April 9, 2017
Absolute Beginners Guide to C Programming 
Chapter 14 ex2 page 127
chap14ex2_review.c
This program will multiply two numbers and display the result
and display the result for as long as the user wants. Answering 'N'
will break the loop */

#include <stdio.h>

int main(void)
{
	float num1, num2, result;
	char choice;

	do {
	  
		  printf("Enter your first number to mulitply: ");
		  scanf(" %f", &num1);
		  printf("Enter your second number to mulitply: ");
		  scanf(" %f", &num2);

		  result = num1 * num2;

		  printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
		  printf("Do you want to enter another pair of numbers?");
		  printf("to multiply (Y/N): ");
		  scanf(" %c", &choice);
		  // If the user enters a lowercase n, this if statement will
		  // will convert to an N
		  if (choice == 'n')
			  {
				  choice = 'N';
			  }

	  }	while (choice != 'N');

	return 0;
  }