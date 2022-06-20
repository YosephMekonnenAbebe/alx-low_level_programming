#include "main.h"
/**
 * _strchr - locates a character
 * @s: the memor
 * @c: constan
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
		if (s[num] == c)
			return (&s[num]);
	return ('\0');
}
