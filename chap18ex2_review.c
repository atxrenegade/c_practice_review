/*
Harleigh Abel
April 22, 2017
Absolute Beginners Guide to C Programming 
Chapter 18 ex2 page 165
chap18ex2_review.c
This program is nothing more than a demonstration of the getchar() function. */

// getchar() is defined in stdio.h, but string.h is needed for
// the strlen() function

#include <stdio.h>
#include <string.h>

int main(void)

{
    int i;
    char msg[25];
    
    printf("Type up to 25 characters and then press Enter...\n");
    for(i = 0; i < 25; i++)
    {
        msg[i] = getchar(); // Outputs a single character
          if (msg[i] == '\n')
          {
            i--;
            break;
          }
    }
  putchar('\n'); // One line break after the loop is done.
  
  for(; i >= 0; i--)
  {
      putchar(msg[i]);
  }
  putchar('\n');
  
  return(0);
  
}
