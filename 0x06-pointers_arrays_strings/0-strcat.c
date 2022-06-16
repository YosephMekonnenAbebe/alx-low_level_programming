#include "main.h"
/**
 * _strcat -starting point
 * Description: string concatinate
 * @dest: input1
 * @src
 *
 *Return: succes dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	
	i = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	
	return (dest);
}
















