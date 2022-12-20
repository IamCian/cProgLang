/*
	Exercise 1-12. Write a program that prints its input one word per line.
	===
*/

#include <stdio.h>

int main () {
	int c, w;

	w=0;	/* word: 0=space, 1=word */
	while ((c=getchar())!=EOF) {
		if (c==' ' || c=='\t' || c=='\n')
			w=0;			/* end word */
		else if (!w) {		/* start word */
			w=1;			
			putchar('\n');
		}
		if (w) putchar(c);	/* print word */				
	}
	putchar('\n');
}
