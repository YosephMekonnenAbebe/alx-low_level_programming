#include "main.h"
int squareroot(int n, int m);
/**
 * _sqrt_recursion - start point
 * @n: input
 * Return: succes
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root(n, (n + 1) / 2));
}
/**
 * root -starting point
 * @n: input
 * @m: num
 * Return: root
 */
int root(int n, int m)
{	
	if (m < 1 || m * m == n)
		{
			if (m * m == n)
				return (m);
			else
				return (-1);
		}
		else
			return (root(n, m - 1));
}