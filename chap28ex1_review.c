/*
Harleigh Abel
June 2, 2017
Absolute Beginners Guide to C Programming 
Chapter 28 ex1 page 270
chap28ex1_review.c

This program takes the book info program from chapter 27 
and writes the info to a file named bookinfo.txt */

// First include the file with the structure definition
#include "bookinfo.h"
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int ctr;
	struct bookInfo books[3]; // Array of three stucture variables
	// Get the information from each bookfrom the user

	for (ctr = 0; ctr < 3; ctr++)
	{
		printf("What is the name of the book #%d?\n", (ctr+1));
		gets(books[ctr].title);
		puts("Who is the author? ");
		gets(books[ctr].author);
		puts("How much did the book cost? ");
		scanf (" $%f", &books[ctr].price);
		puts("How many pages in the book? ");
		scanf (" $%d", &books[ctr].pages);
		getchar90; // Clears last newline for the next loop
	}
	// Remember when typing your filename path to double up the
	// backslashes or C will think you are putting a conversation 
	// character	

	fptr = fopen("C:\\users\\Deanwork\\Documents\\Bookinfo.txt", w);

	// Test to ensure the file opened

	if (fptr == 0)
	{
		printf("Error--file could not be opened.\n");
		exit (1);
	}	
	// Print a header line and then loop through and print the info
	// to your file, but this time this printout will be in your file
	// and not on the screen.

	fprintf(fptr, "\n\nHere is the collection of books: \n");
	for (ctr = 0; ctr < 3; ctr++)
	{
		fprintf(fptr, "#%d: %s by %s", (ctr + 1), books[ctr].title,
			books[ctr].author);
		fprintf(fptr, "\nIt is %d pages and cost $%.2f", 
			books[ctr].pages, books[ctr].price); 
		f(fptr, "\n\n");
	}
	fclose(fptr); // Always close your files
	return(0);
}
