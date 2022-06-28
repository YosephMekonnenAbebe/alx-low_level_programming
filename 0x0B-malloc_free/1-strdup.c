#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Starting point
 * @str: input
 *
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *strn = NULL;
	int j;
	int m;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;
	strn = (char *)malloc(m + 1 * sizeof(char));
	if (strn != NULL)
	{
		for (j = 0; str[j] != '\0'; j++)
			strn[j] = str[j]
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
strn[j] = '\0';
return (strn);
