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
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{

		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
