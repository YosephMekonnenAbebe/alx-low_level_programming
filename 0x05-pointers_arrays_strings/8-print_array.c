#include "main.h"
#include <stdio.h>

/**
 * print_array -staarting point
 * Description: printing n arays
 * @a: firt input
 * @n: second input
 * Return: Aray
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
		if (j == (n - 1))
			printf("%d", a[n - 1]);
		j++;
	}
	printf("\n");
}
