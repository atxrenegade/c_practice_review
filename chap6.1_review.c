// Harleigh Abel
// Feb. 11, 2017

// C Programming Absolute Beginner's Guide pg 55
// chap6_ex1 (my version)

/*This program pairs three people with their favorite hockey teams*/

#include <stdio.h>
#include <string.h>

int main (void)
{
  char person1[14];
  // person can hold a 14 character name
  
  char person2[] = "David";
  // person2 will be 6 characters specifically defined (5 + null)
  
  char person3[4] = "Joe";
  // person2 will be 4 characters specifically defined (3 + null) 
  
  char hockey_team1[] = "Canadiens";
  // hockey_team1 will be 10 characters
  
  char hockey_team2[18] = "Oilers";
  // hockey_team2 will have extra room just in case
  
  char hockey_team3[25];
  
    person1[0] = 'H';
    person1[1] = 'a';
    person1[2] = 'r';
    person1[3] = 'l';
    person1[4] = 'e';
    person1[5] = 'i';
    person1[6] = 'g';
    person1[7] = 'h';
    person1[8] = '\0';
    // always include the null terminator
  
    strcpy(hockey_team3, "Capitals");
  
    printf("%s\'s favorite hockey team is %s.\n", person1, hockey_team1);
    printf("%s\'s favorite hockey team is %s.\n", person2, hockey_team3);
    printf("%s\'s favorite hockey team is %s.\n", person3, hockey_team2);
  
    return 0;  
  
}
