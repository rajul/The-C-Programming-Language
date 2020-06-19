#include <stdio.h>

main()
{
	/*
		The program will compile with a warning that '\i' is an unknown escape
		sequence.

		However, the program will still run and print "hello, worldi"... without
		ending in a newline
	*/
	printf("hello, world\i");
}
