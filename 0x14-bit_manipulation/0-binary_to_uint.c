#include "main.h"
/**
 * print_binary - Prints
 * @n: The num
 */
void print_binary(unsigned long int n)
{
	unsigned long int  numnumi = n;

	if (numnumi > 1)
		print_binary(numnumi >> 1);

	_putchar((numnumi & 1) + '0');
}
