/*
Harleigh Abel
May 2, 2017
Absolute Beginners Guide to C Programming 
Chapter 23 ex1 page 212
chap23ex1_review.c
This program generates 10 random numbers and sorts them */

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main (void)
{
	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;

	// If you don't include thes statement your program will always
	// generate the same 10 random numbers and then sorts them */

	srand(time(&t));

	// The first step is to fill the array with random numbers 
	// (from 1 to 100)

	for (ctr = 0; ctr < 10; ctr++)
	{
		nums[ctr] = (rand() % 99) + 1;
	}

	// Now list the array as it currently is before sorting
	puts("\nHere is the list before the sort:");
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d\n", nums[ctr]);
	}

	// Sort the array

	for (outer = 0; outer < 9; outer ++)
	{
		didSwap = 0; // Become 1 (true) if list is not yet ordered
		for (inner = outer; inner < 10; inner++)
		{
			if (nums[inner] < nums[outer])
			{
				temp = nums[inner];
				nums[inner] = nums[outer];
				nums[outer] = temp;
				didSwap = 1;
			}
		}
		if (didSwap == 0)
		{
			break;
		} 
	}
	// Now list the array as it currently is after sorting 
	puts ("\nHere is the list after sort:");
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d\n", nums[ctr]);
	}
	return(0);
}