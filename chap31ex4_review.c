/*
Harleigh Abel
June 14 2017
Absolute Beginners Guide to C Programming 
Chapter 31 ex4 page 300
chap31ex4_review.c

This program demonstrates passing mulitple variables to a function */ 

#include <stdio.h>

changeSome(int i, float *newX, int iAry[5]);

int main(void)
{
	int i = 10;
	int ctr;
	float x = 20.5

	int iAry[] = {10, 20, 30, 40, 50};

	puts("Here are main()'s variables before the function: ");
	printf("i is %d\n", i);
	printf("x is %.1f\n", x);
	for (ctr = 0; ctr < 5; ctr++)
	{
		printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
	}

}