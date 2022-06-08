#include "main.h"
/**
 * times_table - starting point
 * rn = row,
 * Return: Table
 */
void times_table(void)
{
	int k, i, j;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');

	for (i = 0; i <= 9; i++)
	{
		_putchar(',');
		_putchar(' ');
		j = k * i;

		if (j <= 9)
			_putchar(' ');
		else
		{
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
