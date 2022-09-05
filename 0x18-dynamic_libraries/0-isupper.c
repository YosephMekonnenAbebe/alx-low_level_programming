#include "main.h"

/**
 * _isupper -starting point
 * @c: The integer
 * Return: 1 for upper case, 0 for lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
