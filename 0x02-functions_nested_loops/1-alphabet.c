#include "main.h"
/**
 * print_alphabet -Starting point
 *
 * Description : character display
 * Return: 0 means succes
 */
void print_alphabet(void)
{
	char al = 'a';
	while (al <= 'z')
	{
	_putchar(al);
	++al;
	}
	_putchar('\n');
}
