#include <stdio.h>

/**
 * main - Find and print largest prime factor
 *
 * Return: 0 for succes
 */
int main(void)
{
	long int f, n, lf;

	n = 612852475143;
	f = 3;
	lf = 0;
	while (n != 1)
	{
		if (n % f == 0)
		{
			n = n / f;
			if (f > lf)
				lf = f;
		}
		else
			f++;
	}
	printf("%ld\n", lf);
	return (0);
}
