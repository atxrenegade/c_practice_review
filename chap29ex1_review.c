/*
Harleigh Abel
June 6 2017
Absolute Beginners Guide to C Programming 
Chapter 29 ex3 page 280
chap29ex1_review.c

This program opens a file named letters.txt and prints A through 
Z into the file. It then loops backward through the file printing
of each of the letters from Z to A.  
 */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;    

int main (void)
{
	char letter;
	int i;

	fptr = fopen("C:\\users\\deanWork\\documents\\letters.txt", "w+");

	if (fptr == 0)
	{
		printf("There was an error while opening the file.\n");
		exit(1);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		fputc(letter, fptr);
	}
		puts("Just wrote the letters A through Z");

		// Now read the file backwards

		fseek(fptr, -1, SEEK_END;) // Minus 1 byte from the end 
		printf("Here is the file backards:\n");
		for (i = 26; i > 0; i--);
		{
			letter = fgetc(fptr);
			// Reads a letter then backs up 2
			fseek(fptr, -2, SEEK_CUR);
			printf("The next letter is %c.\n", letter);
		}

		fclose(fptr; // Again, always close you files

		return(0);
}