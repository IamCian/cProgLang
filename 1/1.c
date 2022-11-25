/*
	Exercise 1-1. Run the "hello, world" program on your system. Experiment with
	leaving out parts of the program, to see what error messages you get.
	===

	On executing the full program I got a warning from GCC, as I had not specified
	the return type of the "main" function, as the "-Wimplicit-int" option is
	enabled by default. As per the man page, this can be disabled by passing the
	argument "-Wno-implicit-int". I can also suppress the message by simply
	specifying the return type, stating "int" before "main". Trying both of these
	suppressed the message, though I left the code as in the text. Nonetheless, the
	code compiles and works either way.

	On removing the "include" statement, GCC warns me of an implicit declaration of
	"printf", noting that I must include "stdio.h" or define "printf". Though GCC,
	being intelligent, compiles nonetheless.

	On removing "main", compilation failed, and I got an error, as the compiler
	expected an identifier before the parenthesis.

	Removal of the curly braces results in simple failure.
*/

#include <stdio.h>

main () {
	printf("hello, world\n");
}
