#include "main.h"
/**
 * print_last_digit -starting pt
 * @a: input arg
 * Return: modulo of a number
 */
int print_last_digit(int a)
{ 
	int mod;

	mod = (a % 10);
	
	if (mod < 0)
	{
	mod = (-mod);
	}
	_putchar(mod + '0');
	return (mod);

	
}
