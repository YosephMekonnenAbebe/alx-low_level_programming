#include "main.h"
#include <stdio.h>

/**
 * swap_int - function used for swaping
 * @a: input one
 * @b: input two
 * Return: swaped
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
