#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy  -starting point
 * @dest: input 1
 * @src: input 2
 * Return: The aray
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != '\0')
	{

		dest[k] = src[k];
		k++;
	}
	return (dest);
}
