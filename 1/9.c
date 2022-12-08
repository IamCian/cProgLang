/*
	Exercise 1-9. Write a program to copy its input to its output, replacing each
	string of one or more blanks by a single blank.
	===
*/

#include <stdio.h>

int main () {
	int c, w;

	w=0;	/* word: 0=space, 1=word */
	while ((c=getchar())!=EOF) {
		if (c!=' ' && !w) w=1; 	/* word begins */
		if (w) putchar(c);		/* print character */
		if (c==' ' && w) w=0; 	/* word ends */
	}
}
