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
char *strn;
int j;
int m;

if (str == NULL)
return (NULL);
for (m = 0; m <= *str; m++)
{
}

m += 1;
strn = malloc(sizeof(char) * m);

for (j = 0; j < m; j++)
strn[j] = str[j];

if (strn == NULL)
return (NULL);
return (strn);
}
