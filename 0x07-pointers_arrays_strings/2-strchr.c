#include "main.h"
/**
 * _strchr - starting function
 * @s: Pointer1
 * @c: Character input
 *
 * Return: has a return
 */
char *_strchr(char *s, char c)
{
int num;

for (num = 0; s[num] != '\0'; num++)
{
	if (s[num] == c)
	{
return (&s[num]);
	}
}
return ('\0');
}
