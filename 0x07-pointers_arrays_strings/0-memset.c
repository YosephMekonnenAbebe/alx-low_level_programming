#include "main.h"
/**
 * _memset -starting of a function
 * @s: pointer
 * @n: intiger input
 * @b: character input
 *
 * Return: the area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}
}
return (s);
}
