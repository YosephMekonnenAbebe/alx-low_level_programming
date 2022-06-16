#include "main.h" 

/**
 * main -Enter point
 *
 * Description: string concatinate
 * @dest: input1
 * @src
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';

for (j = 0; src[j] !='\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return(dest);
}

