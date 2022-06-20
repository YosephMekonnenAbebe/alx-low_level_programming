#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input1
 * @size: input
 * Return: Always
 */
void print_diagsums(int *a, int size)
{
	int x, m;

	int t1 = 0;
	int t2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		t1 = t1 + a[x];

	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
		t2 = t2 + a[m];
		printf("%d, %d\n", t1, t2);
}
