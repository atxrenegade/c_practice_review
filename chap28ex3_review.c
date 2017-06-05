/*
Harleigh Abel
June 4 2017
Absolute Beginners Guide to C Programming 
Chapter 28 ex3 page 274
chap28ex3_review.c

This program opens the exisitng book info file from the first example 
and adds a line to the end. */

// First include the file with the structure definition

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main (void)
{

	fptr= fopen("C:\\users\\DeanWork\\Documents\\Bookinfo.txt", "a");

	if (fptr == 0)
	{
		pritnf("\nError opening file.\n");
		exit (1);
	}

	// Adds the line at the end 
	fprintf(fptr, "\nMore books to come!\n")

	fclose(fptr); //Always close your files
	return(0);
}