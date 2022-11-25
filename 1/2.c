/*
	Exercise 1-2. Experiment to find out what happens when printf's argument string
	contains \c, where c is some character not listed above.
	===

	When run together, no output is given. GCC gives many warnings, mostly stating
	that the escape sequence is unknown. When I compile with only sequences that do
	not draw warnings, I mostly get nothing. I believe further characters are
	required in most sequences to make them meaningful.
*/

#include <stdio.h>

int main () {
	printf("a: \a\n");
	printf("b: \b\n");
	printf("c: \c\n");
	printf("d: \d\n");
	printf("e: \e\n");
	printf("f: \f\n");
	printf("g: \g\n");
	printf("h: \h\n");
	printf("i: \i\n");
	printf("j: \j\n");
	printf("k: \k\n");
	printf("l: \l\n");
	printf("m: \m\n");
	printf("n: \n\n");
	printf("o: \o\n");
	printf("p: \p\n");
	printf("q: \q\n");
	printf("r: \r\n");
	printf("s: \s\n");
	printf("t: \t\n");
	printf("u: \u\n");
	printf("v: \v\n");
	printf("w: \w\n");
	printf("x: \x\n");
	printf("y: \y\n");
	printf("z: \z\n");
}
