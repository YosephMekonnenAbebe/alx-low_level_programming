#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Hexadecimal
 * Return: 0 means succes
 */
int main(void)
{
	int a;

	char al = 'a';

	while (a <= 9)
	{
		putchar((a % 10) + '0');
		a++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
