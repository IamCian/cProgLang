/*
	Exercise 1-4. Write a program to print the corresponding Celcius to Fahrenheit
	table.
	===

	F = C(9/5)+32 
*/

#include <stdio.h>

int main () {
	float fahr, cels;

	int lower	= 0;
	int upper	= 300;
	int step	= 20;

	puts("Celsius to Fahrenheit");
	puts(" C     F");
	
	cels = lower;
	while (cels <= upper) {
		fahr = (cels * (9.0/5.0)) + 32;
		printf("%3.0f %6.1f\n", cels, fahr);
		cels += step;
	}
}
