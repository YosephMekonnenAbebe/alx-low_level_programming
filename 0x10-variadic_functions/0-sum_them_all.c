#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums
 * _start - start of a fun2
 * @n: number of parameters
 * @...: Other
 * Return: All
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

}
