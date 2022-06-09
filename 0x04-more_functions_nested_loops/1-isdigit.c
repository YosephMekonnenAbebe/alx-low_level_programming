#include "main.h"

/**
 * _isdigit -starting point of the fun
 * @c: the input
 * Return: 1 for num , o for other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '10')
		return (1);
	
	return (0);
}
