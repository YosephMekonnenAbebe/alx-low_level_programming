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

	while (al <= 'z')
	{
		putchar(al);
		printf("\n");
		++al;
	}

	return (0);
}


