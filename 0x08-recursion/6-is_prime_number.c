#include "main.h"
#include <stdio.h>
int primenum(int n, int num);
/**
 * is_prime_number - Starting point
 * @n: input
 *
 * Return: succed
 */
int is_prime_number(int n)
{
	return (primenum(n, 1));
}
/**
 * primenum - start poinyt
 * @n: input
 * @num: input two
 *
 * Return: 1 for succes
 */
int primenum(int n, int num)
{
if (n <= 1)
return (0);
if (n % num == 0 && num > 1)
return (0);
if ((n / num) < num)
return (1);
return (primenum(n, num + 1));
}
