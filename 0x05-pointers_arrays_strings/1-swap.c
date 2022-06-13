#include "main.h"
#include <stdio.h>

/**
 * swap_int - function used for swaping
 * @a: input one
 * @b: input two
 * Return: intigers value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
