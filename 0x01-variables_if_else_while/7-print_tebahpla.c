#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: character desplay
 * Return: 0 means succes
 */
int main(void)
{
	char al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		--al;
	}
	putchar('\n');

	return (0);
}
