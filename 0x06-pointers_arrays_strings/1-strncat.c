#include "main.h"
/**
 * _strncat -starting point
 * @dest: input 1
 * @src: input 2
 * @n: number for concatinate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	for(j = 0; (src[j] != '\0' && j < n); j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

