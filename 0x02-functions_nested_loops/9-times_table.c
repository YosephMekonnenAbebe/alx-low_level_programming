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
		k = j * i;
	       if (k < 10)
	       {
		_putchar((k % 10) + '0');  
	       }
	       else
	       {	       
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	       }
		if (k < 9)
		{
			if ((j !=9) && (i *(j+1) <= 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		else if ((k > 9) || (i *(j+1) >= 10))
		{
			if (j !=9)
			{
				 _putchar(',');
				 _putchar(' ');
			}
		}
	}
	_putchar('\n');
	}
}
