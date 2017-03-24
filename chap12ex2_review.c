/*
Harleigh Abel
March 23, 2017
Absolute Beginners Guide to C Programming 
Chapter 12 ex2 page 109

chap12ex2_review.c
This program asks for a name, and if the user has
a last name that starts with a letter between P and
Q, they will be sent to a different room for their tickets.
*/
{
	// set up an array for the last name then get it from the user
	char name(25);
	printf("What is your last name? ");
	printf("(Please capitalize the first letter!)\n);
	scanf(" %s", name);
	// For  a string array, you dont need the &
	if (name[0] >= 'P') && (name[0] <= 'S'))
	{
		printf("You must go to room 2432 ");
		printf("for your tickets.\n);
	}
	else
	{
		printf(You can get your tickets here.\n);
	}
	return 0;	
}





}
