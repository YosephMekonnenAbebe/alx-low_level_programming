#include "main.h"
/**
 * _strstr - start
 * @haystack: string1
 * @needle: string2
 *
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (needle[y] != haystack[x + y])
			{
				break;
			}
		}
		if (needle[y] == '\0')
		{
			return (&haystack[x]);
		}
	}
	return ('\0');
}
