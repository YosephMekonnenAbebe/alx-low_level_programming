#include "main.h"

/**
 * main - check the code
 * _strncpy -start point
 * @dest: input 1
 * @src: input 2
 * @n: point of coppy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, i = 0;

	while (j < n)
	{
		if(dest[j] != '\0')
		{
			dest[j] = src[j];
		}
		j++;
	}
	return (dest);
}
