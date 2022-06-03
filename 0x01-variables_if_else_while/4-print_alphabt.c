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
	char al = 'a', e, q;

	e = 'e';
	q = 'q';

	while (al <= 'z')
	{
		if (al != e && al != q)
			putchar(al);
		++al;
	}
	putchar('\n');

	return (0);
}
