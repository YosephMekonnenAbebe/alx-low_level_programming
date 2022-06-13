#include "main.h"
#include <stdio.h>

/**
 * rev_string -starting point
 * Description reversing
 * @s: input
 * Return: string
 */
void rev_string(char *s)
{
	char r = s[0];
	int count = 0;
	int j = 0;

	while (s[count] != '\0')
		count++;

	while (j < count)
	{
		count--;
		r = s[j];
		s[j] = s[count];
		s[count] = r;
	}
}
