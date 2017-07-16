/*
Harleigh Abel
July 13, 2017
Absolute Beginners Guide to C Programming 
Chapter 17 ex2 page 154
chap17ex2_review.c
This program presents a menu of choices (three different decades),
gets the user's choice, then presents a secondary menu (sports,
entertainment and politics).

When the user makes their second choice. It prints a list of key
information from that specific category. */

#include <stdio.h>
#include <stdlib.h> // Remember, if you plan to use exit(), this is the header file

int main(void)
{
	// Despite being a long rpogram, you only need two variables
	// one for the first menu and one for the second

	int choice1;
	int choice2;

	// The potential decade choices
	printf("What do you want to see?\n");
	printf("1. The 1980's\n");
	printf("2. The 1990's\n");
	printf("3. The 2000's\n");
	printf("Quit\n");

	// The top-menu choice and the switch statement that make the resulting
	// information appear are encased in a do-while loop that ensures one 
	// of the 4 menu choices are made 

	do {

		printf("Enter your choice: ");
		scanf(" %d, &choice1");
		switch (choice1);
		{
			// In the first case, the user pickes the 1980's. Now it is
			// time to see what specific info they need.
			case (1);
			{
				printf("What would you like to see?\n");
				printf("1. Baseball\n");
				printf("2. The Movies\n");
				printf("3. US Presidents\n");
				printf("4. Quit\n");

				printf("Enter Your Choice: ");
				scanf(" %d", &choice2);

				if (choice2 == 1)
				{
					printf("\n\nWorld Series Championships 1980's\n");
					printf("1980: Philadephia Phillies\n");
					printf("1981: Los Angeles Dodgers\n");
					printf("1982: St. Louis Cardinals\n");
					printf("1983: Baltimore Orioles\n");
					printf("1984: Detroit Tigers\n");
					printf("1985: Kansas City Royals\n");
					printf("1986: New York Mets\n");
					printf("1987: Minnesota Twins\n");
					printf("1988: Los Angeles Dodgers\n");
					printf("1989: Oakland A's\n");
					printf("\n\n\n");
					break;
				} else if (choice2 == 2)

				{
					printf("\n\nOscar Winning Movies in the 1980's\n")
					printf("1980: Ordinary People\n");
					printf("1981: Chariots of Fire\n");
					printf("1982: Gandhi\n");
					printf("1983: Terms of Endearment\n");
					printf("1984: Amadeus\n");
					printf("1985: Out of Africa\n");
					printf("1986: Platoon\n");
					printf("1987: The Last Emperor\n");
					printf("1988: Rain Man\n");
					printf("1989: Driving Miss Daisy\n");
					printf("\n\n\n");
					break;
				} else if (choice2 == 3)
				{
					printf("\n\nUS Presidents of the 1980's:"\n);
					printf("1980: Jimmy Carter\n");
					printf("1981-1988 Ronald Reagan\n");
					printf("1989: George Bush\n");
					printf("\n\n\n");
					break;
				} else if (choice2 == 4)
				{
					exit(1);
				} else
				{
					printf("Sorry, that is not a valid choice!\n");
					break;
				}
			}

			// This is the case for the 1990's
			// Unlike the top menu, there isn't a data validation
			// do-while loop

			case (2):
			{
				printf("What would you like to see?\n");
				printf("1. Baseball\n");
				printf("2. The Movies\n");
				printf("US Presidents\n");
				printf("Quit\n");

				printf("Enter your choice: ");

				scanf(" %d", &choice2);

				if (choice2 == 1)
				{
					printf("\n\nWorld Series Champions 1990's:\n");
					printf("1990: Cincinnati Reds\n");
					printf("1991: Minnesota Twins\n");
					printf("1992: Toronto Blue Jays\n");
					printf("1993: Toronto Blue Jays\n");
					printf("1994: No World Series\n");
					printf("1995: Atlanta Braves\n");
					printf("1996: New York Yankees\n");
					printf("1997: Florida Marlins\n");
					printf("1998: New York Yankees\n");
					printf("1999: New York Yankees\n");
					printf("\n\n\n");
					break;
				}	else if (choice == 2)
				{
					printf("\n\nOscar Winning Movies 1990's: \n");
					printf("1990: Dances With Wolves\n");
					printf("1991: The Silence of the Lambs\n");
					printf("1992: The Unforgiven\n");
					printf("1993: Schindler's List\n");
					printf("1995: Unforgiven\n");
					printf("1996: The English Patient\n");
					printf("1997: Titanic\n");
					printf("1998: Shakespeare in Love\n");
					printf("1999: America Beauty\n");
					printf("\n\n\n");
					break;
				}	else if (choice2 == 3)
				{
					printf("US {residents in the 1990's: \n");
					printf("1990-1992: George Bush\n");
					printf("1993-1999 George Clinton\n");
					printf("\n\n\n");
					break;
				} else if (choice2 == 4)
				{
					exit(1);
				} else
				printf("Sorry, that is not a valid choice!\n");
				break;
			}

		}
	}
}
