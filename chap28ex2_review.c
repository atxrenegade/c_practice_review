/*
Harleigh Abel
June 3, 2017
Absolute Beginners Guide to C Programming 
Chapter 28 ex2 page 273
chap28ex2_review.c

This program takes the book info program from the first example 
and outputs it to the screen. */

// First include the file with the structure definition

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main (void)
{
	char fileLine[100]; // Will hold each line of input
	fptr= fopen("C:\\users\\DeanWork\\Documents\\Bookinfo.txt", "r");

	if (fptr != 0)
	{
		while(!feof(fptr))
		{
			fgets(fileLine, 100, fptr);
			if (!feof(fptr))
		
			{
				puts(fileLine);
			}
		}	
	}	
else 
	{
		pritnf("\nError opening file.\n");
	}
	fclose(fptr); //Always close your files
	return(0);
}