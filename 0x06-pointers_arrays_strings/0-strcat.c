#include "main.h"
#include <stdio.h>

/**
 * _strcat -starting point
 * Description: string concatinate
 * @dest: input1
 * @src
 *Return: succes dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
















