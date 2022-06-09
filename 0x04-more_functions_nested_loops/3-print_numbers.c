#include "main.h"

/**
 * print_numbers -starting point
 * Description: prints a number
 * Return: void
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
