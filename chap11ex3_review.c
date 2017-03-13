/*
Harleigh Abel
March 12, 2017
Absolute Beginners Guide to C Programming 
Chapter 11 ex3 page 99

chap11ex3_review.c
This program calculates the users age based 
on the current year.

This progam asks a user to input their state of happiness
on a scale of 1-10 and outputs a message based on their 
response
*/

#include <stdio.h>

int main(void)
{
  // declares varaibel for user input level of happines
  int rating;
  
  // greets user
  printf("Welcome to Happiness!\n");
  
  // requests and stores user happiness level in rating variable
  printf("On a scale of 1-10 (10 being euphoric and 1 being suicidal dismal)");
  printf("\nHow happy would you say you are: \n");
  scanf(" %d", &rating);
  
  // returns message based on rating 
  if (rating >= 8)
  {
    printf("Wow! Good for you, is sounds like you have the meaning of "); 
    printf("life all sorted out and working for you!");
  }  
    
  else if (rating >= 5)
  {
    printf("Still navigating the rat race, huh? Sunny skies ahead.");
  }
  
  
  else if (rating >= 3)
  {
    printf("Hang in there, keep your head up! We all hit bumps in the road.\n");
  }
  
  else 
  {
    printf("Rough day Buddy! Please put the rope down, it will be pass.");
  }
  
  return 0;
  
}  
