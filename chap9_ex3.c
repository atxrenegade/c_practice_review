/* 
Harleigh Abel
Feb. 28 2017
Absolute Beginner's Guide to C Programming
chap 9 ex 3 pg 80
chap9_ex3.c
Exercise was conpleted on my damn phone!
This program calculates some basic scores and averages.
*/

#include <stdio.h>

int main (void)
{
    int score1, score2, score3, score4;
    float averageScore, scoreDelta, percentDiff;
    
    // Player got the same score on games 1 and 4 
    // so we are able to use multiple assignment.
    
    score1 = score4 = 136500;
    score2 = 210025;
   // Player needs to input score for the second game
   printf("Please enter your score for your second game.");
   scanf("%d", &score2);
   
   averageScore = (score1 + score2 + score3 +score4)/4;
   printf ("Your average pacman score is %.1f\n", averageScore);
   
   scoreDelta = 320950 - averageScore;
   percentDiff = 100 ((320950 - averageScore) / 320950);
   printf("Your score is %.1f points lower than the High Score of 320, 950!\n," &scoreDelta);
   
   printf("You are %.1f percent behind that score.\n", percentDiff);
   
   return 0;
   }
   
    
    