#include "main.h"
/**
 * _strspn - gets the length
 * @s: pointer
 * @accept: pointer
 *
 * Return: the number
 */
unsigned int _strspn(char *s, char *accept)
{
	int leng = 0;
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
{
	while (accept[y] != '\0')
	{
		if (accept[y] == s[x])
		{
			leng++;
		}
		y++;
	}
	y = 0;
	x++;
	if (s[x] == ' ')
	{
		break;
	}
}
return (leng);
}
