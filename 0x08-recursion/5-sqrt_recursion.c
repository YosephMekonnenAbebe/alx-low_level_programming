#include "main.h"
int root(int n, int m);
/**
 * _sqrt_recursion - start point
 * @n: input
 * Return: succes
 */
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
/**
 * root -starting point
 * @n: input
 * @m: num
 * Return: root
 */
int root(int n, int m)
{
	int rt = m * m;
	
	if (rt > n)
		return (-1);
	if (rt == n)
		return (m);

	return (root(n, m + 1));
}
