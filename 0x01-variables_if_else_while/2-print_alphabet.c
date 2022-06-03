#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main -starting point
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
		al++;
	}

	return (0);
}


