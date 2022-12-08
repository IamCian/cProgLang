/*
	Exercise 1-10. Write a program to copy its input to its output, replacing each
	tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and
	backspaces visible in an unambiguous way.
	===
*/

#include <stdio.h>

int main () {
	int c;

	while ((c=getchar())!=EOF) {
		if (c=='\t') { printf("\\t");	continue; }	/* tab */
		if (c=='\b') { printf("\\b");	continue; }	/* backspace */
		if (c=='\\') { printf("\\\\");	continue; }	/* backslash */
		putchar(c);	/* other */
	}
}
