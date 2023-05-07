/*
	Exercise 1-16. Revise the main routine of the longest-line program so it will
	correctly print the length of arbitrarily long input lines, and as much as
	possible of the text.
	===
*/

#include <stdio.h>

#define MAX 1000	/* max line length */

/* read line into string, l, of length size, s, return length */
int readline(char l[], int s) {
	int c, i;
	for (i=0; i<s-1 && (c=getchar())!=EOF && c!='\n'; i++)
		l[i]=c;	
	if (c=='\n') l[i++]=c;
	l[i]='\0';
	return i;
}

/* copy string1, s1, to string2, s2 */
void copy (char s1[], char s2[]) {
	int i=0;
	while ((s2[i]=s1[i])!='\0') i++;
}

int main () {
	int l, m, c;				/* length, max, character */
	char line[MAX], lngst[MAX];	/* line, longest */

	m=0;
	while (l=readline(line, MAX)) {		/* for each line */
		if (line[l-1]!='\n')			/* if line exceeds buffer */
			while ((c=getchar())!=EOF && c!='\n')
				l++;					/* count remaining characters */
		if (l>m) {						/* if longest */
			m=l; copy(line, lngst);		/* record it */
		}
	}
	if (m)							/* if lines were processed, print longest */
		printf("%d: %s\n", m-1, lngst);	
}
