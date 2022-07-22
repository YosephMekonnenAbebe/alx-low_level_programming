#include "main.h"
/**
 * print_binary - Prints
 * @n: The num
 */
void print_binary(unsigned long int n)
{
	unsigned long int  numnum = n;
	if (numnum >> 1)
		print_binary(numnum >> 1);

	_putchar((numnum & 1) + '0');
}
