#include "main.h"
#include <stdio.h>

/**
 * int _strlen -starting of the string
 * Description: Finding length of a string
 * @s: input string
 * Return:length
 */
int _strlen(char *s)
{
	int j = 1, sum = 0;
	char c = s[0];

	if (c != '\0')
	{
		sum++;
		c = s[j++];
	}
	return (sum);
}
