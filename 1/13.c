/*
	Exercise 1-13. Write a program to print a histogram of the lengths of words in
	its input. It is easy to draw the histogram with the bars horizontal; a
	vertical orientation is more challenging.
	===
*/

#include <stdio.h>

#define BUF 50	/* max word length */

int main () {
	int c, l, i, lngst;	/* character, length, index, longest */
	int count[BUF];		/* length count */
	
	/* initialise to zero */
	for (i=0; i<BUF; i++) count[i]=0;
	lngst=l=0;

	while ((c=getchar())!=EOF) {
		if (c==' ' || c=='\t' || c=='\n') {	/* space */
			if (l) {	/* if word just ended */
				if (l>lngst) lngst=l;	/* update longest */
				count[l-1]++;	/* add length to count */
				l=0;			/* reset length count */
			}
		} else l++;	/* count word length */
	}
	while (lngst--) {	/* for each count */
		printf("%2.d|", lngst+1);			/* length */
		while (count[lngst]--) putchar('#');/* count (bar) */
		putchar('\n');						/* newline */
	}	
}
