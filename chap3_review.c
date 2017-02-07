/*
Harleigh Abel
Feb. 7, 2017
C Basics Review
C Programming Absolute Beginner's Guide pg 26
Ex 3.1

Totals how much money spent on holiday gifts*/

#include <stdio.h>

int main (void)
{
// declare float variables for each gift amount and the total  
float sisgift, brogift, dadgift, momgift, spousegift, total;

// greets user
printf("Welcome the gift tracker.\nI will tabulate how much you will spend on gift this year.\n\n");

// requests and retrieves cost from user for sister's gift
printf("How much are you going to spend on your sister's gifts this year?\n");
scanf( " %f", &sisgift);

// requests and retrieves cost from user for brother's gift
printf("How much money are you going to spend on your brother's gifts this year?\n");
scanf( " %f", &brogift);

// requests and retrieves cost from user for mother's gift
printf("How much money are you going to spend on your mother's gifts this year?\n");
scanf( " %f", &momgift);

// requests and retrieves cost from user for father's gift
printf("How much money are you going to spend on your father's gifts this year?\n");
scanf( " %f", &dadgift);

// requests and retrieves cost from user for spouse's gift
printf("How much money are you going to spend on your spouse's gifts this year?\n");
scanf( " %f", &spousegift);

// calculates total of all gift purchases
total = (sisgift + brogift + dadgift + momgift + spousegift);

// outputs total to screen
printf("Your TOTAL spent on gifts this year will be $%.2f\n", total);

// returns int to main function
return 0;
}

