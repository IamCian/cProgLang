/*
	Exercise 1-8. Write a program to count blanks, tabs, and newlines.
	===
*/

#include <stdio.h>

int main () {
	int c, nl, bl, tb;

	nl=0;bl=0;tb=0;	/* newlines, blanks, tabs count */
	while ((c=getchar())!=EOF) {
		if (c=='\n')	nl++;
		if (c==' ')		bl++;
		if (c=='\t')	tb++;
	}

	printf("\nnewlines: %d\nblanks: %d\ntabs: %d\ntotal: %d\n", nl, bl, tb, nl+bl+tb);
}
