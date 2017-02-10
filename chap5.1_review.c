// Harleigh Abel
// Feb. 10, 2017

// C Programming Absolute Beginner's Guide pg 46
// chap5_ex1 (my version)

/*  This a sample program that lists three children and their lunches, and snacks and the cost to buy these items*/

#include <stdio.h>

int main (void)
{
// set variables for childrens names, price for each food item,
// quantitiy of each food item, and lunch cost total

char * first_name;
char* middle_name;

int no_of_juice;
int no_of_sandwhiches;
int no_of_apples;
int no_of_pudding;

float juice_boxes = .39;
float blt_sandwhich = 2.69;
float apple = 1.12;
float jello_pudding_cup = 2.29;
float lunch_total;

// The variable values for the first child, name and quantities
first_name = "Jackson";
middle_name = "Kale";

no_of_juice = 2;
no_of_sandwhiches = 3;
no_of_apples = 0;
no_of_pudding = 1;

// outputs quanitties for first child to screen
printf("%s %s needs %d BLT sandwhich(es), %d juice box(es), %d apple(s), and %d pudding in his/her lunch.", first_name, middle_name, no_of_sandwhiches,  no_of_juice, no_of_apples, no_of_pudding);

// calculates total cost of lunch for first child
lunch_total = (no_of_juice *  juice_boxes) + (no_of_sandwhiches * blt_sandwhich) + (no_of_apples * apple) + (no_of_pudding * jello_pudding_cup);

// outputs total cost for first child to screen
printf(" The total cost of this lunch is $%.2f!\n\n", lunch_total);


// The variable values for the first child, name and quantities
first_name = "Grey";
middle_name = "Sky";

no_of_juice = 1;
no_of_sandwhiches = 1;
no_of_apples = 2;
no_of_pudding = 1;

// outputs quanitties for second child to screen
printf("%s %s needs %d BLT sandwhich(es), %d juice box(es), %d apple(s), and %d pudding in his/her lunch.", first_name, middle_name, no_of_sandwhiches,  no_of_juice, no_of_apples, no_of_pudding);

// calculates total cost of lunch for second child
lunch_total = (no_of_juice *  juice_boxes) + (no_of_sandwhiches * blt_sandwhich) + (no_of_apples * apple) + (no_of_pudding * jello_pudding_cup);

// outputs total cost for second child to screen
printf(" The total cost of this lunch is $%.2f!\n\n", lunch_total);

// The variable values for the third child, name and quantities
first_name = "Kaylen";
middle_name = "";

no_of_juice = 2;
no_of_sandwhiches = 2;
no_of_apples = 1;
no_of_pudding = 1;

// outputs quanitties for third child to screen
printf("%s %s needs %d BLT sandwhich(es), %d juice box(es), %d apple(s), and %d pudding in his/her lunch.", first_name, middle_name, no_of_sandwhiches,  no_of_juice, no_of_apples, no_of_pudding);

// calculates total cost of lunch for third child
lunch_total = (no_of_juice *  juice_boxes) + (no_of_sandwhiches * blt_sandwhich) + (no_of_apples * apple) + (no_of_pudding * jello_pudding_cup);

// outputs total cost for third child to screen
printf(" The total cost of this lunch is $%.2f!\n\n", lunch_total);

return 0;
}
