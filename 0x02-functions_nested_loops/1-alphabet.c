#include "main.h"
/**
 * main -Starting point
 *
 * Description : character display
 * Return: 0 means succes
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z') 
	{
	_putchar(al);
	++al;
	}
	_putchar('\n');
	
	return (0);
}
