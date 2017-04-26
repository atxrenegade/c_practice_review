/*
Harleigh Abel
April 24, 2017
Absolute Beginners Guide to C Programming 
Chapter 19 ex1 page 173
chap19ex1_review.c
This program asks a user for a username and password.  It tests
whether their password has an uppercase, lowecase letter, and 
a digit.  If it does, the program congratulated their selection.
If not, it suggests they might want to consider a password with
more variety for the sake of security.  */

#include <stdio.h> // is needed for printf() and scanf()
#include <string.h> // is needed for strlen() 
#include <ctype.h> // is needed for isdigit, isupper, and islower
 
int main (void)
{
	int i;
	int hasUpper, hasLower, hasDigit;
	char user[25], password[25];

	// initialize all three test variable to 0 ie. false
	hasUpper = hasLower = hasDigit = 0;

	printf("What is your username? ");
	scanf(" %s", user);

	printf("Please create a password: ");
	scanf(" %s", password);

	// This loop goes through each character of the password and tests
	// whether or not it is a digit, uppercase letter or lowercase letter.

	for(int i = 0; i < strlen(password) ; i++)
	{
	  if (isdigit(password[i]))
	  {
		  hasDigit = 1;
		  continue;
	  }
	  if (isupper(password[i]))
	  {
		  hasUpper = 1;
		  continue;
	  }
	  if(islower(password[i]))
	  {
		  hasLower = 1;
	  }
	}
		/* The if portion will only execute if all three variables
		 below are 1, and the variables will only equal 1 if 
		 the appropriate characters were each found. */

		 if((hasDigit) && (hasUpper) && (hasLower))
		 	{
		 	  printf("\n\nExcellent work, %s, \n", user);
		 	  printf("Your password has upper and lowercase ");
		 	  printf("letters and a number.");
		 	} 
		 else
		 	{
		 	  printf("\n\nYou should consider a new password, %s!\n", user);
		 	  printf("One that uses upper and lowercase letters ");
		 	  printf("And a number.");
		 	}
	return(0);
}	
