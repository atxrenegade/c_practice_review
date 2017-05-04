/*
Harleigh Abel
May 3, 2017
Absolute Beginners Guide to C Programming 
Chapter 24 ex1 page 226
chap23ex1_review.c
This program demonstrates pointers by declaring and 
initializing both regular and pointer variables for 
int, float, and char types and then displays the values 
of each. */

#include <stdio.h> 

 
int main (void)
{
	int kids;
	int * pKids;
	float price;
	float * pPrice;
	char code;
	char * pCode;

	price = 17.50;
	pPrice = &price;

	printf("How many kids are you taking to the water park? ");
	scanf(" %d", &kids);
	
	pKids = &kids;

	printf("\nDo you have a discount ticket for the park?");
	printf("\nEnter E for Employee Discount, S for Sav-Mor ");
	printf("Discount, or N for for No Discount: ");
	scanf(" %c", &code);

	printf("\nFirst let's do it with the variables:\n");
	printf("You've got %d kids...\n", kids);
	switch(code)
	{
		case ('E'):
			printf("The Employee Discount saves you 25%% on the ");
			printf("$%.2f price", price);
			printf("\nTotal ticket cost: $%.2f", (*pPrice * .75 * *pKids));
		break;

		case('S'):
			printf("The Sav-more Discount saves you 15%% on the ");
			printf("$%.2f price", *pPrice);
			printf("\nTotal ticket cost: $%.2f", (*pPrice * .85 * *pKids));
		break;
			default : // Either entered N for No Discount or
			// an invalid letter
			printf("You will be paying the full price of ");
			printf("$%.2f for your tickets", *pPrice);
	}		
return 0;
}