#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates
 * @ac: input
 * @av: input2
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, e = 0;
char *ptr = NULL;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
e++
}
}

ptr = (char *)malloc(e + ac + 1 * sizeof(char));
if (ptr == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
ptr[k] = av[i][j];
k++;
}
ptr[k] = '\n';
k++;
}
ptr[k] = '\0';
return (ptr);
}
