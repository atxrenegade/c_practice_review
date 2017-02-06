/*
Harleigh Abel
Feb. 6, 2017
C Basics Review
C Programming Absolute Beginner's Guide pg 21

A program that Uses the Characters, Integers, and Floating-Point Data Types */

#include <stdio.h>

int main(void)
{
  // prints out a statement about c programming to keep c syntax and formatting
  // fresh in my mind
	printf("I am learning the %c programming language.\n",  'C');
	printf("I have just finished my second review of Chapter %d. \n",  2);
	printf("I am %.1f percent ready to move on ", 99.99);
	printf(" to the next chapter! \n \n");
	printf("I want to ensure that while I am learning new languages such as Ruby, SQL,\n"); 
	printf("Javascript, CSS and HTML, that I am able to retain previously learned languages \n");
	printf("as well. \n \n");
	printf("I relate to C programming as the grandfather of many modern programming \n"); 				
	printf("languages, the latin of coding.  I am also very interested in learning to build \n");
	printf("my own internet of things devices, and C is an ideal language for embedded systems,\n");
	printf("which I plan to work with in my Arduino and Raspberry pi down the road.");
  return 0;
}
