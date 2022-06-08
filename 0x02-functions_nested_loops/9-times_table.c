#include "main.h"
/**
 * times_table - starting point
 * rn = row,
 * Return: Table
 */
void times_table(void)
{
	int rn, cn, d;
	
	for (rn = 0; rn <= 9; rn++)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	for (cn = 1; cn <= 9; cn++)
	{
	d = (rn * cn);
	if ((d / 10) > 0)
	{
	_putchar((d / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
	if (cn < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}

