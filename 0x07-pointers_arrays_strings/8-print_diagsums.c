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
	int x, y, m;

	int t1 = 0;
	int t2 = 0;

	for (x = 0; x < size; x++)
	{
		m = (x * size) + x;
		t1 += *(a + m);
	}
	for (y = 0; y < size; y++)
	{
		m = (y * size) + (size - 1 - y);
		t2 += *(a + m);
	}
	printf("%d, %d\n", t1, t2);
}
