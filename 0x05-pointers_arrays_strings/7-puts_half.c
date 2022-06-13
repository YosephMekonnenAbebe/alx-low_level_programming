#include "main.h"

/**puts_half -starting point
 * Description: odd print
 * @str: input
 * Return: String odd
 */
void puts_half(char *str)
{
	int j = 0;
	int n, m;

	while (str[j] != '\0')
	{
		m++;
		j++;
	}

	n = (m / 2);

	if ((m % 2) == 1)
		n = ((m + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
