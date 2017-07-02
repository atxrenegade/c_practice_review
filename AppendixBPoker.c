/*
Harleigh Abel
June 25 2017
Absolute Beginners Guide to C Programming 
AppendixBPoker.c page 320

This program plays draw poker. Users can play
as often as they want, betting between 1 and 5.
They are dealt 5 cards and then get to choose
which cards to keep, and which cards to replace.
The new hand is then reviewed and the user's 
payout is set based on the new hand the value
of the new hand.  The user's new bankroll is 
displayed as they are given the option to continue */

// Header files

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

// Two constants defined for determining whether 
// hands are flushes or straights

#define FALSE 0
#define TRUE 1

// Function prototyping

void printGreeting();
int getBet();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[]);

int main(void)
{
	int bet;
	int bank = 100;
	int i;
	int cardRank[5]; // Will be one of 13 values ACE-KING
	int cardSuit[5]; // Will be one of 4 values (for Clubs, Diamonds,
					// Hearts, Spades)
	int ranksinHand[13]; // Used for evaulating the final hand
	int suitsinHand[4]; // Used for evaulating the final hand
	int winnings;
	time_t t;
	char suit, rank, stillPlay;

	// This function is called outside the do...while	
	// while loop because the greeting only needs to
	// be displayed once, while everything else in main
	// will run multiple times, depending on how many
	// times the user wants to play.

	printGreeting();

	// Loop runs each time the user plays a hand of draw poker

	do {
		bet = getBet();
		srand(time(&t));
		getFirstHand(cardRank, cardSuit);
		printf("Your five cards: \n");
		for(i = 0; i < 5; i++)
		{
			suit = getSuit(cardSuit[i]);
			rank = getRank(cardRank[i]);
			printf("Card #%d: %c%c\n", i + 1, rank, suit);
		}

		// These two arrays are used to figure out the value
		// of the player's hand. However, they must be zeroed out
		// in case the user plays multiple hands.

		for (i = 0; i < 4; i++)
		{
			suitsinHand[i] = 0;
		}

		for (i = 0; i < 4; i++)
		{
			ranksinHand[i] = 0;
		}	

		getFinalHand(cardRank, cardSuit, finalRank, finalSuit, ranksinHand, suitsinHand);

		printf("Your five final cards: \n");
		for(i = 0; i < 5; i++)
		{
			suit = getSuit(finalSuit[i]);
			rank = getRank(finalRank[i]);
			printf("Card #%d: %c%c\n", i + 1; rank, suit);
		}
		 	// possible missing curly brace
			winnings = analyzeHand(ranksinHand, suitsinHand);
			printf("You won %d!\n", bet * winnings);
			bank = bank - bet + (bet * winnings);
			printf("\nYour bank is now %d.\n", bank);
			printf("\nDo you want to play again? ");

			scanf(" %c", &stillPlay);
		} while (toupper(stillPlay) == 'Y');
		
			return;
	}
	/*********************************************************************************/

	// Print a quick greeting as well as tell the users the value of 
	// different winning hands

	void printGreeting()
	{
		printf("****************************************************\n");
		printf("\n\nWelcome to the Absolute Beginners Casino\n\n");
		printf("\tHome of Video Draw Poker \n\n");
		printf("****************************************************\n");

		printf("Here are the rules: \n");
		printf("You start with 100 credits, and you make a bet from");
		printf("1 to 5 credits");
		printf("You are dealt 5 cards, and you can then choose which");
		printf("cards to keep ");
		printf("or to discard\n");
		printf("You want to make the best possible hand.\n");
		printf("Here is the table for winnings (assuming a ");
		printf("bet of 1 credit.\n");
		printf("\n\nPair\t\t\t\t1 credit");
		printf("\nTwo Pairs\t\t\t2 credits");
		printf("\nThree of a kind\t\t\t 3 credits");
		printf("\nStraight\t\t\t4 credits");
		printf("\nFlush\t\t\t\t5 credits");
		printf("\nFull House\t\t\t8 credits");
		printf("\nFour of a Kind\t\t\t10 credits");
		printf("\nStraight Flush\t\t\t20 credits");
		printf("\n\nHave fun!!\n\n");
	}

	// Function to get first hand(int cardRank[], int cardSuit[])
	void getFirstHand(int cardRank[], int cardSuit[])
	{
		int i, j;
		int cardDup;

		for (i = 0; i < 5; i++)
		{
			cardDup = 0;
			do {
				// Card rank is one of 13 (2-10, J, Q, K, A)
				cardRank[i] = (rand() % 13);
				// Card suit is one of 4
				// (club, diamond, heart, spade)
				cardSuit[i] = (rand() % 4);

				// Loop that ensures each card is unique
				for (j = 0; j < i; j++)
				{
					if ((cardRank[i] == cardRank[j])) &&
						(cardsuit[i] == cardSuit[j])
					{
						cardDup = 1;
					}
				}
			} while (cardDup == 1);
		}	
	}

	// Function that changes the suit integer value to a character
	// representing the suit

	char getSuit(int suit)
	{
		switch (suit)
		{
			case 0:
				return('c');
			case 1:
				return('d');
			case 2:	
				return('h');
			case 3:
				return('s');			
		}
	}

// Function that changes the rank integer value to a character
// representing the rank

char getRank(int rank)
{
	switch (rank)
	{
		case 0:
			return('A');
		case 1:
			return('2');
		case 2:
			return('3');
		case 3:
			return('4');
		case 4:
			return('5');
		case 5:
			return('6');
		case 6:
			return('7');
		case 7:
			return('8');
		case 8:
			return('9');
		case 9:
			return('T');
		case 10:
			return('J');
		case 11:
			return('Q');
		case 12:
			return('K');		

	}
}	

	// Function to get the user's bet between 1 and 5

int getBet()
{
	int bet;
	do // Will keep running until the user enters 0-5
	{
		printf("How much do you want to bet? (Enter a number ");
		printf("1 to 5, or 0 to quit the game: ");
		scanf(" %d", &bet);

		if (bet >= 1 && bet <= 5)
		{
			return(bet);
		}	
		else if (bet == 0)
		{
			exit(1);
		}
		else
		{
			printf("\n\nPlease anter a bet from 1-5 or ");
			printf("0 to quit the game.\n")
		}

	} while ((bet < 0 || (bet > 5));	
}
	// Last function reviews the final hand and determines the value
	// of the hand.
int analyzeHand(int ranksinHand[], int suitsinHand[])
{
	int num_consec = 0;
	int i, rank, suit;
	int straight = FALSE;
	int flush = FALSE;
	int four = FALSE;
	int three = FALSE;
	int pairs = 0;

	for (suit = 0; suit < 4; suit ++)
		if (suitsin Hand[suit] == 5)
			flush = TRUE;
		rank = 0;
		while (ranksinHand[rank] == 0)
			rank++;
		for (; rank < 13 && ranksinHand[rank]; rank++)
			num_consec == 5) (
		straight = TRUE;
		)
		for (rank = 0; rank < 13; rank++) {
			if (ranksinHand[rank] == 4)
				four = TRUE;
			if (ranksinHand[rank] == 3)
				three = TRUE;
			if (ranksinHand[rank] == 2)
				pairs++;
		}
}


	

}
