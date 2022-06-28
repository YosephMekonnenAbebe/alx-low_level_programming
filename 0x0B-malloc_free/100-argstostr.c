#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates
 * @ac: input
 * @av: input2
 * Return: a pointer
 */

int i = 0, j = 0, k = 0, e = 0;
char *ptr = NULL;

if (ac == 0 || av == NULL)
	return (NULL);
	while (i < ac)
{
	while (av[i][j] != '\0')
	{
		e++;
		j++
	}
	i++;
}

ptr = (char *)malloc(e + ac + 1 * sizeof(char));
if (ptr == NULL)
	return (NULL);
while (i < ac)
{
while (av[i][j] != '\0')
{
ptr[k] = av[i][j];
k++
j++
}
ptr[k] = '\n';
k++;
i++;
}
ptr[k] = '\0';
return (ptr);
}
