/*
	Exercise 1-13. Write a program to print a histogram of the lengths of words in
	its input. It is easy to draw the histogram with the bars horizontal; a
	vertical orientation is more challenging.
	===
*/

#include <stdio.h>

#define BUF 50	/* max word length */

int main () {
	int c, l, i, m, lngst;	/* character, length, index, most, longest */
	int count[BUF];		/* length count */
	
	/* initialise to zero */
	for (i=0; i<BUF; i++) count[i]=0;
	lngst=m=l=0;

	while ((c=getchar())!=EOF) {
		if (c==' ' || c=='\t' || c=='\n') {	/* space */
			if (l) {	/* if word just ended */
				if (l>lngst) lngst=l;	/* update longest */
				count[l-1]++;			/* add length to count */
				if (count[l-1]>m) m=count[l-1];	/* update most */
				l=0;					/* reset length count */
			}
		} else l++;	/* count word length */
	}
	while (m--) {	/* for each line */
		for (i=0; i<=lngst-1; i++) {	/* for each count */
			if (count[i]>=m+1)	printf(" | ");
			else				printf("   ");
		} putchar('\n');
	}
	for (i=1; i<=lngst; i++)	/* labels */
		printf("%2.d ", i);
	putchar('\n');

}
