#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums
 * @n: number of parameters
 * @...: Other
 * Return: All
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (; i < n; i++)
		sum += va_arg(a, int);
	
	va_end(a);
	return (sum);
}
