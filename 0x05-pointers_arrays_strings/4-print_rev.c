#include "main.h"

/**
 * print_rev -the starting point
 * Description: reverse string
 * @s: the input argument
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	j = count - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}

