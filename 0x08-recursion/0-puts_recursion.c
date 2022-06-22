#include "main.h"
/**
 * _puts_recursion - Starting point
 * @s: Pointer string input
 *
 * Return: Void so nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
	return;
}
