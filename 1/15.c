/*
	Exercise 1-15. Rewrite the temperature conversion program of Section 1.2
	to use a function for conversion. 
	===
*/

#include <stdio.h>

/* fahrenheit to celsius */ 
float f2c (int f) {
	return (5.0/9.0)*(f-32.0);
}

int main () {
	int f;	/* fahrenheit */
	for (f=0; f<=300; f+=20)
		printf("%3d %6.1f\n", f, f2c(f));
}
