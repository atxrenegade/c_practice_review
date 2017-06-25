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

	
}

