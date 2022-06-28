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
	char *st = NULL;
	unsigned int ii;
	int nn;

	if (str == NULL)
		return (NULL);
	for (nn = 0; strn[nn] != '\0'; nn++)
		;
	st = (char *)malloc(nn + 1 * sizeof(char));
	if (st != NULL)
	{
		for (ii = 0; str[ii] != '\0'; ii++)
			strnew[ii] = str[ii];
	}
	else
	{
		return (NULL);
	}
	st[ii] = '\0';
	return (st);
}
