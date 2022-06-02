#include <stdio.h>

/**
 *
 *  main -the starting point of the program
 *
 *  Description: printing without fprint and puts
 *
 *  Return: prints 1 as ordered
 *
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 59);
	return (1);
}
