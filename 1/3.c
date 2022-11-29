/*
	Exercise 1-3. Modify the temperature conversion program to print a heading
	above the table.
	===
*/

#include <stdio.h>

int main () {
	float fahr, celsius;

	int lower	= 0;	/* lower limit of the temperature table */
	int upper	= 300;	/* upper limit */
	int step	= 20;	/* step size */

	puts("Fahrenheit to Celsius");
	puts(" F     C");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}
