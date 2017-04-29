/*
Harleigh Abel
April 28, 2017
Absolute Beginners Guide to C Programming 
Chapter 21 ex1 page 197
chap21ex1_review.c
This program creates an array of the ten scores 
of a basketball player.  The scores form the first 
six games are in the program ad the scores from the 
last four are inputted by the user.*/

#include <stdio.h> 
 

int main (void)
{

    int gameScores[10] = {12, 5, 21, 15, 32, 10};
    int totalPoints = 0;
    int i = 6;
    float avg;
    
    // Only need scores for the last four games so
    // the loop will cover array elements 6-9
    for (i; i < 10; i++)
    {
      
      // Add one to the array number as the user won't think
      // of the first game as game 0, but game 10
      printf("What did the Player score in game %d? ", i + 1);
      scanf(" %d", &gameScores[i]);
     
    }
    
    // Now that you have all 10 scores, loop through the scores
    // to get total points in order to calculate the average
    for(i = 0; i < 10; i++)
   
    {
        totalPoints += gameScores[i];
    }
    // Use a floating point variable for the average as it is 
    // liekly to be between two integers
    
    avg = ((float)totalPoints/10);
    
    printf("\n\nThe Player's scoring average is %.1f.\n", avg);
    
    return 0;
}
