/*
Harleigh Abel
April 27, 2017
Absolute Beginners Guide to C Programming 
Chapter 31 ex2 page 297
chap31ex2_review.c
The program demonstrates passing an array to a function. */

#include <stdio.h>
#include <string.h>

int main (void)
{
    char name[15] = "Michael Hatton";
    change(name);
    
    printf("Back in main(), the name is now %s.\n", name);
    
    return(0);  // Ends the program
    
}

/****************************************/

/* Sometimes putting dividers like the one above
is a nice break between your different functions. */

change(char name[15])   // Recieves the value of i
{
    // Change the string stored at the address 
    // pointed to by name
    
    strcpy(name, "XXXXXXXXXXXXXXXXXXXXXXXX");
    return; // Returns to main
}    
    
