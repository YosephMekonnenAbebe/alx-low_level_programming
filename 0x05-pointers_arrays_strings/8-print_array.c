#include "main.h"

/**
 * print_array -staarting point
 * Description: printing n arays
 * @a: firt input
 * @n: second input
 * Return: Aray
 */

void print_array(int *a, int n)
{
	int j = 0;

	while (j < (n - 1))
	{
		printf("%d, ", a[j]);
		if (j == (n - 1))
			printf("%d", a[n - 1]);
		j++;
	}
	printf("\n");
}
