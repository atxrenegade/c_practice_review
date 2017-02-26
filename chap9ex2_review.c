/*
Harleigh Abel
Feb. 26, 2017
Absolute Beginners Guide to C - Review
Ex 9.1 page 76
chap9ex1.c
This program calculates the user's total cost for replacement bats for the baseball team including taxes
*/

#include <stdio.h>

#define SALESTAX .12
// define saletax as a constant to keep current of any changes

int main(void)
{
  // Variable for the number of baseball bats purchased, price,
  // total before taxes, a final cost
  
  int num_bats;
  float price;
  float before_tax_total;
  float net_total;
  
  // Get the total number of bats purchased from coach (user)
  printf("How many baseball bats did you purchase?");
  scanf("%d", &num_bats);
  printf("What was the cost per bat? (Please unput using the XX.XX format)");
  scanf("%f", &price);
  // compute the price
  before_tax_total = (float) num_bats * price;
  net_total = before_tax_total + (before_tax_total * (float)SALESTAX);
  
  printf("Your total equipment cost for baseball bat replacements this year is $%.2f\n\n", net_total);
  
  return 0;
}
  
