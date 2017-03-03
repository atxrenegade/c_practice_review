/*
Harleigh Abel
March 2, 2017
Absolute Beginners Guide to C Programming 
Chapter 10 ex1 page 84

chap10ex1_review.c
This program increases a counter from 1 to 5, 
printing updates as it goes,
then count back down to 1
*/

#include <stdio.h>

int main(void)
{
int ctr = 0;

ctr = ctr + 1;  // increases counter to 1
printf("Counter is at %d.\n", ctr);
ctr = ctr + 1; // increase counter to 2
printf("Counter is at %d.\n", ctr);
ctr = ctr + 1;  // increases counter to 3
printf("Counter is at %d.\n", ctr);
ctr = ctr + 1;  // increases counter to 4
printf("Counter is at %d.\n", ctr);
ctr = ctr + 1;  // increases counter to 5
printf("Counter is at %d.\n", ctr);
ctr = ctr - 1;  // decreases counter to 4
printf("Counter is at %d.\n", ctr);
ctr = ctr - 1;  // decreases counter to 3
printf("Counter is at %d.\n", ctr);
ctr = ctr - 1;  // decreases counter to 2
printf("Counter is at %d.\n", ctr);
ctr = ctr - 1;  // decreases counter to 1
printf("Counter is at %d.\n", ctr);

return 0;
}


