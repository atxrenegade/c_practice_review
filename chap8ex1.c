/**
Harleigh Abel 
Feb. 21, 2017
Absolute beginner-s Guide to C 
Review chpater 8 ex 8.1 pg 67
chap8ex1.c 

This sample program asks users for some basic data and prints 
it out on the screen to show what was input by the users
**/

#include <stdio.h>

int main(void)
{
  // set up variables that scanf will fill
  
  char firstInitial;
  char lastInitial;
  int age;
  int favorite_number;
  
  printf("What is the first letter in your first name?\n");
  scanf(" %c", &firstInitial);
  
  printf("What letter does your last name begin with?\n");
  scanf(" %c", &lastInitial);
  
  printf("Please tell me how old you are?\n");
  scanf(" %d", &age);
  
  printf("What is your favorite number?\n");
  scanf(" %d", &favorite_number);
  
  printf("Your initials are %c %c and you are %d years old!\n", firstInitial, lastInitial, age);
  printf("\nYour favorite number is %d. \n\n", favorite_number);
  
  return 0;  
}
