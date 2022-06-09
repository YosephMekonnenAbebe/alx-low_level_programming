#include "main.h"
/**
 * largest_number -start point
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Description: not passing
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a >= b && a >= c)
	{
	largest = a;
	}
	if (b >= a && b >= c)
	{
	largest = b;
	}
	if (c >= a && c >= b)
	{
	largest = c;
	}
	
	return (largest);
}
