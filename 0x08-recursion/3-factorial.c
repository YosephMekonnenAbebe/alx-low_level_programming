#include "holberton.h"
/**
 * factorial - starting point
 * @n: input
 *
 * Return: intiger value
 */
int factorial(int n)
{
	if (n < 0 || n <= 1)
	{
		if (n < 0)
			return (-1);
		else
			return (1);
	}
	else
		return (n * factorial(n - 1));
}
