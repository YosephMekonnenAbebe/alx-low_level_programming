#include "main.h"
/**
 * print_alphabet_x10  -starting point
 *
 * Description: 10xalphabet
 * Return :0x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, b;

	b = 0;

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
