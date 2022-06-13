#include "main.h"

/**
 * puts2 -Starting point
 * Description: display
 * @str: input
 * Return: display
 */
void puts2(char *str)
{
	int j = 0;
	while (str[j] != '\0')
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
		{
			continue;
		}
		j++;
	}
	_putchar('\n');
}

