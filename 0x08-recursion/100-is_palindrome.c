#include "main.h"
/**
 * _strlen - return
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * _palindrome - checks
 * @l: left
 * @r: righ
 * @p: pos
 *
 * Return: 1
 */
int _palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (_palindrome(l + 1, r - 1, p));
}
/**
 * is_palindrome - states
 * @s: strin
 *
 * Return: 1
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (_palindrome(0, i, s));
}
