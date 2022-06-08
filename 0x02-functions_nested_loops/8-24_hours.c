#include "main.h"
/**
 * jack_bauer -starting pt
 * a hpour, b minute
 * /a alowed for the second term
 *
 * Return: what happens in 24 hour
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	
	while (a < 24)
	{
	while (b < 60)
	{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(':');
	_putchar((b / 10) + '0');
	_putchar((b % 10) + '0');	
	_putchar('\n');
	++b;
	}
	++a;	
	}
}
