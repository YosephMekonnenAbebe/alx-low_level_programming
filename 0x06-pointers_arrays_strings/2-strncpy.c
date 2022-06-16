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
	int j, i;
       
	i = 0;
	j = 0;

	while (j < n)
	{
		if(src[j] != '\0')
		{
			dest[j] = src[j];
			i++;
		}
		j++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
