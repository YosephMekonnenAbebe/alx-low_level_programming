#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Two digit number
 * Return: 0 means succes
 */
int main(void)
{
	int a = 0;

	int c;
	int d;

	while (a <= 99)
	{
		c = ((a / 10) + '0');
		d = ((a % 10) + '0');
		if (c < d)
		{
			putchar(c);
			putchar(d);
			if (a != 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
		++a;
	}
	putchar('\n');

	return (0);
}
