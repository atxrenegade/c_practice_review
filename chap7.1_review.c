// Harleigh Abel
// Feb. 12, 2017

// C Programming Absolute Beginner's Guide pg 62
// chap7_ex1.c (my version)

// This program list the number of children in a family
// and the childrens names and ages

#include <stdio.h>
#include <string.h>

#include "chap7_ex1.h"


main()
{
  int age;
  char childname[16] = "Kaylen";
  
  printf("\n%s have %d kids. \n", FAMILY, KIDS);
  
  age = 9;
  printf("The oldest, %s is %d. \n", childname, age);
  
  strcpy(childname, "Grey");
  age = 4;
  printf("The middle girl, %s is %d. \n", childname, age);
  
  age = 1;
  strcpy(childname, "Koi");
  printf("The youngest, %s, is %d. \n", childname, age);
  
  return 0;
}
