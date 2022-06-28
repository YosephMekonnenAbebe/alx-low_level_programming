#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - starting point
 * @s1: input1
 * @s2: input2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *strn = NULL;
	unsigned int j;
	int inp1;
	int inp2;
	int counter;

	counter = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (inp1 = 0; s1[inp1] != '\0'; inp1++)
		;
	for (inp2 = 0; s2[inp2] != '\0'; inp2++)
		;
	strn = (char *)malloc((inp1 + inp2 + 1) * sizeof(char));
if (strn == NULL)
{
return (NULL);
}
for (j = 0; s1[j] != '\0'; j++)
strn[j] = s1[j];
for (; s2[counter] != '\0'; j++)
{
	strn[j] = s2[counter];
	counter;
}
return (strn);
}

