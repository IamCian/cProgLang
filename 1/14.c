/*
	Exercise 1-14.  Write a program to print a histogram of the frequencies of
	different characters in its input.
	===
*/

#include <stdio.h>

#define NCHAR 256	/* number of characters */

int main () {
	int c, i, count[NCHAR];		/* character, index, character count */
	
	for (i=0; i<NCHAR; i++)	count[i]=0;		/* initialise count to zero */
	
	while ((c=getchar())!=EOF) 				/* for each character */
		if (c!=' ' && c!='\t' && c!='\n')	/* except spaces */
			count[c]++;						/* increment respective count */

	for (i=0; i<NCHAR; i++)		/* for each count */
		if (count[i]) {			/* if there were any */
			printf("%c|", i);	/* print label */
			while (count[i]--)
				putchar('-');	/* bar */
			putchar('\n');		/* newline */
		}
}
