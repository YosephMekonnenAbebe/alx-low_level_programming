#include "main.h"
/**
 * main -starting point
 *
 * Return: 0 Meas succes
 */
void print_alphabet_x10(void)
{
	int a, b;
	
	b=0;
	while (b < 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	b++;
	_putchar('\n');
	}
}
