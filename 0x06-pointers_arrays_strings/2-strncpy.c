#include "main.h"

/**
 * _strncpy -start point
 * @dest: input 1
 * @src: input 2
 * @n: point of coppy
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = ii;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
