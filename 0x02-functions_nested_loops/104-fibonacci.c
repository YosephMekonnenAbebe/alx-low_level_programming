#include <stdio.h>
/**
 * main -starting point
 * description: fibonaci
 * Return: 0 means succes
 */
int main (void)
{
	int num;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long ff11, ff12, ff21, ff22;
	unsigned long ff1, ff2;

	for (num = 0; num < 92; num++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;
	}
	ff11 = f1 / 10000000000;
	ff21 = f2 / 10000000000;
	ff12 = f1 % 10000000000;
	ff22 = f2 % 10000000000;

	for (num = 93; num < 99; num++)
	{
		ff1 = ff11 + ff21;
		ff2 = ff12 + ff22;
		if (ff12 + ff22 > 9999999999)
		{
			ff1 = ff1 + 1;
			ff2 = ff2 % 10000000000;
		}
	
	printf("%lu%lu", ff1, ff2);
	if (num != 98)
	{
		printf(", ");
	}

	ff11 = ff21;
	ff12 = ff22;
	ff21 = ff1;
	ff22 = ff2;
	}
	printf("\n");

	return (0);
}
