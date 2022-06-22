#include "main.h"
/**
 * _pow_recursion - starting point
 * @x: base value
 * @y: power value
 * Return: succes
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
