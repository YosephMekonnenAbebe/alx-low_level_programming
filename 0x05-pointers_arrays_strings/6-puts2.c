#include "main.h"

/**
 * puts2 -Starting point
 * Description: display
 * @str: input
 * Return: display
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(str[j]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}

