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
	char al = 'a';
	char AL = 'A';

	while (al <= 'z')
	{
		putchar(al);
		++al;
	}
	while (AL <= 'Z')
	{
		putchar(AL);
		++AL;
	}
	putchar('\n');

	return (0);
}
