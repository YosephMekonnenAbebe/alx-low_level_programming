#include "main.h"
/**
 * times_table - starting point
 * rn = row,
 * Return: Table
 */
void times_table(void)
{
	int k, i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	k = i*j;
	_putchar(k + '0');
	if (k <10)
	{
	if (j !=9)
	{
	_putchar(',');
	}
	else
	{
	_putchar(' ');
	_putchar(' ');
	}
	}
	else
	{
	if (j !=9)
	{
	_putchar(','); 
	}
	else
	{
	_putchar(' ');
	}
	}
	}
	_putchar('\n');
	}
}

