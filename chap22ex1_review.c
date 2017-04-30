/*
Harleigh Abel
April 29, 2017
Absolute Beginners Guide to C Programming 
Chapter 22 ex1 page 203
chap22ex1_review.c
This program takes an ID number from the user and 
then checks the ID against a list of customers in
the database. If the customer exists, it uses that
array element to check their current balance,
and warns the user if the balance is more than 100. */

#include <stdio.h> 
 
int main (void)
{
	int ctr; // Loop counter
	int idSearch; // Customer to look for (the key)
	int found = 0; // Will be 1 (true) if custmoer is found

	// Defines the 10 elements in the two parallel arrays
	int custID[10] = {313, 453, 502, 101, 892,
					  475, 792, 912, 343, 633};
	float custBal[10] = {0.00, 45.34, 71.23, 301.56, 9.08,
						 192.41, 389.00, 229.67, 18.31, 59.54};
	/* Interact with the user looking for a balance. */
	printf("\n\n*** Custoner Balance Lookup ***\n");
	printf("What customer number do you need to check? ");
	scanf(" %d", &idSearch);
	
	/* Search to see that the customer ID exists in the array */
	for (ctr = 0; ctr<10; ctr++)
	{
		if (idSearch == custID[ctr])
		{
			found = 1;
			break;
		}	
	}					 				  
	if (found)
	{
		if (custBal[ctr] > 100.00)
		{
			printf("\n** The customer's balance is $%.2f.\n",
				custBal[ctr]);
			printf(" No additional credit.\n");
		}
		else
		{ 
		  printf("**\nThe customer's credit is good!\n");
		}
	}
	else
	{
		printf("** You must have typed an incorrect customer ID.");
		printf("\n 	ID %3d was not found in list. \n", idSearch);
	}
	return(0);
}
