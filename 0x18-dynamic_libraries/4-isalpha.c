#include "main.h"
/**
 * _isalpha -starting point
 * @c: a letter input
 * Return: 1 if lower upper case, 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	return (1);
	else
	return (0);
}
