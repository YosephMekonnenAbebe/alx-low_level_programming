#include "main.h"

/**
 * puts_half -starting point
 * Description: odd print
 * @str: input
 * Return: String odd
 */
void puts_half(char *str)
{
	int j, n, m;

	m = 0;

	for (j = 0; str[j] != '\0'; j++)
		m++;
	n = (m / 2);

	if ((m % 2) == 1)
		n = ((m + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
