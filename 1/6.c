/*
	Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
	===

	Each character typed returned a 1, until I typed Ctrl+d, to signify the end of
	input, which yielded a 0. Therefor, getchar()!=EOF is 1 with all characters and
	0 a the end of input/file. Thus, it always equals 0 or 1.
*/

#include <stdio.h>

int main () {
	int c;
	while ((c=getchar())!=EOF) {
		printf("%d ", c!=EOF);	/* while input */
	}	printf("%d ", c!=EOF);	/* on input end */
}
