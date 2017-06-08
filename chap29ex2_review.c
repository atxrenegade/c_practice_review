/*
Harleigh Abel
June 6 2017
Absolute Beginners Guide to C Programming 
Chapter 29 ex2 page 282
chap29ex2_review.c

This program opens the file created in the first program
of the chapter and changes one of the letters to an *.
It then print the new list with the altered list of letters.*/  
 

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;    

int main (void)
{
	char letter;
	int i;

	fptr= fopen("C:\\users\\deanWork\\documents\\letters.txt", "r+");

	if(fptr == 0)
	{
		printf("There was an error while opening the file.\n");
		exit(1);
	}

	printf("Which # letter would you like to change (1-26)? ");
	scanf(" %d", &i);

	// Seeks that position from the beginning of the file 
	fseek(fptr, (i - 1), SEEK_SET); // Subtract 1 from the position
									// because the array starts at 0
	// Write an * over the letter in that position
	fputc('*', fptr);

	// Now jump back to the beginning and print it out
	fseek(fptr, O, SEEK_SET);
	printf("Here is the file now:\n");
	for (i = 0; i < 26; i++)
	{
		letter = fgetc(fptr);
		printf("The next letter is %c.\n", letter);
	}

	fclose(fptr); // Again, always close your files
	return(0);
	
}

